#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_100000__10TObjPlayerFPv(void* p);
void end_freeze_action__10TObjPlayerFPv(u8 *arg0);
void update_move_state__10TObjPlayerFi(s32 arg0);
int TObjPlayer__sub_8001053C(void*);
M2C_UNK set_type__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_801B5DDC(s32);
u32 TObjPlayer__sub_801B5EA4(s32);
M2C_UNK TObjPlayer__sub_801B5FB0();
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
s32 TObjPlayer__sub_801D8B8C(void *);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK apply_velocity__10TObjPlayerFPv(s32);
s32 call_model_m24__10TObjPlayerFPv(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_isState2_324(void *);
int obj_setFlags30(void*, void*);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK trigger_switch_attack__10TObjPlayerFPvi(void *, s32);

void set_flag_100000__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001053C((void*)(p)); obj_setFlags30(p, (void*)1048576); }

void update_move_state__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801B5FB0();
    if (TObjPlayer__sub_801B5DDC(arg0) != 0) {
        TObjPlayer__sub_8001053C((void*)(arg0));
    }
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

struct Base_801cb0c4 { char pad[0x18]; };
struct VObj_801cb0c4 : Base_801cb0c4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

void end_freeze_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xD;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x1E);
    } else {
        set_type__10TObjPlayerFPvi(arg0 + 0x644, TObjPlayer__sub_801D8B8C(arg0));
    }
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x4000AD12);
    if (obj_isState2_324(arg0) != 0) {
        trigger_switch_attack__10TObjPlayerFPvi(arg0, ((VObj_801cb0c4 *)arg0)->m7());
    }
    obj_clearFlags30(arg0, 0x10000);
    set_action_state__10TObjPlayerFPvss(arg0, 0xD, call_model_m24__10TObjPlayerFPv(arg0));
}

}
