#include "types.h"

extern "C" {
int is_active__12TBoss3VoloptFPv(void* p);
s32 reset_state__23TAdSinglePlyChrSelectGCFPv(void *);
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
        temp_r3 = *(u8 *)((s8 *)arg0 + 0);
        if (temp_r3 & 0x20) {
            if (temp_r3 & 0x40) {
                *(u8 *)((s8 *)arg0 + 0) = (u8) (temp_r3 & 0xFFFFFFBF);
                goto block_5;
            }
            reset_state__23TAdSinglePlyChrSelectGCFPv(arg0);
            return;
        }
block_5:
        temp_r3_2 = *(u8 *)((s8 *)arg0 + 0);
        if (temp_r3_2 & 4) {
            if (temp_r3_2 & 8) {
                temp_r3_3 = *(s16 *)((s8 *)arg0 + 0x10);
                *(s16 *)((s8 *)arg0 + 0x10) = (s16) (temp_r3_3 - (temp_r3_3 / (s16) *(s16 *)((s8 *)arg0 + 0x12)));
            }
            *(s16 *)((s8 *)arg0 + 0x12) = (s16) (*(s16 *)((s8 *)arg0 + 0x12) - 1);
            if (*(s16 *)((s8 *)arg0 + 0x12) <= 0) {
                reset_state__23TAdSinglePlyChrSelectGCFPv(arg0);
            }
        }
    }
}
#pragma pop

}
