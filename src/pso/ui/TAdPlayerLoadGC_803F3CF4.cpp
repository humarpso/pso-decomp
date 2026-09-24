#include "types.h"
typedef s32 M2C_UNK;

extern "C" {
M2C_UNK OSFreeToHeap(int, void *);
s32 TLobby__sub_803F4AB4();
M2C_UNK TLobby__sub_803F4AD8(int);
M2C_UNK TLobby__sub_803F4B10(int);
M2C_UNK TLobby__sub_803F4B2C(int);
extern s32 __OSCurrHeap;
extern s32 lbl_805D79B0;
extern u32 lbl_805D79C0;

s32 TLobby__sub_803F3D60(void) {
    if (TLobby__sub_803F4AB4() == 0) {
        return -1;
    }
    if (((s32) lbl_805D79B0 == 1) && ((u32) lbl_805D79C0 != 0U)) {
        OSFreeToHeap((int) (__OSCurrHeap), (void *) (lbl_805D79C0));
        lbl_805D79C0 = 0U;
    }
    TLobby__sub_803F4AD8((int) (0));
    TLobby__sub_803F4B10((int) (0));
    TLobby__sub_803F4B2C((int) (2));
    return 0;
}

}
