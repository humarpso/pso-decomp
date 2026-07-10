#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_status__20TWindowSubStatusDispFPv(u8 *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 fn_80244C0C(void *, void *);
M2C_UNK fn_80245F98(void *, s32);
M2C_UNK fn_80257BC0(void *, void *, s32);
M2C_UNK fn_8026C800(s32, s32);

void update_status__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20)) != 0U) {
        temp_r3 = fn_80244C0C(arg0, arg0 + 0x6C);
        fn_80245F98(arg0, temp_r3);
        fn_80257BC0(arg0, arg0 + 0x24, temp_r3);
        fn_8026C800(M2C_FIELD(arg0, s32 *, 0x68), temp_r3);
    }
}

}
