#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/item/TItemData.h"
#include "pso/item/TItemMag.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/misc/TWindowSubStatusDisp.h"

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
s16 TItemData__sub_801146A4(void *);
s16 TItemData__sub_801146C0(void *);
s16 TItemData__sub_801146DC(void *);
s16 TItemData__sub_801146F8(void *);
s32 deserialize_mag__9TItemDataFPvPv(int, void *);
extern const f32 lbl_805DCDF0;
s16 TItemData__sub_801146A4(void *);
s16 TItemData__sub_801146C0(void *);
s16 TItemData__sub_801146DC(void *);
s16 TItemData__sub_801146F8(void *);
s32 deserialize_mag__9TItemDataFPvPv(int, void *);
s16 get_mag_total_level(void *);
s32 init_window_layout_entries(void *, void *, s16);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 set_help_text__15TWindowHelpItemFUl(void *, s32);
s32 refresh_status_display__9TWindowDDFv(void *);
extern u8 lbl_804CF30C[];
extern PM_80253D10 TWindowHelpItem__mag_growth_update_callback;
extern const f32 lbl_805DCDF4;
extern const f32 lbl_805DCDF8;
void TWindowHelpItem__vt10(u8 *arg0);
}

extern "C" {

s32 TItemData::update_mag_status_gauges() {
    s32 sp8[4];
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 var_r31;
    ((TItemData *)sp8)->initialize_mag_data();
    var_r31 = 0;
    deserialize_mag__9TItemDataFPvPv((int) (*(s32 *)((s8 *)((u8 *)this) + 0x68)), (void *) (sp8));
    a = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(0);
    b = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(1);
    c = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(2);
    d = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(0xF);
    ((TWindowSubStatusDisp *)a)->clear_visible_flag();
    ((TWindowHelpItem *)d)->set_flag0_bit2();
    ((TWindowHelpItem *)b)->set_compare_color((s32) ((TItemMag *)sp8)->get_sync());
    ((TWindowHelpItem *)c)->set_compare_color((s32) ((TItemMag *)sp8)->get_item_type());
    b = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(4);
    a = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(5);
    if ((s32) *(s32 *)((s8 *)b + 0x20) < ((TItemData *)sp8)->get_stat_percent()) {
        var_r31 = 1;
        *(f32 *)((s8 *)a + 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (*(f32 *)((s8 *)a + 0x24) != (f32) TItemData__sub_801146F8(sp8)) {
            var_r31 = 1;
        }
        *(f32 *)((s8 *)a + 0x24) = (f32) TItemData__sub_801146F8(sp8);
    }
    b = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(7);
    a = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(8);
    if ((s32) *(s32 *)((s8 *)b + 0x20) < ((TItemData *)sp8)->get_percent()) {
        var_r31 = 1;
        *(f32 *)((s8 *)a + 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (*(f32 *)((s8 *)a + 0x24) != (f32) TItemData__sub_801146DC(sp8)) {
            var_r31 = 1;
        }
        *(f32 *)((s8 *)a + 0x24) = (f32) TItemData__sub_801146DC(sp8);
    }
    a = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(0xA);
    b = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(0xB);
    if ((s32) *(s32 *)((s8 *)a + 0x20) < ((TItemData *)sp8)->get_level()) {
        var_r31 = 1;
        *(f32 *)((s8 *)b + 0x24) = (f32) lbl_805DCDF0;
    } else {
        if (*(f32 *)((s8 *)b + 0x24) != (f32) TItemData__sub_801146C0(sp8)) {
            var_r31 = 1;
        }
        *(f32 *)((s8 *)b + 0x24) = (f32) TItemData__sub_801146C0(sp8);
    }
    b = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(0xD);
    a = ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(0xE);
    if ((s32) *(s32 *)((s8 *)b + 0x20) < ((TItemData *)sp8)->get_mag_mind_level()) {
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
    s32 mag[4];
    s32 a;
    s32 b;
    s32 c;
    s32 lv;
    s32 sy;
    s32 iq;
    s32 up;
    ((TItemData *)mag)->initialize_mag_data();
    init_window_layout_entries(arg0 + 0x24, lbl_804CF30C, *(s16 *)((s8 *)arg0 + 0x20));
    *(PM_80253D10 *)((s8 *)arg0 + 0xB0) = TWindowHelpItem__mag_growth_update_callback;
    deserialize_mag__9TItemDataFPvPv(*(s32 *)((s8 *)arg0 + 0x68), mag);
    lv = ((TUnk_804CE018 *)arg0)->get_array_entry(0);
    sy = ((TUnk_804CE018 *)arg0)->get_array_entry(1);
    iq = ((TUnk_804CE018 *)arg0)->get_array_entry(2);
    up = ((TUnk_804CE018 *)arg0)->get_array_entry(0xF);
    set_help_text__15TWindowHelpItemFUl((void *) lv, get_message_10__20TWindowSubStatusDispFl(0xA2));
    set_help_text__15TWindowHelpItemFUl((void *) sy, get_message_10__20TWindowSubStatusDispFl(0xA3));
    set_help_text__15TWindowHelpItemFUl((void *) iq, get_message_10__20TWindowSubStatusDispFl(0xA4));
    ((TWindowHelpItem *)sy)->set_flag0_bit20();
    ((TWindowHelpItem *)lv)->set_flag4_and_field1c(get_mag_total_level(mag));
    ((TWindowHelpItem *)sy)->set_flag4_and_field1c(((TItemMag *)mag)->get_sync());
    ((TWindowHelpItem *)iq)->set_flag4_and_field1c(((TItemMag *)mag)->get_item_type());
    refresh_status_display__9TWindowDDFv((void *) up);
    *(f32 *)((s8 *)up + 8) = -(lbl_805DCDF8 * *(f32 *)((s8 *)up + 0x10) - lbl_805DCDF4);
    ((TWindowHelpItem *)up)->set_flag0_bit2();
    a = ((TUnk_804CE018 *)arg0)->get_array_entry(3);
    b = ((TUnk_804CE018 *)arg0)->get_array_entry(4);
    c = ((TUnk_804CE018 *)arg0)->get_array_entry(5);
    ((TWindowHelpItem *)a)->reset_float_field();
    *(s32 *)((s8 *)b + 0x20) = ((TItemData *)mag)->get_stat_percent();
    *(f32 *)((s8 *)c + 0x24) = (f32) TItemData__sub_801146F8(mag);
    ((VBar_80253D10 *) c)->m3();
    a = ((TUnk_804CE018 *)arg0)->get_array_entry(6);
    b = ((TUnk_804CE018 *)arg0)->get_array_entry(7);
    c = ((TUnk_804CE018 *)arg0)->get_array_entry(8);
    ((TWindowHelpItem *)a)->reset_float_field();
    *(s32 *)((s8 *)b + 0x20) = ((TItemData *)mag)->get_percent();
    *(f32 *)((s8 *)c + 0x24) = (f32) TItemData__sub_801146DC(mag);
    ((VBar_80253D10 *) c)->m3();
    a = ((TUnk_804CE018 *)arg0)->get_array_entry(9);
    b = ((TUnk_804CE018 *)arg0)->get_array_entry(0xA);
    c = ((TUnk_804CE018 *)arg0)->get_array_entry(0xB);
    ((TWindowHelpItem *)a)->reset_float_field();
    *(s32 *)((s8 *)b + 0x20) = ((TItemData *)mag)->get_level();
    *(f32 *)((s8 *)c + 0x24) = (f32) TItemData__sub_801146C0(mag);
    ((VBar_80253D10 *) c)->m3();
    a = ((TUnk_804CE018 *)arg0)->get_array_entry(0xC);
    b = ((TUnk_804CE018 *)arg0)->get_array_entry(0xD);
    c = ((TUnk_804CE018 *)arg0)->get_array_entry(0xE);
    ((TWindowHelpItem *)a)->reset_float_field();
    *(s32 *)((s8 *)b + 0x20) = ((TItemData *)mag)->get_mag_mind_level();
    *(f32 *)((s8 *)c + 0x24) = (f32) TItemData__sub_801146A4(mag);
    ((VBar_80253D10 *) c)->m3();
}
#pragma pop

}
