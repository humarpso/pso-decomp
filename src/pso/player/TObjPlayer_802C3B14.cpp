#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 begin_action_state__10TObjPlayerFPv(u8 *arg0);
s32 get_ptr_4__10TObjPlayerFv();
s32 get_class_starting_inventory(u8);
s32 init_technique_levels(s32, s32);
s32 setup_effect_slots__10TObjPlayerFll(s32, void *);
s32 set_action_state__10TObjPlayerFUc(void *, s32);
s32 get_action_data__10TObjPlayerFv(void *);
s32 init_new_character_stats(void *);
s32 copy_entries(s32, s32, s32);

extern s32 current_language;

s32 begin_action_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;
    u8 temp_r30;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r30 = *(u8 *)((s8 *)arg0 + 0x3A1);
    *(s8 *)((s8 *)arg0 + 0) = 5;
    copy_entries(5, get_class_starting_inventory(temp_r30), get_ptr_4__10TObjPlayerFv());
    set_action_state__10TObjPlayerFUc(arg0, 1);
    init_new_character_stats(arg0);
    setup_effect_slots__10TObjPlayerFll(*(s32 *)((s8 *)arg0 + 0x3A4), arg0 + 0x3C0);
    init_technique_levels(*(s32 *)((s8 *)arg0 + 0x3A4), get_action_data__10TObjPlayerFv(arg0));
    *(s8 *)((s8 *)arg0 + 3) = (s8) current_language;
    return 1;
}

}

extern "C" {
u8 get_battle_mode__10TObjPlayerFPv(void *);
void set_field_1ab__10TObjPlayerFUc(void *, u8);
u8 get_byte_339__10TObjPlayerFPv(void *);
void set_field_18f__10TObjPlayerFUc(void *, u8);
u8 get_mag_level__10TObjPlayerFPv(void *);
}

extern "C" {

s32 TObjPlayer__sub_801BFFA0(s32);
s32 set_current_time__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_802C4668(s32, s32);
int get_char_index__23TAdSinglePlyChrSelectGCFUi(void*);

void TObjPlayer::begin_action_from_char_select() { get_char_index__23TAdSinglePlyChrSelectGCFUi((void*)65535); ((int (*)(void))begin_action_state__10TObjPlayerFPv)(); }

void TObjPlayer::copy_battle_mode(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    set_field_1ab__10TObjPlayerFUc(arg1, get_battle_mode__10TObjPlayerFPv(arg0));
}

void TObjPlayer::copy_byte_339_to_record(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    set_field_18f__10TObjPlayerFUc(arg1, get_byte_339__10TObjPlayerFPv(arg0));
}

void TObjPlayer::copy_mag_level_to_record(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    ((void (*)(void *, u8))set_action_state__10TObjPlayerFUc)(arg1, get_mag_level__10TObjPlayerFPv(arg0));
}

void TObjPlayer::apply_pending_action(s32 arg1) {
    s32 arg0 = (s32)this;
    s32 temp = TObjPlayer__sub_801BFFA0(arg0 + 0x41C);
    if (temp != 0) {
        TObjPlayer__sub_802C4668(arg1, temp);
        set_current_time__10TObjPlayerFv(arg1);
    }
}

}
