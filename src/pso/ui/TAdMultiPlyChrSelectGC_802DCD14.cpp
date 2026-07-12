#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802DCD14(void *arg0);
M2C_UNK TAdMultiChgGameModeGC__sub_8023EB84();
M2C_UNK TAdMultiChgGameModeGC__sub_8023EC14();
M2C_UNK TAdMultiChgGameModeGC__sub_8023ECA4();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 TAdMultiPlyChrSelectGC__sub_802E011C();

void TAdMultiPlyChrSelectGC__sub_802DCD14(void *arg0) {
    s32 temp_r0;

    TAdMultiPlyChrSelectGC__sub_802C6A10();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_r0) {
    case 0:
        if (TAdMultiPlyChrSelectGC__sub_802E011C() != 0) {
            TAdMultiChgGameModeGC__sub_8023EB84();
            return;
        }
        TAdMultiChgGameModeGC__sub_8023ECA4();
        return;
    case 1:
        TAdMultiChgGameModeGC__sub_8023EC14();
        return;
    case 2:
        TAdMultiChgGameModeGC__sub_8023EB84();
        return;
    }
}

}
