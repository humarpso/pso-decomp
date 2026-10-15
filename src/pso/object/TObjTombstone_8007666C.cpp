#include "types.h"

extern "C" {

void * create__13TObjTombstoneFPvPvPv(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(int);
void *init__13TObjTombstoneFPviii(void *, void *, void *, void *);

void * create__13TObjTombstoneFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x238);
    if (o != NULL) {
        o = init__13TObjTombstoneFPviii(o, arg0, arg1, arg2);
    }
    return o;
}

}
