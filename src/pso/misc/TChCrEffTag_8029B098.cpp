#include "types.h"

extern "C" {

void * create_str__11TChCrEffTagFPvPvPv(void *arg0, void *arg1, void *arg2);
void *__ct__14TChCrEffTagStrFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_str__11TChCrEffTagFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = __ct__14TChCrEffTagStrFv(o, arg0, arg1, arg2);
    }
    return o;
}

}
