#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int draw_node_tree__10TObjPlayerFPv(void*, void*);

void TObjPlayer::draw_node_tree_if_visible() { if (*(unsigned int*)((char*)this + 0x20) != 0) { *(int*)((char*)this + 0x30) = 0; draw_node_tree__10TObjPlayerFPv(this, *(void**)((char*)this + 0x1c)); } }

}
