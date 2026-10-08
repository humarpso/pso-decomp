#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p);
void update_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_802E18C8(void);
s32 apply_settings__23TAdSinglePlyChrSelectGCFi(void);
void update_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void TAdSinglePlyChrSelectGC__sub_802E1F14(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_802E1F14(u8 *arg0);
s32 is_visible__17TWindowSubComCardFPv();
s32 get_selected_menu_value(int);
M2C_UNK change_state__23TAdSinglePlyChrSelectGCFPvi(void *, int);
void TAdSinglePlyChrSelectGC__sub_802E1F14(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_802E1FAC(u8 *arg0);
s32 get_localized_text_entry(int, int);
M2C_UNK close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void *, void *, int, int, int);
M2C_UNK create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void *);
s32 sprintf(void *, const void *, ...);
extern M2C_UNK lbl_80472988[];
void show_confirm_dialog__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
}

extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {
void TAdSinglePlyChrSelectGC__sub_802E1F14(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
}

void update_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) <= 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x5C);
        switch (temp_r0) {
        case 0:
            apply_settings__23TAdSinglePlyChrSelectGCFi();
            return;
        default:
        case 1:
            TAdSinglePlyChrSelectGC__sub_802E18C8();
            break;
        }
    }
}

int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv(p); }
void TAdSinglePlyChrSelectGC__sub_802E1FAC(u8 *arg0) {
    s32 temp_r3;
    if (M2C_FIELD(arg0, u32 *, 0x54) == 0U || ((s32 (*)(u32))is_visible__17TWindowSubComCardFPv)(M2C_FIELD(arg0, u32 *, 0x54)) == 0) {
        return;
    }
    switch (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x54)))) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x5C) = 1;
        change_state__23TAdSinglePlyChrSelectGCFPvi((void *) (arg0), (int) (0x18));
        break;
    case 1:
        TAdSinglePlyChrSelectGC__sub_802E1F14(arg0);
        change_state__23TAdSinglePlyChrSelectGCFPvi((void *) (arg0), (int) (0));
        break;
    }
}
void show_confirm_dialog__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    s32 str;
    s32 t;
    s32 t2;
    s32 flags;
    str = get_localized_text_entry(0x1C, 0x18);
    flags = M2C_FIELD(arg0, s32 *, 0x44);
    if (!(flags & 0x400)) {
        switch (flags & 0x1800) {
        case 0x1800:
            str = get_localized_text_entry(0x1C, 0x19);
            break;
        case 0x800:
            str = get_localized_text_entry(0x1C, 0x1A);
            break;
        case 0x1000:
            str = get_localized_text_entry(0x1C, 0x1B);
            break;
        }
    }
    sprintf(arg0 + 0x68, lbl_80472988, get_localized_text_entry(0x1C, 0x17), str, get_localized_text_entry(0x1C, 0x14));
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv(arg0);
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, arg0 + 0x68, 1, get_localized_text_entry(0x1C, 0x15), get_localized_text_entry(0x1C, 0x16));
}

}
