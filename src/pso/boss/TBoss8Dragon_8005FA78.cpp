#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TBoss8Dragon__sub_8005FA78(void *arg0, s32 arg1, f32 farg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005FA78(void *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x474) = (f32) ((farg0 * TBoss8Dragon__sub_803D64C0(arg1)) + M2C_FIELD(arg0, f32 *, 0x474));
    M2C_FIELD(arg0, f32 *, 0x47C) = (f32) ((farg0 * TBoss8Dragon__sub_803D64DC(arg1)) + M2C_FIELD(arg0, f32 *, 0x47C));
}
#pragma pop

}
