#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80292678(f32 farg0);
s32 TLobby__sub_802926EC(s32 arg0);
s32 TLobby__sub_80293080();

extern M2C_UNK lbl_804DB1F0[];
extern f32 lbl_805DD9D0;
extern f32 lbl_805DD9D4;

s32 TLobby__sub_80292678(f32 farg0) {
    if (TLobby__sub_80293080() == 0) {
        return 0;
    }
    if ((farg0 < lbl_805DD9D0) || (farg0 > lbl_805DD9D4)) {
        return 0;
    }
    M2C_FIELD(&lbl_804DB1F0, f32 *, 4) = farg0;
    return 1;
}

extern s32 lbl_805D5550;

s32 TLobby__sub_802926EC(s32 arg0) {
    if (TLobby__sub_80293080() == 0) {
        return 0;
    }
    lbl_805D5550 = arg0;
    return 1;
}

}
