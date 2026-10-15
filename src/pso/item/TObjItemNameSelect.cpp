#include "types.h"

extern "C" {

void *create__18TObjItemNameSelectFPv(void *arg0);
void *TObjItemNameSelect__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__18TObjItemNameSelectFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TObjItemNameSelect__ct(o, arg0);
    }
    return o;
}

}
