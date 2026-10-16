#include "types.h"
#include "pso/enemy/TUnk_80494938.h"

struct O_800D72A4 { u8 pad[0x18]; f32 f18; };

extern "C" {
extern const float lbl_805DA348;
s32 TObjEneMe3SinowZoa__sub_800D72D0(u8 *arg0);
s32 advance_timer__18TObjEneMe3SinowZoaFPvf(u8 *arg0, f32 farg0);
extern const f32 lbl_805DA34C;
s32 advance_progress_check_done__18TObjEneMe3SinowZoaFPv(u8 *arg0);
extern const float lbl_805DA348;
s32 update_timer_check_done__18TObjEneMe3SinowZoaFPv(u8 *arg0);
extern const float lbl_805DA348;
extern const f32 lbl_805DA34C;
extern const float lbl_805DA350;
extern const f32 lbl_805DA354;
extern const f32 lbl_805DA358;
void sub_800D741C__13TUnk_80494938Fv(u8 *arg0);
extern const float lbl_805DA348;
extern const f32 lbl_805DA34C;
s32 TObjEneMe3SinowZoa__sub_800D72A4(O_800D72A4 *self);
}

extern "C" {

void TObjEneMe3SinowZoa__sub_800D74A4(void* a0);
void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void);
void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q);
int set_chunk_blend(int);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);

s32 TObjEneMe3SinowZoa__sub_800D72A4(O_800D72A4 *self) {
    return self->f18 > (*(const f32 *)&lbl_805DA348) && self->f18 < lbl_805DA34C;
}

s32 TObjEneMe3SinowZoa__sub_800D72D0(u8 *arg0) {
    return *(f32 *)((s8 *)arg0 + 0x18) > (*(const f32 *)&lbl_805DA348);
}

void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); set_chunk_blend(8448); }

s32 advance_timer__18TObjEneMe3SinowZoaFPvf(u8 *arg0, f32 farg0) {
    *(f32 *)((s8 *)arg0 + 0x18) = (f32) (*(f32 *)((s8 *)arg0 + 0x18) + *(f32 *)((s8 *)arg0 + 0x10));
    sub_800D741C__13TUnk_80494938Fv((u8 *)(arg0));
    return *(f32 *)((s8 *)arg0 + 0x18) >= farg0;
}

s32 advance_progress_check_done__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x18);
    *(f32 *)((s8 *)arg0 + 0x18) = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0x10));
    sub_800D741C__13TUnk_80494938Fv((u8 *)(arg0));
    return *(f32 *)((s8 *)arg0 + 0x18) >= lbl_805DA34C;
}

s32 update_timer_check_done__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x18);
    *(f32 *)((s8 *)arg0 + 0x18) = (f32) (temp_f1 - *(f32 *)((s8 *)arg0 + 0x10));
    sub_800D741C__13TUnk_80494938Fv((u8 *)(arg0));
    return *(f32 *)((s8 *)arg0 + 0x18) <= (*(const f32 *)&lbl_805DA348);
}

void TUnk_80494938::sub_800D741C() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f2;
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x18);
    if (temp_f2 <= (*(const f32 *)&lbl_805DA348)) {
        *(f32 *)((s8 *)arg0 + 0) = (f32) (*(const f32 *)&lbl_805DA350);
        return;
    }
    if (temp_f2 < lbl_805DA34C) {
        *(f32 *)((s8 *)arg0 + 0) = (f32) (temp_f2 - lbl_805DA354);
        if ((*(const f32 *)&lbl_805DA348) == *(f32 *)((s8 *)arg0 + 0)) {
            *(f32 *)((s8 *)arg0 + 0) = (f32) lbl_805DA358;
        }
        return;
    }
    *(f32 *)((s8 *)arg0 + 0) = (f32) lbl_805DA354;
}

void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

    extern const float lbl_805DA348;
    extern const float lbl_805DA350;
void TObjEneMe3SinowZoa__sub_800D74A4(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805DA348; *(float*)((char*)a0 + 0x0) = lbl_805DA350; *(float*)((char*)a0 + 0x4) = lbl_805DA348; *(float*)((char*)a0 + 0x8) = lbl_805DA348; *(float*)((char*)a0 + 0xc) = lbl_805DA348; }

}

#include "types.h"

extern "C" {

void TObjEneMe3SinowZoa__sub_800D74C4(void* a0);
void set_field_10__18TObjEneMe3SinowZoaFPvf(void* p, f32 v);

    extern const float lbl_805DA348;
    extern const float lbl_805DA34C;
void TObjEneMe3SinowZoa__sub_800D74C4(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805DA34C; *(float*)((char*)a0 + 0x0) = lbl_805DA348; *(float*)((char*)a0 + 0x4) = lbl_805DA348; *(float*)((char*)a0 + 0x8) = lbl_805DA348; *(float*)((char*)a0 + 0xc) = lbl_805DA348; }

void set_field_10__18TObjEneMe3SinowZoaFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }

}

#include "types.h"

struct B_800D758C { f32 f0; f32 f4; f32 f8; f32 fc; f32 f10; };

struct V_800D758C : B_800D758C {
    virtual void m0();
    virtual void m1(s32 x);
    f32 f18;
};

struct B_800D7524 { f32 f0; f32 f4; f32 f8; f32 fc; f32 f10; };

struct V_800D7524 : B_800D7524 {
    virtual void m0();
    virtual void m1(s32 x);
    f32 f18;
};

extern "C" {
extern const f32 lbl_805DA360;
extern const f32 lbl_805DA350;
extern const f32 lbl_805DA348;
void TObjEneMe3SinowZoa__sub_800D758C(V_800D758C *self);
extern const f32 lbl_805DA35C;
extern const f32 lbl_805DA34C;
extern const f32 lbl_805DA354;
extern const f32 lbl_805DA348;
void init_death_params__18TObjEneMe3SinowZoaFPv(V_800D7524 *self);
}

extern "C" {

void set_speed_scale__18TObjEneMe3SinowZoaFPvi(void *arg0, s32 arg1);

extern const f64 lbl_8043C6F8;
extern const f32 lbl_805DA34C;

void set_speed_scale__18TObjEneMe3SinowZoaFPvi(void *arg0, s32 arg1) {
    *(f32 *)((s8 *)arg0 + 0x10) = (f32) (lbl_805DA34C / (f32) arg1);
}

#pragma push
#pragma fp_contract on
void init_death_params__18TObjEneMe3SinowZoaFPv(V_800D7524 *self) {
    self->m1(10);
    self->f18 = lbl_805DA35C * self->f10 + lbl_805DA34C;
    self->f0 = lbl_805DA354;
    self->f4 = lbl_805DA348;
    self->f8 = lbl_805DA348;
    self->fc = lbl_805DA348;
}
#pragma pop

void TObjEneMe3SinowZoa__sub_800D758C(V_800D758C *self) {
    self->m1(10);
    self->f18 = -(lbl_805DA360 * self->f10);
    self->f0 = lbl_805DA350;
    self->f4 = lbl_805DA348;
    self->f8 = lbl_805DA348;
    self->fc = lbl_805DA348;
}

}

#include "types.h"

extern "C" {

void *__dt__18TObjEneMe3SinowZoaFPvs(void *arg0, s16 arg1);
s32 TObjPlayer__sub_800D96D0(void *, s16);
s32 __dl__FPv(void *);

extern s32 lbl_80494938[];

void *__dt__18TObjEneMe3SinowZoaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x14) = lbl_80494938;
        TObjPlayer__sub_800D96D0(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"

extern "C" {

int TObjPlayer__sub_800D9718(void);

    extern const float lbl_805DA348;
void*TObjEneMe3SinowZoa::init_common() { TObjPlayer__sub_800D9718(); *(int*)((char*)this + 0x14) = (int)lbl_80494938; *(float*)((char*)this + 0x18) = lbl_805DA348; return this; }

}
