#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 load_pso_system(void);
s32 load_system_file(s32 arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
s32 TAdSinglePlyChrSelectGC__sub_801FDB58(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FDBC4();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();

extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F6C;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F8C;

s32 load_system_file(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    s32 temp_r3;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F6C != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
        lbl_805D5F8C = temp_r3;
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((s32)(temp_r3));
        if (var_r31 == 0) {
            var_r31 = TAdPlayerLoadGC__sub_801E2048((s32)(lbl_805D5F8C), (M2C_UNK *)(lbl_804C8914));
            if (var_r31 == 0) {
                var_r3 = TAdSinglePlyChrSelectGC__sub_801FDB58(lbl_805D5F8C);
                if (var_r3 == 0) {
                    if (arg0 != 0) {
                        lbl_805D5F78 = 0x11;
                    } else {
                        lbl_805D5F78 = 0x10;
                    }
                }
                return var_r3;
            }
        }
    }
    var_r3 = var_r31;
    return var_r3;
}

extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F70;
extern s32 lbl_805D5F78;

s32 load_pso_system(void) {
    s32 var_r31;
    s32 var_r3;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F70 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((s32)(1));
        if (var_r31 == 0) {
            var_r31 = TAdPlayerLoadGC__sub_801E2048((s32)(1), (M2C_UNK *)(lbl_804C8914));
            if (var_r31 == 0) {
                var_r3 = TAdSinglePlyChrSelectGC__sub_801FDBC4();
                if (var_r3 == 0) {
                    lbl_805D5F78 = 0x16;
                }
                return var_r3;
            }
        }
    }
    var_r3 = var_r31;
    return var_r3;
}

}
