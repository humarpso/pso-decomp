#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801CB4D0 { u16 hdr; s16 id; s32 c; };

extern "C" {
s32 obj_isState2_324(void * a0);
s16 obj_getField1c(void *);
void TObjPlayer__sub_801D1BB0(void *);
void refresh_players__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CB4D0(u8 *arg0);
}

extern "C" {

s16 ret_801D26AC(void);
s32 run_action_state_phase__10TObjPlayerFisi(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
s32 call_obj_vt26__10TObjPlayerFPv(void * a0 = 0);
s32 set_action_state__10TObjPlayerFPvss(void * a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 apply_velocity__10TObjPlayerFPv(s32);
u32 resolve_move_collision__10TObjPlayerFPv();
s32 update_position_from_target__10TObjPlayerFPv();
void TObjPlayer__sub_801CB424(void);
void TObjPlayer__sub_801CB52C(void);
void TObjPlayer__sub_801CB55C(void);
int try_apply_status_action__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CB4D0(u8 *arg0) {
    struct Pkt_801CB4D0 pkt;
    if (arg0 == NULL || obj_isState2_324((void *)(arg0)) == 0) {
        TObjPlayer__sub_801D1BB0(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.c = *(s32 *)(arg0 + 0x60);
        refresh_players__10TObjPlayerFPv(&pkt);
    }
}

}
