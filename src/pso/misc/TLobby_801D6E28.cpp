#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801D6E28(void *arg0, u8 arg1);
s16 clamp_player_index__6TLobbyFPv(void *arg0);
void set_clamped_index__6TLobbyFPvs(void *arg0, s16 arg1);
void TLobby__sub_801D6F08(void *arg0, s32 arg1);
u8 get_clamped_level__6TLobbyFPv(void *arg0);
s32 TObjPlayer__sub_801AF288();
s32 TObjPlayer__sub_801D9988(u8);
u8 ret_801D78E4();

void TLobby__sub_801D6E28(void *arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if ((TObjPlayer__sub_801D9988(var_r31) == 0) && (var_r31 > 0x1DU)) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x11) = var_r31;
}

s16 clamp_player_index__6TLobbyFPv(void *arg0) {
    s16 var_r31;

    var_r31 = M2C_FIELD(arg0, s16 *, 0x14);
    if ((var_r31 < 0) || (var_r31 > TObjPlayer__sub_801AF288())) {
        var_r31 = 0;
    }
    return var_r31;
}

void set_clamped_index__6TLobbyFPvs(void *arg0, s16 arg1) {
    s16 var_r31;

    var_r31 = arg1;
    if ((var_r31 < 0) || (var_r31 > TObjPlayer__sub_801AF288())) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x14) = var_r31;
}

void TLobby__sub_801D6F08(void *arg0, s32 arg1) {
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
