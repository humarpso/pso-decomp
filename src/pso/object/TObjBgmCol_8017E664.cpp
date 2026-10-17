#include "types.h"
#include "pso/object/TObjBgmCol.h"

extern "C" {

u32 get_player_by_client_id(s32);
f32 xyz_distance_squared(u8 *arg0, u8 *arg1);

extern s32 local_client_id;

s32 TObjBgmCol::is_within_distance(f32 farg0) {
    s32 arg0 = (s32)this;
    u32 player;

    player = get_player_by_client_id(local_client_id);
    if ((player != 0U) && (xyz_distance_squared((u8 *)(player + 0x38), (u8 *)(arg0 + 0x38)) < farg0)) {
        return 1;
    }
    return 0;
}

}
