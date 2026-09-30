#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Wn_80278DA4 { u8 pad0[0x20]; s16 f20; u8 pad22[0x50]; s16 f72; };

extern "C" {
u8 *TLobby__sub_80101AB0(int);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s16);
u32 run_and_get_result__10TObjPlayerFPvi(int, void *);
void TLobby__sub_80266E34(void *);
void add_list_entry__20TWindowSubStatusDispFPvi(void *, int);
void add_list_entry__23TShopJudgmentItemWindowFPvii(void *, void *, int);
void fn_80278DA4(Wn_80278DA4 *arg0);
}

extern "C" {

void fn_80278DA4(Wn_80278DA4 *arg0) {
    s32 list[0x20];
    u8 *id;
    u32 i;
    u32 count;
    u8 *p;
    p = TPlayerBattleCtrl4P__sub_801BA74C(arg0->f20);
    if (p != NULL) {
        count = run_and_get_result__10TObjPlayerFPvi(*(s32 *)(p + 0xD00), list);
        for (i = 0; i < count; i++) {
            id = TLobby__sub_80101AB0(list[i]);
            if (id != NULL) {
                add_list_entry__23TShopJudgmentItemWindowFPvii(arg0, id, list[i]);
            }
        }
        if (arg0->f72 <= 0) {
            add_list_entry__20TWindowSubStatusDispFPvi(arg0, -1);
        }
        TLobby__sub_80266E34(arg0);
    }
}

}
