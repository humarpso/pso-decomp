#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FDC14_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_801FE3E4_lbl_805137C8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 TAdPlayerLoadGC__sub_801E2048(int, void *);
M2C_UNK load_player_slot__23TAdSinglePlyChrSelectGCFPvii(int, void *, void *);
extern unsigned char lbl_804C88C0[];
extern int lbl_805D49B4;
extern int lbl_805D5F94;
void TAdSinglePlyChrSelectGC__sub_801FDC14(void);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(void *, void *);
extern RecoveredGlobal_801FE3E4_lbl_805137C8 lbl_805137C8;
extern u32 lbl_805D5F5C;
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE3E4(u32 arg0);
s32 TAdPlayerLoadGC__sub_801E2048(int, void *);
M2C_UNK load_player_slot__23TAdSinglePlyChrSelectGCFPvii(int, void *, void *);
extern unsigned char lbl_804C8914[];
extern int lbl_805D49B4;
extern int lbl_805D5F9C;
void TAdSinglePlyChrSelectGC__sub_801FDBC4(void);
}

extern "C" {

s32 check_page_cross__23TAdSinglePlyChrSelectGCFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void open_confirm_window__23TAdSinglePlyChrSelectGCFv(void);
s32 swap_characters__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_801FDDAC();
s32 TAdSinglePlyChrSelectGC__sub_801FDE14();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDEE4(u32, s32, u32, s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE380(u32, s32, u32, s32);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
M2C_UNK increment_counters__23TAdSinglePlyChrSelectGCFv();

    extern unsigned char lbl_804C88C0[];
    extern int lbl_805D49B4;
    extern int lbl_805D5F78;
    extern int lbl_805D5F84;
    extern int lbl_805D5F94;
void open_confirm_window__23TAdSinglePlyChrSelectGCFv(void) { lbl_805D49B4 = 1; draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)1, lbl_804C88C0, (void*)(lbl_805D5F94), (void*)(lbl_805D5F84)); lbl_805D5F78 = 18; }

extern u32 lbl_805D5F58;
extern u32 lbl_805D5F5C;

typedef char RecoveredGlobal_801FDC14_lbl_804C88C0_size[sizeof(RecoveredGlobal_801FDC14_lbl_804C88C0) == 0x54 ? 1 : -1];

void TAdSinglePlyChrSelectGC__sub_801FDBC4(void) {
    if (TAdPlayerLoadGC__sub_801E2048((int) (1), (void *) (&(*(RecoveredGlobal_801FDC14_lbl_804C88C0 *)&lbl_804C8914).value)) == 0) {
        (*(s32 *)&lbl_805D49B4) = 1;
        load_player_slot__23TAdSinglePlyChrSelectGCFPvii((int) (1), (void *) (&(*(RecoveredGlobal_801FDC14_lbl_804C88C0 *)&lbl_804C8914).value), (void *) ((*(s32 *)&lbl_805D5F9C)));
    }
}

void TAdSinglePlyChrSelectGC__sub_801FDC14(void) {
    if (TAdPlayerLoadGC__sub_801E2048((int) (1), (void *) (&(*(RecoveredGlobal_801FDC14_lbl_804C88C0 *)&lbl_804C88C0).value)) == 0) {
        (*(s32 *)&lbl_805D49B4) = 1;
        load_player_slot__23TAdSinglePlyChrSelectGCFPvii((int) (1), (void *) (&(*(RecoveredGlobal_801FDC14_lbl_804C88C0 *)&lbl_804C88C0).value), (void *) ((*(s32 *)&lbl_805D5F94)));
    }
}

s32 swap_characters__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 result;
    if ((arg0 >= 7) || (arg1 >= 7)) {
        return 0;
    }
    if ((u32) lbl_805D5F58 == 0U) {
        goto return_zero;
    }
    if ((u32) lbl_805D5F5C == 0U) {
        goto return_zero;
    }
    if (check_page_cross__23TAdSinglePlyChrSelectGCFiiii((s32)(lbl_805D5F5C), (s32)(arg0), (s32)(lbl_805D5F58), (s32)(arg1)) == 0) {
        goto return_zero;
    }
    increment_counters__23TAdSinglePlyChrSelectGCFv();
    TAdSinglePlyChrSelectGC__sub_801FE380(lbl_805D5F5C, arg0, lbl_805D5F58, arg1);
    return 1;
return_zero:
    return 0;
}

extern u32 lbl_805D5F58;
extern u32 lbl_805D5F5C;

s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    if ((arg0 >= 7) || (arg1 >= 7)) {
        return 0;
    }
    if (arg1 > 3) {
        return 0;
    }
    if (arg0 <= 3) {
        return 0;
    }
    if ((lbl_805D5F58 != 0U) && (lbl_805D5F5C != 0U) && (check_page_cross__23TAdSinglePlyChrSelectGCFiiii((s32)(lbl_805D5F58), (s32)(arg0), (s32)(lbl_805D5F5C), (s32)(arg1)) != 0)) {
        increment_counters__23TAdSinglePlyChrSelectGCFv();
        TAdSinglePlyChrSelectGC__sub_801FDEE4(lbl_805D5F58, arg0, lbl_805D5F5C, arg1);
        return 1;
    }
    return 0;
}

s32 check_page_cross__23TAdSinglePlyChrSelectGCFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((arg2 >= 4) && (arg4 <= 3)) {
        return TAdSinglePlyChrSelectGC__sub_801FDDAC();
    }
    if ((arg2 <= 3) && (arg4 >= 4)) {
        return TAdSinglePlyChrSelectGC__sub_801FDE14();
    }
    return 0;
}
typedef char RecoveredGlobal_801FE3E4_lbl_805137C8_size[sizeof(RecoveredGlobal_801FE3E4_lbl_805137C8) == 0x10 ? 1 : -1];
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE3E4(u32 arg0) {
    u8 *temp_r4;
    if (arg0 >= 7U) {
        return NULL;
    }
    if (TAdSinglePlyChrSelectGC__sub_801FCCDC((void *) ((*(s32 *)&lbl_805D5F5C)), (void *) (arg0)) == 0) {
        return NULL;
    }
    temp_r4 = (u8 *)((*(s32 *)&lbl_805D5F5C) + (arg0 * 0x2798));
    M2C_FIELD(&lbl_805137C8.value, s32 *, 0) = (s32) (temp_r4 + 0x374);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 4) = (s32) M2C_FIELD(temp_r4, s32 *, 0x368);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 8) = (s32) M2C_FIELD(temp_r4, s32 *, 0x2790);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 0xC) = (s32) M2C_FIELD(temp_r4, s32 *, 0x42C);
    return &lbl_805137C8.value;
}

}
