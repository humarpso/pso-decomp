#include "types.h"
#include "pso/player/TObjPlayer_80126D30.h"
#include "pso/item/TUnk_804A2E80.h"

extern "C" {

int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void harisen_battle_fan_scale_node(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1f8); } }

    extern const float lbl_805DAD98;
void TUnk_804A2E80::emit_marker_effects() { this->m_1fc = lbl_805DAD98; }

}
