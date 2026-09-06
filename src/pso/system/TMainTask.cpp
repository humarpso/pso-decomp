#include "pso/THeap.h"
#include "pso/TMainTask.h"
#include "pso/TObject.h"

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

void TMainTask::run_tl_camera_tasks() {
    task_flags |= 1;
    tl_camera->run_tasks();
    task_flags &= ~1;
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

void TMainTask::unused_render_func() {

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

void TMainTask::render_particle_effects() {
    set_depth_buffer_settings_1();
    set_depth_buffer_settings_id(1);
    save_depth_buffer_settings();

    tl_particle->render_nodes();
    tl_particlemodel->render_nodes();

    restore_depth_buffer_settings();
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

void TMainTask::run_task() {
    SET_OR_CLEAR_CHILD_FLAGS(update_flags, old_update_flags, 3);
    some_main_task_flag = 0;
    task_flags |= 1;
    run_tasks();
    task_flags &= ~1;
    task_flags |= 0x80;
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

TMainTask::~TMainTask() {
    delete_children();
    delete alt_heap;
    delete obj_heap;
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

TMainTask::TMainTask() : TObject(NULL) {
    m_name = TMainTask_name;
    task_flags = 0;
    mbr_0x20 = 0;
    mbr_0x24 = 0;
}
