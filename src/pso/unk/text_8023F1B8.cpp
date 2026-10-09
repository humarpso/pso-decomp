#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8023F1B8_lbl_804CCDA8 {
    M2C_UNK value;
    u8 remaining[0xB4];
};

struct RecoveredGlobal_8023F1B8_lbl_804CCE60 {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8023F1B8_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

typedef s32 M2C_UNK;
struct Vec_8023F22C { f32 x, y, z; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 free_heap__13TParticleCtrlFv();
s32 clear_resource_load_tasks();
s32 call_funcs_reverse__6TLobbyFPvUi(void *, int);
s32 render_tick__Fv();
s32 stop_audio_streams__6TLobbyFv();
s32 refresh_render_state__6TLobbyFv();
s32 delete_all_task_children__9TMainTaskFv(void *);
extern RecoveredGlobal_8023F1B8_lbl_804CCDA8 lbl_804CCDA8;
extern RecoveredGlobal_8023F1B8_lbl_804CCE60 lbl_804CCE60;
extern RecoveredGlobal_8023F1B8_main_task main_task;
extern u32 lbl_805D63CC;
void release_scene_resources__6TLobbyFv(void);
void set_active_camera_pose(Vec_8023F22C *, Vec_8023F22C *);
void select_active_controller__11TCameraCtrlFc(s32);
void TCameraCtrl__ct(void *, void *);
void init_heap__13TParticleCtrlFPv(s32);
void reset_keyboard_state__6TLobbyFv(void);
s32 is_area_transfer_pending(void);
void clear_callback_and_reset_keyboard__6TLobbyFv(void);
void apply_phase_keyboard_mode(void);
void invoke_callback__6TLobbyFv(void);
s32 clear_resource_load_tasks();
void run_load_callback_table(void *, s32);
void init_menu_scene_lights(void *, s32);
void reset_controller_input_state(void);
void set_copy_clear_color_argb(s32, s32, s32);
void create_quad_sprites__13TParticleCtrlFv(void);
void load_floor_sound_bank(s32);
void *__nw__7TObjectFUl(u32);
void TWindowCtrlMain__ct(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void set_screen_size(f32, f32);
extern Vec_8023F22C lbl_8044DCE8;
extern Vec_8023F22C lbl_8044DCF4;
extern RecoveredGlobal_8023F1B8_lbl_804CCDA8 lbl_804CCDA8;
extern RecoveredGlobal_8023F1B8_lbl_804CCE60 lbl_804CCE60;
extern u8 lbl_804A6F34[];
extern Vec_8023F22C TObjLight__scene_light_state;
extern void *tl_camera;
extern u32 lbl_805D63CC;
extern const f32 lbl_805DC9B8;
extern const f32 lbl_805DC9BC;
void init_game_mode_select_scene(void);
}

extern "C" {

typedef char RecoveredGlobal_8023F1B8_lbl_804CCDA8_size[sizeof(RecoveredGlobal_8023F1B8_lbl_804CCDA8) == 0xB8 ? 1 : -1];
typedef char RecoveredGlobal_8023F1B8_lbl_804CCE60_size[sizeof(RecoveredGlobal_8023F1B8_lbl_804CCE60) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8023F1B8_main_task_size[sizeof(RecoveredGlobal_8023F1B8_main_task) == 0x34 ? 1 : -1];
void release_scene_resources__6TLobbyFv(void) {
    refresh_render_state__6TLobbyFv();
    stop_audio_streams__6TLobbyFv();
    if ((u32) lbl_805D63CC != 0U) {
        queue_destruction__7TObjectFv((void *) (lbl_805D63CC));
        lbl_805D63CC = 0U;
    }
    delete_all_task_children__9TMainTaskFv((void *) (&main_task.value));
    call_funcs_reverse__6TLobbyFPvUi((void *) (&lbl_804CCE60.value), (int) (0x38));
    call_funcs_reverse__6TLobbyFPvUi((void *) (&lbl_804CCDA8.value), (int) (0xB8));
    free_heap__13TParticleCtrlFv();
    clear_resource_load_tasks();
    render_tick__Fv();
}
void init_game_mode_select_scene(void) {
    s32 i;
    f32 c;
    void *p;
    set_screen_size(lbl_805DC9B8, lbl_805DC9B8);
    set_copy_clear_color_argb(0, 0, 0);
    for (i = 0; i < 0x80; i++) {
    }
    reset_controller_input_state();
    clear_resource_load_tasks();
    reset_keyboard_state__6TLobbyFv();
    apply_phase_keyboard_mode();
    run_load_callback_table(&lbl_804CCDA8.value, 0xb8);
    if (is_area_transfer_pending() != 0) {
        invoke_callback__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
        reset_keyboard_state__6TLobbyFv();
        return;
    }
    run_load_callback_table(&lbl_804CCE60.value, 0x38);
    if (is_area_transfer_pending() != 0) {
        invoke_callback__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
        reset_keyboard_state__6TLobbyFv();
        return;
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    init_heap__13TParticleCtrlFPv(0x100000);
    init_menu_scene_lights(lbl_804A6F34, 4);
    TObjLight__scene_light_state.y = lbl_805DC9BC * sin_table_lookup(0x1555);
    c = cos_table_lookup(0x1555);
    TObjLight__scene_light_state.x = c * sin_table_lookup(0x9000);
    TObjLight__scene_light_state.z = c * cos_table_lookup(0x9000);
    p = __nw__7TObjectFUl(0x1d4);
    if (p != NULL) {
        TCameraCtrl__ct(p, tl_camera);
    }
    {
        Vec_8023F22C eye = lbl_8044DCE8;
        Vec_8023F22C at = lbl_8044DCF4;
        select_active_controller__11TCameraCtrlFc(9);
        set_active_camera_pose(&eye, &at);
    }
    create_quad_sprites__13TParticleCtrlFv();
    p = __nw__7TObjectFUl(0x1c);
    if (p != NULL) {
        TWindowCtrlMain__ct(p);
    }
    lbl_805D63CC = 0;
    load_floor_sound_bank(0);
}

}
