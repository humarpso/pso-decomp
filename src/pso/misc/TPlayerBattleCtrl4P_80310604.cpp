#include "types.h"

extern "C" {

void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2);
int init_ctrl_default__19TPlayerBattleCtrl4PFPv(void* p);
void TPlayerBattleCtrl4P__sub_80310664(void* p);
int TPlayerBattleCtrl4P__sub_803112AC(void*, int);
int fn_801C23A8(void*, void*);
int TLobby__sub_8022727C(void*);

int init_ctrl_default__19TPlayerBattleCtrl4PFPv(void* p) { return TPlayerBattleCtrl4P__sub_803112AC(p, 0); }
void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2) { TLobby__sub_8022727C(a1); fn_801C23A8((void*)-50, a2); }
void TPlayerBattleCtrl4P__sub_80310664(void* p) { *(s32*)((char*)p + 0x260) = 0; *(s32*)((char*)p + 0x290) = 0; }

}
