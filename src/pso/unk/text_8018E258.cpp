#include "types.h"
#include "pso/object/TObjDoor.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 get_player_by_client_id(int);
f32 xyz_distance(void *, void *);
s32 check_player_door_proximity(s32 arg0, s32 arg1, f32 farg0);
}

extern "C" {

s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 get_player_by_client_id(int);
f32 xyz_distance(void *, void *);

s32 check_player_door_proximity(s32 arg0, s32 arg1, f32 farg0) {
    s32 p;
    s32 i;
    s32 j;
    s32 q;
    if (arg1 == 1) {
        for (i = 0; i < 0xC; i++) {
            p = get_player_by_client_id(i);
            if (p != 0) {
                if (get_field_3e4__10TObjPlayerFPv(p) == get_current_floor() && xyz_distance((void *)(arg0 + 0x38), (void *)(p + 0x38)) < farg0) {
                    return 0;
                }
            }
        }
        return 1;
    } else if (arg1 == 0) {
        for (j = 0; j < 0xC; j++) {
            q = get_player_by_client_id(j);
            if (q != 0) {
                if (get_field_3e4__10TObjPlayerFPv(q) == get_current_floor() && xyz_distance((void *)(arg0 + 0x38), (void *)(q + 0x38)) < farg0) {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 0;
}

}
