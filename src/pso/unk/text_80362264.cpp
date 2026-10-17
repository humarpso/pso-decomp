#include "types.h"
#include "pso/unk/text_80362264.h"

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjEneEpsilonBody__ct(void *, void *, void *);
}
extern void *tl_04;

void *create_TObjEneEpsilonBody(void *arg0) {
    void *o = __nw__7TObjectFUl(0x514);
    if (o != NULL) {
        o = TObjEneEpsilonBody__ct(o, tl_04, arg0);
    }
    return o;
}
