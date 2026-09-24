#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8036A648_lbl_804F351C {
    M2C_UNK value;
    u8 remaining[0xC0];
};

struct RecoveredGlobal_8036A67C_lbl_804F3458 {
    M2C_UNK value;
    u8 remaining[0xC0];
};

extern "C" {
extern RecoveredGlobal_8036A648_lbl_804F351C lbl_804F351C;
s32 fn_8036A648(s32 arg0);
extern RecoveredGlobal_8036A67C_lbl_804F3458 lbl_804F3458;
s32 fn_8036A67C(s32 arg0);
s32 check_flag_index_set(s32);
s32 fn_8036A620(s32 idx);
}

extern "C" {

typedef char RecoveredGlobal_8036A648_lbl_804F351C_size[sizeof(RecoveredGlobal_8036A648_lbl_804F351C) == 0xC4 ? 1 : -1];

s32 fn_8036A620(s32 idx) {
    if (check_flag_index_set(idx) == 0) {
        return 1;
    }
    return 1;
}

s32 fn_8036A648(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0x31) {
        return 0;
    }
    return M2C_FIELD(&lbl_804F351C.value, M2C_UNK *, (arg0 * 4));
}
typedef char RecoveredGlobal_8036A67C_lbl_804F3458_size[sizeof(RecoveredGlobal_8036A67C_lbl_804F3458) == 0xC4 ? 1 : -1];
s32 fn_8036A67C(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0x31) {
        return 0;
    }
    return M2C_FIELD(&lbl_804F3458.value, M2C_UNK *, (arg0 * 4));
}

}
