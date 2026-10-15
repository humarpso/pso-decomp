#include "types.h"
#include "pso/enemy/TObjEneRe7Berura.h"

extern "C" {

void *TObjEneRe7BeruraPunch__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *TObjEneRe7Berura::spawn_punch(void *arg0) {
    void *o = __nw__7TObjectFUl(0x11C);
    if (o != NULL) {
        o = TObjEneRe7BeruraPunch__ct(o, arg0, arg0);
    }
    return o;
}

}
