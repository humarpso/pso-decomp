#include "types.h"
#include "pso/enemy/TObjEneMe1Canadin.h"

extern "C" {

void *__nw__7TObjectFUl(int);
void *init__17TObjEneMe1CanadinFPvPvPv(void *, void *, void *, int);

extern void *tl_04;

void *TObjEneMe1Canadin::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4CC);
    if (o != NULL) {
        o = init__17TObjEneMe1CanadinFPvPvPv(o, tl_04, arg0, 0);
    }
    return o;
}

}
