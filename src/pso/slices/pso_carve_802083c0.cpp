#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8007EBB4(void*);
extern s32 TLobby__data_805D6068;
extern s32 lbl_805D606C;
extern s32 lbl_805D6070;
extern u32 lbl_805D6074;

void fn_802083C0(void) {
    if ((u32) lbl_805D6074 != 0U) {
        fn_8007EBB4((void*)lbl_805D6074);
        lbl_805D6074 = 0U;
        lbl_805D6070 = 0;
        lbl_805D606C = 0;
        TLobby__data_805D6068 = 0;
    }
}

}
