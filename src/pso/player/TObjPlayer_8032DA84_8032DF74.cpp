#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8032DFF8 { u8 pad[0x1C]; void *o[3]; };

struct VBase_18_95e344 { char pad[0x18]; };

struct VObj_18_95e344 : VBase_18_95e344 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
};

struct VBase_8032E11C { u8 pad[0x18]; };

struct VObj_8032E11C : VBase_8032E11C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
};

extern "C" {
u32 create_particle_emitter(void *, int);
M2C_UNK set_tint_color__13TParticleCtrlFPvi(u32, int);
void TObjPlayer__sub_8032E058(u8 *arg0);
M2C_UNK set_position_xy__10TObjPlayerFPvff(u32, f32, f32);
u32 spawn_particle_effect_with_rotation(void *, void *, int, int);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK set_tint_color__13TParticleCtrlFPvi(u32, int);
extern const f32 lbl_805DF7E8;
void TObjPlayer__sub_8032E0A4(u8 *arg0);
u8 *find_entity_by_id(u16);
void TObjPlayer__sub_8032DF74(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void destroy_effect_objects__10TObjPlayerFPv(O_8032DFF8 *arg0);
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
u32 find_item_by_id(s32);
s8 TObjPlayer__sub_80102C30();
void TObjPlayer__sub_8032DF74(u8 *arg0);
void destroy_effect_objects__10TObjPlayerFPv(O_8032DFF8 *arg0);
void TObjPlayer__sub_8032E11C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8032E054(void);

void TObjPlayer__sub_8032DF74(u8 *arg0) {
  u16 temp_r3;
  u8 *temp_r3_2;
  temp_r3 = *((u16 *) (((s8 *) arg0) + 0x34));
  if (temp_r3 != ((-1U) & 0xFFFFu))
  {
    if (find_entity_by_id(temp_r3) != 0)
    {
      temp_r3_2 = (u8 *) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x28)))) + 0xA4))) + ((*((s32 *) (((s8 *) arg0) + 0x2C))) * 0x2C));
      *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x1C))) - (*((f32 *) (((s8 *) arg0) + 0x44))));
      *((f32 *) (((s8 *) arg0) + 0x68)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x20))) - (*((f32 *) (((s8 *) arg0) + 0x48))));
      *((f32 *) (((s8 *) arg0) + 0x6C)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x24))) - (*((f32 *) (((s8 *) arg0) + 0x4C))));
    }
  }
}

void destroy_effect_objects__10TObjPlayerFPv(O_8032DFF8 *arg0) {
    s32 i;
    for (i = 0; i != 3; i++) {
        if (arg0->o[i] != 0) {
            queue_destruction__7TObjectFv(arg0->o[i]);
            arg0->o[i] = 0;
        }
    }
}

void TObjPlayer__sub_8032E054(void) {  }
#pragma push
#pragma fp_contract on
void TObjPlayer__sub_8032E058(u8 *arg0) {
    M2C_FIELD(arg0, u32 *, 0x24) = create_particle_emitter((void *) (arg0 + 0x64), (int) (0x1B6));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        set_tint_color__13TParticleCtrlFPvi(M2C_FIELD(arg0, u32 *, 0x24), (int) (-0x78));
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_8032E0A4(u8 *arg0) {
    u32 p;
    u32 q;
    M2C_FIELD(arg0, u32 *, 0x1C) = spawn_particle_effect_with_rotation((void *) (arg0 + 0x64), (void *) (arg0 + 0x54), (int) (0x1B9), (int) (0x104));
    p = M2C_FIELD(arg0, u32 *, 0x1C);
    if (p != 0U) {
        set_position_xy__10TObjPlayerFPvff(p, (f32) (lbl_805DF7E8), (f32) (lbl_805DF7E8));
        q = M2C_FIELD(arg0, u32 *, 0x50);
        if (q != 0U) {
            set_tint_color__13TParticleCtrlFPvi((u32)(M2C_FIELD(arg0, u32 *, 0x1C)), (int)(q));
        }
    }
    spawn_particle_effect((void *) (arg0 + 0x64), (int) (0x30));
}
#pragma pop

void TObjPlayer__sub_8032E11C(u8 *arg0) {
    s32 i;
    if (find_item_by_id(M2C_FIELD(arg0, s32 *, 0x60)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (TObjPlayer__sub_80102C30() != 2) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    TObjPlayer__sub_8032DF74(arg0);
    for (i = 0; i != 3; i++) {
        if (((O_8032DFF8 *)arg0)->o[i] != NULL) {
            copy_pos__11TNowLoadingFPvPv(((O_8032DFF8 *)arg0)->o[i], arg0 + 0x64);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        ((VObj_8032E11C *)arg0)->m4();
    } else if (M2C_FIELD(arg0, s32 *, 0x30) == 6) {
        destroy_effect_objects__10TObjPlayerFPv((O_8032DFF8 *)arg0);
        ((VObj_8032E11C *)arg0)->m5();
    } else if (M2C_FIELD(arg0, s32 *, 0x30) == 12) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    ((VObj_8032E11C *)arg0)->m6();
    M2C_FIELD(arg0, s32 *, 0x30)++;
}

}
