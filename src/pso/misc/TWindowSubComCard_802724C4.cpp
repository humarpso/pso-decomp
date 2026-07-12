#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_keyboard__17TWindowSubComCardFii(s32 arg0, s32 arg1);
s32 create_keyboard__17TWindowSubComCardFi(s32 arg0);
s32 create__17TWindowSubComCardFv(void);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 TWindowSubComCard__sub_8007A860(s32);
s32 TWindowSubComCard__sub_8007B798();
M2C_UNK TWindowMakeTeam__sub_80131A5C(s32);
M2C_UNK TWindowMakeTeam__sub_80131B54(s32, s32);
M2C_UNK TWindowMakeTeam__sub_80131BA0(s32, s32);
M2C_UNK TLobby__sub_80244D2C(f32);
s32 TWindowComCard__sub_80249C10(s32);
s32 TLobby__sub_80269D24(M2C_UNK, M2C_UNK *, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);

extern s32 lbl_805D53A0;

s32 create_keyboard__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, arg0, 0xC6, 3, 4, lbl_805D53A0);
    }
    TWindowMakeTeam__sub_80131BA0(var_r31, TWindowSubComCard__sub_8007A860(arg1));
    TWindowMakeTeam__sub_80131B54(var_r31, TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xBB)));
    TWindowMakeTeam__sub_80131A5C(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

extern s32 lbl_805D53A0;

s32 create_keyboard__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = TWindowSubComCard__sub_8007B798();
    temp_r31 = __nw__7TObjectFUl(0x2C);
    if (temp_r31 != 0) {
        temp_r31 = TKeyBoardControl__ct(temp_r31, arg0, 0xC6, 3, 4, lbl_805D53A0);
    }
    TWindowMakeTeam__sub_80131BA0(temp_r31, TWindowComCard__sub_80249C10(var_r30));
    TWindowMakeTeam__sub_80131B54(temp_r31, TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xBB)));
    TWindowMakeTeam__sub_80131A5C(temp_r31);
    destroy_keyboard__17TWindowSubComCardFPv(temp_r31);
    return temp_r31;
}

extern M2C_UNK lbl_8044F6CC[];
extern f32 lbl_805DD4FC;

s32 create__17TWindowSubComCardFv(void) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0x98));
    temp_r31 = TLobby__sub_80269D24(temp_r3, lbl_8044F6CC, 1);
    TLobby__sub_80244D2C(lbl_805DD4FC);
    return temp_r31;
}

}
