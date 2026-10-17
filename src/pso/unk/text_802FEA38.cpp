#include "types.h"

extern "C" {

void * TObjNpcKenkyu2__create(void *arg0);
void *TObjControl__ct(void *, void *);
u8 *TObjNpcKenkyu2__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcKenkyu2__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcKenkyu2__ct((u8 *)o2, (s32)o, (s32)arg0);
    }
    return o2;
}

}
