#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8034A5D0_lbl_804EFF80 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 TAdMcCheckGC__ct(int, void *, void *);
extern RecoveredGlobal_8034A5D0_lbl_804EFF80 memcard_cursor_instance_table;
s32 fn_8033F314(s32 arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8034A5D0_lbl_804EFF80_size[sizeof(RecoveredGlobal_8034A5D0_lbl_804EFF80) == 0xC ? 1 : -1];
s32 fn_8033F314(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;
    temp_r30 = arg1 * 4;
    if ((u32) M2C_FIELD(&memcard_cursor_instance_table.value, M2C_UNK *, temp_r30) == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x3c));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = TAdMcCheckGC__ct((int) (temp_r3), (void *) (arg0), (void *) (arg1));
        }
        M2C_FIELD(&memcard_cursor_instance_table.value, M2C_UNK *, temp_r30) = var_r0;
    }
    return M2C_FIELD(&memcard_cursor_instance_table.value, M2C_UNK *, temp_r30);
}

}
