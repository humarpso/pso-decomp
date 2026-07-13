#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void assign_lobby_slot_if_flagged__10TObjPlayerFiPv(s32 arg0, void *arg1);
s32 TLobby__sub_8011AF58(u16);
M2C_UNK TObjPlayer__sub_801B811C(s32, void *);

extern s32 lbl_805D53A0;

void assign_lobby_slot_if_flagged__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) & 8) {
        M2C_FIELD(arg1, s32 *, 0x14) = TLobby__sub_8011AF58((u16) lbl_805D53A0);
        TObjPlayer__sub_801B811C(arg0, arg1);
    }
}

}
