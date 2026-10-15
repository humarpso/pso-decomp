#include "types.h"

extern "C" {
s32 run_step__9TItemDropFi(int, void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLobby__sub_80209584(int, int);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 __cvt_fp2unsigned(f32);
s32 rand();
extern s32 item_drop_rng;
extern s32 lbl_805D60A4;
extern s32 lbl_805D60D0;
extern const f32 lbl_805DC618;
extern const f32 lbl_805DC61C;
void TLobby__sub_8020A2AC(void);
}

extern "C" {

void TLobby__sub_8020A2AC(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r0_2;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        lbl_805D60D0 = __cvt_fp2unsigned((f32) (lbl_805DC618 * (lbl_805DC61C * (f32) rand())));
    }
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE8));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = run_step__9TItemDropFi((int) (temp_r3), (void *) (lbl_805D60D0));
    }
    item_drop_rng = var_r0;
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x14));
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0) {
        var_r0_2 = TLobby__sub_80209584((int) (temp_r3_2), (int) (0x20));
    }
    lbl_805D60A4 = var_r0_2;
}

}
