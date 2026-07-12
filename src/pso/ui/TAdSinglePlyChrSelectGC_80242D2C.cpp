#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_slots__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80243070(M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8037DD44(s32, M2C_UNK);

void init_slots__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    TAdSinglePlyChrSelectGC__sub_80243070(2);
    var_r31 = 0;
    do {
        TAdSinglePlyChrSelectGC__sub_8037DD44(var_r31, 0);
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
