#include "types.h"
#include "pso/enemy/TObjEneMe1CanadinLeader.h"

extern "C" {

void *TObjEneMe1Canadin__ct(void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *TObjEneMe1CanadinLeader::create_canadin(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x4CC);
    if (o != NULL) {
        o = TObjEneMe1Canadin__ct(o, tl_04, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
