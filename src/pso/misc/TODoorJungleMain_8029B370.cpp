#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_resources__16TODoorJungleMainFv(void);
void fn_8001FE7C(void*, int);
M2C_UNK fn_8007EBB4(u32);
M2C_UNK fn_803DA16C(void*);

extern u32 lbl_805D65B8;
extern u32 lbl_805D65BC;

void free_static_resources__16TODoorJungleMainFv(void) {
    if ((u32) lbl_805D65BC != 0U) {
        fn_803DA16C((void*)lbl_805D65BC);
        fn_8007EBB4(lbl_805D65BC);
        lbl_805D65BC = 0U;
    }
    if ((u32) lbl_805D65B8 != 0U) {
        fn_8001FE7C((void*)lbl_805D65B8, 1);
        lbl_805D65B8 = 0U;
    }
}

}
