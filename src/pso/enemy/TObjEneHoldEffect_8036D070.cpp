#include "types.h"

extern "C" {

void create__17TObjEneHoldEffectFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjEneHoldEffect__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__17TObjEneHoldEffectFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        TObjEneHoldEffect__ct(o, arg0, arg1, arg2);
    }
}

}
