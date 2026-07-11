#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdMultiPlyChrSelectGC__sub_802C6488(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdMultiPlyChrSelectGC__sub_802C6920();
s32 TAdMultiPlyChrSelectGC__sub_80299454();

s32 TAdMultiPlyChrSelectGC__sub_802C6488(void) {
    if (TAdMultiPlyChrSelectGC__sub_80299454() != 0) {
        if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
            return TAdMultiPlyChrSelectGC__sub_802C6920();
        }
        return 0;
    }
    return 0;
}

}
