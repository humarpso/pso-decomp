#include "types.h"
#include "pso/TObjItemNameSelect.h"

extern "C" {

void *TObjItemNameSelect__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *TObjItemNameSelect::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TObjItemNameSelect__ct(o, arg0);
    }
    return o;
}

}
