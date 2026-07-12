#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_if_valid_state__12TObjEneReconFv(void);
M2C_UNK init_render_target__10TObjPlayerFPv();
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 TOKeyMachine01__sub_8029E764();

extern s32 lbl_805D65F0;
extern s32 lbl_805D65F4;
extern u32 lbl_805D65FC;

void alloc_if_valid_state__12TObjEneReconFv(void) {
    u32 temp_r3;

    if (TOKeyMachine01__sub_8029E764() != 0) {
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
