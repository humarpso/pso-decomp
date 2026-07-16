#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_803CCE9C(void *);
extern s32 lbl_805D75D4;
extern s32 lbl_805D75D8;
extern s32 lbl_805D75DC;
extern s32 lbl_805D75E8;

void TLobby__sub_803CD804(void) {
    TLobby__sub_803CCE9C((void *) (lbl_805D75D8));
    lbl_805D75D8 = 0;
    lbl_805D75D4 = -1;
    lbl_805D75DC = 0;
    lbl_805D75E8 = 0;
}

}
