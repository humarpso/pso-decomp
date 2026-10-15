#include "types.h"

extern "C" {

void *create__16TObjItemOKWindowFPv(void *arg0);
void *TObjItemOKWindow__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__16TObjItemOKWindowFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TObjItemOKWindow__ct(o, arg0);
    }
    return o;
}

}
