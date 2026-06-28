#include "types.h"

extern "C" {

void TOBoss4Rock__sub_80147A80(u32 arg0);
int TOBoss4Rock__sub_80147AA8(void* p);
s32 xfree__FPv();
int xmalloc__FUl(void*);

void TOBoss4Rock__sub_80147A80(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}
int TOBoss4Rock__sub_80147AA8(void* p) { return xmalloc__FUl(p); }

}
