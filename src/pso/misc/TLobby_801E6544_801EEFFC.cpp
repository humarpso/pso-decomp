#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80141860_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141730_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80141788_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141788_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801417B8_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801417B8_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801417E8_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8014175C_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801EF100_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EF298_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F027C_TLobby__data_80512220 { M2C_UNK value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F18C8_TLobby__data_80512220 { s32 value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F1654_TLobby__data_80512220 { M2C_UNK value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F053C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0B48_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0ADC_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0B74_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F00E4_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0D80_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0D54_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0BE0_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F196C_lbl_804499A8 {
    M2C_UNK value;
    u8 remaining[0x70];
};

struct RecoveredGlobal_801F196C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801EF4F4_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
void qst_op_set_qt_cancel(u16 arg0);
int set_quest_cancel_callback(void*);
void qst_op_set_qt_cancel(u16 arg0);
void qst_op_set_qt_success(u16 arg0);
int set_quest_success_callback(void*);
void qst_op_set_qt_success(u16 arg0);
void qst_op_set_qt_failure(u16 arg0);
int THunterGuildSeqOffline__sub_801F3748(void*);
void qst_op_set_qt_failure(u16 arg0);
s32 TQuestThread__sub_801F5D34(int);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
s32 TQuestThread__sub_801F5D34(int);
void qst_op_clr_floor_handler(void);
M2C_UNK TQuestThread__sub_801F5D60(int, int);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
void qst_op_set_floor_handler(void);
s32 clear_active_bit__16TObjCityMainWarpFv(int);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
s32 clear_active_bit__16TObjCityMainWarpFv(int);
void TLobby__sub_801EF26C(void);
M2C_UNK set_active_bit__16TObjCityMainWarpFv(int);
M2C_UNK set_main_warp_id__8TObjDoorFi(int);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
void qst_op_set_mainwarp(void);
s32 TQuestBgmCtrl__sub_801E63A4(int);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
s32 TQuestBgmCtrl__sub_801E63A4(int);
void TLobby__sub_801EF2D8(void);
s32 TQuestBgmCtrl__sub_801E63F4(int);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
s32 TQuestBgmCtrl__sub_801E63F4(int);
void qst_op_playbgm_epi(void);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
s32 clear_current_floor_switch(int);
void qst_op_switch_off(void);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
s32 set_current_floor_switch(int);
void qst_op_switch_on(void);
s32 TLobby__sub_80190FD0(int);
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
s32 TLobby__sub_80190FD0(int);
void qst_op_npc_talk_kill(void);
u32 get_player_by_client_id(s32);
M2C_UNK handle_main_phase__6TLobbyFi();
extern RecoveredGlobal_80141730_lbl_8050C028 TLobby__data_80512220;
void qst_op_p_talk_guild(void);
}

extern "C" {

int TLobby__sub_801EF24C(void* p);
int qst_op_clr_qt_cancel(void);
int qst_op_clr_qt_failure(void);
int qst_op_clr_qt_success(void);
void qst_op_p_return_guild(void);
int set_quest_cancel_callback(void*);
int set_quest_success_callback(void*);
int THunterGuildSeqOffline__sub_801F3748(void*);
int TObjCityMainWarp__sub_80186634(void*);
M2C_UNK TObjPlayer__sub_801B30BC(u32, M2C_UNK);
u32 get_player_by_client_id(s32);

int qst_op_clr_qt_cancel(void) { return set_quest_cancel_callback((void*)(-1)); }
int qst_op_clr_qt_success(void) { return set_quest_success_callback((void*)(-1)); }
int qst_op_clr_qt_failure(void) { return THunterGuildSeqOffline__sub_801F3748((void*)(-1)); }

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_set_qt_cancel(u16 arg0) {
    set_quest_cancel_callback((void *) (arg0));
}

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_set_qt_success(u16 arg0) {
    set_quest_success_callback((void *) (arg0));
}

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_set_qt_failure(u16 arg0) {
    THunterGuildSeqOffline__sub_801F3748((void *) (arg0));
}

typedef char RecoveredGlobal_80141860_lbl_8050C000_size[sizeof(RecoveredGlobal_80141860_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141730_lbl_8050C028_size[sizeof(RecoveredGlobal_80141730_lbl_8050C028) == 0x18 ? 1 : -1];
void qst_op_clr_floor_handler(void) {
    TQuestThread__sub_801F5D34((int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 0x0)));
}
typedef char RecoveredGlobal_80141788_lbl_8050C000_size[sizeof(RecoveredGlobal_80141788_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141788_lbl_8050C028_size[sizeof(RecoveredGlobal_80141788_lbl_8050C028) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8014175C_lbl_8050C000_size[sizeof(RecoveredGlobal_8014175C_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C000_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C028) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801417E8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417E8_lbl_8050C028) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_801EF100_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EF100_TLobby__data_80512220) == 0x20 ? 1 : -1];
void qst_op_set_floor_handler(void) {
    TQuestThread__sub_801F5D60((int) (M2C_FIELD(&(*(RecoveredGlobal_801EF100_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0)), (int) ((u16) M2C_FIELD(&(*(RecoveredGlobal_801EF100_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4)));
}

int TLobby__sub_801EF24C(void* p) { return TObjCityMainWarp__sub_80186634(p); }

extern s32 lbl_805D53A0;

void TLobby__sub_801EF26C(void) {
    clear_active_bit__16TObjCityMainWarpFv((int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 0x0)));
}

typedef char RecoveredGlobal_801EF298_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EF298_TLobby__data_80512220) == 0x20 ? 1 : -1];
void qst_op_set_mainwarp(void) {
    s32 temp_r31;
    temp_r31 = (*(RecoveredGlobal_801EF298_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    set_active_bit__16TObjCityMainWarpFv((int) ((*(RecoveredGlobal_801EF298_TLobby__data_80512220 *)&TLobby__data_80512220).value));
    set_main_warp_id__8TObjDoorFi((int) (temp_r31));
}

void TLobby__sub_801EF2D8(void) {
    TQuestBgmCtrl__sub_801E63A4((int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 0x0)));
}

void qst_op_playbgm_epi(void) {
    TQuestBgmCtrl__sub_801E63F4((int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 0x0)));
}

typedef char RecoveredGlobal_801F027C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F027C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F18C8_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F18C8_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F1654_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F1654_TLobby__data_80512220) == 0x20 ? 1 : -1];
#pragma push
#pragma fp_contract on
#pragma pop
typedef char RecoveredGlobal_801F00E4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F00E4_TLobby__data_80512220) == 0x20 ? 1 : -1];
void qst_op_switch_off(void) {
    clear_current_floor_switch((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__data_80512220).value));
}
typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801F053C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F053C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0ADC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0ADC_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0B48_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0B48_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0B74_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0B74_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0BE0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0BE0_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0D80_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0D80_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0D54_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0D54_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F196C_lbl_804499A8_size[sizeof(RecoveredGlobal_801F196C_lbl_804499A8) == 0x74 ? 1 : -1];
typedef char RecoveredGlobal_801F196C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F196C_TLobby__data_80512220) == 0x20 ? 1 : -1];
#pragma push
#pragma fp_contract on
#pragma pop
#pragma push
#pragma scheduling off
#pragma pop

#pragma push
#pragma fp_contract on
#pragma pop
void qst_op_switch_on(void) {
    set_current_floor_switch((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__data_80512220).value));
}
#pragma push
#pragma fp_contract on
#pragma pop
#pragma push
#pragma scheduling off
#pragma pop

void qst_op_npc_talk_kill(void) {
    TLobby__sub_80190FD0((int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 0x0)));
}

typedef char RecoveredGlobal_801EF4F4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EF4F4_TLobby__data_80512220) == 0x20 ? 1 : -1];
void qst_op_p_talk_guild(void) {
    if (get_player_by_client_id((s32)((int) ((*(RecoveredGlobal_801EF4F4_TLobby__data_80512220 *)&TLobby__data_80512220).value))) != 0U) {
        handle_main_phase__6TLobbyFi();
    }
}

void qst_op_p_return_guild(void) {
    u32 player = get_player_by_client_id(lbl_805D53A0);
    if (player != 0U) {
        TObjPlayer__sub_801B30BC(player, 0);
    }
}

}
