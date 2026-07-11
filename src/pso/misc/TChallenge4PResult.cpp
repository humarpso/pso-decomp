#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_entries__18TChallenge4PResultFii(s32 arg0, s32 arg1);
M2C_UNK TChallenge4PResult__sub_8034B694(s32, s32, s32);

extern M2C_UNK TChallenge4PResult__data_805436A8[];

void update_entries__18TChallenge4PResultFii(s32 arg0, s32 arg1) {
    s32 var_r29 = 0;
    M2C_UNK *var_r30 = TChallenge4PResult__data_805436A8;
    s32 var_r31 = 0;
    do {
        u32 v = (u32)var_r30[var_r31];
        if (v != 0U) {
            TChallenge4PResult__sub_8034B694((s32)v, arg0, arg1);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 < 4);
}

}
