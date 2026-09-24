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

bool TLobby__sub_80215ABC(u8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 1) == M2C_FIELD(&lbl_804CA0B8.value, M2C_UNK *, (lbl_805D6238 * 4));
}

}
