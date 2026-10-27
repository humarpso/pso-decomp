#include "types.h"
#include "pso/boss/TBoss3VoloptP02.h"

void TBoss3VoloptP02::clear_flag_08000000() {
    clear_player_status_flag(0, 0x08000000);
}

void TBoss3VoloptP02::set_flag_08000000() {
    set_indexed_flags(0, 0x08000000);
}
