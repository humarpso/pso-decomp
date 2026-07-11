#include "types.h"

extern "C" {

void free__11TOBoss4RockFUi(u32 arg0);
int TOBoss4Rock__sub_80147AA8(void* p);
s32 xfree__FPv();
int xmalloc__FUl(void*);

void free__11TOBoss4RockFUi(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}
int TOBoss4Rock__sub_80147AA8(void* p) { return xmalloc__FUl(p); }

}
