#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjPlayer__sub_800196A4(void);
s32 TObjPlayer__sub_800196EC(void);
s32 TObjPlayer__sub_800196F4(void* p);
s32 TObjPlayer__sub_800196FC(void);
u32 fn_8007C3E0();

extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;

f32 TObjPlayer__sub_800196A4(void) {
    return (f32) (fn_8007C3E0() >> 0x10U) / lbl_805D7D3C;
}

extern s32 lbl_805D5FC0;

s32 TObjPlayer__sub_800196EC(void) {
    return lbl_805D5FC0;
}

s32 TObjPlayer__sub_800196F4(void* p) { return *(s32*)((char*)p + 0x3e4); }

extern s32 lbl_805D5D6C;

s32 TObjPlayer__sub_800196FC(void) {
    return lbl_805D5D6C;
}

}
