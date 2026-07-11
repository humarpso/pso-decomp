#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_bits__18TObjEneRe4SorcererFv(void);
M2C_UNK TObjEneRe4Bit__sub_800EDAB0();
void fn_8001FE7C(void*, int);
void fn_800F5C8C(void*, int);

extern u32 lbl_805D52E0;
extern u32 TObjEneRe4Sorcerer__data_805D52F4;

void free_bits__18TObjEneRe4SorcererFv(void) {
    if ((u32) TObjEneRe4Sorcerer__data_805D52F4 != 0U) {
        fn_800F5C8C((void*)TObjEneRe4Sorcerer__data_805D52F4, 1);
        TObjEneRe4Sorcerer__data_805D52F4 = 0U;
    }
    TObjEneRe4Bit__sub_800EDAB0();
    if ((u32) lbl_805D52E0 != 0U) {
        fn_8001FE7C((void*)lbl_805D52E0, 1);
        lbl_805D52E0 = 0U;
    }
}

}
