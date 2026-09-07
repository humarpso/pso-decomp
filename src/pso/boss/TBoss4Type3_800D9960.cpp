#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800D9960_lbl_80500FA4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void TBoss4Type3__sub_800D9994(void *, s32, s32, s32, s32);
extern RecoveredGlobal_800D9960_lbl_80500FA4 lbl_80500FA4;
void TBoss4Type3__sub_800D9960(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

s32 *__dt__11TBoss4Type3FPvs(s32 *arg0, s16 arg1);
int free__11TOBoss4RockFUi(s32);
int __dl__FPv(s32 *);

typedef char RecoveredGlobal_800D9960_lbl_80500FA4_size[sizeof(RecoveredGlobal_800D9960_lbl_80500FA4) == 0xC ? 1 : -1];
void TBoss4Type3__sub_800D9960(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&lbl_80500FA4.value, s32 *, 0) = arg3;
    M2C_FIELD(&lbl_80500FA4.value, s32 *, 4) = arg4;
    TBoss4Type3__sub_800D9994(arg0, arg1, arg2, (s32) &lbl_80500FA4.value, 0);
}

s32 *__dt__11TBoss4Type3FPvs(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(*arg0);
        *arg0 = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
