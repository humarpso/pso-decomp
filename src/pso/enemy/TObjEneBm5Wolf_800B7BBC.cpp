#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/enemy/TObjEneBm5Wolf.h"
#include <stddef.h>
struct Stack_800B7C14 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

typedef struct Wolf_800B7DDC {
    u8 pad0[0x60];
    s32 facing;
    u8 pad64[0x3E4 - 0x64];
    s32 turn;
} Wolf_800B7DDC;

extern "C" {
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
extern u8 *TObjEneBm5Wolf__data_805D5120;
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
void select_subtype__14TObjEneBm5WolfFPv(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *actor);
f32 rand_range__9TObjEneDDFff(void *actor, f32 low, f32 high);
void *csnVector(void *from, void *to, u32 flags);
void rotate_xz_pair_by_angle(f32 *x, f32 *z, s32 angle);
f32 clamp_velocity__15TObjBoss2TunnelFPv(f32 *vector);
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D84;
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
extern const f32 lbl_805D9E18;
extern const f32 lbl_805D9E54;
extern const f32 lbl_805D9E58;
s32 TBoss4Type2__sub_80141FA8(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
void TObjEneBm5Wolf__sub_800B7DDC(Wolf_800B7DDC *s, s32 target);
}

extern "C" {

void TObjEneBm5Wolf__sub_800B7F48(void *arg0);
void approach_target__14TObjEneBm5WolfFPvf(void *arg0, f32 farg0);

void approach_target__14TObjEneBm5WolfFPvf(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x404);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x400);
    if (temp_f2 != temp_f0) {
        if (temp_f2 > temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x404) = (f32) (temp_f2 - farg0);
            if (M2C_FIELD(arg0, f32 *, 0x404) < M2C_FIELD(arg0, f32 *, 0x400)) {
                M2C_FIELD(arg0, f32 *, 0x404) = M2C_FIELD(arg0, f32 *, 0x400);
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x404) = (f32) (temp_f2 + farg0);
            if (M2C_FIELD(arg0, f32 *, 0x404) > M2C_FIELD(arg0, f32 *, 0x400)) {
                M2C_FIELD(arg0, f32 *, 0x404) = M2C_FIELD(arg0, f32 *, 0x400);
            }
        }
    }
}

extern f32 TObjEneBm5Wolf__data_805D9DB4;

#pragma push
#pragma fp_contract on
void TObjEneBm5Wolf::choose_roaming_destination() {
    typedef char sp8_offset[(offsetof(Stack_800B7C14, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800B7C14, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800B7C14, sp10) == 0x8) ? 1 : -1];
    Stack_800B7C14 stack;
    f32 temp_f3;
    f32 temp_f3_2;
    u8 *temp_r3;
    u8 *temp_r4;
    stack.sp8 = this->position[0] - this->groupAnchor[0];
    stack.spC = TObjEneBm5Wolf__data_805D9D78;
    stack.sp10 = this->position[2] - this->groupAnchor[2];
    clamp_velocity__15TObjBoss2TunnelFPv(&stack.sp8);
    rotate_xz_pair_by_angle(&stack.sp8, &stack.sp10, (s32) (lbl_805D9E54 * calc_boss4_scale__10TObjPlayerFi(this)) + 0x4000);
    temp_f3 = lbl_805D9E18 * rand_range__9TObjEneDDFff(this, TObjEneBm5Wolf__data_805D9D84, TObjEneBm5Wolf__data_805D9D8C);
    this->destination[0] = (f32) ((stack.sp8 * temp_f3) + this->groupAnchor[0]);
    this->destination[2] = (f32) ((stack.sp10 * temp_f3) + this->groupAnchor[2]);
    temp_r3 = (u8 *)(csnVector((u8 *)(this) + 0x2FC, (u8 *)(this) + 0x394, 0x88E0U));
    if (temp_r3 != NULL) {
        temp_r4 = (u8 *)(M2C_FIELD(temp_r3, u8 **, 4));
        stack.sp8 = M2C_FIELD(temp_r4, f32 *, 0) - this->position[0];
        stack.sp10 = M2C_FIELD(temp_r4, f32 *, 8) - this->position[2];
        temp_f3_2 = clamp_velocity__15TObjBoss2TunnelFPv(&stack.sp8) - lbl_805D9E58;
        this->destination[0] = (f32) ((stack.sp8 * temp_f3_2) + this->position[0]);
        this->destination[2] = (f32) ((stack.sp10 * temp_f3_2) + this->position[2]);
    }
}
#pragma pop

void TObjEneBm5Wolf__sub_800B7DDC(Wolf_800B7DDC *s, s32 target) {
    s32 d;
    d = TBoss4Type2__sub_80141FA8(s->facing, target);
    if (d > 0x4000) {
        d = 0x4000;
    } else if (d < -0x4000) {
        d = -0x4000;
    }
    if (s->turn * d >= 0) {
        s->turn = approach_angle_limited(s->turn, d, 0x800);
    } else if (s->turn * TBoss4Type2__sub_80141FA8(s->turn, d) >= 0) {
        if (s->turn >= 0) {
            s->turn -= 0x800;
        } else {
            s->turn += 0x800;
        }
    } else {
        s->turn = approach_angle_limited(s->turn, d, 0x800);
    }
    s->turn = (s16)s->turn;
}

void select_subtype__14TObjEneBm5WolfFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3DC) = (s32) get_random_float__21TObjEneMe3ShinowaRealFv((f32) (M2C_FIELD(arg0, f32 *, 0x354)));
    if (M2C_FIELD(arg0, f32 *, 0x358) >= TObjEneBm5Wolf__data_805D9D8C) {
        M2C_FIELD(arg0, s32 *, 0x3D8) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5Wolf__data_805D5120, u8 **, 0x42C), s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5Wolf__data_805D5120, u8 **, 0x42C), s32 *, 0xC);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5Wolf__data_805D5120, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5Wolf__data_805D5120, u8 **, 0x42C), s32 *, 0xC);
}

void TObjEneBm5Wolf__sub_800B7F48(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TObjEneBm5Wolf__data_805D9DB4 + M2C_FIELD(arg0, f32 *, 0x40C));
}

}
