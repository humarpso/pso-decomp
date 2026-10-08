#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80338F3C_lbl_804EF4CC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80338F3C_lbl_804EF4E0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
u8 * get_window_layout_position(s32);
M2C_UNK ct_helper__20TWindowSubStatusDispFPviiii(void *, int, void *, int, void *);
extern RecoveredGlobal_80338F3C_lbl_804EF4CC lbl_804EF4CC;
extern RecoveredGlobal_80338F3C_lbl_804EF4E0 lbl_804EF4E0;
u8 *fn_80338F3C(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_80338F3C_lbl_804EF4CC_size[sizeof(RecoveredGlobal_80338F3C_lbl_804EF4CC) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80338F3C_lbl_804EF4E0_size[sizeof(RecoveredGlobal_80338F3C_lbl_804EF4E0) == 0x20 ? 1 : -1];
u8 *fn_80338F3C(u8 *arg0, s32 arg1) {
    ct_helper__20TWindowSubStatusDispFPviiii((void *) (arg0), (int) (get_window_layout_position(0xB0)), (void *) (arg1), (int) (0x40), (void *) (&lbl_804EF4CC.value));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804EF4E0.value;
    return arg0;
}

}
