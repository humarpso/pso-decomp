#include "types.h"

extern "C" {

int alloc__23TAdSinglePlyChrSelectGCFPv(void* p);
int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
int alloc__22TQuestVmDownLoadServerFPv(void* p);
int fn_803DE864(void*);
int xmalloc__FUl(void*);
s32 xfree__FPv();

int alloc__23TAdSinglePlyChrSelectGCFPv(void* p) { return xmalloc__FUl(p); }
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}

}
