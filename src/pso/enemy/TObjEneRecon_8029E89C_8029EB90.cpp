#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_if_valid_state__12TObjEneReconFv(void);
void destroy_instance__12TObjEneReconFv(void);
void __dl__FPv(void*);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK init_render_target__10TObjPlayerFPv();
s32 is_state_active__14TOKeyMachine01Fv();
M2C_UNK reset_lobby_subobject__10TObjPlayerFPv(void*);

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

extern s32 lbl_805D65F0;
extern s32 lbl_805D65F4;
extern u32 lbl_805D65FC;

void alloc_if_valid_state__12TObjEneReconFv(void) {
    u32 temp_r3;

    if (is_state_active__14TOKeyMachine01Fv() != 0) {
        lbl_805D65F4 = 0;
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
        lbl_805D65FC = temp_r3;
        if (temp_r3 != 0U) {
            init_render_target__10TObjPlayerFPv();
            lbl_805D65F0 = lbl_805D65FC + 0x1C;
        }
    }
}

}
