#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u8 *lbl_805D553C;
s32 TWindowHelpItem__sub_80255DC8(s32 arg0);
}

extern "C" {

void TWindowHelpItem__sub_80255B20(u8 *arg0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
void *dt__15TWindowHelpItemFPvs(void *arg0, s16 arg1);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
void update_cursor_selection__15TWindowHelpItemFPv(void *arg0);
void update_display__15TWindowHelpItemFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
M2C_UNK TWindowHelpItem__sub_802553F8(void *);
M2C_UNK TWindowHelpItem__sub_80255440(void *);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(int, int);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 fn_80244994(void *);
M2C_UNK fn_80263A20(void *, s16);
M2C_UNK fn_8026C9C8(s32);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);

void update_cursor_selection__15TWindowHelpItemFPv(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != -1) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0xA4);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) != -1) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0xA0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) & 0xFE);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = -1;
}

void TWindowHelpItem__sub_80255B20(u8 *arg0) {
    s32 temp_r3;
    u8 temp_r3_2;

    temp_r3 = TWindowSubComCard__sub_80244C0C((void *) (arg0), (void *) (arg0 + 0xA8));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x60);
    if ((temp_r3_2 & 1) && (temp_r3_2 & 2)) {
        TWindowSubStatusDisp__sub_8026C800((int) (M2C_FIELD(arg0, s32 *, 0x64)), (int) (temp_r3));
    }
}

void update_display__15TWindowHelpItemFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x60) & 1) && (fn_80244994(arg0) != 0) && !(M2C_FIELD(arg0, s32 *, 0x2C) & 4)) {
        if (!(M2C_FIELD(arg0, u8 *, 0x60) & 4)) {
            if (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x64)) != 0) {
                TWindowHelpItem__sub_80255440(arg0);
            }
        } else {
            fn_8026C9C8(M2C_FIELD(arg0, s32 *, 0x64));
        }
        TWindowHelpItem__sub_802553F8(arg0);
    }
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
    if (!(M2C_FIELD(arg0, u8 *, 0x60) & 8)) {
        fn_80263A20(arg0, M2C_FIELD(arg0, s16 *, 0x20));
    }
}

extern M2C_UNK lbl_804CF8B0[];

void *dt__15TWindowHelpItemFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CF8B0;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x64), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 TWindowHelpItem__sub_80255DC8(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 0x18), M2C_UNK *, (arg0 * 4));
}

s32 TWindowHelpItem__sub_80255DDC(void* p) { return *(s32*)((char*)p + 0x1c); }
void set_flag0_bit20__15TWindowHelpItemFPv(void* p) { *(u16*)((char*)p + 0x0) |= 0x20; }

}
