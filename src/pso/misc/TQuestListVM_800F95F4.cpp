#include "types.h"

extern "C" {

u32 decrypt_quest_data__12TQuestListVMFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
s32 crypt_data_be__23TAdSinglePlyChrSelectGCFPvPvi(s32 *, void *, s32);
s32 subtractive_rng_seed(s32 *, u32);
s32 prs_decompress_buffer(void *, s32);
s32 bswap_32__FPUl(u32 *);
s32 __ct__14SubtractiveRngFv(s32 *);

u32 decrypt_quest_data__12TQuestListVMFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 sp10[60];
    u32 spC;
    u32 sp8;

    spC = *(u32 *)((s8 *)arg0 + 0);
    sp8 = *(u32 *)((s8 *)arg0 + 4);
    bswap_32__FPUl(&spC);
    bswap_32__FPUl(&sp8);
    if (spC > arg3) {
        return 0U;
    }
    __ct__14SubtractiveRngFv(&sp10[0]);
    subtractive_rng_seed(&sp10[0], sp8);
    crypt_data_be__23TAdSinglePlyChrSelectGCFPvPvi(&sp10[0], arg0 + 8, arg1 - 8);
    prs_decompress_buffer(arg0 + 8, arg2);
    return spC;
}

}
