#include "types.h"

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
u8 * initialize_mag_data__9TItemDataFv(void *);
s16 get_mag_mind_level__9TItemDataFv(void *);
s16 get_stat_percent__9TItemDataFv(void *);
s16 get_level__9TItemDataFv(void *);
s16 get_percent__9TItemDataFv(void *);
s16 get_item_type__8TItemMagFv(void *);
s16 get_sync__8TItemMagFv(void *);
s16 TItemData__sub_801146A4(void *);
s16 TItemData__sub_801146C0(void *);
s16 TItemData__sub_801146DC(void *);
s16 TItemData__sub_801146F8(void *);
s32 get_array_entry__20TWindowSubStatusDispFi(void *, int);
void clear_visible_flag__20TWindowSubStatusDispFv(void *);
void set_flag0_bit2__15TWindowHelpItemFv(void *);
void set_compare_color__15TWindowHelpItemFl(void *, s32);
s32 deserialize_mag__9TItemDataFPvPv(int, void *);
extern const f32 lbl_805DCDF0;
s32 update_mag_status_gauges__9TItemDataFPv(u8 *arg0);
u8 * initialize_mag_data__9TItemDataFv(void *);
s16 get_mag_mind_level__9TItemDataFv(void *);
s16 get_stat_percent__9TItemDataFv(void *);
s16 get_level__9TItemDataFv(void *);
s16 get_percent__9TItemDataFv(void *);
s16 get_item_type__8TItemMagFv(void *);
s16 get_sync__8TItemMagFv(void *);
s16 TItemData__sub_801146A4(void *);
s16 TItemData__sub_801146C0(void *);
s16 TItemData__sub_801146DC(void *);
s16 TItemData__sub_801146F8(void *);
s32 get_array_entry__20TWindowSubStatusDispFi(void *, int);
void set_flag0_bit2__15TWindowHelpItemFv(void *);
s32 deserialize_mag__9TItemDataFPvPv(int, void *);
s16 get_mag_total_level(void *);
s32 init_window_layout_entries(void *, void *, s16);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 set_help_text__15TWindowHelpItemFUl(void *, s32);
s32 set_flag0_bit20__15TWindowHelpItemFv(void *);
s32 set_flag4_and_field1c__15TWindowHelpItemFl(void *, s32);
s32 refresh_status_display__9TWindowDDFv(void *);
s32 reset_float_field__15TWindowHelpItemFv(void *);
extern u8 lbl_804CF30C[];
extern PM_80253D10 TWindowHelpItem__mag_growth_update_callback;
extern const f32 lbl_805DCDF4;
extern const f32 lbl_805DCDF8;
void TWindowHelpItem__vt10(u8 *arg0);
}

extern "C" {

s32 update_mag_status_gauges__9TItemDataFPv(u8 *arg0) {
    s32 sp8[4];
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 var_r31;
    initialize_mag_data__9TItemDataFv(sp8);
    var_r31 = 0;
    deserialize_mag__9TItemDataFPvPv((int) (*(s32 *)((s8 *)arg0 + 0x68)), (void *) (sp8));
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 0);
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 1);
    c = get_array_entry__20TWindowSubStatusDispFi(arg0, 2);
    d = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xF);
    clear_visible_flag__20TWindowSubStatusDispFv((void *) a);
    set_flag0_bit2__15TWindowHelpItemFv((void *) d);
    set_compare_color__15TWindowHelpItemFl((void *) b, (s32) get_sync__8TItemMagFv(sp8));
    set_compare_color__15TWindowHelpItemFl((void *) c, (s32) get_item_type__8TItemMagFv(sp8));
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 4);
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 5);
    if ((s32) *(s32 *)((s8 *)b + 0x20) < get_stat_percent__9TItemDataFv(sp8)) {
        var_r31 = 1;
        *(f32 *)((s8 *)a + 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (*(f32 *)((s8 *)a + 0x24) != (f32) TItemData__sub_801146F8(sp8)) {
            var_r31 = 1;
        }
        *(f32 *)((s8 *)a + 0x24) = (f32) TItemData__sub_801146F8(sp8);
    }
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 7);
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 8);
    if ((s32) *(s32 *)((s8 *)b + 0x20) < get_percent__9TItemDataFv(sp8)) {
        var_r31 = 1;
        *(f32 *)((s8 *)a + 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (*(f32 *)((s8 *)a + 0x24) != (f32) TItemData__sub_801146DC(sp8)) {
            var_r31 = 1;
        }
        *(f32 *)((s8 *)a + 0x24) = (f32) TItemData__sub_801146DC(sp8);
    }
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xA);
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xB);
    if ((s32) *(s32 *)((s8 *)a + 0x20) < get_level__9TItemDataFv(sp8)) {
        var_r31 = 1;
        *(f32 *)((s8 *)b + 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (*(f32 *)((s8 *)b + 0x24) != (f32) TItemData__sub_801146C0(sp8)) {
            var_r31 = 1;
        }
        *(f32 *)((s8 *)b + 0x24) = (f32) TItemData__sub_801146C0(sp8);
    }
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xD);
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xE);
    if ((s32) *(s32 *)((s8 *)b + 0x20) < get_mag_mind_level__9TItemDataFv(sp8)) {
        var_r31 = 1;
        *(f32 *)((s8 *)a + 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (*(f32 *)((s8 *)a + 0x24) != (f32) TItemData__sub_801146A4(sp8)) {
            var_r31 = 1;
        }
        *(f32 *)((s8 *)a + 0x24) = (f32) TItemData__sub_801146A4(sp8);
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
    initialize_mag_data__9TItemDataFv(sp8);
    init_window_layout_entries(arg0 + 0x24, lbl_804CF30C, *(s16 *)((s8 *)arg0 + 0x20));
    *(PM_80253D10 *)((s8 *)arg0 + 0xB0) = TWindowHelpItem__mag_growth_update_callback;
    deserialize_mag__9TItemDataFPvPv(*(s32 *)((s8 *)arg0 + 0x68), sp8);
    lv = get_array_entry__20TWindowSubStatusDispFi(arg0, 0);
    sy = get_array_entry__20TWindowSubStatusDispFi(arg0, 1);
    iq = get_array_entry__20TWindowSubStatusDispFi(arg0, 2);
    up = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xF);
    set_help_text__15TWindowHelpItemFUl((void *) lv, get_message_10__20TWindowSubStatusDispFl(0xA2));
    set_help_text__15TWindowHelpItemFUl((void *) sy, get_message_10__20TWindowSubStatusDispFl(0xA3));
    set_help_text__15TWindowHelpItemFUl((void *) iq, get_message_10__20TWindowSubStatusDispFl(0xA4));
    set_flag0_bit20__15TWindowHelpItemFv((void *) sy);
    set_flag4_and_field1c__15TWindowHelpItemFl((void *) lv, get_mag_total_level(sp8));
    set_flag4_and_field1c__15TWindowHelpItemFl((void *) sy, get_sync__8TItemMagFv(sp8));
    set_flag4_and_field1c__15TWindowHelpItemFl((void *) iq, get_item_type__8TItemMagFv(sp8));
    refresh_status_display__9TWindowDDFv((void *) up);
    *(f32 *)((s8 *)up + 8) = -(lbl_805DCDF8 * *(f32 *)((s8 *)up + 0x10) - lbl_805DCDF4);
    set_flag0_bit2__15TWindowHelpItemFv((void *) up);
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 3);
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 4);
    c = get_array_entry__20TWindowSubStatusDispFi(arg0, 5);
    reset_float_field__15TWindowHelpItemFv((void *) a);
    *(s32 *)((s8 *)b + 0x20) = get_stat_percent__9TItemDataFv(sp8);
    *(f32 *)((s8 *)c + 0x24) = (f32) TItemData__sub_801146F8(sp8);
    ((VBar_80253D10 *) c)->m3();
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 6);
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 7);
    c = get_array_entry__20TWindowSubStatusDispFi(arg0, 8);
    reset_float_field__15TWindowHelpItemFv((void *) a);
    *(s32 *)((s8 *)b + 0x20) = get_percent__9TItemDataFv(sp8);
    *(f32 *)((s8 *)c + 0x24) = (f32) TItemData__sub_801146DC(sp8);
    ((VBar_80253D10 *) c)->m3();
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 9);
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xA);
    c = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xB);
    reset_float_field__15TWindowHelpItemFv((void *) a);
    *(s32 *)((s8 *)b + 0x20) = get_level__9TItemDataFv(sp8);
    *(f32 *)((s8 *)c + 0x24) = (f32) TItemData__sub_801146C0(sp8);
    ((VBar_80253D10 *) c)->m3();
    a = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xC);
    b = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xD);
    c = get_array_entry__20TWindowSubStatusDispFi(arg0, 0xE);
    reset_float_field__15TWindowHelpItemFv((void *) a);
    *(s32 *)((s8 *)b + 0x20) = get_mag_mind_level__9TItemDataFv(sp8);
    *(f32 *)((s8 *)c + 0x24) = (f32) TItemData__sub_801146A4(sp8);
    ((VBar_80253D10 *) c)->m3();
}
#pragma pop

}
