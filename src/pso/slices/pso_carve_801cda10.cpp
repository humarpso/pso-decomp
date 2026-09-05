#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_action_type__10TObjPlayerFPvs(void *, void *);
M2C_UNK apply_speed_scale__10TObjPlayerFif(void *, f32);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, void *);
s32 get_model_state__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801CE3EC(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, int, int);
M2C_UNK query_field_340__10TObjPlayerFPv(void *, void *);
f32 TObjPlayer__sub_801D2640(void *);
f32 TObjPlayer__sub_801D2CDC(void *);
s32 TObjPlayer__sub_801D2F0C(void *);
u8 TObjPlayer__sub_801D2F4C(void *);
M2C_UNK TObjPlayer__sub_801D31A8(void *, void *, int, int);
void TObjPlayer__sub_801CDA10(u8 *arg0);
}

extern "C" {

void reset_linked_obj__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001053C();
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);
int TObjPlayer__sub_801CD9F0(void* p);
int update_action_state__10TObjPlayerFPv(void*);

void TObjPlayer__sub_801CDA10(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 7;
    TObjPlayer__sub_801D0BC0(arg0, (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    set_action_type__10TObjPlayerFPvs((void *) (arg0 + 0x7CC), (void *) (TObjPlayer__sub_801D2F0C((void *) (arg0 + 0x7CC))));
    query_field_340__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801D2F4C((void *) (arg0 + 0x7CC))));
    TObjPlayer__sub_801D31A8((void *) (arg0 + 0x7CC), (void *) (arg0), (int) (2), (int) (2));
    TObjPlayer__sub_801CE3EC((void *) (arg0));
    set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (7), (void *) (get_model_state__10TObjPlayerFPv((void *) (arg0))));
    apply_speed_scale__10TObjPlayerFif((void *) (arg0), (f32) (TObjPlayer__sub_801D2640((void *) (arg0)) * TObjPlayer__sub_801D2CDC((void *) (arg0 + 0x7CC))));
}

}
