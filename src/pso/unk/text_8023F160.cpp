#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8023F160_lbl_804CCE60 {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8023F18C_lbl_804CCE60 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
void TLobby__sub_800FD6A0(s32, u32);
extern RecoveredGlobal_8023F160_lbl_804CCE60 lbl_804CCE60;
void fn_8023F160(void);
M2C_UNK TLobby__sub_800FD6F8(void *, int);
extern RecoveredGlobal_8023F160_lbl_804CCE60 lbl_804CCE60;
void fn_8023F18C(void);
}

extern "C" {

typedef char RecoveredGlobal_8023F160_lbl_804CCE60_size[sizeof(RecoveredGlobal_8023F160_lbl_804CCE60) == 0x38 ? 1 : -1];
void fn_8023F160(void) {
    TLobby__sub_800FD6A0((s32) &lbl_804CCE60.value, 0x38U);
}
typedef char RecoveredGlobal_8023F18C_lbl_804CCE60_size[sizeof(RecoveredGlobal_8023F18C_lbl_804CCE60) == 0x38 ? 1 : -1];
void fn_8023F18C(void) {
    TLobby__sub_800FD6F8((void *) (&(*(RecoveredGlobal_8023F18C_lbl_804CCE60 *)&lbl_804CCE60).value), (int) (0x38));
}

}
