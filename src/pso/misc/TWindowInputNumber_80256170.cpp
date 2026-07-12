#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__18TWindowInputNumberFPvi(void *arg0, s32 arg1);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
u32 fn_802880BC(u32, s32, s16);

extern const f32 lbl_805DCE18;

struct WindowNum { char pad[0x70]; };
void create__18TWindowInputNumberFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) {
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
        if (var_r0 != 0U) {
            u32 saved = var_r0;
            var_r0 = fn_802880BC(saved, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x70) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DCE18);
    }
}

}
