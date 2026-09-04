#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKeyCave01__vt14(void *arg0);
int TOKeyCol__vt13(void);
void TOKeyCol__vt23(void);
void *__dt__11TOKeyCave01Fv(void *arg0, s16 arg1);
void *create__11TOKeyCave01FPv(void *arg0);
void free_objects__11TOKeyCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOKeyCave01__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern f32 lbl_805DB744;
extern f32 lbl_805DB748;

void TOKeyCave01__vt14(void *arg0) {
    s32 temp_r4;

    if (lbl_805DB748 < M2C_FIELD(arg0, f32 *, 0x6C)) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + lbl_805DB744);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xFC);
    if (temp_r4 < 0x2000) {
        M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (temp_r4 + 0x333);
    }
}

extern void *tl_05;

void *create__11TOKeyCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOKeyCave01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5A18;
extern s32 *TOKeyCave01__data_805D5A1C;

void free_objects__11TOKeyCave01Fv(void) {
    if ((s32 *) TOKeyCave01__data_805D5A1C != NULL) {
        free_if_valid__10TObjPlayerFi(*TOKeyCave01__data_805D5A1C);
        if ((s32 *) TOKeyCave01__data_805D5A1C != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyCave01__data_805D5A1C);
            TOKeyCave01__data_805D5A1C = NULL;
        }
    }
    if ((u32) lbl_805D5A18 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A18, 1);
        lbl_805D5A18 = 0U;
    }
}

extern M2C_UNK __vt__11TOKeyCave01[];

void *__dt__11TOKeyCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOKeyCave01;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TOKeyCol__vt23(void) {  }

int TOKeyCol__vt13(void) { return 0; }

}
