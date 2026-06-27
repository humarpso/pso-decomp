#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8000F8FC();
M2C_UNK fn_80211700();
M2C_UNK THunterGuildSeqOffline__sub_80213374();
M2C_UNK fn_80213C7C();
M2C_UNK fn_80214A34();
M2C_UNK TQuestListOnline__sub_80215498();

void fn_80211EC4(void) {
    if (fn_8000F8FC() == 0xE) {
        fn_80211700();
        THunterGuildSeqOffline__sub_80213374();
    }
    if (fn_8000F8FC() == 0xF) {
        fn_80213C7C();
        fn_80214A34();
        TQuestListOnline__sub_80215498();
    }
}

}
