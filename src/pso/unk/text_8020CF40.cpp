#include "pso/object/ObjectFactoryTables.h"

#include "types.h"
#include "pso/misc/TOKeyMachine01.h"
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

typedef ObjectFactoryEntry SpawnFactory_8020CC48;

extern "C" {
void TLobby__sub_8020CFC8(void *arg0, void *arg1);
s32 find_set_factory_index(SpawnRecord_8020CC48 *row, SpawnFactory_8020CC48 *out);
s32 find_set_factory_index(SpawnRecord_8020CC48 *row, SpawnFactory_8020CC48 *out) {
    s32 index = 0;
    SpawnFactory_8020CC48 *table = floor_object_factory_tables[TOKeyMachine01::get_global_state()];
    SpawnFactory_8020CC48 *entry = table;
    while (table != NULL && entry->type != -1) {
        if (entry->type == row->type) {
            TLobby__sub_8020CFC8(out, entry);
            return index;
        }
        entry++;
        index++;
    }
    return -1;
}

}
