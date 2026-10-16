#include "types.h"
#include "pso/item/TUnk_804A2E80.h"

extern "C" {

void harisen_battle_fan_scale_node(void* p);
void emit_marker_effects__13TUnk_804A2E80Fv(void* a0);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void harisen_battle_fan_scale_node(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1f8); } }

    extern const float lbl_805DAD98;
void TUnk_804A2E80::emit_marker_effects() { *(float*)((char*)this + 0x1fc) = lbl_805DAD98; }

}
