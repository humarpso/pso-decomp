#ifndef PSO_MISC_TTECCTRL_H
#define PSO_MISC_TTECCTRL_H

#include "types.h"

extern "C" {
void TLobby__sub_8022F068(void);
void *__ct__8TTecCtrlFv(void *arg0);
s32 clamp_nonnegative_int(s32 x);
void *get_technique_base_params(int a0);
void load_technique_resources(void);
}

#endif
