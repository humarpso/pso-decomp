#include "types.h"
#include "pso/boss/TBoss3VoloptP02.h"
#include "pso/player/TObjPlayer.h"

TBoss3VoloptP02::TBoss3VoloptP02(TObject *parent, void *set_data) : TObjEnemyCustom(parent) {
    ((TObjPlayer *)&fade)->init_and_activate();
    apply_set_data(set_data);
    init_params();
}
