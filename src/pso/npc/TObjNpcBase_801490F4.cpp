#include "types.h"

extern "C" {

void free_static__11TObjNpcBaseFv(void);
void free_nodes_with_id__6TLobbyFUi(void*);

extern u32 npc_town_motion_data;

void free_static__11TObjNpcBaseFv(void) {
    if ((u32) npc_town_motion_data != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)npc_town_motion_data);
        npc_town_motion_data = 0U;
    }
}

}
