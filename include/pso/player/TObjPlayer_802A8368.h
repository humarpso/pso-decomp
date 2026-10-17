#ifndef PSO_PLAYER_TOBJPLAYER_802A8368_H
#define PSO_PLAYER_TOBJPLAYER_802A8368_H

#include "types.h"

struct TEffIndirectCtrl;
extern "C" {
void TObjPlayer__sub_802A83F4(void);
void TObjPlayer__sub_802A841C(void);
void eff_indirect_update_and_flush(TEffIndirectCtrl *arg0);
}
s32 setup_indirect_tev_alternate(s32 arg0, s32 unused, s32 sampler, s32 arg3);
s32 setup_indirect_tev_ordinary(s32 arg0, s32 sampler, s32 scale, s32 second);
extern "C" {
void update_eff_indirect(TEffIndirectCtrl *arg0);
}

#endif
