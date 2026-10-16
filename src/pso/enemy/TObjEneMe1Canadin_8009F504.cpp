#include "types.h"
#include "pso/enemy/TObjEneMe1Canadin.h"

extern "C" {

void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *TObjEneMe1Canadin::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4CC);
    if (o != NULL) {
        o = ((TObjEneMe1Canadin *)o)->init(tl_04, arg0, 0);
    }
    return o;
}

}
