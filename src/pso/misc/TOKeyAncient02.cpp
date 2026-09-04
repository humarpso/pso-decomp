#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKeyAncient02__vt23(void);
int TOKeyAncient03__vt13(void);
void TOKeyAncient03__vt23(void);
void *__dt__14TOKeyAncient02Fv(void *arg0, s16 arg1);
void *create__14TOKeyAncient02FPv(void *arg0);
void free_static__14TOKeyAncient02Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOKeyAncient02__ct(void *, void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TOKeyAncient02__vt23(void) {  }

extern void *tl_05;

void *create__14TOKeyAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOKeyAncient02__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5A00;
extern s32 lbl_805D5A04;
extern void *lbl_805D5A08;

void free_static__14TOKeyAncient02Fv(void) {
    if ((void *) lbl_805D5A08 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A08, s32 *, 4));
        if ((void *) lbl_805D5A08 != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5A08);
            lbl_805D5A08 = NULL;
        }
    }
    if ((u32) lbl_805D5A00 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A00, 1);
        lbl_805D5A00 = 0U;
    }
    lbl_805D5A04 = 0;
}

extern M2C_UNK __vt__14TOKeyAncient02[];

void *__dt__14TOKeyAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient02;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TOKeyAncient03__vt23(void) {  }

int TOKeyAncient03__vt13(void) { return 0; }

}
