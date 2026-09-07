#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8036AF40_lbl_804F3610 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
extern M2C_UNK lbl_804F3610[];
void TBoss8Dragon__sub_8036AF40(M2C_UNK **arg0);
}

extern "C" {

M2C_UNK **TBoss8Dragon__sub_8036AEF8(M2C_UNK **arg0, s16 arg1);
void fn_8036B18C(void);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804F3610[];

M2C_UNK **TBoss8Dragon__sub_8036AEF8(M2C_UNK **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = lbl_804F3610;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D7000;

typedef char RecoveredGlobal_8036AF40_lbl_804F3610_size[sizeof(RecoveredGlobal_8036AF40_lbl_804F3610) == 0x18 ? 1 : -1];
void TBoss8Dragon__sub_8036AF40(M2C_UNK **arg0) {
    *arg0 = &(*(RecoveredGlobal_8036AF40_lbl_804F3610 *)&lbl_804F3610).value;
}

void fn_8036B18C(void) {
    s32 temp_r3;

    temp_r3 = lbl_805D7000 + 1;
    lbl_805D7000 = temp_r3;
    if (temp_r3 >= 0x1E) {
        lbl_805D7000 = temp_r3 - 0x1E;
    }
}

}
