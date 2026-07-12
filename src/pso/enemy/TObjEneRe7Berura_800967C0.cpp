#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *spawn_punch__16TObjEneRe7BeruraFPv(void *arg0);
void *TObjEneRe7BeruraPunch__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *spawn_punch__16TObjEneRe7BeruraFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x11C);
    if (o != NULL) {
        o = TObjEneRe7BeruraPunch__ct(o, arg0, arg0);
    }
    return o;
}

}
