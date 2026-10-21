#pragma readonly_strings on
#define TOBJECT_CPP
#define TOBJECT_OUT_OF_LINE_HELPERS

#include "pso/THeap.h"
#include "pso/TMainTask.h"
#include "pso/TObject.h"
#include "pso/misc/TKeyBoardControl_803DE9C4.h"
#include "pso/misc/TLobby_803382E4.h"
#include "pso/player/TObjPlayer_80083B38.h"
#include "pso/system/debug_print.h"
#include "pso/unk/text_80141550.h"
#include "pso/unk/text_803E2D70.h"

extern u32 model_render_flags;

u32 some_main_task_flag = 1;

// The original's static initializer sits before the weak copies of the
// TObject inlines this unit emits, which no compiler-generated __sinit
// reproduces, so the destructor chain and __sinit are spelled out.
struct DestructorChain {
    DestructorChain *next;
    void *destructor;
    void *object;
};
#pragma suppress_init_code on
#pragma no_static_dtors on
DestructorChain main_task_dtor_chain;
TMainTask main_task;
DestructorChain end_of_render_root_dtor_chain;
TObject end_of_render_root;
DestructorChain keyboard_task_object_dtor_chain;
TObject keyboard_task_object;
#pragma no_static_dtors reset
#pragma suppress_init_code reset

#define o(name) OBJECT_NAME(name)
OBJECT_NAMES
#undef o

#define o(var, name) const char *var##_name = #name;
TL_OBJECTS_IN_ADDRESS_ORDER
#undef o

#define o(var, name) TObject *var;
TL_OBJECTS_IN_ADDRESS_ORDER
#undef o

u32 update_flags;
u32 old_update_flags;
u32 render_flags;
u32 old_render_flags;
u32 render_shadow_flags;
u32 old_render_shadow_flags;

extern "C" {
void __sinit_TObject_cpp();
TMainTask *__ct__9TMainTaskFv(TMainTask *);
TObject *__ct__7TObjectFP7TObject(TObject *, TObject *);
void __dt__9TMainTaskFv(TMainTask *, s16);
void __dt__7TObjectFv(TObject *, s16);
void *__register_global_object(void *, void *, void *);
}
__declspec(section ".ctors") static void *const object_global_initializer = (void *)__sinit_TObject_cpp;

#pragma defer_codegen on
u32 TObject::get_flag_9() { return m_flags & BIT_9; }

void TObject::set_flag_9() { m_flags |= BIT_9; }

void TObject::clear_flag_9() { m_flags &= ~BIT_9; }

void TObject::allow_rendering_shadows() { m_flags &= ~DISALLOW_RENDER_SHADOWS; }

void __sinit_TObject_cpp() {
    __register_global_object(__ct__9TMainTaskFv(&main_task),
        (void *)__dt__9TMainTaskFv, &main_task_dtor_chain);
    __register_global_object(__ct__7TObjectFP7TObject(&end_of_render_root, NULL),
        (void *)__dt__7TObjectFv, &end_of_render_root_dtor_chain);
    __register_global_object(__ct__7TObjectFP7TObject(&keyboard_task_object, NULL),
        (void *)__dt__7TObjectFv, &keyboard_task_object_dtor_chain);
}

TObject::TObject(TObject *parent) {
    m_flags = NONE;
    m_up = parent;
    m_down = NULL;
    m_name = TObject_name;
    add_parent(parent, false);
}

TObject::~TObject() {
    if (!(m_flags & DISALLOW_DESTRUCTION)) {
        m_flags |= DISALLOW_DESTRUCTION;
        _delete_children();
        remove_parent();
    }
}

void TObject::delete_children() {
    _delete_children();
}

void TObject::queue_destruction_for_each_node() {
    FOREACH_NODE(TObject, this->m_down, child) {
        child->queue_destruction();
        child->queue_destruction_for_each_node();
    }
}

void TObject::run_tasks() {
    TObject *child = this->m_down;
    while (this->m_down != NULL && child != NULL) {
        TObject *node = child;
        child = child->m_next;
        if (node->m_flags & DISALLOW_UPDATE) {
            if (node->m_flags & QUEUE_DESTRUCTION && (node->m_flags &= ~QUEUE_DESTRUCTION, !(node->m_flags & DISALLOW_DESTRUCTION))) {
                delete node;
            } else {
                if (node->m_flags & CHILD_QUEUE_DESTRUCTION) {
                    node->delete_children();
                    node->run_task();
                    node->m_flags &= ~CHILD_QUEUE_DESTRUCTION;
                }

                if (node->m_flags & BIT_2) {
                    continue;
                }

                if (node->m_flags & BIT_3) {
                    continue;
                }
            }
        } else {
            node->run_task();
            node->run_tasks();
        }
    }
}

void TObject::render_nodes() {
    FOREACH_NODE(TObject, this->m_down, child) {
        if (!(child->m_flags & DISALLOW_RENDER)) {
            child->render();
            child->render_nodes();
        }
    }
}

void TObject::render_shadows_for_each_node() {
    FOREACH_NODE(TObject, this->m_down, child) {
        if (!(child->m_flags & DISALLOW_RENDER_SHADOWS)) {
            child->render_shadows();
            child->render_shadows_for_each_node();
        }
    }
}

void TObject::render_nodes2() {
    FOREACH_NODE(TObject, this->m_down, child) {
        if (child->m_flags & BIT_9) {
            child->render();
            child->clear_flag_9();
        }
        child->render_nodes2();
    }
}

void TObject::empty_func() {

}

void TObject::set_parent(TObject *parent) {
    remove_parent();
    add_parent(parent, true);
}

void TObject::run_task() {

}

void TObject::render() {

}

void TObject::render_shadows() {

}

void TObject::empty_func2() {

}

void TObject::log(const char *str) {
    debug_print(str);
}

int TObject::get_node_count() {
    TObject *child;
    int node_count = 0;
    FOREACH_NODE_NODECL(TObject, this->m_down, child) {
        node_count += child->get_node_count() + 1;
    }
    return node_count;
}

int TObject::all_parents_unqueued_for_destruction() {
    for (TObject *parent = this; parent != NULL; parent = parent->m_up) {
        if (parent->m_flags & QUEUE_DESTRUCTION) {
            return false;
        }
    }
    return true;
}

void *TObject::operator new(size_t size) {
    return obj_heap->heap_alloc(size);
}

void TObject::operator delete(void *ptr) {
    obj_heap->heap_free(ptr);
}

bool TObject::toggle_flag_9_if_flag_10_is_clear() {
    if (m_flags & BIT_10) {
        return false;
    }
    if ((s32)get_flag_9() == 0) {
        set_flag_9();
        return true;
    } else {
        clear_flag_9();
        return false;
    }
}

TMainTask::TMainTask() : TObject(NULL) {
    m_name = TMainTask_name;
    task_flags = 0;
    mbr_0x20 = 0;
    mbr_0x24 = 0;
}

void TMainTask::init_main_task() {
    obj_heap = new THeap(0x7a000, 16);
    alt_heap = new THeap(0x17000, 16);
    #define o(var, dummy) \
        var = new TObject(this); \
        var->m_name = var##_name;
        TL_OBJECTS
    #undef o
}

TMainTask::~TMainTask() {
    delete_children();
    delete alt_heap;
    delete obj_heap;
}

void TMainTask::render_shadows() {
    tl_particlemodel->disallow_rendering_shadows();
    begin_shadow_map_pass();
    DISALLOW_OR_ALLOW_CHILD(render_shadow_flags, old_render_shadow_flags, rendering_shadows);

    set_depth_buffer_settings_3();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();

    render_shadows_for_each_node();
    end_shadow_map_pass();

    tl_particlemodel->allow_rendering_shadows();
    tl_particlemodel->render_shadows_for_each_node();

    restore_depth_buffer_settings();
}

void TMainTask::run_task() {
    SET_OR_CLEAR_CHILD_FLAGS(update_flags, old_update_flags, 3);
    some_main_task_flag = 0;
    task_flags |= 1;
    run_tasks();
    task_flags &= ~1;
    task_flags |= 0x80;
}

void TMainTask::render_clipout_and_fade() {
    u32 some_id;
    task_flags |= 2;

    set_depth_buffer_settings_2();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();
    some_id = model_render_flags;
    set_model_render_flags(1);

    tl_clipout->allow_rendering();
    tl_clipout->render_nodes();
    tl_fade->allow_rendering();
    tl_fade->render_nodes();
    tl_fadeafter->allow_rendering();
    tl_fadeafter->render_nodes();

    set_model_render_flags(some_id);
    restore_depth_buffer_settings();

    task_flags &= ~2;
}

void TMainTask::render_scene_passes() {
    task_flags |= 0x10;
    some_main_task_flag = 0;
    render_geometry();
    some_main_task_flag = 1;
    render_effects();
    render_objects();
    some_main_task_flag = 0;
    render_particle_effects();
    unused_render_func();
    task_flags &= ~0x10;
}

void TMainTask::render_object_layers(int mode) {
    task_flags |= 0x20;
    some_main_task_flag = 0;
    set_depth_buffer_settings_3();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();
    switch (mode) {
    case 0:
        tl_03->render_nodes();
        tl_04->render_nodes();
        set_depth_buffer_settings_id(3);
        tl_item_equip->allow_rendering();
        tl_item_equip->render_nodes();
        tl_item_equip->disallow_rendering();
        restore_draw_list_mask();
        break;
    case 1:
        tl_03->render_nodes();
        tl_04->render_nodes();
        break;
    case 2:
        tl_03->render_nodes();
        break;
    case 3:
        tl_04->render_nodes();
        break;
    case 4:
        set_depth_buffer_settings_id(1);
        set_chunk_render_flags(1);
        tl_item_equip->allow_rendering();
        tl_item_equip->render_nodes();
        tl_item_equip->disallow_rendering();
        clear_chunk_render_flags();
        restore_draw_list_mask();
        break;
    case 5:
        set_depth_buffer_settings_id(2);
        set_chunk_render_flags(2);
        tl_item_equip->allow_rendering();
        tl_item_equip->render_nodes();
        tl_item_equip->disallow_rendering();
        clear_chunk_render_flags();
        restore_draw_list_mask();
        break;
    }
    restore_depth_buffer_settings();
    some_main_task_flag = 1;
    set_depth_buffer_settings_1();
    set_depth_buffer_settings_id(2);
    save_depth_buffer_settings();
    restore_depth_buffer_settings();
    task_flags &= ~0x20;
}

void TMainTask::render_task_layer_02() {
    task_flags |= 0x40;
    some_main_task_flag = 0;
    set_depth_buffer_settings_3();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();
    tl_02->render_nodes();
    restore_depth_buffer_settings();
    some_main_task_flag = 1;
    set_depth_buffer_settings_1();
    set_depth_buffer_settings_id(2);
    save_depth_buffer_settings();
    tl_02->render_nodes();
    restore_depth_buffer_settings();
    task_flags &= ~0x40;
}

void TMainTask::render_geometry() {
    set_depth_buffer_settings_3();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();

    tl_03->allow_rendering();
    tl_04->allow_rendering();
    tl_06->allow_rendering();

    tl_07->disallow_rendering();
    tl_window->disallow_rendering();
    tl_particle->disallow_rendering();
    tl_particlemodel->disallow_rendering();
    tl_radermap->disallow_rendering();
    tl_clipout->disallow_rendering();
    tl_fade->disallow_rendering();
    tl_fadeafter->disallow_rendering();
    tl_item_equip->disallow_rendering();

    render_nodes();

    restore_depth_buffer_settings();
    set_depth_buffer_settings_id(1);
    set_chunk_render_flags(1);

    tl_item_equip->allow_rendering();
    tl_item_equip->render_nodes();
    clear_chunk_render_flags();
    tl_item_equip->disallow_rendering();

    restore_draw_list_mask();
}

void TMainTask::render_effects() {
    set_depth_buffer_settings_1();
    set_depth_buffer_settings_id(2);
    save_depth_buffer_settings();

    tl_03->disallow_rendering();
    tl_04->disallow_rendering();
    tl_06->disallow_rendering();

    tl_07->allow_rendering();
    tl_item_equip->disallow_rendering();

    render_nodes();

    restore_depth_buffer_settings();
}

void TMainTask::render_particle_effects() {
    set_depth_buffer_settings_1();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();

    tl_particle->render_nodes();
    tl_particlemodel->render_nodes();

    restore_depth_buffer_settings();
}

void TMainTask::render_ui() {
    u32 some_id;
    set_depth_buffer_settings_2();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();
    some_id = model_render_flags;
    set_model_render_flags(1);

    tl_window->allow_rendering();
    tl_window->render_nodes();
    tl_radermap->allow_rendering();
    tl_radermap->render_nodes();

    set_model_render_flags(some_id);
    restore_depth_buffer_settings();
}

void TMainTask::render_objects() {
    task_flags |= 0x200;

    tl_03->render_nodes2();
    tl_04->render_nodes2();

    set_depth_buffer_settings_id(0);
    set_chunk_render_flags(4);

    tl_item_equip->allow_rendering();
    tl_item_equip->render_nodes();

    restore_draw_list_mask();
    clear_chunk_render_flags();

    task_flags &= ~0x200;

    set_depth_buffer_settings_id(2);
    set_chunk_render_flags(2);

    tl_item_equip->allow_rendering();
    tl_item_equip->render_nodes();
    tl_item_equip->disallow_rendering();

    clear_chunk_render_flags();
    restore_draw_list_mask();
}

void TMainTask::unused_render_func() {

}

void TMainTask::render() {
    ALLOW_OR_DISALLOW_CHILD(render_flags, old_render_flags, rendering);
    task_flags |= 2;
    some_main_task_flag = 0;
    render_geometry();
    some_main_task_flag = 1;
    render_effects();
    some_main_task_flag = 0;
    render_particle_effects();
    some_main_task_flag = 1;
    render_objects();
    some_main_task_flag = 0;
    unused_render_func();
    render_ui();
    task_flags &= ~2;
    task_flags |= 0x100;
}

void TMainTask::run_tl_camera_tasks() {
    task_flags |= 1;
    tl_camera->run_tasks();
    task_flags &= ~1;
}

void TMainTask::empty_render_screen_overlay_func() {

}

void TMainTask::tl_02_clear_flag_3() {
    tl_02->clear_flag_3();
    tl_03->clear_flag_3();
    tl_item_equip->clear_flag_3();
    tl_loc_start->clear_flag_3();
    tl_04->clear_flag_3();
    tl_05->clear_flag_3();
    tl_06->clear_flag_3();
    tl_07->clear_flag_3();
    tl_loc_end->clear_flag_3();
    tl_window->clear_flag_3();
    tl_particle->clear_flag_3();
    tl_particlemodel->clear_flag_3();
    tl_radermap->clear_flag_3();
    tl_clipout->clear_flag_3();
    tl_fade->clear_flag_3();
    tl_fadeafter->clear_flag_3();
}

void TMainTask::tl_02_toggle_flag_3() {
    tl_02->toggle_flag_3();
    tl_03->toggle_flag_3();
    tl_item_equip->toggle_flag_3();
    tl_loc_start->toggle_flag_3();
    tl_04->toggle_flag_3();
    tl_05->toggle_flag_3();
    tl_06->toggle_flag_3();
    tl_07->toggle_flag_3();
    tl_loc_end->toggle_flag_3();
    tl_window->toggle_flag_3();
    tl_particle->toggle_flag_3();
    tl_particlemodel->toggle_flag_3();
    tl_radermap->toggle_flag_3();
    tl_clipout->toggle_flag_3();
    tl_fade->toggle_flag_3();
    tl_fadeafter->toggle_flag_3();
}

void TMainTask::tl_delete_children() {
    tl_00->delete_children();
    tl_camera->delete_children();
    tl_01->delete_children();
    tl_02->delete_children();
    tl_03->delete_children();
    tl_item_equip->delete_children();
    tl_loc_start->delete_children();
    tl_04->delete_children();
    tl_05->delete_children();
    tl_06->delete_children();
    tl_07->delete_children();
    tl_loc_end->delete_children();
    tl_window->delete_children();
    tl_particle->delete_children();
    tl_particlemodel->delete_children();
    tl_radermap->delete_children();
    tl_clipout->delete_children();
    tl_fade->delete_children();
    tl_fadeafter->delete_children();
}

void TMainTask::tl_clear_flag_3() {
    tl_00->clear_flag_3();
    tl_camera->clear_flag_3();
    tl_01->clear_flag_3();
    tl_02->clear_flag_3();
    tl_03->clear_flag_3();
    tl_item_equip->clear_flag_3();
    tl_loc_start->clear_flag_3();
    tl_04->clear_flag_3();
    tl_05->clear_flag_3();
    tl_06->clear_flag_3();
    tl_07->clear_flag_3();
    tl_loc_end->clear_flag_3();
    tl_window->clear_flag_3();
    tl_particle->clear_flag_3();
    tl_particlemodel->clear_flag_3();
    tl_radermap->clear_flag_3();
    tl_clipout->clear_flag_3();
    tl_fade->clear_flag_3();
    tl_fadeafter->clear_flag_3();
}

void TMainTask::tl_toggle_flag_3() {
    tl_00->toggle_flag_3();
    tl_camera->toggle_flag_3();
    tl_01->toggle_flag_3();
    tl_02->toggle_flag_3();
    tl_03->toggle_flag_3();
    tl_item_equip->toggle_flag_3();
    tl_loc_start->toggle_flag_3();
    tl_04->toggle_flag_3();
    tl_05->toggle_flag_3();
    tl_06->toggle_flag_3();
    tl_07->toggle_flag_3();
    tl_loc_end->toggle_flag_3();
    tl_window->toggle_flag_3();
    tl_particlemodel->toggle_flag_3();
    tl_radermap->toggle_flag_3();
    tl_clipout->toggle_flag_3();
    tl_fade->toggle_flag_3();
    tl_fadeafter->toggle_flag_3();
}

void TMainTask::some_empty_func() {

}

void TMainTask::render_screen_overlay() {
    if (task_flags & 0x100) {
        render_clipout_and_fade();
        empty_func();
        empty_render_screen_overlay_func();
        render_info_icon_overlay();
    }
    task_flags &= ~0x180;
}

#pragma defer_codegen off
