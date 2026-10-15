#include "types.h"

extern "C" {

void *create__17TObjEneMe1CanadinFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *init__17TObjEneMe1CanadinFPvPvPvPv(void *, void *, void *, int);

extern void *tl_04;

void *create__17TObjEneMe1CanadinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4CC);
    if (o != NULL) {
        o = init__17TObjEneMe1CanadinFPvPvPvPv(o, tl_04, arg0, 0);
    }
    return o;
}

}
