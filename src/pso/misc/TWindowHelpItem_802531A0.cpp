#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
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
M2C_UNK clear_fields__20TWindowSubStatusDispFPv(void *);
s32 build_player_equipment_requirement_stats(int, void *);
s32 get_player_by_client_id(int);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void TWindowHelpItem__sub_80253268(u8 *arg0);
void initialize_mag_data__9TItemDataFPv(MagData_80253564 *);
void deserialize_mag__9TItemDataFPvPv(void *, MagData_80253564 *);
s32 get_photon_blast_at_slot__8TItemMagFPvi(MagData_80253564 *, int);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void draw_action_palette_icon(void *, int, u16);
void init_window_layout_entries(void *, const void *, s16);
extern u8 lbl_804CF4E4[];
extern Callback_80253564 lbl_804CF880;
void TWindowHelpItem__vt11(u8 *window);
extern u8 lbl_804CF6BC[];
extern V3_802531A4 lbl_804CF8A4;
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void init_window_layout_entries(void *, const void *, s16);
s32 reset_float_field__15TWindowHelpItemFPv(void *);
s32 set_text_entry_string(void *, void *, s32);
void init_text__15TWindowHelpItemFPvPv(u8 *arg0, void *arg1);
extern u8 lbl_804CF5AC[];
extern V3_802534B0 lbl_804CF88C;
s32 get_shared_text_buffer();
u8 calc_display_grade__9TItemDataFPv(void *);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK format_description_with_price__15TWindowHelpItemFPv(void *);
void init_window_layout_entries(void *, const void *, s16);
s32 reset_float_field__15TWindowHelpItemFPv(void *);
s32 set_text_entry_string(void *, void *, s32);
void TWindowHelpItem__vt2(u8 *arg0);
s32 get_shared_text_buffer();
void check_equip_requirements(int, void *, void *);
s16 get_technique_level__9TItemDataFPv(void *);
void format_item_description(void *);
s32 get_player_by_client_id(int);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void text_builder_append();
void text_builder_reset();
void set_flag0_bit2__15TWindowHelpItemFPv(void *);
void get_help_text_string(u8);
void init_window_layout_entries(void *, const void *, s16);
s32 reset_float_field__15TWindowHelpItemFPv(void *);
s32 set_text_entry_string(void *, void *, s32);
void set_sprite_uv_from_pixels(void *, f32, f32);
extern u8 lbl_804CF5DC[];
extern V3_802532E8 lbl_804CF898;
extern s32 lbl_805D5544;
extern const f32 TWindowHelpItem__data_805DCDE4;
extern const f32 lbl_805DCDE8;
extern const f32 lbl_805DCDEC;
void update_tech_disk_details__15TWindowHelpItemFPv(u8 *arg0);
}

extern "C" {

void TWindowHelpItem__sub_802531A0(void);
void update_displayed_item__15TWindowHelpItemFi(s32 arg0);
s32 get_shared_text_buffer();

void TWindowHelpItem__sub_802531A0(void) {  }

void init_text__15TWindowHelpItemFPvPv(u8 *arg0, void *arg1) {
    u8 *e;
    init_window_layout_entries(arg0 + 0x24, lbl_804CF6BC, *(s16 *)(arg0 + 0x20));
    *(V3_802531A4 *)(arg0 + 0xB0) = lbl_804CF8A4;
    e = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(0));
    set_text_entry_string(e, arg1, 0x20);
    reset_float_field__15TWindowHelpItemFPv(e);
}

void update_displayed_item__15TWindowHelpItemFi(s32 arg0) {
    format_description_with_price__15TWindowHelpItemFPv((void *)(arg0));
    init_text__15TWindowHelpItemFPvPv((u8 *)(arg0), (void *)(get_shared_text_buffer()));
}
void TWindowHelpItem__sub_80253268(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80253268, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80253268, spC) == 0x4) ? 1 : -1];
    Stack_80253268 stack;
    s32 temp_r3;
    u8 *temp_r31;
    u8 *temp_r31_2;
    clear_fields__20TWindowSubStatusDispFPv((void *) (&stack.sp8));
    temp_r3 = get_player_by_client_id((int) (M2C_FIELD(arg0, s16 *, 0x20)));
    if (temp_r3 != 0) {
        temp_r31 = (u8 *)(temp_r3 + 0x85C);
        if (temp_r31 != NULL) {
            temp_r31_2 = (u8 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5));
            if (!(M2C_FIELD(temp_r31, s32 *, 0x34) & 0x10) && (build_player_equipment_requirement_stats((int) (temp_r3), (void *) (&stack.sp8)) != 0)) {
                M2C_FIELD(temp_r31_2, s32 *, 0x20) = (s32) stack.spC;
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
        init_window_layout_entries(arg0 + 0x24, lbl_804CF5DC, *(s16 *)(arg0 + 0x20));
        *(V3_802532E8 *)(arg0 + 0xB0) = lbl_804CF898;
        e0 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        text_builder_reset();
        format_item_description(*(void **)(arg0 + 0x68));
        text_builder_append();
        if (lbl_805D5544 == 0) {
            get_help_text_string(*(*(u8 **)(arg0 + 0x68) + 4));
            text_builder_append();
        }
        set_text_entry_string(e0, (void *)get_shared_text_buffer(), 0x20);
        reset_float_field__15TWindowHelpItemFPv(e0);
        e1 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
        e2 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        e3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3);
        e4 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4);
        e5 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5);
        e6 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
        check_equip_requirements(temp_r3, *(void **)(arg0 + 0x68), &sp8);
        if (sp8 & 1) {
            set_sprite_uv_from_pixels(e1, TWindowHelpItem__data_805DCDE4, lbl_805DCDE8);
            set_flag0_bit2__15TWindowHelpItemFPv(e2);
            set_flag0_bit2__15TWindowHelpItemFPv(e3);
            set_flag0_bit2__15TWindowHelpItemFPv(e4);
            set_flag0_bit2__15TWindowHelpItemFPv(e5);
            set_flag0_bit2__15TWindowHelpItemFPv(e6);
            return;
        }
        set_sprite_uv_from_pixels(e1, TWindowHelpItem__data_805DCDE4, lbl_805DCDEC);
        reset_float_field__15TWindowHelpItemFPv(e2);
        reset_float_field__15TWindowHelpItemFPv(e4);
        reset_float_field__15TWindowHelpItemFPv(e6);
        *(s32 *)(e3 + 0x20) = get_technique_level__9TItemDataFPv(*(void **)(arg0 + 0x68));
    }
}

void TWindowHelpItem__vt2(u8 *arg0) {
    u8 *e;
    u8 *e2;
    init_window_layout_entries(arg0 + 0x24, lbl_804CF5AC, *(s16 *)(arg0 + 0x20));
    *(V3_802534B0 *)(arg0 + 0xB0) = lbl_804CF88C;
    e = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(0));
    format_description_with_price__15TWindowHelpItemFPv((void *)(arg0));
    set_text_entry_string((void *)(e), (void *)(get_shared_text_buffer()), (s32)(0x20));
    reset_float_field__15TWindowHelpItemFPv(e);
    e2 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(1));
    *(s32 *)(e2 + 0x10) = calc_display_grade__9TItemDataFPv(*(void **)(arg0 + 0x68));
}

void TWindowHelpItem__vt11(u8 *window) {
    MagData_80253564 mag;
    s32 slot;
    s32 blast;
    initialize_mag_data__9TItemDataFPv(&mag);
    init_window_layout_entries(window + 0x24, lbl_804CF4E4, M2C_FIELD(window, s16 *, 0x20));
    *(Callback_80253564 *) (window + 0xB0) = lbl_804CF880;
    deserialize_mag__9TItemDataFPvPv(M2C_FIELD(window, void **, 0x68), &mag);
    for (slot = 0; slot < 3; slot++) {
        blast = get_photon_blast_at_slot__8TItemMagFPvi(&mag, slot);
        if (blast != -1) {
            draw_action_palette_icon(((void *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(window), (M2C_UNK)(slot + 1))), 5, (u16) blast);
        } else {
            draw_action_palette_icon(((void *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(window), (M2C_UNK)(slot + 1))), 0, 0);
        }
    }
}

}
