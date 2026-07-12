#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void append_swapped_u32__6TLobbyFPv(s32 *arg0);
void append_entity_entry__6TLobbyFi(s32 arg0);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK TLobby__sub_803DE778(s32, s32 *, M2C_UNK);

extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void append_swapped_u32__6TLobbyFPv(s32 *arg0) {
    s32 sp8;

    if ((u32) lbl_805D60C4 != 0U) {
        sp8 = *arg0;
        bswap_32__FPUl(&sp8);
        TLobby__sub_803DE778((s32)(lbl_805D60C4 + lbl_805D60C8), (s32 *)(&sp8), (M2C_UNK)(4));
        lbl_805D60C8 += 4;
    }
}

extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void append_entity_entry__6TLobbyFi(s32 arg0) {
    if ((u32) lbl_805D60C4 != 0U) {
        TLobby__sub_803DE778((s32)(lbl_805D60C4 + lbl_805D60C8), (s32 *)(arg0), (M2C_UNK)(1));
        lbl_805D60C8 += 1;
    }
}

}
