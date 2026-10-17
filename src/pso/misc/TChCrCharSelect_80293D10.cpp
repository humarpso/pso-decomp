#include "types.h"
#include "pso/TChCrCharSelect.h"

extern "C" {

void *__ct__15TChCrCharSelectFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *TChCrCharSelect::create(void *object) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = __ct__15TChCrCharSelectFv(o, object);
    }
    return o;
}

}
