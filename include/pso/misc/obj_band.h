#ifndef PSO_MISC_OBJ_BAND_H
#define PSO_MISC_OBJ_BAND_H

#include "types.h"

extern "C" {
void apply_animation_transition(void *arg0, s16 idx);
void draw_motion_model_saving_joints(u8 *arg0);
void save_joint_matrix_callback(void);
void serialize_node_flags__10TObjPlayerFPv(u8 *arg0);
void set_animation__10TObjPlayerFPvs(void *arg0, s16 arg1);
}

#endif
