#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_f9c8ca
{
  char pad[0x18];
};

struct VObj_18_f9c8ca : VBase_18_f9c8ca {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase_14_c143b1 { char pad[0x14]; };

struct VObj_14_c143b1 : VBase_14_c143b1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    virtual s32 m5();
};

struct Vec_800ECA40 { f32 x, y, z; };

struct LBase_800ECA40 { char pad[0x14]; };

struct Light_800ECA40 : LBase_800ECA40 {
    virtual void l0();
    virtual void l1();
    virtual void l2();
    virtual void l3();
    virtual void l4();
    virtual void l5();
    virtual void l6();
    virtual void l7();
};

struct Ent_800ECA40 { s32 a; s32 b; s32 c; };

struct Model_800ECA40 {
    Ent_800ECA40 ents[3];
    u8 pad24[0x2C - 0x24];
    s32 x2C;
};

struct VBase_800ECA40 { char pad[0x18]; };

struct Bit_800ECA40 : VBase_800ECA40 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    u8 pad1C[0x24 - 0x1C];
    Model_800ECA40 **x24;
    u8 pad28[0x34 - 0x28];
    void *x34;
    Vec_800ECA40 pos;
    u8 pad44[0x60 - 0x44];
    s32 x60;
    u8 pad64[0x300 - 0x64];
    f32 x300;
    u8 pad304[0x3CC - 0x304];
    s32 flags;
    s32 idx;
    u8 pad3D4[0x3DC - 0x3D4];
    Light_800ECA40 light;
};

extern "C" {
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK set_state_flags__18TObjEneRe4SorcererFPv(void *);
M2C_UNK set_hold_flags__18TObjEneRe4SorcererFPv(void *);
M2C_UNK TObjEneRe4Sorcerer__sub_800ED47C();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, int, int);
extern const f32 TObjEneRe4Bit__data_805DA770;
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
s32 TBoss8Dragon__sub_800BB780(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ED150(u8 *arg0);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneRe4Bit__sub_800ED4BC(void *);
void update_position_flag__13TObjEneRe4BitFPv(void *);
extern const f32 lbl_805DA76C;
extern const f32 lbl_805DA778;
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1);
s32 handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1);
void TObjEneRe4Bit__vt85(s32 arg0, u32 arg1, s32 arg2);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneRe4Bit__sub_800ED4BC(void *);
void update_position_flag__13TObjEneRe4BitFPv(void *);
extern const f32 TObjEneRe4Bit__data_805DA770;
extern const f32 lbl_805DA778;
void TObjEneRe4Bit__sub_800ECE04(u8 *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void TObjEneRe4Bit__sub_800ED090(void *self, s32 msg);
int render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
int clear_global_flag_400__9TObjEneDDFv();
f32 update_primary_light__9TObjEneDDFPv(void *);
int update_secondary_light__9TObjEneDDFPv(void *);
int toggle_particle_effect__10TObjPlayerFv();
int end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
int TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
int TObjPlayer__sub_803D9214(int, int);
int TObjPlayer__sub_803D9624(int, f32, f32, f32);
int TObjPlayer__sub_803D9B2C();
int TObjPlayer__sub_803D9B78();
int TOHangerMachine01__sub_803D9C00(void *);
int set_global_param__8TObjFishFi(void *);
int TObjFish__sub_803E46BC(void *);
extern Vec_800ECA40 lbl_8043D2E0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805DA768;
extern const f32 lbl_805DA76C;
extern const f32 TObjEneRe4Bit__data_805DA770;
extern const f32 lbl_805DA774;
void render__13TObjEneRe4BitFv(Bit_800ECA40 *self);
}

extern "C" {

void reset_transform__13TObjEneRe4BitFPv(void *arg0);
void TObjEneDD__sub_800BA934(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
void update_position_flag__13TObjEneRe4BitFPv(void *);

void render__13TObjEneRe4BitFv(Bit_800ECA40 *self) {
    f32 range;
    s32 saved;
    s32 draw;
    Model_800ECA40 *m;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        self->m104();
        return;
    }
    if (is_main_phase_15__9TObjEneDDFv() != 0) {
        range = lbl_805D9E84;
    } else {
        range = lbl_805DA768;
    }
    if (!(self->flags & 0x100)) {
        return;
    }
    if (self->m8(range, lbl_805DA76C) == 0) {
        return;
    }
    if (self->flags & 0x800) {
        Vec_800ECA40 v = lbl_8043D2E0;
        render_with_position_override__10TObjPlayerFPvPvi(self, &v, 0);
    }
    update_secondary_light__9TObjEneDDFPv(self);
    m = *self->x24;
    saved = m->x2C;
    m->x2C = m->ents[self->idx].c;
    set_global_param__8TObjFishFi(self->x24);
    lbl_805D5660 = some_id_805c6f74;
    clear_global_flag_400__9TObjEneDDFv();
    toggle_particle_effect__10TObjPlayerFv();
    draw = 1;
    if (self->flags & 0x200) {
        self->light.l6();
        if (toggle_flag_9__10TObjPlayerFPv(self) != 0) {
            draw = 0;
        }
    }
    if (draw != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(&self->pos);
        TObjPlayer__sub_803D9624(0, TObjEneRe4Bit__data_805DA770, self->x300 - self->pos.y, TObjEneRe4Bit__data_805DA770);
        TObjPlayer__sub_803D9214(0, self->x60);
        TOMonitorMachine01__sub_803D8B5C(0, lbl_805DA774, lbl_805DA774, lbl_805DA774);
        TObjFish__sub_803E46BC(self->x34);
        TObjPlayer__sub_803D9B78();
    }
    self->light.l7();
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    update_primary_light__9TObjEneDDFPv(self);
    (*self->x24)->x2C = saved;
}

#pragma push
#pragma fp_contract on
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        set_hold_flags__18TObjEneRe4SorcererFPv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x400);
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A815)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3CC) & 8) {
            TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD16)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (M2C_UNK)((int) (1)));
        }
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x408) = (s32) (M2C_FIELD(arg0, s32 *, 0x408) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x408) >= 0x384) {
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
            if (!(temp_r4 & 0x10)) {
                M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFBFF);
                set_state_flags__18TObjEneRe4SorcererFPv((void *) (arg0));
                return;
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
        TObjEneRe4Sorcerer__sub_800ED47C();
        M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) TObjEneRe4Bit__data_805DA770;
        break;
    }
}
#pragma pop

typedef struct VBase_18_f9c8ca VBase_18_f9c8ca;
typedef struct VObj_18_f9c8ca VObj_18_f9c8ca;
#define PSO_VCALL_VObj_18_f9c8ca_m100(_self) (((VObj_18_f9c8ca *)(_self))->m100())
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s32 *) (((s8 *) arg0) + 0x408)) = 0;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x408)))) > 0xF)
    {
      TObjEneDD__sub_800BBA18((void *)((void *) arg0), (M2C_UNK)((int) 1));
    }
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x408)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x408))) + 1);
      VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x2FC)), (void *)((int) (*((s32 *) (((s8 *) arg0) + 0x3C0)))));
      *((f32 *) (((s8 *) arg0) + 0x300)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x300))) + (*((f32 *) (((s8 *) arg0) + 0x3D8))));
      *((f32 *) (((s8 *) arg0) + 0x2FC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x2FC))) + calc_elapsed_scaled__9TObjEneDDFv((void *) arg0));
      *((f32 *) (((s8 *) arg0) + 0x304)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x304))) + calc_elapsed_scaled__9TObjEneDDFv((void *) arg0));
      PSO_VCALL_VObj_18_f9c8ca_m100(arg0);
      return;
    case 5:
      TBoss8Dragon__sub_800BB780((void *) arg0);
      return;
      break;
  }
}

#pragma push
#pragma opt_common_subs off
void TObjEneRe4Bit__sub_800ECE04(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFEFFF);
        M2C_FIELD(arg0, s32 *, 0x3D0) = 3;
        break;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x3D8) <= TObjEneRe4Bit__data_805DA770) {
            TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(1));
            break;
        }
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3D8) - lbl_805DA778);
        if (M2C_FIELD(arg0, f32 *, 0x3D8) < TObjEneRe4Bit__data_805DA770) {
            M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) TObjEneRe4Bit__data_805DA770;
        }
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - 0x1800);
        TObjEneRe4Bit__sub_800ED4BC(arg0);
        update_position_flag__13TObjEneRe4BitFPv(arg0);
        break;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x1000);
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        M2C_FIELD(arg0, s32 *, 0x404) = 1;
        M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) M2C_FIELD(arg0, s32 *, 0x3D4);
        return;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        return;
    case 0:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x408);
        switch (temp_r0) {
        case 1:
            break;
        case 0:
            M2C_FIELD(arg0, f32 *, 0x3D8) = M2C_FIELD(arg0, f32 *, 0x3D8) + lbl_805DA778;
            if (M2C_FIELD(arg0, f32 *, 0x3D8) > lbl_805DA76C) {
                M2C_FIELD(arg0, f32 *, 0x3D8) = lbl_805DA76C;
                M2C_FIELD(arg0, s32 *, 0x408) = 1;
                M2C_FIELD(arg0, s32 *, 0x404) = 2;
            }
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x1800);
            break;
        }
        TObjEneRe4Bit__sub_800ED4BC((void *)(arg0));
        update_position_flag__13TObjEneRe4BitFPv(arg0);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        break;
    }
}
#pragma pop

s32 handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFEFFF);
        break;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        if (temp_r4 & 1) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFE);
            TObjEneDD__sub_800BBA18(arg0, 2);
            break;
        }
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        TObjEneRe4Bit__sub_800ED4BC((void *)(arg0));
        update_position_flag__13TObjEneRe4BitFPv((void *)(arg0));
        break;
    }
}

extern const f32 TObjEneRe4Bit__data_805DA770;

void TObjEneRe4Bit__sub_800ED090(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        TObjEneDD__sub_800BBA18((void *)(self), (M2C_UNK)(1));
        return;
    }
}

void TObjEneRe4Bit__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneRe4Bit__sub_800ED090((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 1:
        handle_event__13TObjEneRe4BitFPvi((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 2:
        TObjEneRe4Bit__sub_800ECED0((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 3:
        TObjEneRe4Bit__sub_800ECE04((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 5:
        TObjEneRe4Bit__sub_800ECD28((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 6:
        TObjEneRe4Bit__sub_800ECC14((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
    default:
        return;
    }
}

void TObjEneRe4Bit__sub_800ED150(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC);
    if (temp_r3 & 4) {
        if (((VObj_14_c143b1 *)((u8 *)(arg0) + (988)))->m4() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFB);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFDFF);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFEFF);
        }
    } else if ((temp_r3 & 8) && (((VObj_14_c143b1 *)((u8 *)(arg0) + (988)))->m5() != 0)) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFDFF);
    }
}

void reset_transform__13TObjEneRe4BitFPv(void *arg0) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 764), M2C_FIELD(arg0, void **, 0x3C0));
    M2C_FIELD(arg0, f32 *, 0x3F8) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x3FC) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x400) = TObjEneRe4Bit__data_805DA770;
    update_position_flag__13TObjEneRe4BitFPv((void *)(arg0));
    TObjEneDD__sub_800BA934(arg0);
}

}
