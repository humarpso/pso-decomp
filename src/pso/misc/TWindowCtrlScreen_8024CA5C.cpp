#include "types.h"
#include "pso/misc/TWindowCtrlScreen.h"
#include "pso/TObject.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8024CAD0___vt__17TWindowCtrlScreen {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 get_nth_view_player_id__11TCameraCtrlFl(int);
s32 TCameraCtrl__sub_80068EF0();
s32 TWindowCtrlMain__sub_8024CDD0(s32 arg0);
s32 is_window_display_enabled();
void draw_menu_backdrop_gradients(s32 viewport_index);
s32 TWindowCtrlMain__sub_8024D2A4(int);
extern s32 TWindowCtrlMain__instance;
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8024CAD0___vt__17TWindowCtrlScreen __vt__17TWindowCtrlScreen;
extern s32 TWindowCtrlMain__screen_controller;
u8 *__dt__17TWindowCtrlScreenFv(u8 *arg0, s16 arg1);
void TWindowCtrlScreen::render() {
    u16 temp_r31;
    if (is_window_display_enabled() != 0) {
        temp_r31 = get_nth_view_player_id__11TCameraCtrlFl((int) (TCameraCtrl::get_camera_no()));
        TObjPlayer::reset_transform_state();
        TParticleCtrl::begin_effect_render();
        ((TObject *)TWindowCtrlMain__instance)->render_nodes();
        TWindowCtrlMain__sub_8024D2A4((int) ((s32) temp_r31));
        TCameraCtrl::restore_full_screen_view();
        draw_menu_backdrop_gradients(((s32) temp_r31));
        ((TObject *)(TWindowCtrlMain__sub_8024CDD0(((s32) temp_r31))))->render_nodes();
        TCameraCtrl__sub_80068EF0();
        TParticleCtrl::end_effect_render();
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
