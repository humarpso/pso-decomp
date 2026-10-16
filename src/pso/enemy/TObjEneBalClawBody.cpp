#include "types.h"
#include "pso/enemy/TObjEneBalClawBody.h"

extern "C" {

void *TObjControl__ct(void *, void *);
void *TObjEneBalClawBody__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *TObjEneBalClawBody::create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x404);
    if (o2 != NULL) {
        o2 = TObjEneBalClawBody__ct(o2, o, arg0);
    }
    return o2;
}

}
