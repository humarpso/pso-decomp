#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enlarge_flight_cutter_slicer(void *arg0);
void setup_item_render__10TObjPlayerFPv(u8 *arg0);
M2C_UNK scale_current_matrix(void *);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK post_translate_matrix(void *);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
s32 get_player_list__10TObjPlayerFv();

extern const f32 lbl_805DAF34;

void enlarge_flight_cutter_slicer(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DAF34;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DAF34;
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DAF34;
    }
}

void setup_item_render__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    u8 temp_r3;

    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 5:
        temp_r3_2 = get_player_list__10TObjPlayerFv();
        switch (temp_r3_2) {
        case 1:
            rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x1F8));
            return;
        case 2:
            scale_current_matrix(arg0 + 0x1FC);
            return;
        }
        break;
    case 7:
        temp_r3_3 = get_player_list__10TObjPlayerFv();
        switch (temp_r3_3) {
        case 4:
            post_translate_matrix(arg0 + 0x1FC);
            return;
        case 2:
            rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x1F8));
            break;
        }
        break;
    }
}

}
