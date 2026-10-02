#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Wn_802788A8 { u8 pad0[0x20]; s16 f20; u8 pad22[0x50]; s16 f72; };

struct Wn_802787F0 { u8 pad0[0x20]; s16 f20; u8 pad22[0x50]; s16 f72; };

struct Ent_802787F0 { u32 id; s32 count; };

extern "C" {
u32 TItem__sub_8010147C(void *, int, int);
u8 *TLobby__sub_80101AB0(int);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s16);
u32 run_and_get_result__10TObjPlayerFPvi(int, void *);
void TLobby__sub_80266E34(void *);
void add_list_entry__20TWindowSubStatusDispFPvi(void *, int);
void add_list_entry__23TShopJudgmentItemWindowFPvii(void *, void *, int);
void fn_802788A8(Wn_802788A8 *arg0);
u8 *TLobby__sub_80101AB0(int);
void TLobby__sub_80266E34(void *);
void add_list_entry__20TWindowSubStatusDispFPvi(void *, int);
void push_status_disp_entry(void *, s32, s32);
void add_inventory_item__20TWindowSubStatusDispFPviii(void *, u8 *, s32, u32);
void fn_802787F0(Wn_802787F0 *arg0, Ent_802787F0 *arg1);
}

extern "C" {

void fn_802787F0(Wn_802787F0 *arg0, Ent_802787F0 *arg1) {
    s32 sid;
    u32 i;
    s32 count;
    Ent_802787F0 *p;
    u8 *item;
    if (arg1 != NULL) {
        p = arg1;
        i = 0;
        do {
            count = p->count;
            u32 id = p->id;
            if (count > 0) {
                if (id == 0xFFFFFF01) {
                    push_status_disp_entry(arg0, count, id);
                } else {
                    sid = id;
                    item = TLobby__sub_80101AB0(sid);
                    if (item != NULL) {
                        add_inventory_item__20TWindowSubStatusDispFPviii(arg0, item, count, sid);
                    }
                }
            }
            i++;
            p++;
        } while (i < 0x1F);
        if (arg0->f72 <= 0) {
            add_list_entry__20TWindowSubStatusDispFPvi(arg0, -1);
        }
        TLobby__sub_80266E34(arg0);
    }
}

void fn_802788A8(Wn_802788A8 *arg0) {
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
            if (id != NULL && TItem__sub_8010147C(id, 4, 0) != 0) {
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
