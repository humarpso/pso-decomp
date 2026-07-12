#include "types.h"
typedef s32 M2C_UNK;

extern "C" {

int TAdSinglePlyChrSelectGC__sub_8007EB94(void* p);
int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
int TQuestVmDownLoadServer__sub_8007EBFC(void* p);
int fn_803DE864(void*);
int xmalloc__FUl(void*);
M2C_UNK xfree__FPv();

int TAdSinglePlyChrSelectGC__sub_8007EB94(void* p) { return xmalloc__FUl(p); }
void TAdSinglePlyChrSelectGC__sub_8007EBB4(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}

}
