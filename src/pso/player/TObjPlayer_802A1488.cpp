#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_lobby_header__10TObjPlayerFPvi(s32 *arg0, s32 arg1);
s32 TAdSelectTxtGC__sub_802A16C0(void *);
M2C_UNK copy_header_struct__6TLobbyFPvPv(void *, void *);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK TObjPlayer__sub_802C3D38(void *, void *);

void copy_lobby_header__10TObjPlayerFPvi(s32 *arg0, s32 arg1) {
    set_flags__10TObjPlayerFPvUi((void *) ((s8 *)arg0 + 0x428), (int) (1));
    *arg0 = TAdSelectTxtGC__sub_802A16C0((void *) (arg1));
    copy_header_struct__6TLobbyFPvPv((void *) ((s8 *)arg0 + 4), (void *) ((s8 *)arg1 + 0xDAC));
    TObjPlayer__sub_802C3D38((void *) (arg1), (void *) ((s8 *)arg0 + 0xC));
}

}
