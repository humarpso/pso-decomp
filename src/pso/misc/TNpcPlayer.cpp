#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 TNpcPlayer__sub_8014F7F0(void *arg0);
f32 TObjPlayer__sub_80141CF8(void *, void *);
M2C_UNK TNpcPlayer__sub_8014E33C(void *, int);
M2C_UNK TNpcPlayer__sub_801528B8(void *, int);
M2C_UNK TNpcPlayer__sub_801528C8(void *, int);
s16 TNpcPlayer__sub_801528F4(void *, int);
M2C_UNK TNpcPlayer__sub_80152900(void *, int, int);
extern const f32 lbl_805DB234;
s32 TNpcPlayer__sub_8014FF5C(u8 *arg0);
}

extern "C" {

s32 check_and_set_reached__10TNpcPlayerFPv(void *arg0);
void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1);
s32 try_attack__10TNpcPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 try_update_target_flag__10TNpcPlayerFPvi(void *arg0, s32 arg1);
s32 TNpcPlayer__sub_8014F424(void *, s32, s32, s32);
s32 TNpcPlayer__sub_8014F57C(void *, s32);
M2C_UNK TObjEneGibbles__sub_80156720(u32);
M2C_UNK __dl__FPv(void *);
s32 fn_801B7C78(s32, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(u32);
s32 try_camera_action__10TObjPlayerFii(s32, M2C_UNK);

void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xA8) != 0U) {
            TObjEneGibbles__sub_80156720(M2C_FIELD(arg0, u32 *, 0xA8));
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xA8));
            M2C_FIELD(arg0, u32 *, 0xA8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
s32 TNpcPlayer__sub_8014F7F0(void *arg0) {
    u32 v;
    M2C_FIELD(arg0, u32 *, 0x94) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x8A));
    v = M2C_FIELD(arg0, u32 *, 0x94);
    if (v == 0U) {
        return 1;
    }
    return (u32) __cntlzw(all_parents_unqueued_for_destruction__7TObjectFv((void *)v)) >> 5;
}
#pragma pop

s32 try_update_target_flag__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x94);
    if (TNpcPlayer__sub_8014F424(arg0, temp_r6 + 0x38, arg1, temp_r6) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 2);
        return 1;
    }
    return 0;
}

s32 check_and_set_reached__10TNpcPlayerFPv(void *arg0) {
    if (TNpcPlayer__sub_8014F57C(arg0, M2C_FIELD(arg0, s32 *, 0x94) + 0x38) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 2);
        return 1;
    }
    return 0;
}

s32 try_attack__10TNpcPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        if ((arg2 != 0) && (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 0) != -1)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0xF) != 0) {
            return 1;
        }
        break;
    case 1:
        if (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 1) != -1) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        break;
    case 2:
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0x10) != 0) {
            return 1;
        }
        break;
    case 3:
        if (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 6) != -1) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0x11) != 0) {
            return 1;
        }
        break;
    }
    return 0;
}
#pragma push
#pragma fp_contract on
s32 TNpcPlayer__sub_8014FF5C(u8 *arg0) {
    s8 temp_r3;
    if (TObjPlayer__sub_80141CF8((void *) (arg0 + 0xAC), (void *) (arg0 + 0xD0)) <= lbl_805DB234) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s8 *, 0x8C);
    if (temp_r3 > 0x1E) {
        M2C_FIELD(arg0, u8 *, 0x8C) = 0x1EU;
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x4000);
        if (TNpcPlayer__sub_801528F4((void *) (arg0 + 0x5C), (int) (7)) == 0) {
            TNpcPlayer__sub_8014E33C((void *) (arg0), (int) (7));
        }
        TNpcPlayer__sub_801528C8((void *) (arg0 + 0x5C), (int) (7));
        TNpcPlayer__sub_80152900((void *) (arg0 + 0x5C), (int) (7), (int) (0x12C));
        return 0;
    }
    if ((temp_r3 == 0) && (M2C_FIELD(arg0, s32 *, 0x80) & 0x4000)) {
        TNpcPlayer__sub_801528B8((void *) (arg0 + 0x5C), (int) (7));
        TNpcPlayer__sub_8014E33C((void *) (arg0), (int) (0x18));
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFBFFF);
    }
    return 1;
}
#pragma pop

}
