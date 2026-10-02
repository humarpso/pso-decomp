#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_joined_game_entity__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK draw_ginja_object(u32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
u8 *query_game_join_id__10TObjPlayerFv(s32);
M2C_UNK get_entity_id__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();

void notify_joined_game_entity__10TObjPlayerFPv(u8 *arg0) {
    u32 temp_r31;
    u8 *temp_r3;

    temp_r3 = query_game_join_id__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x1C));
    if (temp_r3 != NULL) {
        temp_r31 = M2C_FIELD(temp_r3, u32 *, 0x188);
        if (temp_r31 != 0U) {
            get_entity_id__10TObjPlayerFPv();
            notify_fish_if_valid__10TObjPlayerFUi();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x2C);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x3C));
            rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x38));
            rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x40));
            draw_ginja_object(temp_r31);
            pop_matrix();
        }
    }
}

}
