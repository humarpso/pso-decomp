#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void turn_to_target__18TObjEneRe4SorcererFPv(void *arg0);
M2C_UNK TObjEneEpsilon__sub_800B96A4();
f64 fn_80019760(f32, f32);
M2C_UNK fn_800B99D8(void *);
s32 fn_801423A4(s32, s32, M2C_UNK);

extern const f64 lbl_8043D408;

void turn_to_target__18TObjEneRe4SorcererFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    fn_800B99D8(arg0);
    M2C_FIELD(arg0, s32 *, 0x60) = fn_801423A4(M2C_FIELD(arg0, s32 *, 0x60), (s32) (lbl_8043D408 * fn_80019760(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), 0xA00);
}

}
