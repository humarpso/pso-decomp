#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::draw_node_tree_if_visible() { if (*(unsigned int *)&this->m_20 != 0) { *(int *)&this->actor_flags = 0; draw_node_tree(*(void**)((char*)this + 0x1c)); } }

}
