#include "types.h"

extern "C" {

void *create__14TObjWarpBoss03FPv(void *arg0);
void *TObjWarpBoss03__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__14TObjWarpBoss03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjWarpBoss03__ct(o, tl_05, arg0);
    }
    return o;
}

}
