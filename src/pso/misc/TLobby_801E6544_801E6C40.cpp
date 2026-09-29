#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801E6D18_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E6E20_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl_801E6CA4 { u32 w[18]; };

extern "C" {
s32 is_phase_reached__14TBoss6PlotFalzFv();
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E6C4C(s32 arg0);
u32 TLobby__sub_80101AB0(int);
s32 TObjPlayer__sub_801C1AC8();
extern RecoveredGlobal_801E6D18_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E6D18(void);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern RecoveredGlobal_801E6D18_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E6E20(void);
void TLobby__sub_80141038(u8 *arg0, s32 arg1, s32 arg2);
extern Tbl_801E6CA4 lbl_80449B34;
extern RecoveredGlobal_801E6D18_TLobby__data_80512220 TLobby__data_80512220;
extern u8 lbl_80515BA0[];
void TLobby__sub_801E6CA4(void);
}

extern "C" {

void TLobby__sub_801E6C40(int a0, int a1);
void create_singleton__6TLobbyFv(void);
int create_singleton__6TLobbyFPv(void*);

    extern int TLobby__data_805D5ED0;
    extern int lbl_805D5ED4;
void TLobby__sub_801E6C40(int a0, int a1) { TLobby__data_805D5ED0 = a0; lbl_805D5ED4 = a1; }

    extern int tl_01;

void TLobby__sub_801E6C4C(s32 arg0) {
    if (is_phase_reached__14TBoss6PlotFalzFv() != 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

typedef char RecoveredGlobal_801E6D18_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E6D18_TLobby__data_80512220) == 0x20 ? 1 : -1];

void TLobby__sub_801E6CA4(void) {
    Tbl_801E6CA4 t = lbl_80449B34;
    if (TLobby__data_80512220.value <= 0x11U) {
        TLobby__sub_80141038(lbl_80515BA0, t.w[TLobby__data_80512220.value], 0);
    }
}

void TLobby__sub_801E6D18(void) {
    u8 temp_r31;
    temp_r31 = (u8) M2C_FIELD(&TLobby__data_80512220.value, s32 *, 4);
    if (TLobby__sub_80101AB0((int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 0))) != 0U) {
        if (TObjPlayer__sub_801C1AC8() != 0) {
            M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = 1;
            return;
        }
        M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = 0;
        return;
    }
    M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = -1;
}

void create_singleton__6TLobbyFv(void) { create_singleton__6TLobbyFPv((void*)(tl_01)); }
typedef char RecoveredGlobal_801E6E20_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E6E20_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E6E20(void) {
    u8 temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8) M2C_FIELD(&(*(RecoveredGlobal_801E6E20_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4);
    temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C((s32) (u16) M2C_FIELD(&(*(RecoveredGlobal_801E6E20_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0)));
    if (temp_r3 != NULL) {
        M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = M2C_FIELD(temp_r3, s32 *, 0xDB0);
        return;
    }
    M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = -1;
}

}
