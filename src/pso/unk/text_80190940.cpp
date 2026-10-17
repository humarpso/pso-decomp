#include "types.h"
#include "pso/unk/text_80190940.h"

extern "C" {

void *TObjEnvSound__ct(void *, void *, void *);
int is_not_split_screen__13TRaderMapCoreFv(void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void * TObjEnvSound__create(void *rader_map_core) {
    void *o;
    if (is_not_split_screen__13TRaderMapCoreFv(rader_map_core) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = TObjEnvSound__ct(o, tl_05, rader_map_core);
    }
    return o;
}

}
