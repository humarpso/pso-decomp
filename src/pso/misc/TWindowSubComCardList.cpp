#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_802758C8 {
    u8 pad0[0x20];
    s32 player;
    u8 pad24[0x30 - 0x24];
    s32 lobby;
    u16 kind;
    u16 id;
};

struct Ev_802758C8 {
    u16 kind;
    u16 id;
};

extern "C" {
u32 get_item_field_6__10TObjPlayerFPv(void *);
s32 TLobby__sub_8001DC24();
void TItemData__sub_80076E84(u16);
s32 TObjPlayer__sub_8011E248();
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
u8 fn_801D9870(void *, s16);
s32 validate_and_clear_slot__10TObjPlayerFPv(void *, s16);
void TWindowSubStatusDisp__sub_80228D80();
void TWindowSubStatusDisp__sub_80228F5C(s32);
void TWindowSubStatusDisp__sub_80229080();
void TWindowSubStatusDisp__sub_802290E0();
u8 *TTecCtrl__sub_8022DBC4(u16, u8, s32);
s32 TWindowHelpItem__sub_802434B8(u16, s32);
void TWindowHelpItem__sub_80255DC8(s32);
void fn_80263A20(s32, s32);
void send_and_handle__6TLobbyFPvii(s32, s32, s32);
extern s32 lbl_805D5544;
void TWindowSubStatusDisp__sub_802758C8(Win_802758C8 *self, Ev_802758C8 *ev);
}

extern "C" {

void TWindowSubCustomEquip__sub_80275A88(void);
void *__dt__21TWindowSubComCardListFv(void *arg0, s16 arg1);
void render__21TWindowSubComCardListFv(u8 *arg0);
void run_task__21TWindowSubComCardListFv(void *arg0);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
M2C_UNK TWindowSubComCardList__sub_80275360(void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__11TWindowMenuFv(void *, int);
void delete_if_allocated(void *, int);
M2C_UNK fn_802752D8(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK render_selected_entry__17TWindowSubComCardFPvi(void *, s32);
M2C_UNK run_task__11TWindowMenuFv();
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, M2C_UNK);

void render__21TWindowSubComCardListFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    render_selected_entry__17TWindowSubComCardFPvi(arg0, temp_r3);
    fn_802752D8(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, s32 *, 0x88), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        TWindowSubStatusDisp__sub_8026C800(M2C_FIELD(arg0, s32 *, 0x8C), temp_r3);
    }
}

void run_task__21TWindowSubComCardListFv(void *arg0) {
    run_task__11TWindowMenuFv();
    if ((is_visible__17TWindowSubComCardFPv(arg0) == 0) && (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x8C)) != 0)) {
        set_selected_index__17TWindowSubComCardFPvs(arg0, 0);
        TWindowSubComCardList__sub_80275360(arg0);
    }
}

extern M2C_UNK __vt__21TWindowSubComCardList[];

void *__dt__21TWindowSubComCardListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TWindowSubComCardList;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x8C), 1);
        __dt__11TWindowMenuFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TWindowSubStatusDisp__sub_802758C8(Win_802758C8 *self, Ev_802758C8 *ev) {
    u8 *pl;
    s32 lvl;
    fn_80263A20(self->lobby, self->player);
    if (ev == NULL) {
        return;
    }
    pl = TPlayerBattleCtrl4P__sub_801BA74C(self->player);
    if (pl == NULL) {
        return;
    }
    if (self->id == ev->id && self->kind == ev->kind) {
        return;
    }
    self->kind = ev->kind;
    self->id = ev->id;
    TWindowSubStatusDisp__sub_802290E0();
    switch (ev->kind) {
    case 0:
        break;
    case 2:
        if (ev->id == 2 && (get_item_field_6__10TObjPlayerFPv(pl) == 0 || TObjPlayer__sub_8011E248() != 1)) {
            break;
        }
        TWindowHelpItem__sub_80255DC8(ev->id + 0x13);
        TWindowSubStatusDisp__sub_80229080();
        break;
    case 3:
        if (validate_and_clear_slot__10TObjPlayerFPv(pl + 0x428, ev->id) != 0) {
            break;
        }
        TItemData__sub_80076E84(ev->id);
        TWindowSubStatusDisp__sub_80229080();
        if (ev->id != 0x11 && ev->id != 0xE) {
            lvl = fn_801D9870(pl + 0x428, ev->id);
            if (lbl_805D5544 != 0) {
                TWindowSubStatusDisp__sub_80228D80();
            }
            TWindowHelpItem__sub_80255DC8(0x2D);
            TWindowSubStatusDisp__sub_80229080();
            TWindowSubStatusDisp__sub_80228F5C(lvl + 1);
        }
        TWindowHelpItem__sub_80255DC8(0x2E);
        TWindowSubStatusDisp__sub_80229080();
        TWindowSubStatusDisp__sub_80228F5C(*(s16 *)(TTecCtrl__sub_8022DBC4(ev->id, lvl, 0xFFFF) + 0x10));
        TWindowHelpItem__sub_80255DC8(ev->id);
        TWindowSubStatusDisp__sub_80229080();
        break;
    case 4:
        if (TWindowHelpItem__sub_802434B8(ev->id, self->player) == -1) {
            break;
        }
        TWindowHelpItem__sub_80255DC8(ev->id + 0x16);
        TWindowSubStatusDisp__sub_80229080();
        break;
    case 7:
        break;
    }
    send_and_handle__6TLobbyFPvii(self->lobby, TLobby__sub_8001DC24(), 0x82);
}

void TWindowSubCustomEquip__sub_80275A88(void) {  }

}
