#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_area_effect_objects__10TObjPlayerFPv(u8 *arg0);
M2C_UNK scale_current_matrix(void *);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK post_translate_matrix(void *);
M2C_UNK rotate_matrix_z(int, int);
s32 get_player_list__10TObjPlayerFv();

void update_area_effect_objects__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3_2;
    u8 temp_r3;

    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 6:
        if (get_player_list__10TObjPlayerFv() == 4) {
            rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x1F8)));
        }
        break;
    case 5:
        temp_r3_2 = get_player_list__10TObjPlayerFv();
        switch (temp_r3_2) {
        case 1:
            post_translate_matrix((void *) (arg0 + 0x208));
            return;
        case 2:
            post_translate_matrix((void *) (arg0 + 0x214));
            return;
        case 3:
            scale_current_matrix((void *) (arg0 + 0x1FC));
            break;
        }
        break;
    }
}

}
