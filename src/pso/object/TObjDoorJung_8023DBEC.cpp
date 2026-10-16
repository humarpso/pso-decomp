#include "types.h"
#include "pso/object/TObjDoorJung.h"

struct Ent_8023DBEC { const char *name; u32 a; u32 b; };

struct List_8023DBEC { Ent_8023DBEC *ents; u32 count; };

extern "C" {
s32 strcmp(const char *, const char *);
}

extern "C" {

void set_material_texture_slot(void *);

s32 TObjDoorJung::find_entry_by_name(const char *name) {
    Ent_8023DBEC *ents;
    u32 i;
    if (((List_8023DBEC *)this) != NULL) {
        ents = ((List_8023DBEC *)this)->ents;
        if (ents != NULL) {
            for (i = 0; i < ((List_8023DBEC *)this)->count; i++) {
                if (strcmp(name, ents[i].name) == 0) {
                    return i;
                }
            }
        }
    }
    return -1;
}

void TObjDoorJung::free_children(void *arg1) {
    if (*(void **)((s8 *)this + 0x8) != NULL) {
        set_material_texture_slot(*(void **)((s8 *)this + 0x8));
    }
    if (*(void **)((s8 *)this + 0xC) != NULL) {
        ((void (*)(void *, void *))set_material_texture_slot)(*(void **)((s8 *)this + 0xC), arg1);
    }
}

}
