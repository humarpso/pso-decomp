#include "types.h"
typedef struct SpawnRecord_8020CC48 {
    s16 type;
    u16 flags;
    u16 index;
    s16 children;
    u16 reserved;
    u16 actor_id;
    s16 room;
    s16 wave;
    u32 secondary_wave;
    f32 position[3];
    u32 angles[3];
    f32 parameters[5];
    s16 integers[4];
} SpawnRecord_8020CC48;

typedef struct SpawnFactory_8020CC48 {
    s16 type;
    u16 flags;
    void *constructor;
    u32 unknown;
    s32 children;
} SpawnFactory_8020CC48;

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
void TLobby__sub_8020CCD0(SpawnFactory_8020CC48 *out, SpawnFactory_8020CC48 *entry);
extern SpawnFactory_8020CC48 *enemy_factory_area_table[];
s32 find_enemy_factory_entry(SpawnRecord_8020CC48 *row, SpawnFactory_8020CC48 *out);
}

extern "C" {

s32 find_enemy_factory_entry(SpawnRecord_8020CC48 *row, SpawnFactory_8020CC48 *out) {
    s32 index = 0;
    SpawnFactory_8020CC48 *table = enemy_factory_area_table[get_global_state__14TOKeyMachine01Fv()];
    SpawnFactory_8020CC48 *entry = table;
    while (table != NULL && entry->type != -1) {
        if (entry->type == row->type) {
            TLobby__sub_8020CCD0(out, entry);
            return index;
        }
        entry++;
        index++;
    }
    return -1;
}

}
