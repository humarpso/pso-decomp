#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_800869A4(s32, s32, M2C_UNK, s32);
M2C_UNK fn_800D7DCC(s32, s32, s32, s32, f32);
s32 __nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;

void fn_800D90A4(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r3;

    temp_r3 = __nw__7TObjectFUl(0x38);
    if (temp_r3 != 0) {
        fn_800D7DCC(temp_r3, tl_05, arg0, TLobby__sub_800869A4(arg0, arg1, 0, arg2), farg0);
    }
}

}
