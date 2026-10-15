#include "types.h"
#include "pso/boss/TBoss6Type1.h"

extern "C" {

void *TBoss6Zanzo__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *TBoss6Type1::create_zanzo(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TBoss6Zanzo__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
