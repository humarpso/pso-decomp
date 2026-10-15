#include "types.h"
#include "pso/ui/TWindowInputNumber.h"

extern "C" {

s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
s32 align_digits__18TWindowInputNumberFv(void *);
s32 refresh_digit_entries__18TWindowInputNumberFPv(void *);
s16 get_field_2F8__20TWindowSubStatusDispFv(void* p);
s16 get_item_type__20TWindowSubStatusDispFv(void* p);
s16 get_stat__20TWindowSubStatusDispFv(void* p);
s16 get_value__20TWindowSubStatusDispFv(void* p);
s32 is_confirmed__18TWindowInputNumberFv();
s32 save_position__17TWindowSubComCardFPv();
s32 set_entry_state__20TWindowSubStatusDispFSc(s32 a0 = 0, s32 a1 = 0);
void set_flag0_bit20__15TWindowHelpItemFv(void* p);
void set_flag60_bit4__13TWindowSubMagFv(void* p);

void TWindowInputNumber::mark_confirmed() {
    if (!(*(u16 *)((s8 *)this + 0x60) & 8) && (is_confirmed__18TWindowInputNumberFv() == 0)) {
        *(u16 *)((s8 *)this + 0x60) = (u16) (*(u16 *)((s8 *)this + 0x60) | 4);
    }
}
void TWindowInputNumber::confirm_input() {
    s32 temp_r3;
    u32 temp;

    temp_r3 = *(s32 *)((s8 *)this + 0x6C);
    if ((temp_r3 < (s32) *(s32 *)((s8 *)this + 0x64)) || (temp_r3 > (s32) *(s32 *)((s8 *)this + 0x68))) {
        play_sound_effect((s32)(0x53F06), (s32)(0), (s32)(0), (s32)(0));
        return;
    }
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    *(u16 *)((s8 *)this + 0x60) = (u16) (*(u16 *)((s8 *)this + 0x60) | 2);
    temp = (u32) *(u32 *)((s8 *)this + 0x70);
    if (temp != 0U) {
        set_entry_state__20TWindowSubStatusDispFSc(temp, 2);
    }
}

extern s32 number_input_decimal_place_values[];

void TWindowInputNumber::update() {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    *(s32 *)((s8 *)this + 0x6C) = (s32) (*(s32 *)((s8 *)this + 0x6C) - number_input_decimal_place_values[(s8) *(u8 *)((s8 *)this + 0x63)]);
    if ((s32) *(s32 *)((s8 *)this + 0x6C) < (s32) *(s32 *)((s8 *)this + 0x64)) {
        *(s32 *)((s8 *)this + 0x6C) = (s32) *(s32 *)((s8 *)this + 0x68);
    }
    refresh_digit_entries__18TWindowInputNumberFPv(this);
    align_digits__18TWindowInputNumberFv(this);
}

extern s32 number_input_decimal_place_values[];

void TWindowInputNumber::update_value() {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    *(s32 *)((s8 *)this + 0x6C) = (s32) (*(s32 *)((s8 *)this + 0x6C) + number_input_decimal_place_values[(s8) *(u8 *)((s8 *)this + 0x63)]);
    if ((s32) *(s32 *)((s8 *)this + 0x6C) > (s32) *(s32 *)((s8 *)this + 0x68)) {
        *(s32 *)((s8 *)this + 0x6C) = (s32) *(s32 *)((s8 *)this + 0x64);
    }
    refresh_digit_entries__18TWindowInputNumberFPv(this);
    align_digits__18TWindowInputNumberFv(this);
}

void TWindowInputNumber::handle_decrement() {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    *(u8 *)((s8 *)this + 0x63) = (u8) (*(u8 *)((s8 *)this + 0x63) - 1);
    if ((s8) *(u8 *)((s8 *)this + 0x63) < 0) {
        if (*(u16 *)((s8 *)this + 0x60) & 1) {
            *(u8 *)((s8 *)this + 0x63) = 0U;
            return;
        }
        *(u8 *)((s8 *)this + 0x63) = (u8) (*(u8 *)((s8 *)this + 0x62) - 1);
    }
}

void TWindowInputNumber::move_cursor_next() {
    u8 temp_r4;

    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    *(u8 *)((s8 *)this + 0x63) = (u8) (*(u8 *)((s8 *)this + 0x63) + 1);
    if ((s8) *(u8 *)((s8 *)this + 0x63) >= (s8) (temp_r4 = *(u8 *)((s8 *)this + 0x62))) {
        if (*(u16 *)((s8 *)this + 0x60) & 1) {
            *(u8 *)((s8 *)this + 0x63) = (u8) (temp_r4 - 1);
            return;
        }
        *(u8 *)((s8 *)this + 0x63) = 0U;
    }
}

void TWindowInputNumber::set_value(f32 farg0) {
    *(f32 *)((s8 *)this + 0x38) = farg0;
    save_position__17TWindowSubComCardFPv();
    align_digits__18TWindowInputNumberFv(this);
}

}
