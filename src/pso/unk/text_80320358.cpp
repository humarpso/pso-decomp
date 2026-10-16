#include "types.h"
#include "pso/misc/TScene.h"

struct S_80320358 {
    void *a;
    void *b;
};

extern "C" {
s32 read_disc_file(void *, void *);
u8 *fn_803204B0(void *);
s32 OSLink(void *, void *);
u8 *xmalloc__FUl(u32);
u8 *load_rel_module(u8 *arg0, s32 arg1);
void __dl__FPv(void *);
u8 *fn_803204B0(void *);
void OSUnlink(void *);
void xfree__FPv(void *);
S_80320358 *fn_80320358(S_80320358 *arg0, s16 arg1);
}

extern "C" {

S_80320358 *fn_80320358(S_80320358 *arg0, s16 arg1) {
    u8 *t;
    if (arg0 != NULL) {
        t = fn_803204B0(arg0);
        if (t != NULL) {
            (*(void (**)(void))(t + 0x38))();
        }
        if (arg0->b != NULL) {
            OSUnlink(arg0->b);
            xfree__FPv(arg0->b);
            arg0->b = NULL;
        }
        if (arg0->a != NULL) {
            xfree__FPv(arg0->a);
            arg0->a = NULL;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
u8 *load_rel_module(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    s32 size;
    u32 size2;
    *(void **)((s8 *)arg0 + 0) = NULL;
    *(void **)((s8 *)arg0 + 4) = NULL;
    size = ((TScene *)arg1)->update_lobby_scene();
    if (size > 0) {
        *(void **)((s8 *)arg0 + 4) = xmalloc__FUl(size);
        if ((void *) *(void **)((s8 *)arg0 + 4) == NULL) {
            return arg0;
        }
        read_disc_file((void *) (arg1), *(void **)((s8 *)arg0 + 4));
        size2 = *(u32 *)((s8 *)(*(void **)((s8 *)arg0 + 4)) + 0x20);
        if (size2 != 0U) {
            *(void **)((s8 *)arg0 + 0) = xmalloc__FUl(size2);
            if ((void *) *(void **)((s8 *)arg0 + 0) == NULL) {
                return arg0;
            }
        }
        OSLink((void *) (*(void **)((s8 *)arg0 + 4)), (void *) (*(void **)((s8 *)arg0 + 0)));
        temp_r3 = fn_803204B0(arg0);
        if (temp_r3 != NULL) {
            (*(s32 (**)())((s8 *)temp_r3 + 0x34))();
        }
        goto block_8;
    }
block_8:
    return arg0;
}
#pragma pop

}
