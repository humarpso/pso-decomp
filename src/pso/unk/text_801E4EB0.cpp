#include "types.h"
struct Ent_801E4EB0 { s32 first; u8 rest[0x28]; };

struct Info_801E4EB0 { u8 pad[0xC]; s32 count; };

struct Obj_801E4EB0 {
    u8 pad[0x1C];
    Ent_801E4EB0 *ents;
    Ent_801E4EB0 **ptrs;
    s32 f24;
    Info_801E4EB0 *info;
};

extern "C" {
void quad_sprite_reset_entries(Obj_801E4EB0 *o);
}

extern "C" {

void quad_sprite_reset_entries(Obj_801E4EB0 *o) {
    s32 i;
    for (i = 0; i < o->info->count; i++) {
        o->ents[i].first = 0;
        o->ptrs[i] = &o->ents[i];
    }
    o->f24 = 0;
}

}
