#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TOFenceAncient04__vt12(void* p);
void TOFenceAncient04__vt13(void* p);
void TOFenceAncient04__vt14(void);

int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
int set_indexed_flags(void*, void*, void*);

void TOFenceAncient04__vt14(void) {  }
void TOFenceAncient04__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; { int i; for (i = 0; i < 4; i++) { clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)i, (void*)8); } } }
void TOFenceAncient04__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; { int i; for (i = 0; i < 4; i++) { set_indexed_flags(p, (void*)i, (void*)8); } } }

}
#else
#if PSO_CLASS_PACKAGE == 0x80167694
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TOFenceAncient04FPv(void *arg0);
void *TOFenceAncient04__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TOFenceAncient04FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient04__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801676E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__16TOFenceAncient04Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D59C8;
extern void *lbl_805D59CC;

void destroy__16TOFenceAncient04Fv(void) {
    if ((void *) lbl_805D59CC != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D59CC, s32 *, 4));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D59CC, s32 *, 8));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D59CC, s32 *, 0xC));
        if ((void *) lbl_805D59CC != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D59CC);
            lbl_805D59CC = NULL;
        }
    }
    if ((u32) lbl_805D59C8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D59C8, 1);
        lbl_805D59C8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80167810
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TOFenceAncient04Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__16TOFenceAncient04[];

void *__dt__16TOFenceAncient04Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient04;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
