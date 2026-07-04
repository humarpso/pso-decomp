#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801DB684(s32, s32, s32);
s32 fn_8020102C();
s32 fn_80201058();
extern s32 lbl_805D5580;

void TLobby__sub_8013731C(void) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = fn_8020102C();
    temp_r4 = fn_80201058();
    fn_801DB684(lbl_805D5580, temp_r4, temp_r31);
}

}
