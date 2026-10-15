#include "types.h"
#include "pso/object/TObjBgmCol.h"

extern "C" {

u32 get_player_by_client_id(s32);
f32 xyz_distance_squared(s32, s32);

extern s32 local_client_id;

s32 TObjBgmCol::is_within_distance(f32 farg0) {
    s32 arg0 = (s32)this;
    u32 temp_r3;

    temp_r3 = get_player_by_client_id(local_client_id);
    if ((temp_r3 != 0U) && (xyz_distance_squared(temp_r3 + 0x38, arg0 + 0x38) < farg0)) {
        return 1;
    }
    return 0;
}

}
