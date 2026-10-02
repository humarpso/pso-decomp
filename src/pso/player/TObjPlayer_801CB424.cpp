#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 ret_801D26AC(void);
s32 run_action_state_phase__10TObjPlayerFisi(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
s32 call_obj_vt26__10TObjPlayerFPv(void * a0 = 0);
s32 set_action_state__10TObjPlayerFPvss(void * a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_isState2_324(void * a0 = 0);
s32 apply_velocity__10TObjPlayerFPv(s32);
u32 TObjPlayer__sub_801B5EA4();
s32 update_position_from_target__10TObjPlayerFPv();
void TObjPlayer__sub_801CB424(void);
void TObjPlayer__sub_801CB52C(void);
void TObjPlayer__sub_801CB55C(void);
int try_apply_status_action__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CB424(void) {  }
void TObjPlayer__sub_801CB428(s32 arg0) {
    if (TObjPlayer__sub_801B5EA4() == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}
void begin_action_0xB__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xB;
    run_action_state_phase__10TObjPlayerFisi(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0xB, call_obj_vt26__10TObjPlayerFPv(arg0));
}

}
