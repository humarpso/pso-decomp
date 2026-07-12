#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void warn_if_empty__17TWindowOptionCtrlFPv(u8 *arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);

void warn_if_empty__17TWindowOptionCtrlFPv(u8 *arg0) {
    if ((arg0 == NULL) || ((s8) *arg0 == 0)) {
        TAdSinglePlyChrSelectGC__sub_80132F2C(0xF, 0x19);
    }
}

}
