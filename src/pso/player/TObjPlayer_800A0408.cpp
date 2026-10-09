#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_recoil_offsets__10TObjPlayerFPv(void *arg0);

extern const f32 lbl_805D9958;
extern const f32 lbl_805D995C;
extern const f32 lbl_805D9960;
extern const f32 lbl_805D9964;

void calc_recoil_offsets__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    f32 var_f0;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
    if (temp_f1 > lbl_805D9960) {
        if (temp_f1 > lbl_805D995C) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_805D9958;
        } else {
            M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f1 - lbl_805D995C);
        }
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805D9958;
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805D9958;
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_805D9958;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_805D9964;
    var_f0 = M2C_FIELD(arg0, f32 *, 0x18) - lbl_805D9960;
    if (var_f0 < lbl_805D9964) {
        var_f0 = lbl_805D9964;
    }
    M2C_FIELD(arg0, f32 *, 4) = var_f0;
    M2C_FIELD(arg0, f32 *, 8) = var_f0;
    M2C_FIELD(arg0, f32 *, 0xC) = var_f0;
}

}

#include "types.h"

extern "C" {

    extern const float lbl_805D9958;
    extern const float lbl_805D9964;
void TObjPlayer__sub_800A0478(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805D9958; *(float*)((char*)a0 + 0x0) = lbl_805D9964; *(float*)((char*)a0 + 0x4) = lbl_805D9964; *(float*)((char*)a0 + 0x8) = lbl_805D9964; *(float*)((char*)a0 + 0xc) = lbl_805D9964; }

    extern const float lbl_805D9958;
    extern const float lbl_805D995C;
void TObjPlayer__sub_800A0498(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805D995C; *(float*)((char*)a0 + 0x0) = lbl_805D9958; *(float*)((char*)a0 + 0x4) = lbl_805D9958; *(float*)((char*)a0 + 0x8) = lbl_805D9958; *(float*)((char*)a0 + 0xc) = lbl_805D9958; }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_800A04F0 { f32 v0, v4, v8, vc; f32 rate; };

struct Obj_800A04F0 : Base_800A04F0 {
    virtual void m0();
    virtual void m1(s32);
    f32 f18;
};

struct Base_800A0554 { f32 v0, v4, v8, vc; f32 rate; };

struct Obj_800A0554 : Base_800A0554 {
    virtual void m0();
    virtual void m1(s32);
    f32 f18;
};

extern "C" {
extern const f32 lbl_805D995C;
extern const f32 lbl_805D9960;
extern const f32 lbl_805D9968;
void TObjPlayer__sub_800A04F0(Obj_800A04F0 *self);
extern const f32 lbl_805D9958;
extern const f32 lbl_805D996C;
void TObjPlayer__sub_800A0554(Obj_800A0554 *self);
}

extern "C" {

void set_field10_reciprocal__10TObjPlayerFPvi(void *arg0, s32 arg1);

extern const f64 lbl_8043A468;
extern const f32 lbl_805D995C;

void set_field10_reciprocal__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (lbl_805D995C / (f32) arg1);
}
#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800A04F0(Obj_800A04F0 *self) {
    self->m1(10);
    self->f18 = lbl_805D9968 * self->rate + lbl_805D995C;
    self->v0 = lbl_805D9960;
    self->v4 = lbl_805D9960;
    self->v8 = lbl_805D9960;
    self->vc = lbl_805D9960;
}
#pragma pop

void TObjPlayer__sub_800A0554(Obj_800A0554 *self) {
    self->m1(10);
    self->f18 = -(lbl_805D996C * self->rate);
    self->v0 = lbl_805D9958;
    self->v4 = lbl_805D9958;
    self->v8 = lbl_805D9958;
    self->vc = lbl_805D9958;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_800A05B8(void *arg0, s16 arg1);
M2C_UNK TObjPlayer__sub_800D96D0(void *, s16);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_80490470[];

void *TObjPlayer__sub_800A05B8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_80490470;
        TObjPlayer__sub_800D96D0(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"

struct Obj_800A0654 { u8 pad[0x37c]; s32 count; u8 pad2[4]; u16 ids[1]; };

struct Obj_800A06B4 { u8 pad[0x37c]; s32 count; u8 pad2[4]; u16 ids[1]; };

struct Obj_800A0728 { u8 pad[0x374]; s32 mode; s32 timer; s32 count; u8 pad2[4]; u16 ids[1]; };

extern "C" {
void *get_enemy_entity(int);
void apply_fall_damage_flag__10TObjPlayerFi(void *);
void TObjPlayer__sub_800A0654(Obj_800A0654 *self);
void *get_enemy_entity(int);
int TObjPlayer__sub_800A1808(void *p);
s32 TObjPlayer__sub_800A06B4(Obj_800A06B4 *self);
void *get_enemy_entity(int);
void trigger_action_if_not_flagged__10TObjPlayerFPv(void *arg0);
void trigger_targets_action__10TObjPlayerFPv(Obj_800A0728 *self);
}

extern "C" {

void* init_vtable_and_field18__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_800D9718(void);

    extern M2C_UNK lbl_80490470[];
    extern const float lbl_805D9958;
void* init_vtable_and_field18__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_800D9718(); *(int*)((char*)a0 + 0x14) = (int)lbl_80490470; *(float*)((char*)a0 + 0x18) = lbl_805D9958; return a0; }
void TObjPlayer__sub_800A0654(Obj_800A0654 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            apply_fall_damage_flag__10TObjPlayerFi(e);
        }
    }
}
s32 TObjPlayer__sub_800A06B4(Obj_800A06B4 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            if (TObjPlayer__sub_800A1808(e) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
void trigger_targets_action__10TObjPlayerFPv(Obj_800A0728 *self) {
    s32 i;
    self->timer = 0x78;
    self->mode = 6;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            trigger_action_if_not_flagged__10TObjPlayerFPv(e);
        }
    }
}

}
