#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TCameraCtrl__sub_80068958(int);
s32 TCameraCtrl__sub_80068EF0();
s32 TCameraCtrl__sub_80069024();
s32 reset_transform_state__10TObjPlayerFv();
s32 get_camera_no__11TCameraCtrlFv();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 render_nodes__7TObjectFv(int);
s32 TWindowCtrlMain__sub_8024CDD0(int);
s32 TWindowCtrlMain__sub_8024CE44();
s32 TWindowCtrlMain__sub_8024CE68(int);
s32 TWindowCtrlMain__sub_8024D2A4(int);
extern s32 TWindowCtrlMain__data_805D6404;
void render__17TWindowCtrlScreenFv(void);
}

extern "C" {

void render__17TWindowCtrlScreenFv(void) {
    u16 temp_r31;
    if (TWindowCtrlMain__sub_8024CE44() != 0) {
        temp_r31 = TCameraCtrl__sub_80068958((int) (get_camera_no__11TCameraCtrlFv()));
        reset_transform_state__10TObjPlayerFv();
        begin_effect_render__13TParticleCtrlFv();
        render_nodes__7TObjectFv((int) (TWindowCtrlMain__data_805D6404));
        TWindowCtrlMain__sub_8024D2A4((int) ((s32) temp_r31));
        TCameraCtrl__sub_80069024();
        TWindowCtrlMain__sub_8024CE68((int) ((s32) temp_r31));
        render_nodes__7TObjectFv((int) (TWindowCtrlMain__sub_8024CDD0((int) ((s32) temp_r31))));
        TCameraCtrl__sub_80068EF0();
        end_effect_render__13TParticleCtrlFv();
    }
}

}
