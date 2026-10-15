#include "types.h"

extern "C" {

void * create__11TObjDFDemo5FPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjDFDemo5__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create__11TObjDFDemo5FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x118);
    if (o != NULL) {
        o = TObjDFDemo5__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
