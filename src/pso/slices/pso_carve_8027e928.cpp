#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001DA88();
s32 fn_8001DB44();
M2C_UNK fn_800740FC(s32);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK TQuestThread__sub_801F64BC(s32);
M2C_UNK fn_80265DEC(s32, f32, f32);
M2C_UNK fn_802661D4(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_80266508(M2C_UNK, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);
extern const f32 lbl_805DD6C8;
extern const f32 lbl_805DD6CC;

s32 TWindowSubShortMail__sub_8027E928(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = fn_8026CBB8(0xA1);
    temp_r31 = fn_80266508(temp_r3, 2);
    if (fn_8001DB44() != 0) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x105), 0, 0);
        TObjCityMainWarp__sub_80266354(temp_r31, fn_8001DA88(), 0, 0);
    } else {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x106), 0, 0);
        fn_802661D4(temp_r31, fn_8001DA88(), 0, 0);
    }
    fn_800740FC(temp_r31);
    TQuestThread__sub_801F64BC(temp_r31);
    fn_80265DEC(temp_r31, lbl_805DD6C8, lbl_805DD6CC);
    return temp_r31;
}

}
