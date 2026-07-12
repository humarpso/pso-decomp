#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_fade__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0);
void start_anim__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0);
M2C_UNK TAdRicoRing__sub_8001BEE8(void *, int);
M2C_UNK TObjPlayer__sub_8001BED8(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);

extern const f32 lbl_805D7E4C;

void start_fade__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0) {
    f32 temp_f0;

    if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 1) != 0) {
        TAdRicoRing__sub_8001BEE8(arg0 + 0x2C, 1);
    }
    TObjPlayer__sub_8001BED8(arg0 + 0x2C, 2);
    if (lbl_805D7E4C != farg0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x1C)) / farg0);
        temp_f0 = (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x20)) / farg0;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x40) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x44) = temp_f0;
    }
}

extern const f32 lbl_805D7E4C;
extern const f32 lbl_805D7E54;

void start_anim__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0) {
    f32 temp_f0;

    if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 2) != 0) {
        TAdRicoRing__sub_8001BEE8(arg0 + 0x2C, 2);
    }
    TObjPlayer__sub_8001BED8(arg0 + 0x2C, 1);
    if (lbl_805D7E4C != farg0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((lbl_805D7E54 - M2C_FIELD(arg0, f32 *, 0x1C)) / farg0);
        temp_f0 = (lbl_805D7E54 - M2C_FIELD(arg0, f32 *, 0x20)) / farg0;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x40) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x44) = temp_f0;
    }
}

}
