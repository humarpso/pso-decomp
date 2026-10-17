#ifndef PSO_ENEMY_CANADINEFFECTS_H
#define PSO_ENEMY_CANADINEFFECTS_H

#include "types.h"

extern "C" {
u8 *TObjEneMe1Canadin_EffLine__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void *__dt__26TObjEneMe1Canadin_EffLightFv(void *arg0, s16 arg1);
void *__dt__30TObjEneMe1Canadin_EffDischargeFv(void *arg0, s16 arg1);
void render__25TObjEneMe1Canadin_EffLineFv(s32 arg0);
void render__30TObjEneMe1Canadin_EffDischargeFv(void);
void run_task__25TObjEneMe1Canadin_EffLineFv(u8 *arg0);
void run_task__30TObjEneMe1Canadin_EffDischargeFv(u8 *arg0);
}

#endif
