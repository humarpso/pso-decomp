#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

    int memset(void*, void*, void*);
    extern unsigned char lbl_8050DAD0[];
    extern int lbl_805D5878;
void fn_8015472C(void) { memset(lbl_8050DAD0, (void*)0, (void*)128); lbl_805D5878 = 0; }

void fn_80154764(void *arg0, s32 arg1, u32 arg2) {
    arg0 = M2C_FIELD(arg0, void **, 0xA4);
    if (arg0 != 0) {
        arg0 = (char*)arg0 + (arg1 * 0x2C);
        M2C_FIELD(arg0, u32 *, 0x18) &= ~arg2;
    }
}

}
