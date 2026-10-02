#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026492C___vt__15TWindowMainMenu { M2C_UNK value; u8 remaining[0x24]; };

struct VBase_802647CC { char pad[0x18]; };

struct VObj_802647CC : VBase_802647CC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Ent_802647CC { u32 a; void *next; };

struct Menu_802647CC {
    u8 pad0[0x1C];
    u32 node;
    u8 pad20[0x4C - 0x20];
    s32 flags;
    s16 depth;
    s16 sel;
    u8 pad54[0x5C - 0x54];
    Ent_802647CC *ents;
};

typedef s32 M2C_UNK;
struct Ent_802646E4 {
    s16 id;
    s16 pad[3];
};

struct Slot_802649C0 { s16 a; s16 b; s32 c; };

struct Win_802649C0 {
    s32 x0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    s32 x1C;
    s32 x20;
    s32 x24;
    Slot_802649C0 slots[4];
    s32 x48;
    s32 x4C;
    s16 x50;
    s16 x52;
    s32 x54;
    u8 pad58[4];
    s32 x5C;
};

extern "C" {
void update_submenu__15TWindowMainMenuFPv(void *arg0);
M2C_UNK TWindowSubComCard__sub_8026CBB8(int);
M2C_UNK TWindowMainMenu__sub_802ADADC(int, int);
M2C_UNK TWindowMainMenu__sub_802ADD38(int, void *);
u32 create_menu__15TWindowMainMenuFPvPv(void *, int);
void TWindowMainMenu__sub_80264674(u8 *arg0, s16 arg1);
u8 * __dt__7TObjectFv(void *, s16);
void init_parts__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
void __dl__7TObjectFPv(s32);
void close_child_window__15TWindowMainMenuFPv(void *);
void destroy_submenu__15TWindowMainMenuFPv(void *);
void close__15TWindowMainMenuFPv(void* p);
extern RecoveredGlobal_8026492C___vt__15TWindowMainMenu __vt__15TWindowMainMenu;
u8 *__dt__15TWindowMainMenuFv(u8 *arg0, s16 arg1);
void TWindowMainMenu__sub_80263D7C(void *, int);
void add_menu_entry__15TWindowMainMenuFPvs(void *, s16);
void TWindowMainMenu__sub_80263DBC(void *);
void update_keyboard_card_state__15TWindowMainMenuFPv(void *, int);
void close_child_window__15TWindowMainMenuFPv(void *);
void update_description_text__15TWindowMainMenuFPvi(void *, int);
void TWindowSubEquip__sub_8026417C(void *, int);
void update_submenu__15TWindowMainMenuFPv(void *arg0);
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
void refresh_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
s32 TWindowMainMenu__sub_802ADAAC(u32);
s16 TWindowMainMenu__sub_802ADB00(u32);
s32 is_flag_set__15TWindowMainMenuFPv(u32);
s32 get_menu_flag__15TWindowMainMenuFPv(u32);
void TWindowMainMenu__sub_802647CC(Menu_802647CC *arg0);
s32 TWindowMainMenu__sub_80263E40(void *, s16 *, s32 *);
void update_description_text__15TWindowMainMenuFPvi(void *, int);
M2C_UNK TWindowSubComCard__sub_8026CBB8(int);
s32 TWindowMainMenu__sub_802ADAAC(u32);
M2C_UNK TWindowMainMenu__sub_802ADADC(int, int);
void update_if_active__15TWindowMainMenuFv(int, int);
M2C_UNK TWindowMainMenu__sub_802ADD38(int, void *);
int update_scaled_position__15TWindowMainMenuFi(void*);
u32 create_menu__15TWindowMainMenuFPvPv(void *, int);
void TWindowMainMenu__sub_802646E4(u8 *arg0, Ent_802646E4 *arg1);
void *__ct__7TObjectFP7TObject(void *);
void set_scale_f__15TWindowSubEquipFPv(void *);
extern RecoveredGlobal_8026492C___vt__15TWindowMainMenu __vt__15TWindowMainMenu;
extern s32 lbl_805D3950;
Win_802649C0 *TWindowMainMenu__ct(Win_802649C0 *arg0, void *arg1, s32 arg2);
}

extern "C" {

void TWindowMainMenu__sub_80264A64(void);
void TWindowMainMenu__vt7(void);
void close__15TWindowMainMenuFPv(void* p);
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
void refresh_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
void render__15TWindowMainMenuFv(void);
void run_task__15TWindowMainMenuFv(void);
void show_child_window__15TWindowMainMenuFPv(void* p);
int test_keyboard_card_flag4(void* p);
void update_submenu__15TWindowMainMenuFPv(void *arg0);
void update_trade_submenu__15TWindowMainMenuFPv(void* p);
int TWindowMainMenu__sub_802AD90C(void*);
int TWindowMainMenu__sub_802AD980(void*);
int TWindowSubTradeMain__sub_80244A4C(void*);
int TWindow__close(void*);
int clear_menu_flags__15TWindowMainMenuFPv(void*);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s8 get_mode__6TLobbyFPv();
s32 is_split_screen();
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);
int update_scaled_position__15TWindowMainMenuFi(void*);
int window_request_show(void*);

void show_child_window__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { window_request_show(*(void**)((char*)p + 0x1c)); update_scaled_position__15TWindowMainMenuFi(*(void**)((char*)p + 0x1c)); } }
void update_trade_submenu__15TWindowMainMenuFPv(void* p) { void* m = *(void**)((char*)p + 0x1c); if (m) TWindowSubTradeMain__sub_80244A4C(m); }
void update_submenu__15TWindowMainMenuFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        TWindowMainMenu__sub_802AD980((void*)(M2C_FIELD(arg0, void **, 0x1C)));
        update_scaled_position__15TWindowMainMenuFi((void*)(M2C_FIELD(arg0, u32 *, 0x1C)));
    }
    if (is_split_screen() != 0) {
        update_trade_submenu__15TWindowMainMenuFPv((void*)((void*)((void*)(arg0))));
    }
}
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindowMainMenu__sub_802AD90C(*(void**)((char*)p + 0x1c)); clear_menu_flags__15TWindowMainMenuFPv(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4((u8 *)((void*)(p)), (Ent_802646E4 *)((void*)(a1))); } }
void refresh_submenu__15TWindowMainMenuFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindowMainMenu__sub_802AD980(*(void**)((char*)p + 0x1c)); clear_menu_flags__15TWindowMainMenuFPv(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4((u8 *)((void*)(p)), (Ent_802646E4 *)((void*)(a1))); } }

void close__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindow__close(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }

void TWindowMainMenu__sub_80264674(u8 *arg0, s16 arg1) {
    u32 temp_r31;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x1C) = create_menu__15TWindowMainMenuFPvPv((void *)(TWindowSubComCard__sub_8026CBB8((int) (0x1A))), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
    }
    temp_r31 = M2C_FIELD(arg0, u32 *, 0x1C);
    TWindowMainMenu__sub_802ADD38((int) (temp_r31), (void *) (arg1));
    TWindowMainMenu__sub_802ADADC((int) (temp_r31), (int) (0));
    update_submenu__15TWindowMainMenuFPv((void *) (arg0));
}

void TWindowMainMenu__sub_802646E4(u8 *arg0, Ent_802646E4 *arg1) {
    s32 flag;
    s16 id;
    s32 i;
    int w;
    s32 d;
    if (*(u32 *)(arg0 + 0x1C) == 0) {
        *(u32 *)(arg0 + 0x1C) = create_menu__15TWindowMainMenuFPvPv((void *)TWindowSubComCard__sub_8026CBB8(0x1A), *(s32 *)(arg0 + 0x54));
        *(s32 *)(arg0 + 0x48) = 0x1F;
    }
    w = *(int *)(arg0 + 0x1C);
    for (i = 0; i < 8; i++, arg1++) {
        id = arg1->id;
        if (id == 0x1F) {
            break;
        }
        if (TWindowMainMenu__sub_80263E40(arg0, &id, &flag) != 0) {
            if (flag != 0) {
                TWindowMainMenu__sub_802ADD38(w, (void *)(s32)id);
            } else {
                update_if_active__15TWindowMainMenuFv(w, id);
            }
        }
    }
    ((int (*)(int))update_scaled_position__15TWindowMainMenuFi)(w);
    TWindowMainMenu__sub_802ADADC(w, *(s16 *)(arg0 + 0x52));
    d = TWindowMainMenu__sub_802ADAAC(w);
    update_description_text__15TWindowMainMenuFPvi(arg0, d);
}

void TWindowMainMenu__sub_802647CC(Menu_802647CC *arg0) {
    s32 id;
    u32 node;
    void *e;
    if ((arg0->flags & 1) && !(arg0->flags & 4) && (node = arg0->node) != 0) {
        arg0->sel = TWindowMainMenu__sub_802ADB00(node);
        id = TWindowMainMenu__sub_802ADAAC(node);
        update_description_text__15TWindowMainMenuFPvi(arg0, id);
        if (get_menu_flag__15TWindowMainMenuFPv(node) != 0) {
            add_menu_entry__15TWindowMainMenuFPvs(arg0, id);
            e = arg0->ents[arg0->sel].next;
            if (e != 0) {
                arg0->ents = (Ent_802647CC *)e;
                update_keyboard_card_state__15TWindowMainMenuFPv(arg0, arg0->depth++);
                refresh_submenu__15TWindowMainMenuFPvPv(arg0, arg0->ents);
                return;
            }
            close_child_window__15TWindowMainMenuFPv(arg0);
            update_submenu__15TWindowMainMenuFPv(arg0);
            TWindowSubEquip__sub_8026417C(arg0, id);
            return;
        }
        if (is_flag_set__15TWindowMainMenuFPv(node) != 0) {
            if (arg0->depth <= 0) {
                ((VObj_802647CC *)arg0)->m6();
                return;
            }
            add_menu_entry__15TWindowMainMenuFPvs(arg0, id);
            TWindowMainMenu__sub_80263D7C(arg0, arg0->depth--);
            TWindowMainMenu__sub_80263DBC(arg0);
            close_submenu__15TWindowMainMenuFPvPv(arg0, arg0->ents);
        }
    }
}

void render__15TWindowMainMenuFv(void) {  }
void run_task__15TWindowMainMenuFv(void) {  }

u8 *__dt__15TWindowMainMenuFv(u8 *arg0, s16 arg1) {
    u32 temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TWindowMainMenu.value;
        if (M2C_FIELD(arg0, s32 *, 0x4C) & 1) {
            temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u32 *, 0x54));
            if (temp_r3 != 0U) {
                init_parts__10TObjPlayerFPv((s32) temp_r3);
            }
        }
        close_child_window__15TWindowMainMenuFPv(arg0);
        destroy_submenu__15TWindowMainMenuFPv(arg0);
        close__15TWindowMainMenuFPv((void*)(arg0));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

Win_802649C0 *TWindowMainMenu__ct(Win_802649C0 *arg0, void *arg1, s32 arg2) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vt = &__vt__15TWindowMainMenu.value;
    arg0->x0 = lbl_805D3950;
    arg0->x54 = arg2;
    arg0->x4C = 0;
    arg0->x50 = 0;
    arg0->x52 = 0;
    arg0->x48 = 0x1F;
    for (i = 0; i < 4; i++) {
        arg0->slots[i].a = 0;
        arg0->slots[i].b = 0;
        arg0->slots[i].c = 0;
    }
    arg0->x1C = 0;
    arg0->x20 = 0;
    arg0->x24 = 0;
    arg0->x5C = 0;
    set_scale_f__15TWindowSubEquipFPv(arg0);
    return arg0;
}

void TWindowMainMenu__sub_80264A64(void) {  }
void TWindowMainMenu__vt7(void) {  }
int test_keyboard_card_flag4(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 4); }

}
