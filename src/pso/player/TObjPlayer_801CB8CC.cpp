#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_0x100000__10TObjPlayerFPv(void* p);
void apply_velocity_if_free__10TObjPlayerFi(s32 arg0);
void start_use_item_action__10TObjPlayerFPv(u8 *arg0);
int TObjPlayer__sub_8001053C(void*);
u32 TObjPlayer__sub_801B5EA4(s32);
M2C_UNK TObjPlayer__sub_801B5FB0();
M2C_UNK use_current_item__10TObjPlayerFPv(void *);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK apply_velocity__10TObjPlayerFPv(s32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_isState2_324(void *);
int obj_setFlags30(void*, void*);
s32 query_child_state__10TObjPlayerFPv(void *);
s16 ret_801D26AC();

void set_flag_0x100000__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001053C(p); obj_setFlags30(p, (void*)1048576); }

void apply_velocity_if_free__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801B5FB0();
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

void start_use_item_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xA;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    obj_clearFlags30(arg0, 0x10000);
    use_current_item__10TObjPlayerFPv(arg0);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0xA, query_child_state__10TObjPlayerFPv(arg0));
}

}
