#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubSymbolChat__sub_80281814(void);
M2C_UNK TWindowSubSymbolChat__sub_80281840(void *);

extern void *lbl_805D6490;

void TWindowSubSymbolChat__sub_80281814(void) {
    void *temp_r3;
    temp_r3 = lbl_805D6490;
    if (temp_r3 != NULL) {
        TWindowSubSymbolChat__sub_80281840(temp_r3);
    }
}

}
