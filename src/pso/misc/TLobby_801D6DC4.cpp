#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 clamp_player_index__6TLobbyFPv(void *arg0);
u8 get_clamped_level__6TLobbyFPv(void *arg0);
void set_clamped_index__6TLobbyFPvs(void *arg0, s16 arg1);
void set_clamped_value_1c__6TLobbyFPvi(void *arg0, s32 arg1);
void set_validated_field_0x11__6TLobbyFPvUc(void *arg0, u8 arg1);
void set_volume__6TLobbyFPvUc(void *arg0, u8 arg1);
s32 get_max_level__10TObjPlayerFv();
s32 is_invalid_slot__10TObjPlayerFUc(u8);
u8 ret_801D78E4();

void set_volume__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 > 0x63U) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x10) = var_r4;
}

void set_validated_field_0x11__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if ((is_invalid_slot__10TObjPlayerFUc(var_r31) == 0) && (var_r31 > 0x1DU)) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x11) = var_r31;
}

s16 clamp_player_index__6TLobbyFPv(void *arg0) {
    s16 var_r31;

    var_r31 = M2C_FIELD(arg0, s16 *, 0x14);
    if ((var_r31 < 0) || (var_r31 > get_max_level__10TObjPlayerFv())) {
        var_r31 = 0;
    }
    return var_r31;
}

void set_clamped_index__6TLobbyFPvs(void *arg0, s16 arg1) {
    s16 var_r31;

    var_r31 = arg1;
    if ((var_r31 < 0) || (var_r31 > get_max_level__10TObjPlayerFv())) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x14) = var_r31;
}

void set_clamped_value_1c__6TLobbyFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0x278D0)) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
}

u8 get_clamped_level__6TLobbyFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x18);
    if (temp_r0 >= 0x1E) {
        return ret_801D78E4();
    }
    return (u8) temp_r0;
}

}
