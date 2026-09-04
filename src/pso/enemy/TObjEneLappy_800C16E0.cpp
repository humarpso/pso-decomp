#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__12TObjEneLappyFPv(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjEneLappy__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__12TObjEneLappyFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3A4);
    if (o2 != NULL) {
        o2 = TObjEneLappy__ct(o2, o, arg0);
    }
    return o2;
}

}
