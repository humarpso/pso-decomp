#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80271400_lbl_804D0F78 { M2C_UNK value; u8 remaining[0x10]; };
typedef char RecoveredGlobal_80271400_lbl_804D0F78_size[sizeof(RecoveredGlobal_80271400_lbl_804D0F78) == 0x14 ? 1 : -1];

extern "C" {
s32 is_split_screen();
s32 __nw__7TObjectFUl(int);
s32 get_window_layout_position(int);
s32 create__19TWindowSimpleStatusFPvPv(int, void *);
s32 TWindowStatus__ct(int, int, void *, void *);
extern RecoveredGlobal_80271400_lbl_804D0F78 lbl_804D0F78;
s32 fn_80271400(s32 arg0);
}

extern "C" {

s32 fn_80271400(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r0;
    temp_r31 = get_window_layout_position((int) (0x1C));
    if (is_split_screen() != 0) {
        return create__19TWindowSimpleStatusFPvPv((int) (temp_r31), (void *) (arg0));
    }
    temp_r3 = __nw__7TObjectFUl((int) (0x78));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowStatus__ct((int) (temp_r3), (int) (temp_r31), (void *) (arg0), (void *) (&lbl_804D0F78.value));
    }
    return var_r0;
}

}
