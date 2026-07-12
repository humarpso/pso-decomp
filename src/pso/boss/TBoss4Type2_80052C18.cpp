#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__sub_80052C18(void *arg0);
M2C_UNK TBoss4Type2__sub_80053504();
M2C_UNK TBoss4Type2__sub_800535A8();

void TBoss4Type2__sub_80052C18(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 1) {
            TBoss4Type2__sub_800535A8();
            return;
        }
        TBoss4Type2__sub_80053504();
    }
}

}
