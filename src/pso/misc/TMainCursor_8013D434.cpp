#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TMainCursor__sub_8013D434(s32 arg0, s32 arg1);
M2C_UNK TMainCursor__sub_8013C7A0(s32, s32, M2C_UNK, s32);
s32 fn_8013E8C0(s32, s32);
s32 fn_8013F154(s32, M2C_UNK);
s32 fn_8013F168(s32);

void TMainCursor__sub_8013D434(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = arg1 * 0x124;
    temp_r30 = arg0 + temp_r4 + 0x5C;
    if (fn_8013E8C0(temp_r30, temp_r4) != 0) {
        temp_r31 = fn_8013F168(temp_r30 + 0x40);
        TMainCursor__sub_8013C7A0(temp_r30, fn_8013F154(temp_r30 + 0x40, 0), 0, temp_r31 - 1);
    }
}

}
