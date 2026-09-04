#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_global_state__14TOKeyMachine01Fv();
s32 get_array_entry__20TWindowSubStatusDispFPvi(s32, M2C_UNK);
s32 get_width__11TWindowCtrlFPv();
M2C_UNK TWindowHelpItem__sub_80270060(s32, s32);

void update_status_help_item(s32 arg0) {
    s32 var_r31;

    var_r31 = get_width__11TWindowCtrlFPv();
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        var_r31 = 0;
    }
    TWindowHelpItem__sub_80270060(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), var_r31);
}

}
