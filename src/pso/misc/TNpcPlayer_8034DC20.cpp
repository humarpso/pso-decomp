#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8034DE10_lbl_80478C70 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8034DE70_lbl_80478C50 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8034DEA0_TNpcPlayer__data_804ABC90 {
    M2C_UNK value;
    u8 remaining[0x9FC];
};

struct RecoveredGlobal_801A51C0_lbl_80446980 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_8034DE10_lbl_80478C70 lbl_80478C70;
u8 *TNpcPlayer__sub_8034DE10(void);
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_8034DE70_lbl_80478C50 lbl_80478C50;
u8 *TNpcPlayer__sub_8034DE70(void);
M2C_UNK copy__10TNpcPlayerFPvPv(void *, void *, int);
extern RecoveredGlobal_8034DEA0_TNpcPlayer__data_804ABC90 TNpcPlayer__data_804ABC90;
void TNpcPlayer__sub_8034DEA0(s32 arg0, s32 arg1);
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_801A51C0_lbl_80446980 lbl_80478C88;
s32 TNpcPlayer__sub_8034DDE0(void);
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_801A51C0_lbl_80446980 lbl_80478C68;
s32 TNpcPlayer__sub_8034DE40(void);
}

extern "C" {

void TNpcPlayer__sub_8034DC20(void);

void TNpcPlayer__sub_8034DC20(void) {  }
typedef char RecoveredGlobal_8034DE10_lbl_80478C70_size[sizeof(RecoveredGlobal_8034DE10_lbl_80478C70) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_801A51C0_lbl_80446980_size[sizeof(RecoveredGlobal_801A51C0_lbl_80446980) == 0x18 ? 1 : -1];
s32 TNpcPlayer__sub_8034DDE0(void) {
    return M2C_FIELD(&lbl_80478C88.value, M2C_UNK *, (get_instance__6TLobbyFv() * 4));
}

u8 *TNpcPlayer__sub_8034DE10(void) {
    return (u8 *)&lbl_80478C70.value + (get_instance__6TLobbyFv() * 0xC);
}
typedef char RecoveredGlobal_8034DE70_lbl_80478C50_size[sizeof(RecoveredGlobal_8034DE70_lbl_80478C50) == 0x18 ? 1 : -1];

s32 TNpcPlayer__sub_8034DE40(void) {
    return M2C_FIELD(&lbl_80478C68.value, M2C_UNK *, (get_instance__6TLobbyFv() * 4));
}

u8 *TNpcPlayer__sub_8034DE70(void) {
    return (u8 *)&lbl_80478C50.value + (get_instance__6TLobbyFv() * 0xC);
}
typedef char RecoveredGlobal_8034DEA0_TNpcPlayer__data_804ABC90_size[sizeof(RecoveredGlobal_8034DEA0_TNpcPlayer__data_804ABC90) == 0xA00 ? 1 : -1];
void TNpcPlayer__sub_8034DEA0(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = arg1 * 0x28;
    copy__10TNpcPlayerFPvPv((void *) ((u8 *)&TNpcPlayer__data_804ABC90.value + temp_r5), (void *) (arg0), (int) (temp_r5));
}

}
