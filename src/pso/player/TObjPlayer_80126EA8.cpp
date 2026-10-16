#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {

void TObjPlayer__sub_80126F3C(void);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer::handle_tentacle_state_2() { if (get_player_list__10TObjPlayerFv(this) == 2) { scale_current_matrix((char*)this + 0x1f8); } }

extern const f32 lbl_805DADA0;
extern const f32 lbl_805DADA4;

void TObjPlayer::update_orga_flow_shot() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x200), (f32)lbl_805DADA0, (f32)lbl_805DADA4);
}

extern const f32 lbl_805DADA8;
extern const f32 lbl_805DADAC;

void TObjPlayer::approach_value_field200() {
    s32 arg0 = (s32)this;
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x200), (f32)lbl_805DADA8, (f32)lbl_805DADAC);
}

void TObjPlayer__sub_80126F3C(void) {  }

}
