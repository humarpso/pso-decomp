#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801EF5D0_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
M2C_UNK TNpcPlayer__sub_8034DFBC(int, int);
extern RecoveredGlobal_801EF5D0_TLobby__data_80512220 TLobby__data_80512220;
void TLobby__sub_801EF5D0(void);
}

extern "C" {

void cleanup_luker_and_quest_flag__6TLobbyFv(void);
void clear_quest_vm__6TLobbyFv(void);
int forward_npc_player__6TLobbyFPv(void* p);
int qst_op_cine_disable(void);
int qst_op_cine_enable(void);
void qst_op_hud_hide(void);
void qst_op_hud_show(void);
int TLobby__sub_80197F74(void);
int TNpcPlayer__sub_8034E02C(void*);
int TRaderMapCore__sub_801F9110(void);
int TRaderMapCore__sub_801F9144(void);
int TWindowCtrl__sub_8024AEAC(void*);
int TWindowCtrl__sub_8024AEF0(void*);
int clear_quest_vm_flag__6TLobbyFv(void);
int fn_80197E64(void);
int free_luker_object__6TLobbyFv(void);
int reset__9TCineCtrlFi(void*);
int reset_state__9TCineCtrlFi(void*);

int forward_npc_player__6TLobbyFPv(void* p) { return TNpcPlayer__sub_8034E02C(p); }
void cleanup_luker_and_quest_flag__6TLobbyFv(void) { free_luker_object__6TLobbyFv(); TLobby__sub_80197F74(); clear_quest_vm_flag__6TLobbyFv(); }
void clear_quest_vm__6TLobbyFv(void) { free_luker_object__6TLobbyFv(); fn_80197E64(); clear_quest_vm_flag__6TLobbyFv(); }

typedef char RecoveredGlobal_801EF5D0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EF5D0_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EF5D0(void) {
    TNpcPlayer__sub_8034DFBC((int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 0)), (int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 4)));
}

int qst_op_cine_disable(void) { return reset_state__9TCineCtrlFi((void*)(0)); }
int qst_op_cine_enable(void) { return reset__9TCineCtrlFi((void*)(0)); }

    extern int lbl_805D53A0;
void qst_op_hud_show(void) { TWindowCtrl__sub_8024AEF0((void*)(lbl_805D53A0)); TRaderMapCore__sub_801F9144(); }

    extern int lbl_805D53A0;
void qst_op_hud_hide(void) { TWindowCtrl__sub_8024AEAC((void*)(lbl_805D53A0)); TRaderMapCore__sub_801F9110(); }

}
