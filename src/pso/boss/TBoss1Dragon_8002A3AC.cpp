#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__12TBoss1DragonFv(void);
void fn_8001FE7C(void*, int);
void fn_8007EBB4(void*);

extern u32 TBoss1Dragon__data_805D4B08;
extern u32 TBoss1Dragon__data_805D4B28;

void free_resources__12TBoss1DragonFv(void) {
    if ((u32) TBoss1Dragon__data_805D4B28 != 0U) {
        fn_8007EBB4((void*)TBoss1Dragon__data_805D4B28);
        TBoss1Dragon__data_805D4B28 = 0U;
    }
    if ((u32) TBoss1Dragon__data_805D4B08 != 0U) {
        fn_8001FE7C((void*)TBoss1Dragon__data_805D4B08, 1);
        TBoss1Dragon__data_805D4B08 = 0U;
    }
}

}
