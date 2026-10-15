#include "types.h"

extern "C" {

void *create__10TChallengeFv(void);
void *TChallenge__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_su;

void *create__10TChallengeFv(void) {
    void *o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TChallenge__ct(o, tl_su);
    }
    return o;
}

}
