#include "types.h"

extern "C" {

void * create_grav_ball__11TBoss6Type1FPvPv(void *arg0, void *arg1);
void *TBoss6GravBall__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_grav_ball__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TBoss6GravBall__ct(o, arg0, arg1);
    }
    return o;
}

}
