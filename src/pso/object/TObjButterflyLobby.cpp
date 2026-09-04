#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjButterflyLobby__create(void *arg0);
void *__dt__18TObjButterflyLobbyFv(void *arg0, s16 arg1);
void destroy_instance__18TObjButterflyLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjButterflyLobby__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__18TObjButterflyLobby[];

void *__dt__18TObjButterflyLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjButterflyLobby;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjButterflyLobby__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjButterflyLobby__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D6EB8;

void destroy_instance__18TObjButterflyLobbyFv(void) {
    if ((u32) lbl_805D6EB8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6EB8, 1);
        lbl_805D6EB8 = 0U;
    }
}

}
