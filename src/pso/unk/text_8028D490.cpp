#include "types.h"

struct RecoveredFields_8028D490_arg0 {
    s32 field_0;
    u32 field_4;
    u8 unknown_8[0x24];
    u32 field_2C;
    u32 field_30;
};

extern "C" {
extern u32 node_tree_range_start;
extern u8 lbl_805D64F4;
extern u32 lbl_805D64F8;
extern u8 lbl_805D64FC;
extern u32 lbl_805D6500;
extern u8 lbl_805D6504;
extern u32 lbl_805D6508;
extern u8 lbl_805D650C;
s32 is_node_tree_valid(struct RecoveredFields_8028D490_arg0 *arg0);
s32 is_node_tree_valid(struct RecoveredFields_8028D490_arg0 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r4;
    u32 temp_r5;
    if (arg0->field_0 & 0xFFFFE000) {
        return 0;
    }
    if ((s8) lbl_805D64F4 == 0) {
        node_tree_range_start = 0U;
        lbl_805D64F4 = 1;
    }
    if ((s8) lbl_805D64FC == 0) {
        lbl_805D64F8 = 0x200000U;
        lbl_805D64FC = 1;
    }
    if ((s8) lbl_805D6504 == 0) {
        lbl_805D6500 = 0U;
        lbl_805D6504 = 1;
    }
    if ((s8) lbl_805D650C == 0) {
        lbl_805D6508 = 0x200000U;
        lbl_805D650C = 1;
    }
    temp_r3 = arg0->field_2C;
    if (((temp_r3 > (u32) node_tree_range_start) && (temp_r3 < (u32) lbl_805D64F8)) || ((temp_r5 = arg0->field_30, ((temp_r5 > (u32) node_tree_range_start) != 0)) && (temp_r5 < (u32) lbl_805D64F8)) || ((temp_r4 = arg0->field_4, ((temp_r4 > (u32) lbl_805D6500) != 0)) && (temp_r4 < (u32) lbl_805D6508))) {
        return 0;
    }
    if ((temp_r3 != 0) && (is_node_tree_valid((struct RecoveredFields_8028D490_arg0 *) temp_r3) == 0)) {
        return 0;
    }
    temp_r3_2 = arg0->field_30;
    if ((temp_r3_2 != 0) && (is_node_tree_valid((struct RecoveredFields_8028D490_arg0 *) temp_r3_2) == 0)) {
        return 0;
    }
    return 1;
}

}
