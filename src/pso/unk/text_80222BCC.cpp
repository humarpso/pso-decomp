#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80222BCC_lbl_804CA27C {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_80222BCC_lbl_804CA27C lbl_804CA27C;
u8 *fn_80222BCC(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80222BCC_lbl_804CA27C_size[sizeof(RecoveredGlobal_80222BCC_lbl_804CA27C) == 0xC ? 1 : -1];
u8 *fn_80222BCC(u8 *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_804CA27C.value;
    M2C_FIELD(arg0, s32 *, 0x20C) = 0;
    memset((void *) (arg0 + 4), (int) (0), (int) (0x200));
    M2C_FIELD(arg0, s32 *, 0x204) = 0;
    M2C_FIELD(arg0, s32 *, 0x208) = 0;
    return arg0;
}

}
