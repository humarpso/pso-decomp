#include "types.h"
#include "pso/slices/pso_carve_8020bf88.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TLobby_8020B03C.h"

int TLobby__sub_8020BF88(void) {
    s32 count = 0;
    count += TLobby__sub_8020B308();
    count += TLobby::sum_floor_enemy_counts();
    return count * 2 + 0x10;
}
