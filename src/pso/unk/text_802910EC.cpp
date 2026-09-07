#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80291138_lbl_804D9668 {
    M2C_UNK value;
    u8 remaining[0x12D8];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_803DA16C(void *);
extern RecoveredGlobal_80291138_lbl_804D9668 lbl_804D9668;
extern u32 lbl_805D6568;
void fn_80291138(void);
}

extern "C" {

typedef char RecoveredGlobal_80291138_lbl_804D9668_size[sizeof(RecoveredGlobal_80291138_lbl_804D9668) == 0x12DC ? 1 : -1];
void fn_80291138(void) {
    if ((u32) lbl_805D6568 != 0U) {
        queue_destruction__7TObjectFv((void *) (lbl_805D6568));
    }
    lbl_805D6568 = 0U;
    TLobby__sub_803DA16C((void *) (&lbl_804D9668.value));
}

}
