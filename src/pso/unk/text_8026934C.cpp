#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 __nw__7TObjectFUl(int);
s32 TWindowMeseta__ct(int, int, void *, int);
s32 get_window_layout_position(int);
s32 create_meseta_window(s32 arg0);
}

extern "C" {

#pragma push
#pragma scheduling off
s32 create_meseta_window(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;
    var_r30 = __nw__7TObjectFUl((int) (0x74));
    if (var_r30 != 0) {
        temp_r31 = get_message_10__20TWindowSubStatusDispFPv((int) (0x82));
        var_r30 = TWindowMeseta__ct((int) (var_r30), (int) (get_window_layout_position((int) (0x28))), (void *) (arg0), (int) (temp_r31));
    }
    return var_r30;
}
#pragma pop

}
