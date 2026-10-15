#include "types.h"
#include "pso/TObjCMIcon.h"

extern "C" {

void *__ct__10TObjCMIconFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *TObjCMIcon::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__10TObjCMIconFv(o, arg0);
    }
    return o;
}

}
