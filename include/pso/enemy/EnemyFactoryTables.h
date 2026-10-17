#ifndef PSO_ENEMY_ENEMY_FACTORY_TABLES_H
#define PSO_ENEMY_ENEMY_FACTORY_TABLES_H
#include "types.h"

typedef void* (*EnemyFactoryFunction)(void* placement);
struct EnemyFactoryEntry {
    s16 type;
    EnemyFactoryFunction create;
    f32 field_08;
    s32 child_count;
};

extern EnemyFactoryEntry* enemy_factory_area_table[36];
void copy_enemy_factory_entry(EnemyFactoryEntry* out, EnemyFactoryEntry* entry);
#endif
