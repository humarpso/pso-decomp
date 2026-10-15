#include "types.h"

extern "C" {

void *create_lobby_pigeon(void *arg0);
void *construct_lobby_pigeon(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_lobby_pigeon(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = construct_lobby_pigeon(o, tl_05, arg0);
    }
    return o;
}

}
