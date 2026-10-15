#include "types.h"

extern "C" {

void * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TCheckMemoryCard__ct(void *, void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

void * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x250);
    if (o != NULL) {
        o = TCheckMemoryCard__ct(o, arg0, arg1, arg2, 0);
    }
    return o;
}

}
