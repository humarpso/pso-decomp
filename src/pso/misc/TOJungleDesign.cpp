#include "types.h"

extern "C" {

void *TOJungleDesign__create(void *arg0);
void *TOJungleDesign__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TOJungleDesign__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TOJungleDesign__ct(o, tl_05, arg0);
    }
    return o;
}

}
