#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_container_item__10TObjPlayerFPv(void *arg0);
void approach_target_angle__10TObjPlayerFPv(u8 *arg0);
void step_angles__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_80115BC0(void *, int, int);
s32 TObjPlayer__sub_80121200();

void apply_container_item__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_80121200();
    switch (temp_r3) {
    case 1:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 2:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    }
}

void approach_target_angle__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_80115BC0(arg0 + 0x1F8, 0x71C, 0x4000);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 0x4000) {
        TObjPlayer__sub_80115BC0(arg0 + 0x1FC, 0x71C, 0x4000);
    }
}

void step_angles__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_80115BC0(arg0 + 0x1FC, -0xAAA, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) {
        TObjPlayer__sub_80115BC0(arg0 + 0x1F8, -0xAAA, 0);
    }
}

}
