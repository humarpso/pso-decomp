#include "types.h"
#include "pso/object/TObjTombstone.h"

extern "C" {

void *__nw__7TObjectFUl(int);

void *TObjTombstone::create(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x238);
    if (o != NULL) {
        o = ((TObjTombstone *)o)->init((s32)arg0, (s32)arg1, (s32)arg2);
    }
    return o;
}

}
