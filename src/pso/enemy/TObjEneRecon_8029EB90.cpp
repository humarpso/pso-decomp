#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__12TObjEneReconFv(void);
M2C_UNK reset_lobby_subobject__10TObjPlayerFPv(void*);
void __dl__FPv(void*);
s32 is_state_active__14TOKeyMachine01Fv();

extern s32 lbl_805D65F4;
extern u32 lbl_805D65FC;

void destroy_instance__12TObjEneReconFv(void) {
    lbl_805D65F4 = 0;
    if (is_state_active__14TOKeyMachine01Fv() != 0) {
        if ((u32) lbl_805D65FC != 0U) {
            reset_lobby_subobject__10TObjPlayerFPv((void*)lbl_805D65FC);
        }
        if ((u32) lbl_805D65FC != 0U) {
            __dl__FPv((void*)lbl_805D65FC);
            lbl_805D65FC = 0U;
        }
    }
}

}
