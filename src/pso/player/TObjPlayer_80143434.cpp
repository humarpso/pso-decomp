#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80143434(void *arg0, s16 arg1);
M2C_UNK TObjPlayer__sub_80142B8C(void *, s16);
M2C_UNK TObjPlayer__sub_8014394C(void *, f64);
void *fn_80143978(void *, s16);

extern const f64 lbl_8043F2D8[];
extern const f32 lbl_805DB168;

void TObjPlayer__sub_80143434(void *arg0, s16 arg1) {
    void *temp_r3;
    f32 conv;

    M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    M2C_FIELD(arg0, s16 *, 0xBA) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    TObjPlayer__sub_80142B8C(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    temp_r3 = fn_80143978(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(temp_r3, f32 *, 8);
    M2C_FIELD(arg0, s16 *, 0xF4) = (s16) M2C_FIELD(temp_r3, s16 *, 0);
    conv = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), u32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC4) = conv;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFB);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(temp_r3, s32 *, 0xC);
    M2C_FIELD(arg0, void **, 0xE4) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, void **, 0xE8) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, s16 *, 0xBC) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20000000) {
        TObjPlayer__sub_8014394C(arg0, conv);
    }
}

}
