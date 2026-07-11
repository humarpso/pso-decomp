#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 load_player_data__23TAdSinglePlyChrSelectGCFv(void);
s32 load_player__23TAdSinglePlyChrSelectGCFv(void);
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
s32 TAdSinglePlyChrSelectGC__sub_801FC564(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(u32, u32);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);
s32 check_ready__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80202BA8(M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80202BB0(M2C_UNK);
s8 fn_8001C5E8();

extern u32 lbl_805D5F58;

s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    u32 var_r4 = arg0;
    u32 var_r3;
    if (var_r4 >= 7U) {
        return 0;
    }
    var_r3 = lbl_805D5F58;
    if ((var_r3 != 0U) && (TAdSinglePlyChrSelectGC__sub_801FCCDC(var_r3, var_r4) != 0)) {
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_804C89BC[];
extern u32 lbl_805D5F68;
extern s32 lbl_805D5F80;

s32 load_player_data__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0) && (TAdPlayerLoadGC__sub_801E0D8C(lbl_805D5F80) != 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F80, lbl_804C89BC);
        if ((var_r31 == 0) && (check_ready__23TAdSinglePlyChrSelectGCFv() != 0)) {
            var_r31 = setup__23TAdSinglePlyChrSelectGCFi(lbl_805D5F80);
            if (var_r31 == 0) {
                TAdSinglePlyChrSelectGC__sub_80202BA8(0xC);
            }
        }
    }
    return var_r31;
}

extern M2C_UNK lbl_804C89BC[];
extern u32 lbl_805D5F68;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F80;

s32 load_player__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;
    s32 var_r3;
    s8 temp_r3;

    TAdSinglePlyChrSelectGC__sub_80202BB0(0);
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        temp_r3 = fn_8001C5E8();
        lbl_805D5F80 = temp_r3;
        var_r31 = TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F80);
        if (var_r31 == 0) {
            var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F80, lbl_804C89BC);
            if (var_r31 == 0) {
                var_r3 = TAdSinglePlyChrSelectGC__sub_801FC564(lbl_805D5F80);
                if (var_r3 == 0) {
                    lbl_805D5F78 = 0xD;
                }
                return var_r3;
            }
        }
    }
    return var_r31;
}

}
