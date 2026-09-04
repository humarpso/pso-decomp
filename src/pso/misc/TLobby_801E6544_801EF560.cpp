#include "types.h"

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

int qst_op_cine_disable(void) { return reset_state__9TCineCtrlFi((void*)(0)); }
int qst_op_cine_enable(void) { return reset__9TCineCtrlFi((void*)(0)); }

    extern int lbl_805D53A0;
void qst_op_hud_show(void) { TWindowCtrl__sub_8024AEF0((void*)(lbl_805D53A0)); TRaderMapCore__sub_801F9144(); }

    extern int lbl_805D53A0;
void qst_op_hud_hide(void) { TWindowCtrl__sub_8024AEAC((void*)(lbl_805D53A0)); TRaderMapCore__sub_801F9110(); }

}
