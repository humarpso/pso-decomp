#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOWreckAncient04__create(void *arg0);
void *__dt__16TOWreckAncient04Fv(void *arg0, s16 arg1);
void *TOWreckAncient04__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__14TOWreckAncientFv(void *, int);
void *__nw__7TObjectFUl(int);

void *TOWreckAncient04__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TOWreckAncient04__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TOWreckAncient04[];

void *__dt__16TOWreckAncient04Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOWreckAncient04;
        __dt__14TOWreckAncientFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
