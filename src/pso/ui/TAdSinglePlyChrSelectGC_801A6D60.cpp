#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TWindowShortListCtrl__check_controller_button(void *arg0);
u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 pack_color_bits__13TRaderMapCoreFii();
s32 pack_flags__13TRaderMapCoreFii();

u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x4C) & pack_color_bits__13TRaderMapCoreFii()) != 0);
}

u8 TWindowShortListCtrl__check_controller_button(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x4C) & pack_flags__13TRaderMapCoreFii()) != 0);
}

}
