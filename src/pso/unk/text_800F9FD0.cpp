#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Node_800F9FF4 { u32 flags; s32 id; u8 pad8[0x30]; Node_800F9FF4 *next; };

struct Key_800F9FF4 { u8 pad0[4]; s32 id; };

extern "C" {
extern s32 lbl_805D5360;
extern s32 lbl_805D536C;
bool TLobby__sub_800F9FD0(void);
extern s32 lbl_805D5360;
s32 TLobby__sub_800F9FF4(Key_800F9FF4 *key);
}

extern "C" {

bool TLobby__sub_800F9FD0(void) {
    if ((s32) lbl_805D536C != 0) {
        return 1;
    }
    return lbl_805D5360 != 0;
}
s32 TLobby__sub_800F9FF4(Key_800F9FF4 *key) {
    Node_800F9FF4 *n;
    if (key == NULL) {
        return 0;
    }
    for (n = (Node_800F9FF4 *)lbl_805D5360; n != NULL; n = n->next) {
        if (n->id == key->id) {
            n->flags |= 0x200;
            return 1;
        }
    }
    return 0;
}

}
