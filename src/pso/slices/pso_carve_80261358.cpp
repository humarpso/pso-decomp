#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8025CBCC(void *);
M2C_UNK TKeyBoardControl__sub_802613F0(void *);

void TKeyBoardControl__sub_80261358(void *arg0) {
    void *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x40);
    temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_r3 != NULL) {
        fn_8025CBCC(temp_r3);
        TKeyBoardControl__sub_802613F0(arg0);
    }
}

}
