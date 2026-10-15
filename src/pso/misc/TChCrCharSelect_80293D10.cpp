#include "types.h"

extern "C" {

void *create__15TChCrCharSelectFPv(void *arg0);
void *__ct__15TChCrCharSelectFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__15TChCrCharSelectFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = __ct__15TChCrCharSelectFv(o, arg0);
    }
    return o;
}

}
