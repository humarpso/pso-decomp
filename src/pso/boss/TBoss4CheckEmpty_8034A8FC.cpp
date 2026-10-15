#include "types.h"

extern "C" {

void *create__16TBoss4CheckEmptyFv(void);
void *__ct__16TBoss4CheckEmptyFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__16TBoss4CheckEmptyFv(void) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = __ct__16TBoss4CheckEmptyFv(o, tl_02);
    }
    return o;
}

}
