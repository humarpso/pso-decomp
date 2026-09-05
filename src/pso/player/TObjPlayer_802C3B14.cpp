#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 get_battle_mode__10TObjPlayerFPv(void *);
void set_field_1ab__10TObjPlayerFPvUc(void *, u8);
void TObjPlayer__sub_802C3BE0(u8 *arg0, u8 *arg1);
u8 get_byte_339__10TObjPlayerFPv(void *);
void set_field_18f__10TObjPlayerFPvUc(void *, u8);
void TObjPlayer__sub_802C3C18(u8 *arg0, u8 *arg1);
u8 get_mag_level__10TObjPlayerFPv(void *);
void set_action_state__10TObjPlayerFPvUc(void *, u8);
void TObjPlayer__sub_802C3C50(u8 *arg0, u8 *arg1);
}

extern "C" {

void apply_pending_action__10TObjPlayerFii(s32 arg0, s32 arg1);
void begin_action_from_char_select__10TObjPlayerFv(void);
s32 TObjPlayer__sub_801BFFA0(s32);
M2C_UNK TObjPlayer__sub_802C4600(s32);
M2C_UNK TObjPlayer__sub_802C4668(s32, s32);
int begin_action_state__10TObjPlayerFPv(void);
int get_char_index__23TAdSinglePlyChrSelectGCFUi(void*);

void begin_action_from_char_select__10TObjPlayerFv(void) { get_char_index__23TAdSinglePlyChrSelectGCFUi((void*)65535); begin_action_state__10TObjPlayerFPv(); }

void TObjPlayer__sub_802C3BE0(u8 *arg0, u8 *arg1) {
    set_field_1ab__10TObjPlayerFPvUc(arg1, get_battle_mode__10TObjPlayerFPv(arg0));
}

void TObjPlayer__sub_802C3C18(u8 *arg0, u8 *arg1) {
    set_field_18f__10TObjPlayerFPvUc(arg1, get_byte_339__10TObjPlayerFPv(arg0));
}

void TObjPlayer__sub_802C3C50(u8 *arg0, u8 *arg1) {
    set_action_state__10TObjPlayerFPvUc(arg1, get_mag_level__10TObjPlayerFPv(arg0));
}

void apply_pending_action__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp = TObjPlayer__sub_801BFFA0(arg0 + 0x41C);
    if (temp != 0) {
        TObjPlayer__sub_802C4668(arg1, temp);
        TObjPlayer__sub_802C4600(arg1);
    }
}

}
