#include "types.h"

struct RecoveredGlobal_8024CAD0___vt__17TWindowCtrlScreen {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 get_nth_view_player_id__11TCameraCtrlFi(int);
s32 TCameraCtrl__sub_80068EF0();
s32 restore_full_screen_view__11TCameraCtrlFv();
s32 reset_transform_state__10TObjPlayerFv();
s32 get_camera_no__11TCameraCtrlFv();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 render_nodes__7TObjectFv(int);
s32 TWindowCtrlMain__sub_8024CDD0(int);
s32 is_window_display_enabled();
s32 draw_menu_backdrop_gradients(int);
s32 TWindowCtrlMain__sub_8024D2A4(int);
extern s32 TWindowCtrlMain__instance;
void render__17TWindowCtrlScreenFv(void);
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8024CAD0___vt__17TWindowCtrlScreen __vt__17TWindowCtrlScreen;
extern s32 TWindowCtrlMain__screen_controller;
u8 *__dt__17TWindowCtrlScreenFv(u8 *arg0, s16 arg1);
}

extern "C" {

void render__17TWindowCtrlScreenFv(void) {
    u16 temp_r31;
    if (is_window_display_enabled() != 0) {
        temp_r31 = get_nth_view_player_id__11TCameraCtrlFi((int) (get_camera_no__11TCameraCtrlFv()));
        reset_transform_state__10TObjPlayerFv();
        begin_effect_render__13TParticleCtrlFv();
        render_nodes__7TObjectFv((int) (TWindowCtrlMain__instance));
        TWindowCtrlMain__sub_8024D2A4((int) ((s32) temp_r31));
        restore_full_screen_view__11TCameraCtrlFv();
        draw_menu_backdrop_gradients((int) ((s32) temp_r31));
        render_nodes__7TObjectFv((int) (TWindowCtrlMain__sub_8024CDD0((int) ((s32) temp_r31))));
        TCameraCtrl__sub_80068EF0();
        end_effect_render__13TParticleCtrlFv();
    }
}
typedef char RecoveredGlobal_8024CAD0___vt__17TWindowCtrlScreen_size[sizeof(RecoveredGlobal_8024CAD0___vt__17TWindowCtrlScreen) == 0x18 ? 1 : -1];
u8 *__dt__17TWindowCtrlScreenFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__17TWindowCtrlScreen.value;
        TWindowCtrlMain__screen_controller = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
