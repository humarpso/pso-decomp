#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_80320358 {
    void *a;
    void *b;
};

extern "C" {
s32 update_lobby_scene__6TSceneFPv(void *);
M2C_UNK TLobby__sub_800F9DF4(void *, void *);
u8 *fn_803204B0(void *);
M2C_UNK OSLink(void *, void *);
u8 *xmalloc__FUl(u32);
u8 *fn_803203EC(u8 *arg0, s32 arg1);
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
u8 *fn_803203EC(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    s32 size;
    u32 size2;
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, void **, 4) = NULL;
    size = update_lobby_scene__6TSceneFPv((void *) (arg1));
    if (size > 0) {
        M2C_FIELD(arg0, void **, 4) = xmalloc__FUl(size);
        if ((void *) M2C_FIELD(arg0, void **, 4) == NULL) {
            return arg0;
        }
        TLobby__sub_800F9DF4((void *) (arg1), M2C_FIELD(arg0, void **, 4));
        size2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x20);
        if (size2 != 0U) {
            M2C_FIELD(arg0, void **, 0) = xmalloc__FUl(size2);
            if ((void *) M2C_FIELD(arg0, void **, 0) == NULL) {
                return arg0;
            }
        }
        OSLink((void *) (M2C_FIELD(arg0, void **, 4)), (void *) (M2C_FIELD(arg0, void **, 0)));
        temp_r3 = fn_803204B0(arg0);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, M2C_UNK (**)(), 0x34)();
        }
        goto block_8;
    }
block_8:
    return arg0;
}
#pragma pop

}
