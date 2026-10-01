#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
class Win_80253D10;
typedef void (Win_80253D10::*PM_80253D10)();
struct VBase_80253D10 { u8 pad[4]; };

struct VBar_80253D10 : VBase_80253D10 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
};

extern "C" {
u8 * initialize_mag_data__9TItemDataFPv(void *);
s16 TItemData__sub_8010EE40(void *);
s16 get_stat_percent__9TItemDataFPv(void *);
s16 get_level__9TItemDataFPv(void *);
s16 get_percent__9TItemDataFPv(void *);
s16 get_item_type__8TItemMagFPv(void *);
s16 get_sync__8TItemMagFPv(void *);
s16 TItemData__sub_801146A4(void *);
s16 TItemData__sub_801146C0(void *);
s16 TItemData__sub_801146DC(void *);
s16 TItemData__sub_801146F8(void *);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void clear_visible_flag__20TWindowSubStatusDispFPv(void *);
void set_flag0_bit2__15TWindowHelpItemFPv(void *);
void set_compare_color__15TWindowHelpItemFPvi(void *, s32);
M2C_UNK TItemData__sub_8010D614(int, void *);
extern const f32 lbl_805DCDF0;
s32 TItemData__sub_80253974(u8 *arg0);
u8 * initialize_mag_data__9TItemDataFPv(void *);
s16 TItemData__sub_8010EE40(void *);
s16 get_stat_percent__9TItemDataFPv(void *);
s16 get_level__9TItemDataFPv(void *);
s16 get_percent__9TItemDataFPv(void *);
s16 get_item_type__8TItemMagFPv(void *);
s16 get_sync__8TItemMagFPv(void *);
s16 TItemData__sub_801146A4(void *);
s16 TItemData__sub_801146C0(void *);
s16 TItemData__sub_801146DC(void *);
s16 TItemData__sub_801146F8(void *);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void set_flag0_bit2__15TWindowHelpItemFPv(void *);
M2C_UNK TItemData__sub_8010D614(int, void *);
s16 TItemMagSub__sub_8011455C(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257D44(void *, void *, s16);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
M2C_UNK set_help_text__15TWindowHelpItemFPvUi(void *, s32);
M2C_UNK set_flag0_bit20__15TWindowHelpItemFPv(void *);
M2C_UNK set_flag4_and_field1c__15TWindowHelpItemFPvi(void *, s32);
M2C_UNK refresh_status_display__9TWindowDDFv(void *);
M2C_UNK reset_float_field__15TWindowHelpItemFPv(void *);
extern u8 lbl_804CF30C[];
extern PM_80253D10 lbl_804CF874;
extern const f32 lbl_805DCDF4;
extern const f32 lbl_805DCDF8;
void TWindowHelpItem__vt10(u8 *arg0);
}

extern "C" {

s32 TItemData__sub_80253974(u8 *arg0) {
    s32 sp8[4];
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 var_r31;
    initialize_mag_data__9TItemDataFPv(sp8);
    var_r31 = 0;
    TItemData__sub_8010D614((int) (M2C_FIELD(arg0, s32 *, 0x68)), (void *) (sp8));
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
    d = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xF);
    clear_visible_flag__20TWindowSubStatusDispFPv((void *) a);
    set_flag0_bit2__15TWindowHelpItemFPv((void *) d);
    set_compare_color__15TWindowHelpItemFPvi((void *) b, (s32) get_sync__8TItemMagFPv(sp8));
    set_compare_color__15TWindowHelpItemFPvi((void *) c, (s32) get_item_type__8TItemMagFPv(sp8));
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4);
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5);
    if ((s32) M2C_FIELD(b, s32 *, 0x20) < get_stat_percent__9TItemDataFPv(sp8)) {
        var_r31 = 1;
        M2C_FIELD(a, f32 *, 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (M2C_FIELD(a, f32 *, 0x24) != (f32) TItemData__sub_801146F8(sp8)) {
            var_r31 = 1;
        }
        M2C_FIELD(a, f32 *, 0x24) = (f32) TItemData__sub_801146F8(sp8);
    }
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
    if ((s32) M2C_FIELD(b, s32 *, 0x20) < get_percent__9TItemDataFPv(sp8)) {
        var_r31 = 1;
        M2C_FIELD(a, f32 *, 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (M2C_FIELD(a, f32 *, 0x24) != (f32) TItemData__sub_801146DC(sp8)) {
            var_r31 = 1;
        }
        M2C_FIELD(a, f32 *, 0x24) = (f32) TItemData__sub_801146DC(sp8);
    }
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA);
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xB);
    if ((s32) M2C_FIELD(a, s32 *, 0x20) < get_level__9TItemDataFPv(sp8)) {
        var_r31 = 1;
        M2C_FIELD(b, f32 *, 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (M2C_FIELD(b, f32 *, 0x24) != (f32) TItemData__sub_801146C0(sp8)) {
            var_r31 = 1;
        }
        M2C_FIELD(b, f32 *, 0x24) = (f32) TItemData__sub_801146C0(sp8);
    }
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xD);
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
    if ((s32) M2C_FIELD(b, s32 *, 0x20) < TItemData__sub_8010EE40(sp8)) {
        var_r31 = 1;
        M2C_FIELD(a, f32 *, 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (M2C_FIELD(a, f32 *, 0x24) != (f32) TItemData__sub_801146A4(sp8)) {
            var_r31 = 1;
        }
        M2C_FIELD(a, f32 *, 0x24) = (f32) TItemData__sub_801146A4(sp8);
    }
    return var_r31;
}
#pragma push
#pragma fp_contract on
void TWindowHelpItem__vt10(u8 *arg0) {
    s32 sp8[4];
    s32 a;
    s32 b;
    s32 c;
    s32 lv;
    s32 sy;
    s32 iq;
    s32 up;
    initialize_mag_data__9TItemDataFPv(sp8);
    TWindowSubStatusDisp__sub_80257D44(arg0 + 0x24, lbl_804CF30C, M2C_FIELD(arg0, s16 *, 0x20));
    M2C_FIELD(arg0, PM_80253D10 *, 0xB0) = lbl_804CF874;
    TItemData__sub_8010D614(M2C_FIELD(arg0, s32 *, 0x68), sp8);
    lv = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    sy = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    iq = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
    up = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xF);
    set_help_text__15TWindowHelpItemFPvUi((void *) lv, get_message_10__20TWindowSubStatusDispFPv(0xA2));
    set_help_text__15TWindowHelpItemFPvUi((void *) sy, get_message_10__20TWindowSubStatusDispFPv(0xA3));
    set_help_text__15TWindowHelpItemFPvUi((void *) iq, get_message_10__20TWindowSubStatusDispFPv(0xA4));
    set_flag0_bit20__15TWindowHelpItemFPv((void *) sy);
    set_flag4_and_field1c__15TWindowHelpItemFPvi((void *) lv, TItemMagSub__sub_8011455C(sp8));
    set_flag4_and_field1c__15TWindowHelpItemFPvi((void *) sy, get_sync__8TItemMagFPv(sp8));
    set_flag4_and_field1c__15TWindowHelpItemFPvi((void *) iq, get_item_type__8TItemMagFPv(sp8));
    refresh_status_display__9TWindowDDFv((void *) up);
    M2C_FIELD(up, f32 *, 8) = -(lbl_805DCDF8 * M2C_FIELD(up, f32 *, 0x10) - lbl_805DCDF4);
    set_flag0_bit2__15TWindowHelpItemFPv((void *) up);
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3);
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4);
    c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5);
    reset_float_field__15TWindowHelpItemFPv((void *) a);
    M2C_FIELD(b, s32 *, 0x20) = get_stat_percent__9TItemDataFPv(sp8);
    M2C_FIELD(c, f32 *, 0x24) = (f32) TItemData__sub_801146F8(sp8);
    ((VBar_80253D10 *) c)->m3();
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
    c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
    reset_float_field__15TWindowHelpItemFPv((void *) a);
    M2C_FIELD(b, s32 *, 0x20) = get_percent__9TItemDataFPv(sp8);
    M2C_FIELD(c, f32 *, 0x24) = (f32) TItemData__sub_801146DC(sp8);
    ((VBar_80253D10 *) c)->m3();
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 9);
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA);
    c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xB);
    reset_float_field__15TWindowHelpItemFPv((void *) a);
    M2C_FIELD(b, s32 *, 0x20) = get_level__9TItemDataFPv(sp8);
    M2C_FIELD(c, f32 *, 0x24) = (f32) TItemData__sub_801146C0(sp8);
    ((VBar_80253D10 *) c)->m3();
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xC);
    b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xD);
    c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
    reset_float_field__15TWindowHelpItemFPv((void *) a);
    M2C_FIELD(b, s32 *, 0x20) = TItemData__sub_8010EE40(sp8);
    M2C_FIELD(c, f32 *, 0x24) = (f32) TItemData__sub_801146A4(sp8);
    ((VBar_80253D10 *) c)->m3();
}
#pragma pop

}
