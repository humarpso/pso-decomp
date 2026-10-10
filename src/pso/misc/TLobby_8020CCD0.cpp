#include "pso/enemy/EnemyFactoryTables.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_enemy_factory_entry(EnemyFactoryEntry *arg0, EnemyFactoryEntry *arg1);

void copy_enemy_factory_entry(EnemyFactoryEntry *arg0, EnemyFactoryEntry *arg1) {
    arg0->type = arg1->type;
    arg0->create = arg1->create;
    arg0->field_08 = arg1->field_08;
    arg0->child_count = arg1->child_count;
}

}
