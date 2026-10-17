#ifndef PSO_ENEMY_SAVERLIFECYCLE_H
#define PSO_ENEMY_SAVERLIFECYCLE_H

#include "types.h"

struct TObjEneSaver;
extern "C" {
u8 *TObjEneSaver__ct(TObjEneSaver *arg0, void *arg1, void *arg2);
void TObjPlayer__sub_800A4294(void);
void TObjPlayer__sub_800A42C0(void);
void TObjPlayer__sub_800A4D9C(u8 *arg0);
void TObjPlayer__sub_800A5154(void *arg0);
void TObjPlayer__sub_800A54B4(u8 *arg0);
void TObjPlayer__sub_800A5960(void *arg0);
void TObjPlayer__sub_800A5FA8(u8 *arg0);
void TObjPlayer__sub_800A6C54(u8 *arg0);
void TObjPlayer__sub_800A6EC0(u8 *arg0);
void *create_ene_saver(void *arg0);
void initialize_saver_resources(void);
void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1);
void update_collapse_and_destroy__10TObjPlayerFPv(u8 *arg0);
}

#endif
