#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_render_target_singleton__10TObjPlayerFv(void);
s32 TOKeyMachine01__sub_802034A8();
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK init_render_target__10TObjPlayerFPv();

extern u32 lbl_805D4EE8;

void init_render_target_singleton__10TObjPlayerFv(void) {
    u32 temp_r3;

    lbl_805D4EE8 = 0U;
    if (TOKeyMachine01__sub_802034A8() == 0x21) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
        lbl_805D4EE8 = temp_r3;
        if (temp_r3 != 0U) {
            init_render_target__10TObjPlayerFPv();
        }
    }
}

}
