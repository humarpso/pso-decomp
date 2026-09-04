#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjHashiVersus2__create(void *arg0);
void *__dt__16TObjHashiVersus2Fv(void *arg0, s16 arg1);
void free_static_data__16TObjHashiVersus2Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
void *TObjHashiVersus2__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__13TObjHashiBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjHashiVersus2__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjHashiVersus2__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjHashiVersus2__data_805D5C18;

void free_static_data__16TObjHashiVersus2Fv(void) {
    if ((u32) TObjHashiVersus2__data_805D5C18 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjHashiVersus2__data_805D5C18, 1);
        TObjHashiVersus2__data_805D5C18 = 0U;
    }
}

extern M2C_UNK __vt__16TObjHashiVersus2[];

void *__dt__16TObjHashiVersus2Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjHashiVersus2;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__13TObjHashiBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
