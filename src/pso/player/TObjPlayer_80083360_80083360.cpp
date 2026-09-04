#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_singleton__10TObjPlayerFv(void);
void init_render_target_singleton__10TObjPlayerFv(void);
void __dl__FPv(void*);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_render_target__10TObjPlayerFPv();
M2C_UNK reset_lobby_subobject__10TObjPlayerFPv(void*);

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

extern u32 lbl_805D4EE8;

void init_render_target_singleton__10TObjPlayerFv(void) {
    u32 temp_r3;

    lbl_805D4EE8 = 0U;
    if (get_global_state__14TOKeyMachine01Fv() == 0x21) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
        lbl_805D4EE8 = temp_r3;
        if (temp_r3 != 0U) {
            init_render_target__10TObjPlayerFPv();
        }
    }
}

}
