#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80420C5C_lbl_805C1DF0 {
    s16 value;
    u8 remaining[0xE];
};

extern "C" {
M2C_UNK TLobby__sub_803F87C4(void *);
extern RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;
s32 TLobby__sub_80420C5C(void);
}

extern "C" {

typedef char RecoveredGlobal_80420C5C_lbl_805C1DF0_size[sizeof(RecoveredGlobal_80420C5C_lbl_805C1DF0) == 0x10 ? 1 : -1];
s32 TLobby__sub_80420C5C(void) {
    TLobby__sub_803F87C4((void *) (&lbl_805C1DF0.value));
    lbl_805C1DF0.value = 0;
    return 0;
}

}
