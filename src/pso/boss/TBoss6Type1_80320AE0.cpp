#include "types.h"

extern "C" {

void * create_zanzo__11TBoss6Type1FPvPvPv(void *arg0, void *arg1, void *arg2);
void *TBoss6Zanzo__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_zanzo__11TBoss6Type1FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TBoss6Zanzo__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
