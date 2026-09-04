#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801C5120(void);
void destroy__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK queue_destruction__7TObjectFv(void*);

    extern int lbl_805D5D90;
void TAdSinglePlyChrSelectGC__sub_801C5120(void) { lbl_805D5D90 = 0; }

extern u32 lbl_805D5DD0;

void destroy__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5DD0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D5DD0);
    }
}

}
