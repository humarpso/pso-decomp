#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802EE4E0_lbl_804E3C5C {
    M2C_UNK value;
    u8 remaining[0x48];
};

struct Light_802EE574 {
    s32 type;
    s32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    Light_802EE574 *next;
    s32 f30;
    u8 pad34[4];
};

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
void TLobby__sub_800FD6A0(s32, u32);
extern RecoveredGlobal_802EE4E0_lbl_804E3C5C lbl_804E3C5C;
extern u8 *lbl_805D6918;
void TBoss7DeRolLeC__sub_802EE4E0(void);
u8 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TLobby__sub_800FD6F8(void *, int);
u8 *collect_and_count__12TBoss3VoloptFUii(s32, s32);
void init_all_slots__11TWindowCtrlFv();
extern RecoveredGlobal_802EE4E0_lbl_804E3C5C lbl_804E3C5C;
extern M2C_UNK lbl_804E3D1C[];
extern Light_802EE574 lbl_805412C0[];
extern u8 *lbl_805D6918;
extern s32 lbl_805D691C;
extern s32 lbl_805D6920;
extern s32 lbl_805D6924;
extern s32 lbl_805D6928;
extern s32 lbl_805D692C;
extern s32 lbl_805D6930;
extern s32 lbl_805D6934;
extern s32 lbl_805D6938;
extern u8 *lbl_805D693C;
extern s32 lbl_805D6940;
extern const f32 lbl_805DEA10;
void TObjPlayer__sub_802EE574(void);
}

extern "C" {

void *create__14TBoss7DeRolLeCFPv(void *arg0);
void *TBoss7DeRolLeC__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

typedef char RecoveredGlobal_802EE4E0_lbl_804E3C5C_size[sizeof(RecoveredGlobal_802EE4E0_lbl_804E3C5C) == 0x4C ? 1 : -1];
void TBoss7DeRolLeC__sub_802EE4E0(void) {
    TLobby__sub_800FD6A0((s32) &lbl_804E3C5C.value, 0x30U);
    if ((void *) lbl_805D6918 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D6918, 1);
        lbl_805D6918 = NULL;
    }
}

void *create__14TBoss7DeRolLeCFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x7D4);
    if (o != NULL) {
        o = TBoss7DeRolLeC__ct(o, tl_04, arg0);
    }
    return o;
}
void TObjPlayer__sub_802EE574(void) {
    s32 i;
    u8 *p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = TLobby__sub_80020004(p, 1, lbl_804E3D1C, 0, 0, 0);
    }
    lbl_805D6918 = p;
    lbl_805D691C = 0;
    lbl_805D6920 = 0;
    lbl_805D6924 = 0;
    lbl_805D6928 = 0;
    lbl_805D692C = 0;
    lbl_805D6930 = 0;
    lbl_805D6934 = 0;
    lbl_805D6938 = 0;
    TLobby__sub_800FD6F8(&lbl_804E3C5C.value, 0x30);
    lbl_805D693C = collect_and_count__12TBoss3VoloptFUii(M2C_FIELD(M2C_FIELD(lbl_805D6918, u8 **, 0x42C), s32 *, 8), 0x4D);
    lbl_805D6940 = M2C_FIELD(lbl_805D693C, s32 *, 0x2C);
    for (i = 0; i < 11; i++) {
        Light_802EE574 *l = &lbl_805412C0[i];
        l->type = 0xF;
        l->f4 = 0;
        l->f8 = lbl_805DEA10;
        l->fC = lbl_805DEA10;
        l->f10 = lbl_805DEA10;
        l->f14 = 0;
        l->f18 = 0;
        l->f1C = 0;
        l->f20 = lbl_805DEA10;
        l->f24 = lbl_805DEA10;
        l->f28 = lbl_805DEA10;
        l->next = 0;
        l->f30 = 0;
    }
    for (i = 0; i < 10; i++) {
        lbl_805412C0[i].next = &lbl_805412C0[i + 1];
    }
    {
        Light_802EE574 *t = &lbl_805412C0[10];
        t->type = 0x1F;
        t->next = 0;
    }
    init_all_slots__11TWindowCtrlFv();
}

}
