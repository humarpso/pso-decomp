#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcAHM01__create(void *arg0);
int alloc_buffer__11TOBoss4RockFPv(void* p);
void free__11TOBoss4RockFUi(u32 arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcAHM01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
s32 xfree__FPv();
int xmalloc__FUl(void*);

void free__11TOBoss4RockFUi(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}
int alloc_buffer__11TOBoss4RockFPv(void* p) { return xmalloc__FUl(p); }

extern void *tl_04;

void * TObjNpcAHM01__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcAHM01__ct(o2, o, arg0);
    }
    return o2;
}

}
