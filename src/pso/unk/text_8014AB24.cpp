#include "types.h"

extern "C" {

void * TObjNpcGovernorBase__create(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcGovernorBase__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcGovernorBase__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcGovernorBase__ct(o2, o, arg0);
    }
    return o2;
}

}
