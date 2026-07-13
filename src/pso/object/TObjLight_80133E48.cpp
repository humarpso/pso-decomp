#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjLight__sub_80133E48(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern u32 TObjLight__data_805D5574;

void TObjLight__sub_80133E48(void) {
    if ((u32) TObjLight__data_805D5574 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TObjLight__data_805D5574);
        TObjLight__data_805D5574 = 0U;
    }
}

}
