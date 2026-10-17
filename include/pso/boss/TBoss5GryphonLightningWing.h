#ifndef PSO_BOSS_TBOSS5GRYPHONLIGHTNINGWING_H
#define PSO_BOSS_TBOSS5GRYPHONLIGHTNINGWING_H

#include "types.h"

extern "C" {
void TLobby__sub_80351DF8(void);
s32 __ct__26TBoss5GryphonLightningWingFv(int arg0, void *arg1, void *a, void *mid, void *b, void *arg5, void *arg6);
void apply_lightning_effect__26TBoss5GryphonLightningWingFv(s32 arg0);
void fn_80351DA8(s32 arg0, u8 *pos, u8 *out, s32 arg3, s32 arg4);
u8 is_lobby_event_active(void);
void run_task__26TBoss5GryphonLightningWingFv(u8 *arg0);
s32 spawn_lightning_wing__12TBoss8DragonFiiiiii(s32 arg0, s32 arg1, s32 mid, s32 arg3, s32 arg4, s32 arg5);
}

#endif
