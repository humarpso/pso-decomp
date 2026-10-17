#include "types.h"
#include "pso/player/TObjPlayer.h"

void TObjPlayer::draw_node_tree_if_visible() { if (*(unsigned int *)&this->m_20 != 0) { *(int *)&this->actorFlags = 0; draw_node_tree(*(void**)((char*)this + 0x1c)); } }
