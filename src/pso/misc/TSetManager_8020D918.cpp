#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Dst_8020DEE4 { u16 id; s16 v; u8 pad[4]; };

struct SrcA_8020DEE4 { u8 pad0[2]; s16 v; u8 pad4[4]; u16 id; u8 padA[0x44 - 0xA]; };

struct SrcB_8020DEE4 { u8 pad0[2]; s16 v; u8 pad4[6]; u16 id; u8 padC[0x48 - 0xC]; };

struct Area_8020DEE4 { s32 countA; s32 countB; u8 pad8[8]; Dst_8020DEE4 *a; Dst_8020DEE4 *b; };

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
