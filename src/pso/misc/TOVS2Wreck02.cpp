#include "types.h"
#include "pso/misc/TOVS2Wreck02.h"
#include "pso/misc/TOVS2Wall01.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void *TOVS2Wreck02__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TOVS2Wreck02__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern s32 __vt__12TOVS2Wreck02[];

void *__dt__12TOVS2Wreck02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TOVS2Wreck02;
        ((TOVS2Wall01 *)arg0)->destroy(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *lbl_805D31CC;

void *TOVS2Wreck02__ct(void *arg0, void *arg1) {
    ((TOVS2Wall01 *)arg0)->init_wreck_object((s32)arg1, 1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TOVS2Wreck02;
    *(void * *)&((TOVS2Wreck02 *)arg0)->m_name = lbl_805D31CC;
    return arg0;
}

}
