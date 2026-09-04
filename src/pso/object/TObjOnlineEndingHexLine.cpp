#include "pso/TObjOnlineEndingHexLine.h"

TObjOnlineEndingHexLine::~TObjOnlineEndingHexLine() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjOnlineEndingHexLine__sub_802E55A4(void *arg0, void *arg1);
void * create__23TObjOnlineEndingHexLineFPvPv(void *arg0, void *arg1);
void *__ct__23TObjOnlineEndingHexLineFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TObjOnlineEndingHexLine__sub_802E55A4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

void * create__23TObjOnlineEndingHexLineFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = __ct__23TObjOnlineEndingHexLineFv(o, arg0, arg1);
    }
    return o;
}

}
