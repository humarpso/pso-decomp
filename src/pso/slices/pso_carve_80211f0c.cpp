#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8000F8FC();
M2C_UNK fn_8021170C();
M2C_UNK THunterGuildSeqOffline__sub_8021339C();
M2C_UNK fn_80213CA4();
M2C_UNK fn_80214A5C();
M2C_UNK TQuestListOnline__sub_802155B4();

void fn_80211F0C(void) {
    if (fn_8000F8FC() == 0xE) {
        THunterGuildSeqOffline__sub_8021339C();
        fn_8021170C();
    }
    if (fn_8000F8FC() == 0xF) {
        TQuestListOnline__sub_802155B4();
        fn_80214A5C();
        fn_80213CA4();
    }
}

}
