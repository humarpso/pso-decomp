#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/misc/TQuestVmDownLoadServer.h"

extern "C" {

int xmalloc__FUl(void*);
s32 xfree__FPv();

int TAdSinglePlyChrSelectGC::alloc() { return xmalloc__FUl(this); }
void TAdSinglePlyChrSelectGC::safe_free(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}

}
