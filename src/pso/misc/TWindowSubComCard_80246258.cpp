#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade__17TWindowSubComCardFPv(void *arg0);
M2C_UNK TWindowSubComCard__sub_802448C0();

extern M2C_UNK lbl_8044E680;

void update_fade__17TWindowSubComCardFPv(void *arg0) {
    u32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x50);
    if (temp_r5 == 0) {
        TWindowSubComCard__sub_802448C0();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x40) += (M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x40)) / (f32) temp_r5;
    M2C_FIELD(arg0, f32 *, 0x44) += (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x44)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x48) += (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x48)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x4C) += (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x4C)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, u32 *, 0x50) = (u32) (M2C_FIELD(arg0, u32 *, 0x50) - 1);
}

}
