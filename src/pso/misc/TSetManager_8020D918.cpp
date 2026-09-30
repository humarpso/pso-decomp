#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Dst_8020DEE4 { u16 id; s16 v; u8 pad[4]; };

struct SrcA_8020DEE4 { u8 pad0[2]; s16 v; u8 pad4[4]; u16 id; u8 padA[0x44 - 0xA]; };

struct SrcB_8020DEE4 { u8 pad0[2]; s16 v; u8 pad4[6]; u16 id; u8 padC[0x48 - 0xC]; };

struct Area_8020DEE4 { s32 countA; s32 countB; u8 pad8[8]; Dst_8020DEE4 *a; Dst_8020DEE4 *b; };

struct Vec3_8020DB44 { s32 a, b, c; };

struct A_8020DBCC { s16 a; s16 b; };

struct B_8020DBCC { s16 a; s16 b; s16 c; s16 d; s16 e; s16 f; };

extern "C" {
void TLobby__sub_8020D94C(void);
extern s16 TLobby__data_805D6134;
void TLobby__sub_8020DB08(void);
s32 TObjPlayer__sub_800196EC(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *p);
extern Area_8020DEE4 TLobby__data_80513AD0[];
extern SrcA_8020DEE4 *TLobby__data_805D610C;
extern SrcB_8020DEE4 *TLobby__data_805D6114;
void TLobby__sub_8020DEE4(int unused);
s32 TObjPlayer__sub_800196EC(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 lookup_scene_object__6TLobbyFPv(s32, void *);
void TLobby__sub_8020D9A0(s32, s32, s32);
void TLobby__sub_8020E08C(void);
extern s32 lbl_805D60F8;
extern s32 TLobby__data_805D60FC;
extern u32 TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
extern u32 TLobby__data_805D6124;
extern s32 TLobby__data_805D6128;
extern s16 TLobby__data_805D6134;
void TLobby__sub_8020DB44(void);
void *memset(void *, int, unsigned long);
extern A_8020DBCC *TLobby__data_805D6140;
extern B_8020DBCC *TLobby__data_805D6144;
void TLobby__sub_8020DBCC(void);
}

extern "C" {

void TLobby__sub_8020D94C(void);
void create__11TSetManagerFv(void);
void* TSetManager__ct(void*, s32);
void* __nw__7TObjectFUl(u32);
void free__11TOBoss4RockFUi(void*);

extern s32 tl_02;

void create__11TSetManagerFv(void) {
    void* obj = __nw__7TObjectFUl(0x20);
    if (obj != 0) {
        TSetManager__ct(obj, tl_02);
    }
}

extern u32 TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
extern u32 TLobby__data_805D6124;
extern s32 TLobby__data_805D6128;

void TLobby__sub_8020D94C(void) {
    if ((u32) TLobby__data_805D611C != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D611C);
        TLobby__data_805D611C = 0U;
        TLobby__data_805D6120 = 0;
    }
    if ((u32) TLobby__data_805D6124 != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D6124);
        TLobby__data_805D6124 = 0U;
        TLobby__data_805D6128 = 0;
    }
}
#pragma push
#pragma scheduling off
void TLobby__sub_8020DB08(void) {
    s32 temp_r3;
    TLobby__sub_8020D94C();
    temp_r3 = TLobby__data_805D6134 & ~8;
    TLobby__data_805D6134 = temp_r3;
    TLobby__data_805D6134 &= ~16;
    TLobby__sub_8020DEE4((int)(temp_r3));
}
#pragma pop

void TLobby__sub_8020DB44(void) {
    Vec3_8020DB44 v;
    s32 t;
    s32 r;
    TLobby__sub_8020E08C();
    (*(s32 *)&TLobby__data_805D611C) = 0;
    TLobby__data_805D6134 &= ~8;
    (*(s32 *)&TLobby__data_805D6124) = 0;
    TLobby__data_805D6120 = 0;
    TLobby__data_805D6128 = 0;
    TLobby__data_805D6134 &= ~16;
    lbl_805D60F8 = get_global_state__14TOKeyMachine01Fv();
    r = TObjPlayer__sub_800196EC();
    TLobby__data_805D60FC = r;
    if (lookup_scene_object__6TLobbyFPv(r, &v) != 0) {
        TLobby__sub_8020D9A0(v.a, v.b, v.c);
        return;
    }
    lbl_805D60F8 = -1;
}

void TLobby__sub_8020DBCC(void) {
    s32 i;
    s32 n = 0;
    if (TLobby__data_805D6140 != 0) {
        memset(TLobby__data_805D6140, 0, 0x2E80);
        for (i = 0; i < 0xBA0; i++) {
            s16 t = n + 0x100;
            n++;
            TLobby__data_805D6140[i].b = t;
        }
    }
    if (TLobby__data_805D6144 != 0) {
        memset(TLobby__data_805D6144, 0, 0x87C0);
        for (i = 0; i < 0xB50; i++) {
            s16 t = n + 0x100;
            n++;
            TLobby__data_805D6144[i].c = t;
        }
    }
}

void TLobby__sub_8020DEE4(int unused) {
    Area_8020DEE4 *area = &TLobby__data_80513AD0[TObjPlayer__sub_800196EC()];
    if (TLobby__data_805D610C != 0) {
        SrcA_8020DEE4 *s = TLobby__data_805D610C;
        Dst_8020DEE4 *d = area->a;
        s32 i;
        for (i = 0; i < area->countA; i++, s++, d++) {
            if (s->id == d->id) {
                d->v = s->v;
            }
        }
    }
    if (TLobby__data_805D6114 != 0) {
        SrcB_8020DEE4 *s = TLobby__data_805D6114;
        Dst_8020DEE4 *d = area->b;
        s32 i;
        for (i = 0; i < area->countB; i++, s++, d++) {
            if (s->id == d->id) {
                d->v = s->v;
            }
        }
    }
    if (TLobby__data_805D6114 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(TLobby__data_805D6114);
        TLobby__data_805D6114 = 0;
    }
    if (TLobby__data_805D610C != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(TLobby__data_805D610C);
        TLobby__data_805D610C = 0;
    }
}

}
