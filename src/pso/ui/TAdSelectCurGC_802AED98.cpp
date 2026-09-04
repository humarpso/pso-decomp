#include "pso/TAdSelectCurGC.h"

TAdSelectCurGC::~TAdSelectCurGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
