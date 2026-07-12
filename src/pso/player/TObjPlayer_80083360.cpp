#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_singleton__10TObjPlayerFv(void);
M2C_UNK reset_lobby_subobject__10TObjPlayerFPv(void*);
void __dl__FPv(void*);

extern u32 lbl_805D4EE8;

void free_singleton__10TObjPlayerFv(void) {
    if ((u32) lbl_805D4EE8 != 0U) {
        reset_lobby_subobject__10TObjPlayerFPv((void*)lbl_805D4EE8);
    }
    if ((u32) lbl_805D4EE8 != 0U) {
        __dl__FPv((void*)lbl_805D4EE8);
        lbl_805D4EE8 = 0U;
    }
}

}
