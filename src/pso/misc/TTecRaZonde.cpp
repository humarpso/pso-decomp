#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__11TTecRaZondeFv(void);

void render__11TTecRaZondeFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80238E78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__11TTecRaZondeFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TTecRaZonde__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__11TTecRaZondeFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x150);
    if (o != NULL) {
        TTecRaZonde__ct(o, arg0, arg1, arg2);
    }
}

}
#endif
#endif
