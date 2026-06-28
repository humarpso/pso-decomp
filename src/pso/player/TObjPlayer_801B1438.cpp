#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801B1438(void *arg0, f32 farg0);
s32 fn_80055694(void *);
M2C_UNK fn_80142D50(void *, s32, s32, f32);
M2C_UNK fn_803D8C7C(M2C_UNK, s32);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();

void TObjPlayer__sub_801B1438(void *arg0, f32 farg0) {
    fn_803D9B2C();
    fn_803D8C7C(0, fn_80055694(arg0));
    fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    fn_80142D50(arg0, M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, s32 *, 0xE0), farg0);
    fn_803D9B78();
}

}
