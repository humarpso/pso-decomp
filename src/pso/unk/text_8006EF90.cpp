#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8006EF98_lbl_8048A088 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_8006EF98_lbl_8048B0F4 {
    M2C_UNK value;
    u8 remaining[0x100];
};

struct RecoveredGlobal_8006EF98_lbl_8048C244 {
    M2C_UNK value;
    u8 remaining[0x100];
};

extern "C" {
extern RecoveredGlobal_8006EF98_lbl_8048A088 force_stage_start_parameters;
extern RecoveredGlobal_8006EF98_lbl_8048B0F4 lbl_8048B0F4;
extern RecoveredGlobal_8006EF98_lbl_8048C244 lobby_stage_table;
u8 *get_stage_table_entry__6TLobbyFii(s32 arg0, s32 arg1);
s32 is_flag_set__6TLobbyFv(void);
extern s32 challenge_mode_state[];
s32 get_online_result_value__6TLobbyFv(void);
}

extern "C" {

int TLobby__sub_8006EF90(void);

int TLobby__sub_8006EF90(void) { return 1; }
typedef char RecoveredGlobal_8006EF98_lbl_8048A088_size[sizeof(RecoveredGlobal_8006EF98_lbl_8048A088) == 0x100 ? 1 : -1];
typedef char RecoveredGlobal_8006EF98_lbl_8048B0F4_size[sizeof(RecoveredGlobal_8006EF98_lbl_8048B0F4) == 0x104 ? 1 : -1];
typedef char RecoveredGlobal_8006EF98_lbl_8048C244_size[sizeof(RecoveredGlobal_8006EF98_lbl_8048C244) == 0x104 ? 1 : -1];
u8 *get_stage_table_entry__6TLobbyFii(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
        return (u8 *)&lbl_8048B0F4.value + (arg1 * 0x10);
    case 1:
        return (u8 *)&lobby_stage_table.value + (arg1 * 0x10);
    case 2:
        return (u8 *)&force_stage_start_parameters.value + (arg1 * 0x10);
    default:
        return (u8 *)&lbl_8048B0F4.value + (arg1 * 0x10);
    }
}
s32 get_online_result_value__6TLobbyFv(void) {
    s32 f = is_flag_set__6TLobbyFv();
    s32 r = -1;
    if (f) {
        r = challenge_mode_state[0];
    }
    return r;
}

}
