#include "types.h"
#include "pso/misc/TCheckMemoryCard.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

void *__ct__16TCheckMemoryCardFP7TObjectPvPvPv(void *, void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

void *TAdSinglePlyChrSelectGC::create_check_memory_card(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = new TCheckMemoryCard((TObject *)arg0, (void *)arg1, (void *)arg2, (void *)0);
    return o;
}

}
