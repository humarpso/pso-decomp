#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__15TOKeyJungleMainFPv(void *arg0);
void release_static_resource__15TOKeyJungleMainFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOKeyJungleMain__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__15TOKeyJungleMainFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOKeyJungleMain__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOKeyJungleMain__data_805D65E0;

void release_static_resource__15TOKeyJungleMainFv(void) {
    if ((u32) TOKeyJungleMain__data_805D65E0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOKeyJungleMain__data_805D65E0, 1);
        TOKeyJungleMain__data_805D65E0 = 0U;
    }
}

}
