#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_player_data__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80018990(void *, void *, void *, void *, f32, f32);
M2C_UNK TObjPlayer__sub_801B5450(void *);
s32 get_class_attack_template(void *);
s32 get_class_defense_template(void *);
f32 TObjPlayer__sub_801D93F8(void *);
f32 TObjPlayer__sub_801D9440(void *);
M2C_UNK apply_input_mode__10TObjPlayerFi(void *);
M2C_UNK copy_data__6TLobbyFPvPv(void *);
M2C_UNK copy_entry__6TLobbyFPvPv(void *, s32);
M2C_UNK copy_from__6TLobbyFPvPv(void *, s32);
M2C_UNK set_move_mode__10TObjPlayerFi(void *);

extern const f32 TObjPlayer__data_805DC28C;

void init_player_data__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;

    temp_f31 = M2C_FIELD(arg0, f32 *, 0xD48);
    copy_data__6TLobbyFPvPv(arg0 + 0xD38);
    M2C_FIELD(arg0, f32 *, 0xD48) = temp_f31;
    M2C_FIELD(arg0, void **, 0x2B0) = (void *) (arg0 + 0xD38);
    apply_input_mode__10TObjPlayerFi(arg0);
    set_move_mode__10TObjPlayerFi(arg0);
    TObjPlayer__sub_801B5450(arg0);
    copy_from__6TLobbyFPvPv(arg0 + 0xD5C, get_class_attack_template(arg0));
    copy_entry__6TLobbyFPvPv(arg0 + 0xD8C, get_class_defense_template(arg0));
    temp_f31_2 = TObjPlayer__sub_801D93F8(arg0);
    TObjPlayer__sub_80018990(arg0, M2C_FIELD(arg0, void **, 0x2B0), arg0 + 0xD5C, arg0 + 0xD8C, TObjPlayer__sub_801D9440(arg0), temp_f31_2);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TObjPlayer__data_805DC28C * M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), f32 *, 0x10));
}

}
