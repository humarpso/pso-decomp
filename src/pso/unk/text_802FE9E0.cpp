#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FE9E0_lbl_804E6218 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_802FEA0C_lbl_804E6218 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
void TLobby__sub_800FD6A0(s32, u32);
extern RecoveredGlobal_802FE9E0_lbl_804E6218 lbl_804E6218;
void fn_802FE9E0(void);
M2C_UNK run_load_callback_table(void *, int);
extern RecoveredGlobal_802FE9E0_lbl_804E6218 lbl_804E6218;
void fn_802FEA0C(void);
}

extern "C" {

typedef char RecoveredGlobal_802FE9E0_lbl_804E6218_size[sizeof(RecoveredGlobal_802FE9E0_lbl_804E6218) == 0x28 ? 1 : -1];
void fn_802FE9E0(void) {
    TLobby__sub_800FD6A0((s32) &lbl_804E6218.value, 0x28U);
}
typedef char RecoveredGlobal_802FEA0C_lbl_804E6218_size[sizeof(RecoveredGlobal_802FEA0C_lbl_804E6218) == 0x28 ? 1 : -1];
void fn_802FEA0C(void) {
    run_load_callback_table((void *) (&(*(RecoveredGlobal_802FEA0C_lbl_804E6218 *)&lbl_804E6218).value), (int) (0x28));
}

}
