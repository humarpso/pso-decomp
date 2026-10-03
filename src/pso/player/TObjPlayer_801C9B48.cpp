#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_lobby__10TObjPlayerFi(s32 arg0);
void ensure_default__10TObjPlayerFPv(void *arg0);
void init_action__10TObjPlayerFPv(u8 *arg0);
void *resolve_move_collision__10TObjPlayerFPv(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, s16, M2C_UNK);
M2C_UNK clear_status_bit6__10TObjPlayerFPv();
M2C_UNK construct_revival_particle_effect(void *, void *, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjPlayer__sub_8000FF4C(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8001053C(void *);
void apply_velocity__10TObjPlayerFPv(void *);
M2C_UNK set_type__10TObjPlayerFPvi(void *, M2C_UNK);
M2C_UNK fn_800660B8(void *);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s16);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK TLobby__sub_8024AC20(int);
M2C_UNK queue_destruction__7TObjectFv(void *);

u16 obj_getField1c(s32);

void notify_lobby__10TObjPlayerFi(s32 arg0) {
    clear_status_bit6__10TObjPlayerFPv();
    TLobby__sub_8024AC20(obj_getField1c(arg0));
}

void ensure_default__10TObjPlayerFPv(void *arg0) {
    void *x;
    x = resolve_move_collision__10TObjPlayerFPv(arg0);
    if (x == NULL) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

s32 ret_801D26AC();
extern s32 tl_07;
extern const f32 lbl_805DC374;

void init_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x12;
    run_action_state_phase__10TObjPlayerFisi(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_8001053C(arg0);
    set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x12C);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) lbl_805DC374;
    TObjPlayer__sub_8000FF4C(arg0, 0xFFFF);
    set_action_state__10TObjPlayerFPvss(arg0, 0x12, (s16) ret_801D26AC());
    fn_800660B8(arg0);
    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        void *new_obj = (void *)(size_t)__nw__7TObjectFUl(0x38);
        if (new_obj != 0U) {
            construct_revival_particle_effect(new_obj, arg0, tl_07);
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x548) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x548));
        M2C_FIELD(arg0, u32 *, 0x548) = 0U;
    }
}

}
