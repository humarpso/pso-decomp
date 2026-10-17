#include "pso/enemy/EnemyFactoryTables.h"
#include "pso/unk/text_8020CCF4.h"

#include "types.h"

extern "C" {
typedef EnemyFactoryEntry Out_8020CCF4;
s32 find_enemy_factory_entry(void *, void *);
s32 construct_enemy_from_set_row(u8 *row) {
    Out_8020CCF4 o;
    if (find_enemy_factory_entry(row, &o) >= 0) {
        return (s32) o.create(row + 4);
    }
    return 0;
}

}
