#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dl__FPv(u32 *);
u32 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFC74(u32 *, s32);
u32 *init_windows__23TAdSinglePlyChrSelectGCFi();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFF98(s32);
u32 TAdSinglePlyChrSelectGC__sub_80201204(u32 *, M2C_UNK);
M2C_UNK init_timestamped_data();
s32 get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK memcpy(s32, s32, u32);
extern s32 lbl_80513910[];
extern s32 lbl_805D5F68;
extern s32 lbl_805D5F98;

s32 load_and_verify_data(s32 arg0) {
    s32 temp_r3;
    u32 *var_r31;
    u32 temp_r30;

    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
    temp_r3 = get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
    lbl_80513910[1] = temp_r3;
    lbl_80513910[0] = temp_r3;
    memcpy(lbl_805D5F68, lbl_805D5F98 + 0x2048, 0xE28C);
    TAdSinglePlyChrSelectGC__sub_801FFF98(lbl_805D5F68);
    var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv(0xE28C);
    if (var_r31 != NULL) {
        var_r31 = init_windows__23TAdSinglePlyChrSelectGCFi();
    }
    TAdSinglePlyChrSelectGC__sub_801FFC74(var_r31, lbl_805D5F68);
    temp_r30 = *var_r31;
    *var_r31 = 0U;
    if (temp_r30 != TAdSinglePlyChrSelectGC__sub_80201204(var_r31, 0xE28C)) {
        if (arg0 != 0) {
            __dl__FPv(var_r31);
            return 0;
        }
        init_timestamped_data();
        goto block_9;
    }
    if (arg0 != 0) {
        __dl__FPv(var_r31);
        return 1;
    }
    set_save_slot__23TAdSinglePlyChrSelectGCFi(1);
block_9:
    __dl__FPv(var_r31);
    return 1;
}

}
