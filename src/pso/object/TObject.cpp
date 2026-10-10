#pragma readonly_strings on
#define TOBJECT_CPP
#define TOBJECT_OUT_OF_LINE_HELPERS
#define global_obj1 lbl_80515F48
#define global_obj2 lbl_80515F70

#include "pso/THeap.h"
#include "pso/TMainTask.h"
#include "pso/TObject.h"

u32 some_main_task_flag = 1;
struct DestructorChain {
    DestructorChain *next;
    void *destructor;
    void *object;
};
#pragma suppress_init_code on
#pragma no_static_dtors on
DestructorChain lbl_80515F08;
TMainTask main_task;
DestructorChain main_task_root1_dtor_registration;
TObject global_obj1;
DestructorChain main_task_root2_dtor_registration;
TObject global_obj2;
#pragma no_static_dtors reset
#pragma suppress_init_code reset

#define o(name) OBJECT_NAME(name)
OBJECT_NAMES
#undef o

const char *tl_su_name = "TL_SU";
const char *tl_00_name = "TL_00";
const char *tl_camera_name = "TL_CAMERA";
const char *tl_01_name = "TL_01";
const char *tl_02_name = "TL_02";
const char *tl_03_name = "TL_03";
const char *tl_item_equip_name = "TL_ITEM_EQUIP";
const char *tl_loc_start_name = "TL_LOC_START";
const char *tl_04_name = "TL_04";
const char *tl_05_name = "TL_05";
const char *tl_06_name = "TL_06";
const char *tl_07_name = "TL_07";
const char *tl_loc_end_name = "TL_LOC_END";
const char *tl_window_name = "TL_WINDOW";
const char *tl_particle_name = "TL_PARTICLE";
const char *tl_particlemodel_name = "TL_PARTICLEMODEL";
const char *tl_radermap_name = "TL_RADERMAP";
const char *tl_clipout_name = "TL_CLIPOUT";
const char *tl_fade_name = "TL_FADE";
const char *tl_fadeafter_name = "TL_FADEAFTER";

void debug_print(const char *fmt);

extern u32 some_main_task_flag;
extern u32 update_flags, old_update_flags;
extern u32 render_flags, old_render_flags;
extern u32 render_shadow_flags, old_render_shadow_flags;
extern u32 some_id_805c6f74;

void camera_stuff();
void set_depth_buffer_settings_1();
void set_depth_buffer_settings_2();
void set_depth_buffer_settings_3();
void set_depth_buffer_settings_id(u32 id);
void save_depth_buffer_settings();
void restore_depth_buffer_settings();
void set_some_id(u32 id);
void func_80083a00();
void func_80141618();
void func_803e11e8(u32 arg1);
void func_803e11f0();

extern "C" {
TMainTask *__ct__9TMainTaskFv(TMainTask *);
TObject *__ct__7TObjectFP7TObject(TObject *, TObject *);
void __dt__9TMainTaskFv(TMainTask *, s16);
void __dt__7TObjectFv(TObject *, s16);
void *__register_global_object(void *, void *, void *);
}
extern "C" void __sinit_TObject_cpp();
__declspec(section ".ctors") static void *const object_global_initializer = (void *)__sinit_TObject_cpp;

#pragma defer_codegen on
u32 TObject::get_flag_9() { return m_flags & BIT_9; }

void TObject::set_flag_9() { m_flags |= BIT_9; }

void TObject::clear_flag_9() { m_flags &= ~BIT_9; }

void TObject::allow_rendering_shadows() { m_flags &= ~DISALLOW_RENDER_SHADOWS; }

void __sinit_TObject_cpp() {
    __register_global_object(__ct__9TMainTaskFv(&main_task),
        (void *)__dt__9TMainTaskFv, &lbl_80515F08);
    __register_global_object(__ct__7TObjectFP7TObject(&global_obj1, NULL),
        (void *)__dt__7TObjectFv, &main_task_root1_dtor_registration);
    __register_global_object(__ct__7TObjectFP7TObject(&global_obj2, NULL),
        (void *)__dt__7TObjectFv, &main_task_root2_dtor_registration);
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
    camera_stuff();
    DISALLOW_OR_ALLOW_CHILD(render_shadow_flags, old_render_shadow_flags, rendering_shadows);

    set_depth_buffer_settings_3();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();

    render_shadows_for_each_node();
    func_80083a00();

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
    some_id = some_id_805c6f74;
    set_some_id(1);

    tl_clipout->allow_rendering();
    tl_clipout->render_nodes();
    tl_fade->allow_rendering();
    tl_fade->render_nodes();
    tl_fadeafter->allow_rendering();
    tl_fadeafter->render_nodes();

    set_some_id(some_id);
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
        func_80141618();
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
        func_803e11e8(1);
        tl_item_equip->allow_rendering();
        tl_item_equip->render_nodes();
        tl_item_equip->disallow_rendering();
        func_803e11f0();
        func_80141618();
        break;
    case 5:
        set_depth_buffer_settings_id(2);
        func_803e11e8(2);
        tl_item_equip->allow_rendering();
        tl_item_equip->render_nodes();
        tl_item_equip->disallow_rendering();
        func_803e11f0();
        func_80141618();
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
    func_803e11e8(1);

    tl_item_equip->allow_rendering();
    tl_item_equip->render_nodes();
    func_803e11f0();
    tl_item_equip->disallow_rendering();

    func_80141618();
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
    some_id = some_id_805c6f74;
    set_some_id(1);

    tl_window->allow_rendering();
    tl_window->render_nodes();
    tl_radermap->allow_rendering();
    tl_radermap->render_nodes();

    set_some_id(some_id);
    restore_depth_buffer_settings();
}

void TMainTask::render_objects() {
    task_flags |= 0x200;

    tl_03->render_nodes2();
    tl_04->render_nodes2();

    set_depth_buffer_settings_id(0);
    func_803e11e8(4);

    tl_item_equip->allow_rendering();
    tl_item_equip->render_nodes();

    func_80141618();
    func_803e11f0();

    task_flags &= ~0x200;

    set_depth_buffer_settings_id(2);
    func_803e11e8(2);

    tl_item_equip->allow_rendering();
    tl_item_equip->render_nodes();
    tl_item_equip->disallow_rendering();

    func_803e11f0();
    func_80141618();
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

#pragma defer_codegen off
