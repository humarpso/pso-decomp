#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__17TObjContainerJungFPv(void *arg0);
void release__17TObjContainerJungFv(void);
void *TObjContainerJung__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_8001FE7C(s32, M2C_UNK);

extern void *tl_05;

void *create__17TObjContainerJungFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJung__ct(o, tl_05, arg0);
    }
    return o;
}

extern s32 lbl_805D5BA0;
extern s32 lbl_805D5BA4;

void release__17TObjContainerJungFv(void) {
    fn_8001FE7C(lbl_805D5BA0, 1);
    lbl_805D5BA0 = 0;
    lbl_805D5BA4 = 0;
}

}
