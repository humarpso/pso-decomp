#include "types.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
void fn_80242C54(void *arg0);
int TBoss3Volopt::is_active() { return *(u8 *)&this->m_name & 0x1; }
#pragma push
#pragma fp_contract on
void fn_80242C54(void *arg0) {
    s16 temp_r3_3;
    u8 temp_r3;
    u8 temp_r3_2;
    if (((s32)((TBoss3Volopt *)arg0)->is_active()) != 0) {
        temp_r3 = *(u8 *)((s8 *)arg0 + 0);
        if (temp_r3 & 0x20) {
            if (temp_r3 & 0x40) {
                *(u8 *)((s8 *)arg0 + 0) = (u8) (temp_r3 & 0xFFFFFFBF);
                goto block_5;
            }
            ((TAdSinglePlyChrSelectGC *)arg0)->reset_state();
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
                ((TAdSinglePlyChrSelectGC *)arg0)->reset_state();
            }
        }
    }
}
#pragma pop

}
