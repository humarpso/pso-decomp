#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800111A8(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_800111D8(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_800112A4(u8 *arg0, s32 arg1);
}

extern "C" {

s32 obj_isState2_324();
s32 TObjPlayer__sub_8001119C(void* p);

s32 TObjPlayer__sub_800111A8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x11A) = (s16) (M2C_FIELD(arg0, s16 *, 0x11A) + arg1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x11A) > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x11A) = 0x3E7;
        return 0;
    }
    return 1;
}

s32 TObjPlayer__sub_800111D8(u8 *arg0, s32 arg1) {
    u8 *temp_r4;
    u8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x2B0);
    M2C_FIELD(temp_r5, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x1C) - arg1);
    temp_r4 = M2C_FIELD(arg0, u8 **, 0x2B0);
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x1C) < 0) {
        M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
        return 0;
    }
    return 1;
}

int TObjPlayer__sub_80011210(void) { return 0; }
int TObjPlayer__sub_8001124C(void) { return 0; }
int TObjPlayer__sub_80011274(void) { return 0; }

s32 TObjPlayer__sub_800112A4(u8 *arg0, s32 arg1) {
    s16 temp_r4;
    M2C_FIELD(arg0, s16 *, 0x32E) = (s16) (M2C_FIELD(arg0, s16 *, 0x32E) + arg1);
    if (M2C_FIELD(arg0, s16 *, 0x32E) > M2C_FIELD(arg0, s16 *, 0x2BA)) {
        M2C_FIELD(arg0, s16 *, 0x32E) = M2C_FIELD(arg0, s16 *, 0x2BA);
        return 0;
    }
    return 1;
}

int TObjPlayer__sub_800112D4(void* a0 = 0, void* a1 = 0) { return 0; }

}
