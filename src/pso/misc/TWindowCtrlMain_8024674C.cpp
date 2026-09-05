#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
M2C_UNK clear_visible_flag__20TWindowSubStatusDispFPv(int);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(int);
s32 is_trade_active();
s32 is_active__19TWindowSubShortMailFv();
s32 fn_80246CD0();
s32 fn_80246CDC();
void TWindowSubStatusDisp__sub_80246980(s32 arg0);
}

extern "C" {

int TWindowFukidasi__sub_8024695C(void* p);
int TWindowSubAreaMapDisp__sub_80246948(void);
void free_window__15TWindowCtrlMainFv(void);
int get_visible_flag__15TWindowFukidasiFPv(void* p);
int is_bit10_set__15TWindowFukidasiFPv(void* p);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D63F0;

void free_window__15TWindowCtrlMainFv(void) {
    if ((u32) lbl_805D63F0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D63F0);
        lbl_805D63F0 = 0U;
    }
}

int TWindowSubAreaMapDisp__sub_80246948(void) { return 0; }

int TWindowFukidasi__sub_8024695C(void* p) { return (*(u32*)((char*)p + 0x2c) >> 8) & 0x1; }

int get_visible_flag__15TWindowFukidasiFPv(void* p) { return (*(u32*)((char*)p + 0x2c) >> 9) & 0x1; }

int is_bit10_set__15TWindowFukidasiFPv(void* p) { return (*(u32*)((char*)p + 0x2c) >> 10) & 0x1; }
void TWindowSubStatusDisp__sub_80246980(s32 arg0) {
    u32 temp_r31;
    u32 temp_r30;
    u32 temp_r29;
    u32 temp_r28;
    u32 temp_r27;
    u32 temp_r26;
    u32 temp_r25;
    u32 temp_r24;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (7));
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (6));
    temp_r29 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (5));
    temp_r28 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (4));
    temp_r27 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (3));
    temp_r26 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (2));
    temp_r25 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (1));
    temp_r24 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (0));
    if (fn_80246CDC() != 0) {
        if (temp_r31 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r31));
        }
        if (temp_r30 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r30));
        }
    } else {
        if (temp_r31 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r31));
        }
        if (temp_r30 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r30));
        }
    }
    if (fn_80246CD0() != 0) {
        if (temp_r29 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r29));
        }
        if (temp_r28 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r28));
        }
    } else {
        if (temp_r29 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r29));
        }
        if (temp_r28 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r28));
        }
    }
    if (is_active__19TWindowSubShortMailFv() != 0) {
        if (temp_r27 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r27));
        }
        if (temp_r26 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r26));
        }
    } else {
        if (temp_r27 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r27));
        }
        if (temp_r26 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r26));
        }
    }
    if (is_trade_active() != 0) {
        if (temp_r25 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r25));
        }
        if (temp_r24 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r24));
        }
    } else {
        if (temp_r25 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r25));
        }
        if (temp_r24 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r24));
        }
    }
}

}
