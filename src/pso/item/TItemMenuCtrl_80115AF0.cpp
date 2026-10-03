#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_80115BC0(s32 *arg0, s32 arg1, s32 arg2);
void advance_angle_wrap(s32 *arg0, s32 arg1);
s32 is_split_screen(void);
u8 * __ct__15TEffStarLight2DFv(void *, s32, s32, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *spawn_star_light_2d(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void approach_value__20TItemEffOrgaFlowShotFPvff(f32 *arg0, f32 farg0, f32 farg1);
int set_menu_flags__13TItemMenuCtrlFPv(void* p);
int decrement_packed_timer__15TObjBoss2TunnelFPvi(void*);
int decrement_timer__17TItemEffectWeaponFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*);

int set_menu_flags__13TItemMenuCtrlFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x1c); }

extern const f32 lbl_805DABE8;

#pragma push
#pragma scheduling off
u8 *spawn_star_light_2d(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() == 0) {
        temp_r3 = (u8 *)(__nw__7TObjectFUl(0x4C));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(__ct__15TEffStarLight2DFv(temp_r3, arg0, arg1, arg2));
        }
        return var_r0;
    }
    return NULL;
}
#pragma pop

void approach_value__20TItemEffOrgaFlowShotFPvff(f32 *arg0, f32 farg0, f32 farg1) {
    *arg0 += farg0;
    if (farg0 > lbl_805DABE8) {
        if (*arg0 > farg1) {
            *arg0 = farg1;
        }
    } else if (*arg0 < farg1) {
        *arg0 = farg1;
    }
}

void TObjPlayer__sub_80115BC0(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 += arg1;
    if (arg1 > 0) {
        if ((s32) *arg0 > arg2) {
            *arg0 = arg2;
        }
    } else if ((s32) *arg0 < arg2) {
        *arg0 = arg2;
    }
}

void advance_angle_wrap(s32 *arg0, s32 arg1) {
    s32 temp_r4;
    *arg0 += arg1;
    temp_r4 = *arg0;
    if (temp_r4 >= 0x10000) {
        *arg0 = temp_r4 + 0xFFFF0000;
    }
}

}
