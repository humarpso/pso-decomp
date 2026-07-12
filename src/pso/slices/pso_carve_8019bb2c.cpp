#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);
s32 TAdStorySelectGC__sub_8019DC14();
M2C_UNK TBoss4DarkFalz__sub_801F4830(M2C_UNK);
M2C_UNK init__23TAdSinglePlyChrSelectGCFv();
s32 fn_80219EE8();

void fn_8019BB2C(void) {
    s32 temp_r3;

    temp_r3 = TAdStorySelectGC__sub_8019DC14();
    switch (temp_r3) {
    case 0:
        if (fn_80219EE8() != 0) {
            TBoss4DarkFalz__sub_801F4830(0x3FE);
            TKeyBoardControl__sub_8000F9CC(0xC);
        } else {
            TKeyBoardControl__sub_8000F9CC(0x10);
        }
        break;
    case 1:
        TKeyBoardControl__sub_8000F9CC(8);
        break;
    }
    init__23TAdSinglePlyChrSelectGCFv();
}

}
