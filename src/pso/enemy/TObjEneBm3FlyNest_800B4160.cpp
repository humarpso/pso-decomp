#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__17TObjEneBm3FlyNestFPv(void *arg0);
void free_fly__17TObjEneBm3FlyNestFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjEneBm3FlyNest__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK release_shared_data__13TObjEneBm3FlyFv();

extern u32 lbl_805D5108;

void free_fly__17TObjEneBm3FlyNestFv(void) {
    release_shared_data__13TObjEneBm3FlyFv();
    if ((u32) lbl_805D5108 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5108, 1);
        lbl_805D5108 = 0U;
    }
}

extern void *tl_04;

void *create__17TObjEneBm3FlyNestFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4DC);
    if (o != NULL) {
        o = TObjEneBm3FlyNest__ct(o, tl_04, arg0);
    }
    return o;
}

}
