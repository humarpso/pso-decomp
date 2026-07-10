#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_result_windows__6TLobbyFv(void);
f32 calc_result_offset__6TLobbyFv(void);
M2C_UNK TWindowChallengeResult__sub_80228DB4(s32, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK fn_8001DC24();
u32 fn_800FC0D8();
M2C_UNK fn_80229080(M2C_UNK *);

extern M2C_UNK lbl_8050AAAC[];
extern s32 lbl_805D55AC;
extern s32 lbl_805D55B0;
extern M2C_UNK lbl_805D7ED8;
extern M2C_UNK lbl_805D7EDC;

void close_result_windows__6TLobbyFv(void) {
    TWindowSubStatusDisp__sub_802290E0();
    fn_80229080(lbl_8050AAAC);
    fn_80229080(&lbl_805D7ED8);
    TWindowChallengeResult__sub_80228DB4(lbl_805D55AC, 2);
    fn_80229080(&lbl_805D7EDC);
    TWindowChallengeResult__sub_80228DB4(lbl_805D55B0 + 1, 2);
}

s32 get_main_phase();
extern M2C_UNK lbl_80434A90;
extern f32 lbl_805D7EE0;

f32 calc_result_offset__6TLobbyFv(void) {
    f32 var_f31;

    var_f31 = lbl_805D7EE0;
    if (get_main_phase() == 0xF) {
        close_result_windows__6TLobbyFv();
        fn_8001DC24();
        var_f31 -= (f32) fn_800FC0D8();
    }
    return var_f31;
}

}
