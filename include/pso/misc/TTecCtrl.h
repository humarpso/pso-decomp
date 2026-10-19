#ifndef PSO_MISC_TTECCTRL_H
#define PSO_MISC_TTECCTRL_H

#include "types.h"

extern "C" {
void TLobby__sub_8022F068(void);
void *__ct__8TTecCtrlFv(void *tec_ctrl);
void *get_technique_base_params(int a0);
}

// --- C functions defined in TTecCtrl.cpp ---
extern "C" {
void TLobby__sub_8022F068(void);
void *get_technique_base_params(int a0);
}
// --- end of C functions

#endif
