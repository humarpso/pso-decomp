#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TORockCaveL01__create(void *arg0);
void *__dt__13TORockCaveL01Fv(void *arg0, s16 arg1);
void *TORockCaveL01__ct(void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__10TORockCaveFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

void *TORockCaveL01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TORockCaveL01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__13TORockCaveL01[];

void *__dt__13TORockCaveL01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TORockCaveL01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__10TORockCaveFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
