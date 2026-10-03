#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Ent_8023DBEC { const char *name; u32 a; u32 b; };

struct List_8023DBEC { Ent_8023DBEC *ents; u32 count; };

extern "C" {
s32 strcmp(const char *, const char *);
s32 TObjDoorJung__sub_8023DBEC(List_8023DBEC *list, const char *name);
}

extern "C" {

void free_children__12TObjDoorJungFPvPv(void *arg0, void *arg1);
void set_material_texture_slot(void *);

s32 TObjDoorJung__sub_8023DBEC(List_8023DBEC *list, const char *name) {
    Ent_8023DBEC *ents;
    u32 i;
    if (list != NULL) {
        ents = list->ents;
        if (ents != NULL) {
            for (i = 0; i < list->count; i++) {
                if (strcmp(name, ents[i].name) == 0) {
                    return i;
                }
            }
        }
    }
    return -1;
}

void free_children__12TObjDoorJungFPvPv(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, void **, 0x8) != NULL) {
        set_material_texture_slot(M2C_FIELD(arg0, void **, 0x8));
    }
    if (M2C_FIELD(arg0, void **, 0xC) != NULL) {
        ((void (*)(void *, void *))set_material_texture_slot)(M2C_FIELD(arg0, void **, 0xC), arg1);
    }
}

}
