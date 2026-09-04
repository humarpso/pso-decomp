#include "types.h"
typedef s32 M2C_UNK;

extern "C" {

int alloc__23TAdSinglePlyChrSelectGCFPv(void* p);
int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
int alloc__22TQuestVmDownLoadServerFPv(void* p);
int fn_803DE864(void*);
int xmalloc__FUl(void*);
M2C_UNK xfree__FPv();

int alloc__23TAdSinglePlyChrSelectGCFPv(void* p) { return xmalloc__FUl(p); }
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}

}
