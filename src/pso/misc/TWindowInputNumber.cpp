#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK align_digits__18TWindowInputNumberFv(void *);
M2C_UNK refresh_digit_entries__18TWindowInputNumberFPv(void *);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
s32 is_confirmed__18TWindowInputNumberFPv();
M2C_UNK save_position__17TWindowSubComCardFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

void mark_confirmed__18TWindowInputNumberFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 8) && (is_confirmed__18TWindowInputNumberFPv() == 0)) {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 4);
    }
}
void confirm_input__18TWindowInputNumberFPv(void *arg0) {
    s32 temp_r3;
    u32 temp;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x6C);
    if ((temp_r3 < (s32) M2C_FIELD(arg0, s32 *, 0x64)) || (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x68))) {
        play_sound_effect((s32)(0x53F06), (s32)(0), (s32)(0), (s32)(0));
        return;
    }
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 2);
    temp = (u32) M2C_FIELD(arg0, u32 *, 0x70);
    if (temp != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(temp, 2);
    }
}

extern M2C_UNK number_input_decimal_place_values[];

void update__18TWindowInputNumberFPv(void *arg0) {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) - number_input_decimal_place_values[(s8) M2C_FIELD(arg0, u8 *, 0x63)]);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) < (s32) M2C_FIELD(arg0, s32 *, 0x64)) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x68);
    }
    refresh_digit_entries__18TWindowInputNumberFPv(arg0);
    align_digits__18TWindowInputNumberFv(arg0);
}

extern M2C_UNK number_input_decimal_place_values[];

void update_value__18TWindowInputNumberFPv(void *arg0) {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + number_input_decimal_place_values[(s8) M2C_FIELD(arg0, u8 *, 0x63)]);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) > (s32) M2C_FIELD(arg0, s32 *, 0x68)) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x64);
    }
    refresh_digit_entries__18TWindowInputNumberFPv(arg0);
    align_digits__18TWindowInputNumberFv(arg0);
}

void handle_decrement__18TWindowInputNumberFPv(void *arg0) {
    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    M2C_FIELD(arg0, u8 *, 0x63) = (u8) (M2C_FIELD(arg0, u8 *, 0x63) - 1);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x63) < 0) {
        if (M2C_FIELD(arg0, u16 *, 0x60) & 1) {
            M2C_FIELD(arg0, u8 *, 0x63) = 0U;
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x63) = (u8) (M2C_FIELD(arg0, u8 *, 0x62) - 1);
    }
}

void move_cursor_next__18TWindowInputNumberFPv(void *arg0) {
    u8 temp_r4;

    play_sound_effect((s32)(0x54100), (s32)(0), (s32)(0), (s32)(0));
    M2C_FIELD(arg0, u8 *, 0x63) = (u8) (M2C_FIELD(arg0, u8 *, 0x63) + 1);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x63) >= (s8) (temp_r4 = M2C_FIELD(arg0, u8 *, 0x62))) {
        if (M2C_FIELD(arg0, u16 *, 0x60) & 1) {
            M2C_FIELD(arg0, u8 *, 0x63) = (u8) (temp_r4 - 1);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x63) = 0U;
    }
}

void set_value__18TWindowInputNumberFPvf(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = farg0;
    save_position__17TWindowSubComCardFPv();
    align_digits__18TWindowInputNumberFv(arg0);
}

}
