#ifndef PSO_ENEMY_TOBJENEGIBBLES_H
#define PSO_ENEMY_TOBJENEGIBBLES_H
#include "types.h"
#include <stddef.h>

struct TObjEneGibbles {
    u32 resolve_sound_id(u32 sound_id);
    u8 unknown_00[0x18];
    void* virtual_table;
    u8 unknown_1C[0x430];
};
typedef char TObjEneGibbles_vtable_offset[(offsetof(TObjEneGibbles, virtual_table) == 0x18) ? 1 : -1];
typedef char TObjEneGibbles_size[(sizeof(TObjEneGibbles) ==0x44C) ?1:-1];
#endif
