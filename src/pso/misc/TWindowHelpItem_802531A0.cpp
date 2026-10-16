#include "types.h"

#include <stddef.h>
#include "pso/misc/TWindowHelpItem.h"
#include "pso/item/TItemData.h"
#include "pso/item/TItemMag.h"
#include "pso/misc/TWindowSubStatusDisp.h"
struct Stack_80253268 {
    s32 sp8;
    s16 spC;
    u8 pad[0x18 - 6];
};

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
typedef struct MagData_80253564 { u8 b[16]; } MagData_80253564;

typedef struct Callback_80253564 { u8 bytes[0xc]; } Callback_80253564;

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
struct V3_802531A4 { u8 bytes[0xc]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
struct V3_802534B0 { u8 bytes[0xc]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
struct V3_802532E8 { u8 bytes[0xc]; };

extern "C" {
s32 build_player_equipment_requirement_stats(int, void *);
s32 get_player_by_client_id(int);
u8 *get_array_entry__20TWindowSubStatusDispFi(void *, s32);
void TWindowHelpItem__sub_80253268(u8 *arg0);
void deserialize_mag__9TItemDataFPvPv(void *, MagData_80253564 *);
u8 *get_array_entry__20TWindowSubStatusDispFi(void *, s32);
void draw_action_palette_icon(void *, int, u16);
void init_window_layout_entries(void *, const void *, s16);
extern u8 lbl_804CF4E4[];
extern Callback_80253564 TWindowHelpItem__photon_blast_update_callback;
void TWindowHelpItem__vt11(u8 *window);
extern u8 TWindowHelpItem__description_text_layout[];
extern V3_802531A4 TWindowHelpItem__description_update_callback;
u8 *get_array_entry__20TWindowSubStatusDispFi(void *, s32);
void init_window_layout_entries(void *, const void *, s16);
s32 set_text_entry_string(void *, void *, s32);
void init_text__15TWindowHelpItemFPvPv(u8 *arg0, void *arg1);
extern u8 window_help_item_layout_entries[];
extern V3_802534B0 item_help_description_idle_callback;
s32 get_shared_text_buffer();
u8 calc_display_grade__9TItemDataFv(void *);
u8 *get_array_entry__20TWindowSubStatusDispFi(void *, s32);
void init_window_layout_entries(void *, const void *, s16);
s32 set_text_entry_string(void *, void *, s32);
void TWindowHelpItem__vt2(u8 *arg0);
s32 get_shared_text_buffer();
void check_equip_requirements(int, void *, void *);
void format_item_description(void *);
s32 get_player_by_client_id(int);
u8 *get_array_entry__20TWindowSubStatusDispFi(void *, s32);
void text_builder_append();
void text_builder_reset();
void get_help_text_string(u8);
void init_window_layout_entries(void *, const void *, s16);
s32 set_text_entry_string(void *, void *, s32);
void set_sprite_uv_from_pixels(void *, f32, f32);
extern u8 help_item_tech_disk_window_layout_table[];
extern V3_802532E8 item_help_tech_disk_stats_callback;
extern s32 current_language;
extern const f32 TWindowHelpItem__data_805DCDE4;
extern const f32 lbl_805DCDE8;
extern const f32 lbl_805DCDEC;
void update_tech_disk_details__15TWindowHelpItemFPv(u8 *arg0);
}

extern "C" {

void TWindowHelpItem__sub_802531A0(void);
s32 get_shared_text_buffer();

void TWindowHelpItem__sub_802531A0(void) {  }

void init_text__15TWindowHelpItemFPvPv(u8 *arg0, void *arg1) {
    u8 *e;
    init_window_layout_entries(arg0 + 0x24, TWindowHelpItem__description_text_layout, *(s16 *)(arg0 + 0x20));
    *(V3_802531A4 *)(arg0 + 0xB0) = TWindowHelpItem__description_update_callback;
    e = get_array_entry__20TWindowSubStatusDispFi((void *)(arg0), (s32)(0));
    set_text_entry_string(e, arg1, 0x20);
    ((TWindowHelpItem *)e)->reset_float_field();
}

void TWindowHelpItem::update_displayed_item() {
    s32 arg0 = (s32)this;
    ((TWindowHelpItem *)arg0)->format_description_with_price();
    init_text__15TWindowHelpItemFPvPv((u8 *)(arg0), (void *)(get_shared_text_buffer()));
}
void TWindowHelpItem__sub_80253268(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80253268, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80253268, spC) == 0x4) ? 1 : -1];
    Stack_80253268 stack;
    s32 temp_r3;
    u8 *temp_r31;
    u8 *temp_r31_2;
    ((TWindowSubStatusDisp *)(&stack.sp8))->clear_fields();
    temp_r3 = get_player_by_client_id((int) (*(s16 *)((s8 *)arg0 + 0x20)));
    if (temp_r3 != 0) {
        temp_r31 = (u8 *)(temp_r3 + 0x85C);
        if (temp_r31 != NULL) {
            temp_r31_2 = (u8 *)(get_array_entry__20TWindowSubStatusDispFi(arg0, 5));
            if (!(*(s32 *)((s8 *)temp_r31 + 0x34) & 0x10) && (build_player_equipment_requirement_stats((int) (temp_r3), (void *) (&stack.sp8)) != 0)) {
                *(s32 *)((s8 *)temp_r31_2 + 0x20) = (s32) stack.spC;
            }
        }
    }
}

void update_tech_disk_details__15TWindowHelpItemFPv(u8 *arg0) {
    s32 sp8;
    s32 temp_r3;
    u8 *e0;
    u8 *e1;
    u8 *e2;
    u8 *e3;
    u8 *e4;
    u8 *e5;
    u8 *e6;
    temp_r3 = get_player_by_client_id(*(s16 *)(arg0 + 0x20));
    if (temp_r3 != 0) {
        init_window_layout_entries(arg0 + 0x24, help_item_tech_disk_window_layout_table, *(s16 *)(arg0 + 0x20));
        *(V3_802532E8 *)(arg0 + 0xB0) = item_help_tech_disk_stats_callback;
        e0 = get_array_entry__20TWindowSubStatusDispFi(arg0, 0);
        text_builder_reset();
        format_item_description(*(void **)(arg0 + 0x68));
        text_builder_append();
        if (current_language == 0) {
            get_help_text_string(*(*(u8 **)(arg0 + 0x68) + 4));
            text_builder_append();
        }
        set_text_entry_string(e0, (void *)get_shared_text_buffer(), 0x20);
        ((TWindowHelpItem *)e0)->reset_float_field();
        e1 = get_array_entry__20TWindowSubStatusDispFi(arg0, 1);
        e2 = get_array_entry__20TWindowSubStatusDispFi(arg0, 2);
        e3 = get_array_entry__20TWindowSubStatusDispFi(arg0, 3);
        e4 = get_array_entry__20TWindowSubStatusDispFi(arg0, 4);
        e5 = get_array_entry__20TWindowSubStatusDispFi(arg0, 5);
        e6 = get_array_entry__20TWindowSubStatusDispFi(arg0, 6);
        check_equip_requirements(temp_r3, *(void **)(arg0 + 0x68), &sp8);
        if (sp8 & 1) {
            set_sprite_uv_from_pixels(e1, TWindowHelpItem__data_805DCDE4, lbl_805DCDE8);
            ((TWindowHelpItem *)e2)->set_flag0_bit2();
            ((TWindowHelpItem *)e3)->set_flag0_bit2();
            ((TWindowHelpItem *)e4)->set_flag0_bit2();
            ((TWindowHelpItem *)e5)->set_flag0_bit2();
            ((TWindowHelpItem *)e6)->set_flag0_bit2();
            return;
        }
        set_sprite_uv_from_pixels(e1, TWindowHelpItem__data_805DCDE4, lbl_805DCDEC);
        ((TWindowHelpItem *)e2)->reset_float_field();
        ((TWindowHelpItem *)e4)->reset_float_field();
        ((TWindowHelpItem *)e6)->reset_float_field();
        *(s32 *)(e3 + 0x20) = ((TItemData *)(*(void **)(arg0 + 0x68)))->get_technique_level();
    }
}

void TWindowHelpItem__vt2(u8 *arg0) {
    u8 *e;
    u8 *e2;
    init_window_layout_entries(arg0 + 0x24, window_help_item_layout_entries, *(s16 *)(arg0 + 0x20));
    *(V3_802534B0 *)(arg0 + 0xB0) = item_help_description_idle_callback;
    e = get_array_entry__20TWindowSubStatusDispFi((void *)(arg0), (s32)(0));
    ((TWindowHelpItem *)arg0)->format_description_with_price();
    set_text_entry_string((void *)(e), (void *)(get_shared_text_buffer()), (s32)(0x20));
    ((TWindowHelpItem *)e)->reset_float_field();
    e2 = get_array_entry__20TWindowSubStatusDispFi((void *)(arg0), (s32)(1));
    *(s32 *)(e2 + 0x10) = calc_display_grade__9TItemDataFv(*(void **)(arg0 + 0x68));
}

void TWindowHelpItem__vt11(u8 *window) {
    MagData_80253564 mag;
    s32 slot;
    s32 blast;
    ((TItemData *)(&mag))->initialize_mag_data();
    init_window_layout_entries(window + 0x24, lbl_804CF4E4, *(s16 *)((s8 *)window + 0x20));
    *(Callback_80253564 *) (window + 0xB0) = TWindowHelpItem__photon_blast_update_callback;
    deserialize_mag__9TItemDataFPvPv(*(void **)((s8 *)window + 0x68), &mag);
    for (slot = 0; slot < 3; slot++) {
        blast = ((TItemMag *)(&mag))->get_photon_blast_at_slot(slot);
        if (blast != -1) {
            draw_action_palette_icon(((void *)get_array_entry__20TWindowSubStatusDispFi((void *)(window), (s32)(slot + 1))), 5, (u16) blast);
        } else {
            draw_action_palette_icon(((void *)get_array_entry__20TWindowSubStatusDispFi((void *)(window), (s32)(slot + 1))), 0, 0);
        }
    }
}

}
