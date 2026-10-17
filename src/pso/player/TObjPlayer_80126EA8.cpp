#include "types.h"
#include "pso/player/TObjPlayer_80126EA8.h"
#include "pso/item/TUnk_804A2F78.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer::handle_tentacle_state_2() { if (get_player_list__10TObjPlayerFv(this) == 2) { scale_current_matrix((char*)this + 0x1f8); } }

extern const f32 lbl_805DADA0;
extern const f32 lbl_805DADA4;

void TUnk_804A2F78::update_idle() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x200), (f32)lbl_805DADA0, (f32)lbl_805DADA4);
}

extern const f32 lbl_805DADA8;
extern const f32 lbl_805DADAC;

void TUnk_804A2F78::update_attack() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x200), (f32)lbl_805DADA8, (f32)lbl_805DADAC);
}

void TObjPlayer__sub_80126F3C(void) {  }

}
