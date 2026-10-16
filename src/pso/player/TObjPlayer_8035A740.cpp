#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::draw_node_tree_if_visible() { if (*(unsigned int*)((char*)this + 0x20) != 0) { *(int*)((char*)this + 0x30) = 0; draw_node_tree(*(void**)((char*)this + 0x1c)); } }

}
