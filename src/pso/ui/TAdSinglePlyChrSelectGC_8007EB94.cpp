#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
int alloc__22TQuestVmDownLoadServerFv(void* p);
int fn_803DE864(void*);
int xmalloc__FUl(void*);
s32 xfree__FPv();

int TAdSinglePlyChrSelectGC::alloc() { return xmalloc__FUl(this); }
void TAdSinglePlyChrSelectGC::safe_free(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}

}
