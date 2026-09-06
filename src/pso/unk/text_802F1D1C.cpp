#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_collision__18TObjBoss7TunnelColFPv(void *);
M2C_UNK copy_position__16TBoss8DragonDemoFPv(int, void *);
f32 TBoss8DragonDemo__sub_802F2CB4(int);
f32 TBoss8DragonDemo__sub_802F2CBC(int);
void fn_802F1ED0(u8 *arg0);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9730(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
s32 is_in_camera_range__18TObjBoss7TunnelColFPv(void *);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 set_global_param__8TObjFishFi(int);
extern u8 *lbl_805D6950;
extern u8 *lbl_805D6954;
void fn_802F1D1C(u8 *arg0);
}

extern "C" {

void fn_802F1D1C(u8 *arg0) {
    s32 var_r31;
    u8 *var_r30;
    u8 *var_r3;
    u8 *var_r4;
    var_r30 = (u8 *)(arg0);
    if (is_in_camera_range__18TObjBoss7TunnelColFPv((void *) (arg0)) != 0) {
        var_r3 = (u8 *)((void *)2);
        var_r4 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x3C));
        var_r4 += M2C_FIELD(var_r30, s32 *, 0x38) * 4;
        var_r31 = M2C_FIELD(var_r4, s32 *, -4);
        set_depth_buffer_settings_id__FUl((int) (2));
        var_r3 = (u8 *)(lbl_805D6954);
        set_global_param__8TObjFishFi((int) (var_r3));
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        var_r4 = (u8 *)(var_r30 + 0x48);
        var_r3 = (u8 *)(NULL);
        TObjPlayer__sub_803D9730((int) (0), (int) (var_r4));
        var_r3 = (u8 *)(lbl_805D6950);
        var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x42C));
        var_r3 += var_r31 * 0x10;
        var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 8));
        TObjBoss2Tunnel__sub_803DB470((int) (var_r3));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        func_80141618__Fv();
    }
}

void fn_802F1ED0(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = TBoss8DragonDemo__sub_802F2CBC((int) (M2C_FIELD(arg0, s32 *, 0x34)));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) - TBoss8DragonDemo__sub_802F2CB4((int) (M2C_FIELD(arg0, s32 *, 0x34))));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40) == 4) {
        copy_position__16TBoss8DragonDemoFPv((int) (M2C_FIELD(arg0, s32 *, 0x34)), (void *) (arg0 + 0x1C));
    }
    if (M2C_FIELD(arg0, f32 *, 0x24) <= -M2C_FIELD(arg0, f32 *, 0x44)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    update_collision__18TObjBoss7TunnelColFPv((void *) (arg0));
}

}
