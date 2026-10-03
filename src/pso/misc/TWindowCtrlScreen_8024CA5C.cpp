#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8024CAD0___vt__17TWindowCtrlScreen {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 TCameraCtrl__sub_80068958(int);
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
extern s32 TWindowCtrlMain__data_805D6404;
void render__17TWindowCtrlScreenFv(void);
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8024CAD0___vt__17TWindowCtrlScreen __vt__17TWindowCtrlScreen;
extern s32 TWindowCtrlMain__data_805D640C;
u8 *__dt__17TWindowCtrlScreenFv(u8 *arg0, s16 arg1);
}

extern "C" {

void render__17TWindowCtrlScreenFv(void) {
    u16 temp_r31;
    if (is_window_display_enabled() != 0) {
        temp_r31 = TCameraCtrl__sub_80068958((int) (get_camera_no__11TCameraCtrlFv()));
        reset_transform_state__10TObjPlayerFv();
        begin_effect_render__13TParticleCtrlFv();
        render_nodes__7TObjectFv((int) (TWindowCtrlMain__data_805D6404));
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TWindowCtrlScreen.value;
        TWindowCtrlMain__data_805D640C = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
