#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK OSFreeToHeap(int, void *);
s32 TLobby__sub_803F4AB4();
M2C_UNK TLobby__sub_803F4AD8(int);
M2C_UNK TLobby__sub_803F4B10(int);
M2C_UNK TLobby__sub_803F4B2C(int);
extern s32 __OSCurrHeap;
extern s32 lbl_805D79B0;
extern u32 lbl_805D79C0;
s32 TLobby__sub_803F3D60(void);
}

extern "C" {

s32 get_load_state__15TAdPlayerLoadGCFv(void);
s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1);

extern M2C_UNK lbl_805D4700;

s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1) {
    if (((arg0 != 0) && (arg0 != 1)) || (arg1 < 0) || (arg1 > 2)) {
        return 0;
    }
    if (arg1 != 2) {
        (&lbl_805D4700)[arg0] = arg1;
    }
    return (&lbl_805D4700)[arg0];
}

extern s32 lbl_805D7940;

s32 get_load_state__15TAdPlayerLoadGCFv(void) {
    return lbl_805D7940;
}
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
