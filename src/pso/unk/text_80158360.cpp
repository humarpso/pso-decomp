#include "types.h"

extern "C" {
u8 *get_player_data__10TObjPlayerFi(int);
u16 obj_getField1c(void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);
extern s32 lbl_805D586C;
s32 is_any_player_within_radius_xz(u8 *self, f32 radius);
}

extern "C" {

s32 is_any_player_within_radius_xz(u8 *self, f32 radius) {
    u16 slot;
    u8 *player;
    for (slot = 0; (s32) slot < lbl_805D586C; slot++) {
        player = get_player_data__10TObjPlayerFi(slot);
        if (player != NULL && obj_getField1c(player) < 0x1000) {
            if (get_field_3e4__10TObjPlayerFPv(player) == get_current_floor() && horizontal_distance_squared(self + 0x38, player + 0x38) < radius) {
                return 1;
            }
        }
    }
    return 0;
}

}
