#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FF200_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200778(void *, void *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200A44(int);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FF200_lbl_80513910 lbl_80513910;
extern u32 lbl_805D5F58;
extern s32 lbl_805D5F78;
s32 TAdSinglePlyChrSelectGC__sub_801FF200(void);
}

extern "C" {

s32 load_selected_char__23TAdSinglePlyChrSelectGCFv(void);
s32 load_selected_character__23TAdSinglePlyChrSelectGCFv(void);
s32 start_load__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdPlayerLoadGC__sub_801E1B50(void*);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
s32 TAdSinglePlyChrSelectGC__sub_801FE75C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FF58C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200470();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);

extern M2C_UNK lbl_80513904[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 load_selected_char__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0x10) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = TAdSinglePlyChrSelectGC__sub_801FE75C();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(lbl_80513904);
            }
        }
    }
    return var_r31;
}

extern M2C_UNK lbl_80513904[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 load_selected_character__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = TAdSinglePlyChrSelectGC__sub_801FE75C();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(lbl_80513904);
            }
        }
    }
    return var_r31;
}

M2C_UNK init_buffer();
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 start_load__23TAdSinglePlyChrSelectGCFv(void) {
    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        TAdSinglePlyChrSelectGC__sub_801FF58C();
        init_buffer();
        TAdSinglePlyChrSelectGC__sub_80200470();
        TAdSinglePlyChrSelectGC__sub_801FDA4C();
        lbl_805D5F78 = 6;
        return 7;
    }
    return 0xFFFF0000;
}
typedef char RecoveredGlobal_801FF200_lbl_80513910_size[sizeof(RecoveredGlobal_801FF200_lbl_80513910) == 0x10 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_801FF200(void) {
    s32 temp_r3;
    temp_r3 = get_field_118__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&lbl_80513910.value, s32 *, 4) = temp_r3;
    M2C_FIELD(&lbl_80513910.value, s32 *, 0) = temp_r3;
    TAdSinglePlyChrSelectGC__sub_80200778((void *) ((*(s32 *)&lbl_805D5F58)), (void *) (&lbl_80513910.value));
    TAdSinglePlyChrSelectGC__sub_80200A44((int) (1));
    if (((s32)TAdSinglePlyChrSelectGC__sub_801FDA4C()) != 0) {
        return 0;
    }
    lbl_805D5F78 = 6;
    return 1;
}

}
