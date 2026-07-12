#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_progressive_ready__5TLogoFv(void);
u32 OSGetProgressiveMode();
M2C_UNK disable_progressive_mode__13TAdVIConfigGCFv();
u32 fn_8037CCE8();
s32 is_on_current_screen__11TCameraCtrlFPv(void *, M2C_UNK);

extern s8 lbl_8050E3B8[];

s32 check_progressive_ready__5TLogoFv(void) {
    if (fn_8037CCE8() == 0U) {
        disable_progressive_mode__13TAdVIConfigGCFv();
        return 0;
    }
    if ((OSGetProgressiveMode() != 1U) && (is_on_current_screen__11TCameraCtrlFPv(lbl_8050E3B8 + 0x20, 2) == 0)) {
        disable_progressive_mode__13TAdVIConfigGCFv();
        return 0;
    }
    return 1;
}

}
