#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_and_init_object_b4__10TObjPlayerFv(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
void *run_and_return_arg__10TObjPlayerFi(void *);

extern void *lbl_805D6FB8;

void alloc_and_init_object_b4__10TObjPlayerFv(void) {
    void *o;

    o = alloc__23TAdSinglePlyChrSelectGCFPv(0xB4);
    if (o != NULL) {
        o = run_and_return_arg__10TObjPlayerFi(o);
    }
    lbl_805D6FB8 = o;
}

}
