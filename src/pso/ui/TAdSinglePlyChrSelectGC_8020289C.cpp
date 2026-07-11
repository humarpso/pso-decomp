#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_callbacks__23TAdSinglePlyChrSelectGCFv(void);
void register_callback__23TAdSinglePlyChrSelectGCFis(void*, int);
void __dl__FPv(void*);

extern u32 lbl_805D5F5C;
extern u32 lbl_805D5F70;

void free_callbacks__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F5C != 0U) {
        register_callback__23TAdSinglePlyChrSelectGCFis((void*)lbl_805D5F5C, 1);
        lbl_805D5F5C = 0U;
    }
    if ((u32) lbl_805D5F70 != 0U) {
        __dl__FPv((void*)lbl_805D5F70);
        lbl_805D5F70 = 0U;
    }
}

}
