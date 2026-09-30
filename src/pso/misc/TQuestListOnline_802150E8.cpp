#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802155B4_TQuestListOnline__data_80513DE8 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_802155B4_TQuestListOnline__data_80513E24 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80215ABC_lbl_804CA0B8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Pair_802156E0 { s8 key; u8 val; };

struct G_802156E0 { u8 pad[0xc]; Pair_802156E0 *tbl; };

struct Pair_802156A0 { s8 key; u8 val; };

struct G_802156A0 { u8 pad[0x10]; Pair_802156A0 *tbl; };

struct Ent_8021587C { u8 id; u8 n1; u8 n2; };

struct Tbl_8021587C { Ent_8021587C *base; s32 count; };

struct G_8021587C { u8 pad[4]; Tbl_8021587C *t; };

struct Item_8021587C { u8 pad[3]; u8 f3; };

struct Ent_8021599C { u8 id; u8 n1; u8 n2; };

struct Tbl_8021599C { Ent_8021599C *base; s32 count; };

struct G_8021599C { Tbl_8021599C *t; };

struct Obj_8021599C { u8 pad[4]; u8 slot; };

extern "C" {
void TQuestListOnline__sub_8013ACF4(s32);
M2C_UNK memcpy(int, void *, int);
extern u32 TQuestListOnline__data_805D6190;
void TQuestListOnline__sub_80215458(s32 arg0);
int alloc__22TQuestVmDownLoadServerFPv(void *);
int memset(void*, void*, void*);
extern unsigned char TQuestListOnline__data_80513DE8[];
extern unsigned char TQuestListOnline__data_80513E24[];
extern u32 TQuestListOnline__data_805D6190;
extern s32 TQuestListOnline__data_805D6194;
extern int TQuestListOnline__data_805D6198;
extern int TQuestListOnline__data_805D619C;
extern int TQuestListOnline__data_805D61A0;
extern int TQuestListOnline__data_805D61A4;
extern int TQuestListOnline__data_805D61A8;
extern int lbl_805D61AC;
extern s32 TQuestListOnline__data_805D61E0;
void TQuestListOnline__sub_802155B4(void);
int memset(void*, void*, void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(int);
s32 free__11TOBoss4RockFUi(int);
s32 TWindow__close(int);
extern unsigned char TQuestListOnline__data_80513DE8[];
extern unsigned char TQuestListOnline__data_80513E24[];
extern u32 TQuestListOnline__data_805D6190;
extern s32 TQuestListOnline__data_805D6194;
extern int TQuestListOnline__data_805D6198;
extern int TQuestListOnline__data_805D619C;
extern int TQuestListOnline__data_805D61A0;
extern int TQuestListOnline__data_805D61A4;
extern int TQuestListOnline__data_805D61A8;
extern int lbl_805D61AC;
extern s32 TQuestListOnline__data_805D61E0;
void TQuestListOnline__sub_80215498(void);
extern RecoveredGlobal_80215ABC_lbl_804CA0B8 lbl_804CA0B8;
extern s32 lbl_805D6238;
bool TLobby__sub_80215ABC(u8 *arg0);
extern G_802156E0 *lbl_805D61C0;
u8 TLobby__sub_802156E0(s8 x);
extern G_802156E0 *lbl_805D61C0;
u8 TLobby__sub_802156A0(s8 x);
s32 TItemData__sub_8010DF68(Item_8021587C *);
u8 get_entry_field16__9TItemDataFv(Item_8021587C *);
s32 pop_byte__6TLobbyFPv(void *);
void TLobby__sub_8020EEFC(void *, s32);
void TLobby__sub_8020F00C(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
u8 TLobby__sub_802156A0(s8 x);
extern s8 lbl_8044BD30[];
extern G_802156E0 *lbl_805D61C0;
extern s32 lbl_805D61C4;
extern s32 lbl_805D61C8;
extern s32 lbl_805D6238;
void TLobby__sub_8021587C(Item_8021587C *item);
u8 find_adjacent_matching_slot__10TObjPlayerFUc(u8);
u8 TObjPlayer__sub_8010494C(u8);
s32 pop_byte__6TLobbyFPv(void *);
void TLobby__sub_8020EEFC(void *, s32);
void TLobby__sub_8020F00C(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
u8 TLobby__sub_802156E0(s8 x);
extern s8 lbl_8044BD30[];
extern G_802156E0 *lbl_805D61C0;
extern s32 lbl_805D61C4;
extern s32 lbl_805D61C8;
extern s32 lbl_805D6238;
void TLobby__sub_8021599C(Obj_8021599C *obj);
}

extern "C" {
    int memset(void*, void*, void*);
    extern unsigned char TQuestListOnline__data_80513DE8[];
    extern unsigned char TQuestListOnline__data_80513E24[];
    extern int TQuestListOnline__data_805D6198;
    extern int TQuestListOnline__data_805D619C;
    extern int TQuestListOnline__data_805D61A0;
    extern int TQuestListOnline__data_805D61A4;
    extern int TQuestListOnline__data_805D61A8;
    extern int lbl_805D61AC;
    extern int lbl_805D61B0;
    extern int lbl_805D61B4;

void TQuestListOnline__sub_80215458(s32 arg0) {
    if ((u32) TQuestListOnline__data_805D6190 != 0U) {
        memcpy((int) (TQuestListOnline__data_805D6190), (void *) (arg0), (int) (0x11D4));
        TQuestListOnline__sub_8013ACF4(1);
    }
}

typedef char RecoveredGlobal_802155B4_TQuestListOnline__data_80513DE8_size[sizeof(RecoveredGlobal_802155B4_TQuestListOnline__data_80513DE8) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_802155B4_TQuestListOnline__data_80513E24_size[sizeof(RecoveredGlobal_802155B4_TQuestListOnline__data_80513E24) == 0x3C ? 1 : -1];

typedef char RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8_size[sizeof(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_80215498_TQuestListOnline__data_80513E24_size[sizeof(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24) == 0x3C ? 1 : -1];
void TQuestListOnline__sub_80215498(void) {
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 *)&TQuestListOnline__data_80513E24).value, u32 *, 0x38) != 0U) {
        free__11TOBoss4RockFUi((int) (M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 *)&TQuestListOnline__data_80513E24).value, u32 *, 0x38)));
        M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 *)&TQuestListOnline__data_80513E24).value, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__data_80513DE8).value, u32 *, 0x38) != 0U) {
        free__11TOBoss4RockFUi((int) (M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__data_80513DE8).value, u32 *, 0x38)));
        M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__data_80513DE8).value, u32 *, 0x38) = 0U;
    }
    if ((u32) (*(u32 *)&TQuestListOnline__data_805D6194) != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) ((*(u32 *)&TQuestListOnline__data_805D6194)));
        (*(u32 *)&TQuestListOnline__data_805D6194) = 0U;
    }
    if ((u32) TQuestListOnline__data_805D6190 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) (TQuestListOnline__data_805D6190));
        TQuestListOnline__data_805D6190 = 0U;
    }
    if ((u32) (*(u32 *)&TQuestListOnline__data_805D61A0) != 0U) {
        TWindow__close((int) ((*(u32 *)&TQuestListOnline__data_805D61A0)));
        (*(u32 *)&TQuestListOnline__data_805D61A0) = 0U;
    }
    if ((u32) (*(u32 *)&TQuestListOnline__data_805D61A4) != 0U) {
        TWindow__close((int) ((*(u32 *)&TQuestListOnline__data_805D61A4)));
        (*(u32 *)&TQuestListOnline__data_805D61A4) = 0U;
    }
    if ((u32) (*(u32 *)&TQuestListOnline__data_805D61A8) != 0U) {
        TWindow__close((int) ((*(u32 *)&TQuestListOnline__data_805D61A8)));
        (*(u32 *)&TQuestListOnline__data_805D61A8) = 0U;
    }
    (*(s32 *)&lbl_805D61AC) = 0;
    memset((void*)((void *) (&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__data_80513DE8).value)), (void*)((int) (0)), (void*)((int) (0x3C)));
    memset((void*)((void *) (&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 *)&TQuestListOnline__data_80513E24).value)), (void*)((int) (0)), (void*)((int) (0x3C)));
    (*(s32 *)&TQuestListOnline__data_805D6198) = 0;
    (*(s32 *)&TQuestListOnline__data_805D619C) = 0;
    TQuestListOnline__data_805D61E0 = 0;
}

void TQuestListOnline__sub_802155B4(void) {
    (*(s32 *)&TQuestListOnline__data_805D6190) = alloc__22TQuestVmDownLoadServerFPv((void *)0x11D4);
    TQuestListOnline__data_805D6194 = alloc__22TQuestVmDownLoadServerFPv((void *)0x124);
    (*(s32 *)&TQuestListOnline__data_805D61A0) = 0;
    (*(s32 *)&TQuestListOnline__data_805D61A4) = 0;
    (*(s32 *)&TQuestListOnline__data_805D61A8) = 0;
    (*(s32 *)&lbl_805D61AC) = 0;
    memset((void*)((void *) (&(*(RecoveredGlobal_802155B4_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__data_80513DE8).value)), (void*)((int) (0)), (void*)((int) (0x3C)));
    memset((void*)((void *) (&(*(RecoveredGlobal_802155B4_TQuestListOnline__data_80513E24 *)&TQuestListOnline__data_80513E24).value)), (void*)((int) (0)), (void*)((int) (0x3C)));
    (*(s32 *)&TQuestListOnline__data_805D6198) = 0;
    (*(s32 *)&TQuestListOnline__data_805D619C) = 0;
    TQuestListOnline__data_805D61E0 = 0;
}

void reset_globals(void) { TQuestListOnline__data_805D61A0 = 0; TQuestListOnline__data_805D61A4 = 0; TQuestListOnline__data_805D61A8 = 0; lbl_805D61AC = 0; memset(TQuestListOnline__data_80513DE8, (void*)0, (void*)60); memset(TQuestListOnline__data_80513E24, (void*)0, (void*)60); TQuestListOnline__data_805D6198 = 0; TQuestListOnline__data_805D619C = 0; lbl_805D61B0 = 0; lbl_805D61B4 = 0; }
typedef char RecoveredGlobal_80215ABC_lbl_804CA0B8_size[sizeof(RecoveredGlobal_80215ABC_lbl_804CA0B8) == 0x28 ? 1 : -1];

u8 TLobby__sub_802156A0(s8 x) {
    Pair_802156A0 *p = (*(G_802156A0 * *)&lbl_805D61C0)->tbl;
    while (p->key != -1) {
        if (p->key == x) {
            return p->val;
        }
        p++;
    }
    return 0;
}

u8 TLobby__sub_802156E0(s8 x) {
    Pair_802156E0 *p = lbl_805D61C0->tbl;
    while (p->key != -1) {
        if (p->key == x) {
            return p->val;
        }
        p++;
    }
    return 0;
}

struct G_802156E0;
void TLobby__sub_8021587C(Item_8021587C *item) {
    u8 buf[0x68];
    Ent_8021587C *e;
    s32 n;
    s32 c;
    s32 r;
    if (TItemData__sub_8010DF68(item) == 0) {
        reset_counter_64__6TLobbyFPv(buf);
        Tbl_8021587C *t = (*(G_8021587C **)&lbl_805D61C0)->t;
        n = t->count;
        e = &t->base[n * lbl_805D6238];
        while (n-- > 0) {
            if (lbl_805D61C4 != 0) {
                c = e->n2;
            } else {
                c = e->n1;
            }
            while (c-- != 0) {
                TLobby__sub_8020F00C(buf, e->id);
            }
            e++;
        }
        TLobby__sub_8020EEFC(buf, 4);
        r = pop_byte__6TLobbyFPv(buf);
        if (r != -1) {
            s32 v = item->f3 + lbl_8044BD30[r];
            if (v < 0) {
                v = 0;
            }
            item->f3 = v;
        }
        u8 m = get_entry_field16__9TItemDataFv(item);
        if (item->f3 > m) {
            item->f3 = m;
        }
        lbl_805D61C8 += (s8)TLobby__sub_802156A0(r);
    }
}

void TLobby__sub_8021599C(Obj_8021599C *obj) {
    u8 buf[0x68];
    Ent_8021599C *e;
    s32 n;
    s32 c;
    s32 r;
    reset_counter_64__6TLobbyFPv(buf);
    Tbl_8021599C *t = (*(G_8021599C **)&lbl_805D61C0)->t;
    n = t->count;
    e = &t->base[n * lbl_805D6238];
    while (n-- > 0) {
        if (lbl_805D61C4 != 0) {
            c = e->n2;
        } else {
            c = e->n1;
        }
        while (c-- != 0) {
            TLobby__sub_8020F00C(buf, e->id);
        }
        e++;
    }
    TLobby__sub_8020EEFC(buf, 4);
    r = pop_byte__6TLobbyFPv(buf);
    if (r != -1) {
        switch (lbl_8044BD30[r]) {
        case -1:
            obj->slot = find_adjacent_matching_slot__10TObjPlayerFUc(obj->slot);
            break;
        case 1:
            obj->slot = TObjPlayer__sub_8010494C(obj->slot);
            break;
        }
    }
    lbl_805D61C8 += (s8)TLobby__sub_802156E0(r);
}

bool TLobby__sub_80215ABC(u8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 1) == M2C_FIELD(&lbl_804CA0B8.value, M2C_UNK *, (lbl_805D6238 * 4));
}

}
