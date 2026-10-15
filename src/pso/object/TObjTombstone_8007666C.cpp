#include "types.h"
#include "pso/object/TObjTombstone.h"

extern "C" {

void *__nw__7TObjectFUl(int);
void *init__13TObjTombstoneFlll(void *, void *, void *, void *);

void *TObjTombstone::create(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x238);
    if (o != NULL) {
        o = init__13TObjTombstoneFlll(o, arg0, arg1, arg2);
    }
    return o;
}

}
