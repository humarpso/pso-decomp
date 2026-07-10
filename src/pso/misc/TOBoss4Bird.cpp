#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__11TOBoss4BirdFPv(void *arg0);
void *__dt__11TOBoss4BirdFv(void *arg0, s16 arg1);
void *TOBoss4Bird__ct(void *, void *);
void TOBoss4Rock__sub_80147A80(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TOBoss4Fv(void *, int);
void *__nw__7TObjectFUl(int);

void *create__11TOBoss4BirdFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOBoss4Bird__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__11TOBoss4Bird[];

void *__dt__11TOBoss4BirdFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOBoss4Bird;
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xBC)); }
        if (M2C_FIELD(arg0, void **, 0xC0) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xC0)); }
        __dt__7TOBoss4Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
