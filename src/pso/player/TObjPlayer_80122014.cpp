#include "types.h"
#include "pso/item/TUnk_804A0DB0.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void belra_cannon_return_timer(void *arg0);
void emit_marker_effects__13TUnk_804A0DB0Fv(void* a0);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void belra_cannon_return_timer(void *arg0) {
    if (arg0 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = 1;
    }
}

void TObjPlayer::notify_tentacle_if_mode1() { if (get_player_list__10TObjPlayerFv(this) == 1) { scale_current_matrix((char*)this + 0x1f8); } }

    extern const float lbl_805DACD8;
void TUnk_804A0DB0::emit_marker_effects() { *(float*)((char*)this + 0x1fc) = lbl_805DACD8; }

}
