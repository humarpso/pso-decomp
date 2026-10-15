#include "types.h"
#include "pso/npc/TObjNpcBase.h"

extern "C" {

void free_nodes_with_id__6TLobbyFUl(void*);

extern u32 npc_town_motion_data;

void TObjNpcBase::free_static() {
    if ((u32) npc_town_motion_data != 0U) {
        free_nodes_with_id__6TLobbyFUl((void*)npc_town_motion_data);
        npc_town_motion_data = 0U;
    }
}

}
