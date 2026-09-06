#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int is_active__12TBoss3VoloptFPv(void* p);
M2C_UNK reset_state__23TAdSinglePlyChrSelectGCFPv(void *);
void fn_80242C54(void *arg0);
}

extern "C" {

int is_active__12TBoss3VoloptFPv(void* p) { return *(u8*)((char*)p + 0x0) & 0x1; }
#pragma push
#pragma fp_contract on
void fn_80242C54(void *arg0) {
    s16 temp_r3_3;
    u8 temp_r3;
    u8 temp_r3_2;
    if (((s32)is_active__12TBoss3VoloptFPv((void*)(arg0))) != 0) {
        temp_r3 = M2C_FIELD(arg0, u8 *, 0);
        if (temp_r3 & 0x20) {
            if (temp_r3 & 0x40) {
                M2C_FIELD(arg0, u8 *, 0) = (u8) (temp_r3 & 0xFFFFFFBF);
                goto block_5;
            }
            reset_state__23TAdSinglePlyChrSelectGCFPv(arg0);
            return;
        }
block_5:
        temp_r3_2 = M2C_FIELD(arg0, u8 *, 0);
        if (temp_r3_2 & 4) {
            if (temp_r3_2 & 8) {
                temp_r3_3 = M2C_FIELD(arg0, s16 *, 0x10);
                M2C_FIELD(arg0, s16 *, 0x10) = (s16) (temp_r3_3 - (temp_r3_3 / (s16) M2C_FIELD(arg0, s16 *, 0x12)));
            }
            M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) - 1);
            if (M2C_FIELD(arg0, s16 *, 0x12) <= 0) {
                reset_state__23TAdSinglePlyChrSelectGCFPv(arg0);
            }
        }
    }
}
#pragma pop

}
