#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_keyboard__19TWindowSubShortMailFv(void);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TWindowMakeTeam__sub_80131A5C(s32);
M2C_UNK TWindowMakeTeam__sub_80131B54(s32, s32);
M2C_UNK fn_80265410(s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);

extern s32 lbl_805D53A0;
extern s32 tl_00;

s32 create_keyboard__19TWindowSubShortMailFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, tl_00, 0xC6, 5, 4, lbl_805D53A0);
    }
    fn_80265410(var_r31);
    TWindowMakeTeam__sub_80131B54(var_r31, TWindowSubComCard__sub_8026CBB8(0xBB));
    TWindowMakeTeam__sub_80131A5C(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

}
