#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
s32 fn_801C2360(s32);
extern u32 lbl_805D5D68;
extern u32 TObjPlayer__data_805D5D80;
extern u32 lbl_805D5D84;
void TObjPlayer__sub_801BDFC4(void);
}

extern "C" {

void TObjPlayer__sub_801BDFC4(void) {
    s32 temp_r3;
    s32 var_r0;
    if ((u32) TObjPlayer__data_805D5D80 == 0U) {
        TObjPlayer__data_805D5D80 = alloc_buffer__11TOBoss4RockFPv((void *)0x9000);
    }
    if ((u32) lbl_805D5D84 == 0U) {
        lbl_805D5D84 = alloc_buffer__11TOBoss4RockFPv((void *)0x4800);
    }
    if ((u32) lbl_805D5D68 == 0U) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x60);
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = fn_801C2360(temp_r3);
        }
        lbl_805D5D68 = (u32) var_r0;
    }
}

}
