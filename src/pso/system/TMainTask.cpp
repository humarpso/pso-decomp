#ifndef PSO_CLASS_PACKAGE
// Adapted from pso-gc-reference (mrb0nk500) for GPOE8P (MWCC 2.6)

#include "pso/THeap.h"
#include "pso/TMainTask.h"
#include "pso/TObject.h"

static const int tl_object_count = 20;

#define o(var, name) TObject *var;
TL_OBJECTS
#undef o

u32 some_main_task_flag = 1;
u32 update_flags;
u32 old_update_flags;
u32 render_flags;
u32 old_render_flags;
u32 render_shadow_flags;
u32 old_render_shadow_flags;
u32 some_id_805c6f74;

void camera_stuff() {}

void set_depth_buffer_settings_1() {}
void set_depth_buffer_settings_2() {}
void set_depth_buffer_settings_3() {}
void set_depth_buffer_settings_id(u32 id) {}
void save_depth_buffer_settings() {}
void restore_depth_buffer_settings() {}

void func_80083a00() {}
void func_80141618() {}

void set_some_id(u32 id) {
    some_id_805c6f74 = id;
}

void func_803e11e8(u32 arg1) {}
void func_803e11f0() {}

void func_803369b4() {}

void TMainTask::render_screen_overlay() {
    if (!(task_flags & 0x100)) {
        render_clipout_and_fade();
        empty_func();
        empty_render_screen_overlay_func();
        func_803369b4();
    }
    task_flags &= ~0x180;
}

void TMainTask::some_empty_func() {}

void TMainTask::tl_toggle_flag_3() {
    #define o(var, name) var->toggle_flag_3();
    TL_OBJECTS_AT_TL_00_WITHOUT_TL_PARTICLE
    #undef o
}

void TMainTask::tl_clear_flag_3() {
    #define o(var, name) var->clear_flag_3();
    TL_OBJECTS_AT_TL_00
    #undef o
}

void TMainTask::tl_delete_children() {
    #define o(var, name) var->delete_children();
    TL_OBJECTS_AT_TL_00
    #undef o
}

void TMainTask::tl_02_toggle_flag_3() {
    #define o(var, name) var->toggle_flag_3();
    TL_OBJECTS_AT_TL_02
    #undef o
}

void TMainTask::tl_02_clear_flag_3() {
    #define o(var, name) var->clear_flag_3();
    TL_OBJECTS_AT_TL_02
    #undef o
}

void TMainTask::empty_render_screen_overlay_func() {}

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
#else
#if PSO_CLASS_PACKAGE == 0x8001A430
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_state_flag__9TMainTaskFv(void);

extern s32 some_main_task_flag;

s32 get_state_flag__9TMainTaskFv(void) {
    return some_main_task_flag;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104C40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_game_objects__9TMainTaskFv(void);
M2C_UNK TEnding__sub_8008C9F8();
M2C_UNK TItemDisconnectCtrl__ct();
M2C_UNK TItemDrop__sub_8010643C();
M2C_UNK create__9TItemLoadFv();
M2C_UNK TLobby__sub_80103B70(s32);
M2C_UNK clear_object_count__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 TObjPlayer__sub_800196EC();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_flags__10TObjPlayerFPvUi(M2C_UNK *, M2C_UNK);
s32 TLobby__sub_8030A7B0();
M2C_UNK create_cleanup_object__10TObjPlayerFPv(s32);
M2C_UNK spawn_cleanup_helper__10TObjPlayerFPv(s32);

s32 get_main_phase();
extern s32 lbl_805D543C;
extern M2C_UNK lbl_805D5440;
extern s32 tl_item_equip;
extern s32 tl_particlemodel;

void cleanup_game_objects__9TMainTaskFv(void) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;

    TEnding__sub_8008C9F8();
    create__9TItemLoadFv();
    spawn_cleanup_helper__10TObjPlayerFPv(tl_particlemodel);
    create_cleanup_object__10TObjPlayerFPv(tl_item_equip);
    temp_r30 = get_main_phase();
    temp_r31 = get_global_state__14TOKeyMachine01Fv();
    temp_r29 = TObjPlayer__sub_800196EC();
    lbl_805D543C = 0;
    clear_object_count__6TLobbyFv();
    TLobby__sub_80103B70(temp_r29);
    if ((temp_r31 == 0) || (temp_r31 == 0x12)) {
        set_flags__10TObjPlayerFPvUi(&lbl_805D5440, 1);
        if ((temp_r30 != 0xE) && (temp_r30 == 0xF)) {
            TItemDrop__sub_8010643C();
        }
    }
    if (TLobby__sub_8030A7B0() == 1) {
        TItemDrop__sub_8010643C();
    }
    if ((temp_r30 == 0xF) && (__nw__7TObjectFUl(0x1C) != 0U)) {
        TItemDisconnectCtrl__ct();
    }
    lbl_805D543C = 1;
}

}
#endif
#endif
