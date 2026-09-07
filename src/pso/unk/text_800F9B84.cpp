#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800F9B84_lbl_8050113C {
    M2C_UNK value;
    u8 remaining[0x38];
};

extern "C" {
void delete_children__7TObjectFv(void *);
extern RecoveredGlobal_800F9B84_lbl_8050113C lbl_8050113C;
void TLobby__sub_800F9B84(void);
}

extern "C" {

typedef char RecoveredGlobal_800F9B84_lbl_8050113C_size[sizeof(RecoveredGlobal_800F9B84_lbl_8050113C) == 0x3C ? 1 : -1];
void TLobby__sub_800F9B84(void) {
    delete_children__7TObjectFv(&lbl_8050113C.value);
}

}
