#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FEBBC_lbl_80513904 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
M2C_UNK getDateStamp__FP9DateStamp(void *);
s32 TAdSinglePlyChrSelectGC__sub_801FDC14(int);
extern RecoveredGlobal_801FEBBC_lbl_80513904 char_select_date_stamp;
extern u32 lbl_805D5F5C;
extern s32 lbl_805D5F78;
s32 TAdSinglePlyChrSelectGC__sub_801FEBBC(void);
s32 load_pso_system(void);
extern s32 lbl_805D5FA8;
void check_system_load_result__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

s32 check_ready__23TAdSinglePlyChrSelectGCFv(void);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFF14();
M2C_UNK create_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();

extern u32 lbl_805D5F68;
extern u32 lbl_805D5F98;

s32 check_ready__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r3;

    init_slots__23TAdSinglePlyChrSelectGCFv();
    var_r3 = 0;
    if (((u32) lbl_805D5F68 != 0U) && ((u32) lbl_805D5F98 != 0U)) {
        TAdSinglePlyChrSelectGC__sub_801FFF14();
        var_r3 = 1;
    }
    return var_r3;
}

extern u32 lbl_805D5F6C;
extern u32 lbl_805D5F9C;

s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r3;

    init_slots__23TAdSinglePlyChrSelectGCFv();
    var_r3 = 0;
    if (((u32) lbl_805D5F6C != 0U) && ((u32) lbl_805D5F9C != 0U)) {
        create_instance__23TAdSinglePlyChrSelectGCFv();
        var_r3 = 1;
    }
    return var_r3;
}
typedef char RecoveredGlobal_801FEBBC_lbl_80513904_size[sizeof(RecoveredGlobal_801FEBBC_lbl_80513904) == 0xC ? 1 : -1];

void check_system_load_result__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_pso_system();
    lbl_805D5FA8 = 0;
    if (r == 0) lbl_805D5FA8 = 1;
}

s32 TAdSinglePlyChrSelectGC__sub_801FEBBC(void) {
    s32 var_r31;
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F5C != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0x16)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((int) (1));
        if (var_r31 == 0) {
            var_r31 = TAdSinglePlyChrSelectGC__sub_801FDC14((int) (1));
            if (var_r31 == 0) {
                lbl_805D5F78 = 0x14;
                getDateStamp__FP9DateStamp((void *) (&char_select_date_stamp.value));
            }
        }
    }
    return var_r31;
}

}
