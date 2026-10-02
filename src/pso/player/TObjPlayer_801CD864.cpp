#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_anim_done__10TObjPlayerFPv(void *arg0);
void update_state5_action__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801CD904(void);
int apply_status_action_a__10TObjPlayerFPv(void* p);
s32 run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
s32 is_anim_finished__10TObjPlayerFPv();
int try_apply_status_action__10TObjPlayerFi(void*);

void check_anim_done__10TObjPlayerFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (is_anim_finished__10TObjPlayerFPv() != 0)) {
        run_action_state_phase__10TObjPlayerFisi(arg0, 1, 0);
    }
}
void update_state5_action__10TObjPlayerFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (is_anim_finished__10TObjPlayerFPv() != 0)) {
        run_action_state_phase__10TObjPlayerFisi(arg0, 1, 0);
    }
}
void TObjPlayer__sub_801CD904(void) {  }
int apply_status_action_a__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
