#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt34(u8 *arg0);
void TBoss4Type2__vt35(void);
void * create_zanzo__11TBoss4Type2FPvPv(void *arg0, void *arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void *__ct__11TBoss4ZanzoFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_zanzo__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = __ct__11TBoss4ZanzoFv(o, arg0, arg1);
    }
    return o;
}

void TBoss4Type2__vt35(void) {  }

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt34(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    TBoss3Volopt__sub_8022675C(0x40039E21, arg0 + 0x38, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

}
