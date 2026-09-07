#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FE4BC_lbl_805137C8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(s32, s32);
extern s32 lbl_805D5F5C;
s32 TAdSinglePlyChrSelectGC__sub_801FE800(u32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(s32, s32);
extern RecoveredGlobal_801FE4BC_lbl_805137C8 lbl_805137C8;
extern u32 lbl_805D5F58;
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE4BC(u32 arg0);
}

extern "C" {

struct Ent_801FE468_801FBF54 { char pad4[4]; char body[0x2798 - 4]; };

int TAdSinglePlyChrSelectGC__sub_801FE7D4(int a0);
int get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int a0);
s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 load_player__23TAdSinglePlyChrSelectGCFv(void);
s32 load_player_data__23TAdSinglePlyChrSelectGCFv(void);
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
s32 TAdSinglePlyChrSelectGC__sub_801FC564(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(s32, s32);
s32 check_ready__23TAdSinglePlyChrSelectGCFv();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);

extern s32 lbl_805D5F5C;

s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FCCDC((s32)(lbl_805D5F5C), (s32)(arg0)) != 0) {
        return (s32) &((struct Ent_801FE468_801FBF54 *) lbl_805D5F5C)[arg0].body[0];
    }
    return 0;
}

    extern int lbl_805137D8[];

typedef char RecoveredGlobal_801FE4BC_lbl_805137C8_size[sizeof(RecoveredGlobal_801FE4BC_lbl_805137C8) == 0x10 ? 1 : -1];
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE4BC(u32 arg0) {
    u8 *temp_r4;
    if (arg0 >= 7U) {
        return NULL;
    }
    if (TAdSinglePlyChrSelectGC__sub_801FCCDC((s32)((void *) ((*(s32 *)&lbl_805D5F58))), (s32)((void *) (arg0))) == 0) {
        return NULL;
    }
    temp_r4 = (u8 *)((*(s32 *)&lbl_805D5F58) + (arg0 * 0x2798));
    M2C_FIELD(&lbl_805137C8.value, s32 *, 0) = (s32) (temp_r4 + 0x374);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 4) = (s32) M2C_FIELD(temp_r4, s32 *, 0x368);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 8) = (s32) M2C_FIELD(temp_r4, s32 *, 0x2790);
    return &lbl_805137C8.value;
}

int TAdSinglePlyChrSelectGC__sub_801FE7D4(int a0) {  return lbl_805137D8[a0 + 4]; }

    extern int lbl_805137D8[];
int get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int a0) {  return lbl_805137D8[a0]; }

extern u32 lbl_805D5F58;

s32 TAdSinglePlyChrSelectGC__sub_801FE800(u32 arg0) {
    if (arg0 >= 7U) {
        return 0;
    }
    if (((u32) (*(u32 *)&lbl_805D5F5C) != 0U) && (TAdSinglePlyChrSelectGC__sub_801FCCDC((s32) (*(u32 *)&lbl_805D5F5C), (s32) arg0) != 0)) {
        return 1;
    }
    return 0;
}

s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    u32 var_r4 = arg0;
    u32 var_r3;
    if (var_r4 >= 7U) {
        return 0;
    }
    var_r3 = lbl_805D5F58;
    if ((var_r3 != 0U) && (TAdSinglePlyChrSelectGC__sub_801FCCDC((s32)(var_r3), (s32)(var_r4)) != 0)) {
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
    if (((u32) lbl_805D5F68 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && (TAdPlayerLoadGC__sub_801E0D8C(lbl_805D5F80) != 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F80, lbl_804C89BC);
        if ((var_r31 == 0) && (check_ready__23TAdSinglePlyChrSelectGCFv() != 0)) {
            var_r31 = setup__23TAdSinglePlyChrSelectGCFi(lbl_805D5F80);
            if (var_r31 == 0) {
                set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
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

    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
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
