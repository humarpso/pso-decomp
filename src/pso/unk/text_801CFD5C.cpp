#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805DC388;
void calc_movement_target__10TObjPlayerFPviPvPv(u8 *arg0, s32 arg1, f32 *arg2, f32 *arg3);
}

extern "C" {

#pragma push
#pragma fp_contract on
void calc_movement_target__10TObjPlayerFPviPvPv(u8 *arg0, s32 arg1, f32 *arg2, f32 *arg3) {
    *arg2 = (lbl_805DC388 * TBoss8Dragon__sub_803D64C0(arg1)) + M2C_FIELD(arg0, f32 *, 0x38);
    *arg3 = (lbl_805DC388 * TBoss8Dragon__sub_803D64DC(arg1)) + M2C_FIELD(arg0, f32 *, 0x40);
}
#pragma pop

}
