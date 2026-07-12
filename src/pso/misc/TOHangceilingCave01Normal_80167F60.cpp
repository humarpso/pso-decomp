#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOHangceilingCave01Normal__vt77(void *arg0);
void *TObjFish__sub_8001ED9C(s32, s32);
M2C_UNK fn_801682E4(void *, M2C_UNK, s32 *, f32);

extern const f64 lbl_80441850[];
extern s32 lbl_805D59D0;
extern s32 *lbl_805D59D4;
extern s32 lbl_805D59E4;
extern const f32 lbl_805DB650;
extern const f32 lbl_805DB654;
extern s32 lbl_805DB658;
extern const f32 lbl_805DB65C;

void TOHangceilingCave01Normal__vt77(void *arg0) {
    void *temp_r6;
    union { f64 d; u32 i[2]; } cvt;

    s32 *p;
    M2C_FIELD(arg0, void **, 0xF8) = TObjFish__sub_8001ED9C(lbl_805D59D0, lbl_805D59E4);
    p = lbl_805D59D4;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *p;
    M2C_FIELD(arg0, f32 *, 0x354) = (f32) (lbl_805DB65C * M2C_FIELD(arg0, f32 *, 0x350));
    fn_801682E4(arg0, 0, p, lbl_805DB65C);
    temp_r6 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) | lbl_805DB658);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB650;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DB654;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), u32 *, 4) - lbl_805DB654;
}

}
