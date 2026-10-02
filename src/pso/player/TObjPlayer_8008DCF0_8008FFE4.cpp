#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_control_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjEneBalClawClaw__sub_8008DC90(void *);
M2C_UNK TObjEneBalClaw__sub_8008D68C();
M2C_UNK TObjEneBalClaw__sub_8008D79C(void *);
M2C_UNK TObjEneMe1GiGue__sub_8008FC0C(void *);
M2C_UNK TObjEneMe1GiGue__sub_8008FC10(void *);
M2C_UNK TObjPlayer__sub_8008FF50(void *);
s32 get_flag_0x388_b24__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int, int, f32, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK update_claw_angle__14TObjEneBalClawFPv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);

void update_control_state__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r5;

    TObjEneBalClaw__sub_8008D68C();
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjEneBalClawClaw__sub_8008DC90((void *) (arg0));
        TObjEneMe1GiGue__sub_8008FC0C((void *) (arg0));
        return;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x388) & 0x02000000) && (get_flag_0x388_b24__10TObjPlayerFPv((void *) (arg0)) == 0)) {
        update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (2));
    } else {
        TObjEneMe1GiGue__sub_8008FC10((void *) (arg0));
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjPlayer__sub_8008FF50((void *) (arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjPlayer__sub_8008FF50((void *) (arg0));
    TObjEneBalClaw__sub_8008D79C((void *) (arg0));
    update_claw_angle__14TObjEneBalClawFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x300);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (temp_f2 + (M2C_FIELD(arg0, f32 *, 0x3B4) + M2C_FIELD(arg0, f32 *, 0x3BC)));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3B4);
    temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r5, f32 *, 4) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x3BC));
    submit_cursor_candidate((void *) (arg0), (int) (-1), (int) (temp_r5), (f32) (temp_f1), (f32) (temp_f2));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

}
