#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 TObjEneMe1Canadin__data_805D98BC;
extern const f32 lbl_805D9924;
void TObjEneMe1Canadin__sub_8009EB98(u8 *arg0, f32 farg0);
}

extern "C" {

void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0);

void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB98((u8 *)((u8 *)arg0), M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E8));
}
void TObjEneMe1Canadin__sub_8009EB98(u8 *arg0, f32 farg0) {
    f32 temp_f3;
    temp_f3 = farg0 - M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFF7FFFF);
    if (temp_f3 >= TObjEneMe1Canadin__data_805D98BC) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) + TObjEneMe1Canadin__data_805D98BC);
        return;
    }
    if (temp_f3 <= lbl_805D9924) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) - TObjEneMe1Canadin__data_805D98BC);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x3F8) = farg0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x80000);
}

}
