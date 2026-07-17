#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sync_display_pos__15TWindowFukidasiFPv(void* p);
s32 approach__15TWindowFukidasiFPvf(void *arg0, f32 farg0);
void TWindowFukidasi__sub_802504A8(void *arg0);
f32 get_random_float__8TObjFishFv(f32);

void sync_display_pos__15TWindowFukidasiFPv(void* p) { *(f32*)((char*)p + 0x60) = *(f32*)((char*)p + 0x80); *(f32*)((char*)p + 0x64) = *(f32*)((char*)p + 0x80); }

extern f32 lbl_805DCD00;
extern f32 lbl_805DCD04;

s32 approach__15TWindowFukidasiFPvf(void *arg0, f32 farg0) {
    f32 temp_f31;

    temp_f31 = lbl_805DCD00 * (farg0 - M2C_FIELD(arg0, f32 *, 0x80));
    if (get_random_float__8TObjFishFv(temp_f31) < lbl_805DCD04) {
        M2C_FIELD(arg0, f32 *, 0x80) = farg0;
        return 1;
    }
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) (M2C_FIELD(arg0, f32 *, 0x80) + temp_f31);
    return 0;
}

void TWindowFukidasi__sub_802504A8(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x71) & 0x10)) {
        M2C_FIELD(arg0, s8 *, 0x70) = 7;
    }
}

}
