#include "types.h"

extern "C" {

void *__nw__7TObjectFUl(int);
void *__ct__13TObjCMHexTileFv(void *, void *, void *);
extern void *tl_07;

void *create_TObjCMHexTile(void *arg0) {
    void *o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        o = __ct__13TObjCMHexTileFv(o, tl_07, arg0);
    }
    return o;
}

}
