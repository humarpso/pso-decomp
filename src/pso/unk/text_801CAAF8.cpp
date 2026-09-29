#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK apply_velocity__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(f32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);
s32 classify_action_state__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801B5DDC(void *);
u32 TObjPlayer__sub_801B5EA4(void *);
M2C_UNK TObjPlayer__sub_801B5FB0(void *);
s16 query_child_state2__10TObjPlayerFPv();
extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 lbl_805DC370;
extern const f32 lbl_805DC38C;
void TObjPlayer__sub_801CAAF8(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801CAAF8(void *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        if (objInBand__FP7GameObjf(lbl_805DC370) != 0) {
            if (classify_action_state__10TObjPlayerFv(arg0) == 2) {
                send_field_state_if_active__10TObjPlayerFii(arg0, 0x40002320);
            } else {
                send_field_state_if_active__10TObjPlayerFii(arg0, 0x40009E14);
            }
        }
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) lbl_805DC38C;
        }
        break;
    case 1:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = query_child_state2__10TObjPlayerFPv();
        }
        break;
    case 2:
        break;
    }
    TObjPlayer__sub_801B5FB0(arg0);
    if (TObjPlayer__sub_801B5DDC(arg0) != 0) {
        TObjPlayer__sub_8001053C(arg0);
    }
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

}
