#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/misc/TQuestListVM.h"

extern "C" {

s32 subtractive_rng_seed(s32 *, u32);
s32 prs_decompress_buffer(void *, s32);
s32 bswap_32__FPUl(u32 *);
s32 __ct__14SubtractiveRngFv(s32 *);

u32 TQuestListVM::decrypt_quest_data(s32 arg1, s32 arg2, u32 arg3) {
    u8 *arg0 = (u8 *)this;
    s32 sp10[60];
    u32 spC;
    u32 sp8;

    spC = *(u32 *)&this->m_name;
    sp8 = *(u32 *)&this->m_flags;
    bswap_32__FPUl(&spC);
    bswap_32__FPUl(&sp8);
    if (spC > arg3) {
        return 0U;
    }
    __ct__14SubtractiveRngFv(&sp10[0]);
    subtractive_rng_seed(&sp10[0], sp8);
    ((TAdSinglePlyChrSelectGC *)(&sp10[0]))->crypt_data_be((u32 *)(arg0 + 8), (s32)(arg1 - 8));
    prs_decompress_buffer((u8 *)&this->m_prev, arg2);
    return spC;
}

}
