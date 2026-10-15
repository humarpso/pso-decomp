#include "types.h"

extern "C" {

void * create__12TObjEneSaverFPvPv(void *arg0, void *arg1);
void *__nw__7TObjectFUl(int);
void *fn_800D79A8(void *, void *, void *, void *);

extern void *tl_05;

void * create__12TObjEneSaverFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x128);
    if (o != NULL) {
        o = fn_800D79A8(o, tl_05, arg0, arg1);
    }
    return o;
}

}
