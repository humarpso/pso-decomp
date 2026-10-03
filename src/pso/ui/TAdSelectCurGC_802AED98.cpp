#include "pso/TAdSelectCurGC.h"

TAdSelectCurGC::~TAdSelectCurGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_14 { s32 v[5]; };

extern "C" {
void update_menu_cursor__6TLobbyFv();
void TLobby__sub_8023E4B4(s32, s32);
extern const s32 lbl_80470764[];
extern const s32 lbl_80470778[];
extern const s32 lbl_805D5544;
extern u32 lbl_805D6700;
void TLobby__sub_802AF1CC(void);
}

extern "C" {

void TAdSelectCurGC__sub_802AF274(void* p, f32 v);
void TLobby__sub_802AF198(void);
void *TOCapsuleLabo__create(void *arg0);
void TLobby__sub_803DA16C(void*);
void *TOCapsuleLabo__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern u32 lbl_805D6700;

void TLobby__sub_802AF198(void) {
    if ((u32) lbl_805D6700 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6700);
        lbl_805D6700 = 0U;
    }
}

void TLobby__sub_802AF1CC(void) {
    update_menu_cursor__6TLobbyFv();
    M2CCopy_14 a = *(const M2CCopy_14 *)lbl_80470764;
    M2CCopy_14 b = *(const M2CCopy_14 *)lbl_80470778;
    s32 r4 = b.v[lbl_805D5544];
    lbl_805D6700 = r4;
    TLobby__sub_8023E4B4(a.v[lbl_805D5544], r4);
}

void TAdSelectCurGC__sub_802AF274(void* p, f32 v) { *(f32*)((char*)p + 0x704) = v; }

extern void *tl_05;

void *TOCapsuleLabo__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOCapsuleLabo__ct(o, tl_05, arg0);
    }
    return o;
}

}
