#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8006FF4C(void);
void TLobby__sub_8006FF98(void *arg0);
M2C_UNK TLobby__sub_8006FC7C(void *);
M2C_UNK TLobby__sub_8006FE7C();
M2C_UNK TLobby__sub_800722AC(s32);
M2C_UNK TLobby__sub_80072618();
s32 TLobby__sub_801B31AC();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TLobby__sub_80074034(s32);
M2C_UNK fn_80074A5C(s32);
M2C_UNK fn_80074DBC(s32);

extern M2C_UNK lbl_8048C9D8[];
extern s32 tl_07;

void TLobby__sub_8006FF4C(void) {
    TLobby__sub_8006FE7C();
    fn_80074DBC(tl_07);
    TLobby__sub_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x30) == 0) {
        fn_80074A5C(tl_07);
    }
}

extern M2C_UNK lbl_8048C9D8[];
extern s32 lbl_805D53A0;

void TLobby__sub_8006FF98(void *arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return;
    }
    if (TLobby__sub_801B31AC() != 0) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) && ((s32) M2C_FIELD(&lbl_8048C9D8, s32 *, 0x34) == 0)) {
            TLobby__sub_8006FC7C(arg0);
            TLobby__sub_800722AC(lbl_805D53A0);
            TLobby__sub_80072618();
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

}
