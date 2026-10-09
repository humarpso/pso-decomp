#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 begin_action_state__10TObjPlayerFPv(u8 *arg0);
s32 get_ptr_4__10TObjPlayerFPv();
s32 get_class_starting_inventory(u8);
M2C_UNK init_technique_levels(s32, s32);
M2C_UNK setup_effect_slots__10TObjPlayerFii(s32, void *);
M2C_UNK set_action_state__10TObjPlayerFPvUc(void *, M2C_UNK);
s32 get_action_data__10TObjPlayerFPv(void *);
M2C_UNK init_new_character_stats(void *);
M2C_UNK fn_802C39F8(M2C_UNK, s32, s32);

extern s32 lbl_805D5544;

s32 begin_action_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;
    u8 temp_r30;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r30 = M2C_FIELD(arg0, u8 *, 0x3A1);
    M2C_FIELD(arg0, s8 *, 0) = 5;
    fn_802C39F8(5, get_class_starting_inventory(temp_r30), get_ptr_4__10TObjPlayerFPv());
    set_action_state__10TObjPlayerFPvUc(arg0, 1);
    init_new_character_stats(arg0);
    setup_effect_slots__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x3A4), arg0 + 0x3C0);
    init_technique_levels(M2C_FIELD(arg0, s32 *, 0x3A4), get_action_data__10TObjPlayerFPv(arg0));
    M2C_FIELD(arg0, s8 *, 3) = (s8) lbl_805D5544;
    return 1;
}

}

extern "C" {
u8 get_battle_mode__10TObjPlayerFPv(void *);
void set_field_1ab__10TObjPlayerFPvUc(void *, u8);
void copy_battle_mode__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
u8 get_byte_339__10TObjPlayerFPv(void *);
void set_field_18f__10TObjPlayerFPvUc(void *, u8);
void copy_byte_339_to_record__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
u8 get_mag_level__10TObjPlayerFPv(void *);
void copy_mag_level_to_record__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
}

extern "C" {

void apply_pending_action__10TObjPlayerFii(s32 arg0, s32 arg1);
void begin_action_from_char_select__10TObjPlayerFv(void);
s32 TObjPlayer__sub_801BFFA0(s32);
M2C_UNK set_current_time__10TObjPlayerFi(s32);
M2C_UNK TObjPlayer__sub_802C4668(s32, s32);
int get_char_index__23TAdSinglePlyChrSelectGCFUi(void*);

void begin_action_from_char_select__10TObjPlayerFv(void) { get_char_index__23TAdSinglePlyChrSelectGCFUi((void*)65535); ((int (*)(void))begin_action_state__10TObjPlayerFPv)(); }

void copy_battle_mode__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    set_field_1ab__10TObjPlayerFPvUc(arg1, get_battle_mode__10TObjPlayerFPv(arg0));
}

void copy_byte_339_to_record__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    set_field_18f__10TObjPlayerFPvUc(arg1, get_byte_339__10TObjPlayerFPv(arg0));
}

void copy_mag_level_to_record__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    ((void (*)(void *, u8))set_action_state__10TObjPlayerFPvUc)(arg1, get_mag_level__10TObjPlayerFPv(arg0));
}

void apply_pending_action__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp = TObjPlayer__sub_801BFFA0(arg0 + 0x41C);
    if (temp != 0) {
        TObjPlayer__sub_802C4668(arg1, temp);
        set_current_time__10TObjPlayerFi(arg1);
    }
}

}
