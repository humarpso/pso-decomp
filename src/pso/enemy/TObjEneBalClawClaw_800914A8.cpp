#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK TObjEneBalClawClaw__sub_8008DC04(void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *);
M2C_UNK TObjPlayer__sub_80090448(void *);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
f32 fn_8013157C(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);

extern const f32 lbl_805D969C;
extern const f32 lbl_805D96B8;
extern const f32 lbl_805D96BC;
extern const f32 lbl_805D96C0;
extern const f32 lbl_805D96C4;
extern const f32 lbl_805D96C8;

struct VObjBase_800914a8 { char pad_[0x18]; };
struct VObj_800914a8 : VObjBase_800914a8 {
    virtual M2C_UNK m00(); virtual M2C_UNK m01(); virtual M2C_UNK m02(); virtual M2C_UNK m03();
    virtual M2C_UNK m04(); virtual M2C_UNK m05(); virtual M2C_UNK m06(); virtual M2C_UNK m07();
    virtual M2C_UNK m08(); virtual M2C_UNK m09(); virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14(); virtual M2C_UNK m15();
    virtual M2C_UNK m16(); virtual M2C_UNK m17(M2C_UNK);
};

void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r31;
    u32 temp_r3;

    if (((VObj_800914a8 *) arg0)->m17(0x1E) != 0) {
        find_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) (lbl_805D96B8));
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 8:
    case 0:
        if (((VObj_800914a8 *) arg0)->m17(0x1E) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (1));
                M2C_FIELD(arg0, s32 *, 0x38C) = 2;
                return;
            }
            if (fn_8013157C((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805D96BC) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
                return;
            }
            reset_active_state__18TObjEneBalClawClawFPv((void *) (arg0));
        }
        return;
    case 1:
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x2A8);
        if (temp_r3 != 0U) {
            temp_f1 = fn_8013157C((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38));
            temp_r31 = M2C_FIELD(arg0, s32 *, 0x38C);
            switch (temp_r31) {
            case 0:
                if (temp_f1 > lbl_805D96C0) {
                    M2C_FIELD(arg0, s32 *, 0x38C) = 1;
                }
                break;
            case 1:
                if (temp_f1 < lbl_805D969C) {
                    TObjEneBalClawClaw__sub_8008DC04((void *) (arg0));
                    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
                } else if (temp_f1 > lbl_805D96C4) {
                    M2C_FIELD(arg0, s32 *, 0x38C) = 2;
                }
                break;
            case 2:
                if (temp_f1 < lbl_805D96C8) {
                    TObjPlayer__sub_80090448((void *) (arg0));
                    M2C_FIELD(arg0, s32 *, 0x38C) = 1;
                }
                break;
            }
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x38C);
            if (temp_r31 != temp_r0_2) {
                switch (temp_r0_2) {
                case 0:
                    update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (2));
                    return;
                case 1:
                    TObjEneBalClawClaw__sub_8008DC04((void *) (arg0));
                    return;
                case 2:
                    TObjPlayer__sub_80090448((void *) (arg0));
                    return;
                }
            }
        } else {
            update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
        }
        break;
    }
}

}
