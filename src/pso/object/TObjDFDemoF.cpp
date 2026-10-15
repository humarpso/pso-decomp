#include "types.h"

extern "C" {

void *create__11TObjDFDemoFFPv(void *arg0);
void *TObjDFDemoF__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__11TObjDFDemoFFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjDFDemoF__ct(o, arg0);
    }
    return o;
}

}
