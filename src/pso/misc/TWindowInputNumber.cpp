#include "types.h"

extern "C" {

void confirm_input__18TWindowInputNumberFPv(void *arg0);
void handle_decrement__18TWindowInputNumberFPv(void *arg0);
void mark_confirmed__18TWindowInputNumberFPv(void *arg0);
void move_cursor_next__18TWindowInputNumberFPv(void *arg0);
void set_value__18TWindowInputNumberFPvf(void *arg0, f32 farg0);
void update__18TWindowInputNumberFPv(void *arg0);
void update_value__18TWindowInputNumberFPv(void *arg0);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
s32 align_digits__18TWindowInputNumberFv(void *);
s32 refresh_digit_entries__18TWindowInputNumberFPv(void *);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 save_position__17TWindowSubComCardFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

void mark_confirmed__18TWindowInputNumberFPv(void *arg0) {
    if (!(*(u16 *)((s8 *)arg0 + 0x60) & 8) && (is_confirmed__18TWindowInputNumberFPv() == 0)) {
        *(u16 *)((s8 *)arg0 + 0x60) = (u16) (*(u16 *)((s8 *)arg0 + 0x60) | 4);
    }
}
void confirm_input__18TWindowInputNumberFPv(void *arg0) {
    s32 temp_r3;
    u32 temp;

    temp_r3 = *(s32 *)((s8 *)arg0 + 0x6C);
    if ((temp_r3 < (s32) *(s32 *)((s8 *)arg0 + 0x64)) || (temp_r3 > (s32) *(s32 *)((s8 *)arg0 + 0x68))) {
        play_sound_effect((s32)(0x53F06), (s32)(0), (s32)(0), (s32)(0));
        return;
    }
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    *(u16 *)((s8 *)arg0 + 0x60) = (u16) (*(u16 *)((s8 *)arg0 + 0x60) | 2);
    temp = (u32) *(u32 *)((s8 *)arg0 + 0x70);
    if (temp != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(temp, 2);
    }
}

extern s32 number_input_decimal_place_values[];

void update__18TWindowInputNumberFPv(void *arg0) {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    *(s32 *)((s8 *)arg0 + 0x6C) = (s32) (*(s32 *)((s8 *)arg0 + 0x6C) - number_input_decimal_place_values[(s8) *(u8 *)((s8 *)arg0 + 0x63)]);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x6C) < (s32) *(s32 *)((s8 *)arg0 + 0x64)) {
        *(s32 *)((s8 *)arg0 + 0x6C) = (s32) *(s32 *)((s8 *)arg0 + 0x68);
    }
    refresh_digit_entries__18TWindowInputNumberFPv(arg0);
    align_digits__18TWindowInputNumberFv(arg0);
}

extern s32 number_input_decimal_place_values[];

void update_value__18TWindowInputNumberFPv(void *arg0) {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    *(s32 *)((s8 *)arg0 + 0x6C) = (s32) (*(s32 *)((s8 *)arg0 + 0x6C) + number_input_decimal_place_values[(s8) *(u8 *)((s8 *)arg0 + 0x63)]);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x6C) > (s32) *(s32 *)((s8 *)arg0 + 0x68)) {
        *(s32 *)((s8 *)arg0 + 0x6C) = (s32) *(s32 *)((s8 *)arg0 + 0x64);
    }
    refresh_digit_entries__18TWindowInputNumberFPv(arg0);
    align_digits__18TWindowInputNumberFv(arg0);
}

void handle_decrement__18TWindowInputNumberFPv(void *arg0) {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    *(u8 *)((s8 *)arg0 + 0x63) = (u8) (*(u8 *)((s8 *)arg0 + 0x63) - 1);
    if ((s8) *(u8 *)((s8 *)arg0 + 0x63) < 0) {
        if (*(u16 *)((s8 *)arg0 + 0x60) & 1) {
            *(u8 *)((s8 *)arg0 + 0x63) = 0U;
            return;
        }
        *(u8 *)((s8 *)arg0 + 0x63) = (u8) (*(u8 *)((s8 *)arg0 + 0x62) - 1);
    }
}

void move_cursor_next__18TWindowInputNumberFPv(void *arg0) {
    u8 temp_r4;

    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    *(u8 *)((s8 *)arg0 + 0x63) = (u8) (*(u8 *)((s8 *)arg0 + 0x63) + 1);
    if ((s8) *(u8 *)((s8 *)arg0 + 0x63) >= (s8) (temp_r4 = *(u8 *)((s8 *)arg0 + 0x62))) {
        if (*(u16 *)((s8 *)arg0 + 0x60) & 1) {
            *(u8 *)((s8 *)arg0 + 0x63) = (u8) (temp_r4 - 1);
            return;
        }
        *(u8 *)((s8 *)arg0 + 0x63) = 0U;
    }
}

void set_value__18TWindowInputNumberFPvf(void *arg0, f32 farg0) {
    *(f32 *)((s8 *)arg0 + 0x38) = farg0;
    save_position__17TWindowSubComCardFPv();
    align_digits__18TWindowInputNumberFv(arg0);
}

}
