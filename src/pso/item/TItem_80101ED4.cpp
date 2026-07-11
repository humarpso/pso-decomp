#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_owner__5TItemFPvUs(void *arg0, u16 arg1);
M2C_UNK TItem__sub_80101E7C(void *, u16);
M2C_UNK TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 TObjPlayer__sub_80019248();
s32 TLobby__sub_8011AF58(u16);

void init_owner__5TItemFPvUs(void *arg0, u16 arg1) {
    TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (TObjPlayer__sub_80019248() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -1) {
            M2C_FIELD(arg0, s32 *, 0xC) = TLobby__sub_8011AF58(arg1);
        }
        TItem__sub_80101E7C(arg0, arg1);
    }
}

}
