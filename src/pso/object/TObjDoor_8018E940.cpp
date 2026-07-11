#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

void update_anim__8TObjDoorFPv(void *arg0);
f32 fn_803D64C0(s32);

extern f32 lbl_805DBDD0;
extern f32 lbl_805DBDD4;

void update_anim__8TObjDoorFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + 0x300);
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBDD4 * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0xC8)) + lbl_805DBDD0;
}

}
