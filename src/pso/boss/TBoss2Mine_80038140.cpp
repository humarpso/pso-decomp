#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8003843C_80038140 { char pad[0x18]; };
struct VObj_8003843C_80038140 : Base_8003843C_80038140 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)
    V(90)V(91)V(92)V(93)
#undef V
    virtual void m94();
};

struct VBase_18_444bc5
{
  char pad[0x18];
};

struct VObj_18_444bc5 : VBase_18_444bc5 {
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
    virtual M2C_UNK m94();
};

struct M2CCopy_10
{
  u8 bytes[0x10];
};

struct M2CCopy_14
{
  u8 bytes[0x14];
};

struct RecoveredGlobal_800384C8_lbl_80435AB0
{
  M2C_UNK value;
  u8 remaining[0x10];
};

struct Vec_80038200 { f32 x, y, z; };

struct Col_80038200 { s32 a; f32 r, g, b; };

struct Base_80038200 { char pad[0x18]; };

struct Mine_80038200 : Base_80038200 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)
#undef V
    virtual s32 m8(f32, f32);
#define V(n) virtual void m##n();
    V(9)V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)
    V(90)V(91)V(92)V(93)V(94)V(95)V(96)V(97)V(98)V(99)
    V(100)V(101)V(102)V(103)V(104)V(105)V(106)V(107)
#undef V
    virtual void m108();
    u8 pad1C[0x24 - 0x1C];
    void *f24;
    u8 pad28[0x34 - 0x28];
    void *model;
    Vec_80038200 pos;
    u8 pad44[0x5C - 0x44];
    s32 f5C;
    s32 f60;
    s32 f64;
    u8 pad68[0x300 - 0x68];
    f32 f300;
    u8 pad304[0x326 - 0x304];
    s16 f326;
    u8 pad328[0x38C - 0x328];
    u32 flags;
    u8 pad390[0x3AC - 0x390];
    f32 f3AC;
    u32 f3B0;
};

extern "C" {
f32 TBoss2DeRolLe__sub_80034CEC(void);
s32 create_timed_particle_emitter(s32, s32, s32, s32);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
void TObjEneDD__sub_800BA5A4(s32, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_800384C8_lbl_80435AB0 lbl_80435AB0;
void TBoss2Mine__vt105(u8 *arg0, s32 arg1);
void render_with_position_override__10TObjPlayerFPvPvi(void *, void *, s32);
void TBoss2Mine__sub_80038908(void *);
s32 check_demo_mode__10TObjPlayerFv(void);
void clear_global_flag_400__9TObjEneDDFv(void);
void toggle_particle_effect__10TObjPlayerFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void scale_matrix(s32, f32, f32, f32);
void rotate_matrix_y(s32, s32);
void translate_matrix(s32, f32, f32, f32);
void rotate_matrix_x(s32, s32);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(void *);
void set_chunk_material_color(void *);
void draw_chunk_object(void *);
extern Vec_80038200 lbl_80435AD0;
extern Col_80038200 lbl_80435ADC;
extern void *lbl_805D28BC;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TBoss2Mine__data_805D84D4;
extern const f32 TBoss2Mine__data_805D84D8;
extern const f32 lbl_805D84E4;
extern const f32 lbl_805D8500;
extern const f32 lbl_805D8504;
extern const f32 lbl_805D8508;
extern const f32 lbl_805D850C;
void render__10TBoss2MineFv(Mine_80038200 *self);
}

extern "C" {

void TBoss2Mine__sub_80038140(void *arg0);
void *TBoss2Mine__sub_800381B8(void *arg0, s32 arg1, s16 arg2, s16 arg3);
void TBoss2Mine__vt103(void);
void TBoss2Mine__vt104(void);
void TBoss2Mine__vt106(void *arg0, s32 arg1);
void TBoss2Mine__vt107(void);
void TBoss2Mine__vt108(void);
void *deleting_dtor__10TBoss2MineFPvs(void *arg0, s16 arg1);
void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__10TBoss2MineFv(void *, int);

extern f32 lbl_805D84FC;

void TBoss2Mine__sub_80038140(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (lbl_805D84FC + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

extern M2C_UNK lbl_80482EC0[];

void *deleting_dtor__10TBoss2MineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482EC0;
        __dt__10TBoss2MineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80482EC0[];

void *TBoss2Mine__sub_800381B8(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    TBoss2Mine__ct(arg0, arg1, arg2, arg3, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482EC0;
    return arg0;
}

void TBoss2Mine__vt108(void) {  }
void TBoss2Mine__vt107(void) {  }

void render__10TBoss2MineFv(Mine_80038200 *self) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        self->m108();
        return;
    }
    if (self->flags & 1) {
        return;
    }
    if (self->m8(lbl_805D8500, lbl_805D84E4) == 0) {
        return;
    }
    if (self->flags & 2) {
        Vec_80038200 v = lbl_80435AD0;
        render_with_position_override__10TObjPlayerFPvPvi(self, &v, 0);
    }
    set_global_param__8TObjFishFi(self->f24);
    lbl_805D5660 = some_id_805c6f74;
    clear_global_flag_400__9TObjEneDDFv();
    toggle_particle_effect__10TObjPlayerFv();
    TBoss2Mine__sub_80038908(self);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(&self->pos);
    translate_matrix(0, TBoss2Mine__data_805D84D4, self->f300 - self->pos.y, TBoss2Mine__data_805D84D4);
    rotate_matrix_y(0, self->f60);
    rotate_matrix_x(0, self->f5C);
    rotate_matrix_y(0, self->f64);
    translate_matrix(0, TBoss2Mine__data_805D84D4, lbl_805D8504, TBoss2Mine__data_805D84D4);
    if (self->flags & 4) {
        some_id_805c6f74 |= 0x20;
        Col_80038200 c = lbl_80435ADC;
        f32 f = -(f32)(self->f3B0 >> 16) / lbl_805D8508;
        c.b = f;
        c.g = f;
        c.r = -f;
        set_chunk_material_color(&c);
        draw_chunk_object(self->model);
    } else {
        draw_chunk_object(self->model);
    }
    pop_matrix();
    if (self->f326 == 3) {
        TObjPlayer__sub_803D9B2C();
        f32 s = lbl_805D850C * self->f3AC;
        TOHangerMachine01__sub_803D9C00(&self->pos);
        scale_matrix(0, s, TBoss2Mine__data_805D84D8, s);
        draw_chunk_object(lbl_805D28BC);
        pop_matrix();
    }
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
}

void TBoss2Mine__vt106(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_8003843C_80038140 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFF8);
        return;
    case 3:
        transition_enemy_state(arg0, 0);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    case 0:
        return;
    }
}

typedef struct CopyStack_800384C8 CopyStack_800384C8;
typedef struct M2CCopy_10 M2CCopy_10;
typedef struct M2CCopy_14 M2CCopy_14;
typedef struct RecoveredGlobal_800384C8_lbl_80435AB0 RecoveredGlobal_800384C8_lbl_80435AB0;
typedef struct VBase_18_444bc5 VBase_18_444bc5;
typedef struct VObj_18_444bc5 VObj_18_444bc5;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
typedef char RecoveredGlobal_800384C8_lbl_80435AB0_size[((sizeof(RecoveredGlobal_800384C8_lbl_80435AB0)) == 0x14) ? (1) : (-1)];
#define PSO_VCALL_VObj_18_444bc5_m94(_self) (((VObj_18_444bc5 *)(_self))->m94())
void TBoss2Mine__vt105(u8 *arg0, s32 arg1) {
  struct CopyStack_800384C8
  {
    u8 bytes[0x14];
  };
  u8 *temp_r4;
  CopyStack_800384C8 copy_storage_800384C8;
  switch (arg1)
  {
    case 4:
      PSO_VCALL_VObj_18_444bc5_m94(arg0);
      *((s32 *) (((s8 *) arg0) + 0x38C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x38C))) & 0xFFFFFFF8);
      *((s32 *) (((s8 *) arg0) + 0x3B0)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x3C8)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x3CC)) = 0;
      create_timed_particle_emitter((*((s32 *) (((s8 *) arg0) + 0xA4))) + 0x1C, 0x16A, 0, 6);
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3CC)))) == 2)
    {
      transition_enemy_state((void *)(arg0), (M2C_UNK)(0));
    }
    case 5:
      return;
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x3C8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x3C8))) + 1);
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3C8)))) > 0x1E)
    {
      temp_r4 = ((u8 *) (&lbl_80435AB0.value)) - 4;
      *((M2CCopy_14 *) (((s32) (copy_storage_800384C8.bytes - 0x4)) + 4)) = *((const M2CCopy_14 *) (((s32) temp_r4) + 4));
      *((f32 *) (copy_storage_800384C8.bytes + 0x4)) = TBoss2DeRolLe__sub_80034CEC();
      TObjEneDD__sub_800BA5A4((s32) arg0, (s32) copy_storage_800384C8.bytes);
      spawn_particle_effect_with_flags((*((s32 *) (((s8 *) arg0) + 0xA4))) + 0x1C, 0x16B, 0x40);
      *((s32 *) (((s8 *) arg0) + 0x3CC)) = 2;
      play_sound_effect(0x4003AD05, (u32) (arg0 + 0x2FC), 0, 0);
    }
      break;
  }
}

void TBoss2Mine__vt104(void) {  }
void TBoss2Mine__vt103(void) {  }

}
