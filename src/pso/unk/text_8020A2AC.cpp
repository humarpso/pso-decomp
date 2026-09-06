#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 run_step__9TItemDropFi(int, void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLobby__sub_80209584(int, int);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 __cvt_fp2unsigned(f32);
s32 rand__11TOBoss4RockFv();
extern s32 lbl_805D60A0;
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
        lbl_805D60D0 = __cvt_fp2unsigned((f32) (lbl_805DC618 * (lbl_805DC61C * (f32) rand__11TOBoss4RockFv())));
    }
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE8));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = run_step__9TItemDropFi((int) (temp_r3), (void *) (lbl_805D60D0));
    }
    lbl_805D60A0 = var_r0;
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x14));
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0) {
        var_r0_2 = TLobby__sub_80209584((int) (temp_r3_2), (int) (0x20));
    }
    lbl_805D60A4 = var_r0_2;
}

}
