#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjFish__sub_8001973C(f32);
M2C_UNK fn_80036160(void *, f32, f32, f32, f32);
M2C_UNK fn_800361A4(void *, f32, f32, f32);
extern const f32 lbl_805D82F0;
extern const f32 lbl_805D8300;
extern const f32 lbl_805D8330;
extern const f32 lbl_805D8348;
extern const f32 lbl_805D8358;
extern const f32 lbl_805D83AC;
extern const f32 lbl_805D83DC;

void fn_800348E4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x660) = 0;
    fn_800361A4(arg0 + 0x664, lbl_805D82F0, TObjFish__sub_8001973C(lbl_805D83DC - M2C_FIELD(arg0, f32 *, 0x38)), lbl_805D8330);
    fn_80036160(arg0 + 0x684, lbl_805D8348, TObjFish__sub_8001973C(lbl_805D8358 - M2C_FIELD(arg0, f32 *, 0x40)), lbl_805D8300, lbl_805D83AC);
}

}
