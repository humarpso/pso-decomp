#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028D9B4_lbl_8051C094 { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_8028D9B4_lbl_8051C094_size[sizeof(RecoveredGlobal_8028D9B4_lbl_8051C094) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8028D9A8_lbl_8051C094 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_8028DA0C_lbl_8051C07C {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8028D9F8_lbl_8051C094 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
u8 * TNpcPlayer__sub_8007206C(void *, void *);
extern RecoveredGlobal_8028D9B4_lbl_8051C094 lbl_8051C094;
void TObjCMMainMenu__sub_8028D9B4(u8 *arg0);
extern RecoveredGlobal_8028D9B4_lbl_8051C094 lbl_8051C094;
M2C_UNK *TObjCMMainMenu__sub_8028D9A8(void);
M2C_UNK strncpy(void *, void *, int);
extern RecoveredGlobal_8028DA0C_lbl_8051C07C lbl_8051C07C;
void TObjCMMainMenu__sub_8028DA0C(s32 arg0);
extern RecoveredGlobal_8028D9B4_lbl_8051C094 lbl_8051C094;
void TObjCMMainMenu__sub_8028D9F8(void);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);
s32 get_current_char_flag__14TObjCMMainMenuFv(void);
u8 * TNpcPlayer__sub_8007206C(void *, void *);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);
s32 TCharaMaking__sub_8028DE78(int);
void fn_8028DBC4(s32 _w0);
int TAdSinglePlyChrSelectGC__sub_8028DC14(void);
void fn_8028DBC4(s32 _w0);
int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p);
s32 TAdEndText__sub_8001B3EC(s32);
s32 submit_card_password__17TWindowSubComCardFi(u8 *);
M2C_UNK strncpy(void *, void *, int);
s32 TObjCMMainMenu__sub_8028DA7C(s8 *arg0);
}

extern "C" {

void select_char_menu__14TObjCMMainMenuFv(void);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);

typedef char RecoveredGlobal_8028D9A8_lbl_8051C094_size[sizeof(RecoveredGlobal_8028D9A8_lbl_8051C094) == 0x54 ? 1 : -1];
M2C_UNK *TObjCMMainMenu__sub_8028D9A8(void) {
    return &(*(RecoveredGlobal_8028D9A8_lbl_8051C094 *)&lbl_8051C094).value;
}

void TObjCMMainMenu__sub_8028D9B4(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 0x32) & 0xA) {
        TObjCMMainMenu__sub_8028D9F8();
        return;
    }
    TNpcPlayer__sub_8007206C(&lbl_8051C094.value, arg0);
}

typedef char RecoveredGlobal_8028DA0C_lbl_8051C07C_size[sizeof(RecoveredGlobal_8028DA0C_lbl_8051C07C) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8028D9F8_lbl_8051C094_size[sizeof(RecoveredGlobal_8028D9F8_lbl_8051C094) == 0x54 ? 1 : -1];
void TObjCMMainMenu__sub_8028D9F8(void) {
    M2C_FIELD(&(*(RecoveredGlobal_8028D9F8_lbl_8051C094 *)&lbl_8051C094).value, s8 *, 0x31) = -1;
}

void TObjCMMainMenu__sub_8028DA0C(s32 arg0) {
    strncpy((void *) (&lbl_8051C07C.value), (void *) (arg0), (int) (0xC));
    M2C_FIELD(&lbl_8051C07C.value, s8 *, 0xC) = 0;
}

void select_char_menu__14TObjCMMainMenuFv(void) {
    TObjCMMainMenu__sub_8028DA0C((s32)(get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370));
}

s32 TObjCMMainMenu__sub_8028DA7C(s8 *arg0) {
    s8 buf[13];
    s8 out[16];
    s32 found;
    s8 *p;
    s8 *q;
    strncpy(buf, arg0, 0xC);
    buf[12] = 0;
    found = 0;
    p = buf;
    while (*p != 0) {
        if (*p != 0x20) {
            found = 1;
            break;
        }
        p++;
    }
    if (found == 0) {
        *arg0 = 0;
        return 0;
    }
    if (submit_card_password__17TWindowSubComCardFi((u8 *)buf) != 0) {
        *arg0 = 0;
        return 0;
    }
    p = buf;
    q = out;
    while (*p != 0) {
        if (TAdEndText__sub_8001B3EC(*p) != 0) {
            *q = *p;
            q++;
        }
        p++;
    }
    *q = 0;
    if (submit_card_password__17TWindowSubComCardFi((u8 *)out) != 0) {
        *arg0 = 0;
        return 0;
    }
    return 1;
}

s32 get_current_char_flag__14TObjCMMainMenuFv(void) {
    s32 x = (s8) M2C_FIELD(((void *)get_char_index__23TAdSinglePlyChrSelectGCFUi((M2C_UNK)(0xFFFF))), u8 *, 0x3A0);
    return (u32) __cntlzw(-1 - x) >> 5;
}
void fn_8028DBC4(s32 _w0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(((s32)((void *)get_char_index__23TAdSinglePlyChrSelectGCFUi((M2C_UNK)((s32)((int) (0xFFFF)))))) + 0x370);
    TNpcPlayer__sub_8007206C((void *)((int) (temp_r31)), (void *)((int) (TCharaMaking__sub_8028DE78((int) (0)))));
    M2C_FIELD(temp_r31, s8 *, 0x30) = -1;
}
int TAdSinglePlyChrSelectGC__sub_8028DC14(void) { return 1; }
int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p) { fn_8028DBC4((s32)((void*)(p))); return 1; }

}
