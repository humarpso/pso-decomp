#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
