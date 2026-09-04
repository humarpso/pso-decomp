#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TMotorcycle__vt12(void);
void *__dt__11TMotorcycleFv(void *arg0, s16 arg1);
void *create__11TMotorcycleFPv(void *arg0);
void free_statics__11TMotorcycleFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *TMotorcycle__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__11TObjMesBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void TMotorcycle__vt12(void) {  }

extern void *tl_05;

void *create__11TMotorcycleFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TMotorcycle__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5C40;
extern u32 lbl_805D5C44;

void free_statics__11TMotorcycleFv(void) {
    if ((u32) lbl_805D5C44 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C44);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C44);
        lbl_805D5C44 = 0U;
    }
    if ((u32) lbl_805D5C40 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C40, 1);
        lbl_805D5C40 = 0U;
    }
}

extern M2C_UNK __vt__11TMotorcycle[];

void *__dt__11TMotorcycleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMotorcycle;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__11TObjMesBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
