#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TBoss3VoloptCtrl__sub_80040BDC(void *arg0, s16 arg1);
void *init_object__16TBoss3VoloptCtrlFPv(void *arg0);
void dispatch_state__16TBoss3VoloptCtrlFi(s32 arg0);
M2C_UNK TLobby__sub_8020C07C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TLobby__sub_8020C9C8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_800196EC();
void __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void disallow_rendering__7TObjectFv(void *);

extern M2C_UNK lbl_80483B88[];

void *TBoss3VoloptCtrl__sub_80040BDC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483B88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_02;
extern M2C_UNK lbl_80483B88[];

void *init_object__16TBoss3VoloptCtrlFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_02);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483B88;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

void dispatch_state__16TBoss3VoloptCtrlFi(s32 arg0) {
    switch (arg0) {
    case 0:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 1);
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 3);
        return;
    case 1:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 3);
    case 3:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 2);
        TLobby__sub_8020C07C(TObjPlayer__sub_800196EC(), 0, 2, -0x11, 0);
        return;
    case 2:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 3);
    case 4:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 2);
        return;
    case 5:
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 1);
        TLobby__sub_8020C9C8(TObjPlayer__sub_800196EC(), 0, 3);
        return;
    }
}

}
