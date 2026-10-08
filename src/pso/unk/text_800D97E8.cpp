#include "types.h"
typedef struct Vec_800D97E8 {
    f32 x, y, z;
} Vec_800D97E8;

typedef struct Node_800D97E8 {
    u32 flags;
    u8 pad4[0x2C - 0x4];
    struct Node_800D97E8 *child;
    struct Node_800D97E8 *next;
} Node_800D97E8;

extern "C" {
void compose_motion_node_matrix(Node_800D97E8 *);
void matrix_mult_vec(int, void *, void *);
void push_matrix(void);
void pop_matrix(void);
extern Vec_800D97E8 lbl_80500F80;
extern Vec_800D97E8 *lbl_805D5230;
extern s32 lbl_805D5234;
extern s32 motion_trail_node_index;
extern s32 *lbl_805D523C;
extern Vec_800D97E8 *TBoss4Type3__motion_trail_points;
s32 transform_motion_node_points(s32 arg0, Node_800D97E8 *node, s32 idx);
}

extern "C" {

s32 transform_motion_node_points(s32 arg0, Node_800D97E8 *node, s32 idx) {
    u32 flags;
    do {
        push_matrix();
        compose_motion_node_matrix(node);
        flags = node->flags;
        while (idx == lbl_805D523C[motion_trail_node_index]) {
            if (TBoss4Type3__motion_trail_points == NULL) {
                matrix_mult_vec(0, &lbl_80500F80, lbl_805D5230);
            } else {
                matrix_mult_vec(0, &TBoss4Type3__motion_trail_points[motion_trail_node_index], lbl_805D5230);
            }
            lbl_805D5230++;
            motion_trail_node_index++;
        }
        idx++;
        if (!(flags & 0x10)) {
            idx = transform_motion_node_points(arg0, node->child, idx);
        }
        pop_matrix();
        node = node->next;
    } while (node != NULL && motion_trail_node_index < lbl_805D5234);
    return idx;
}

}
