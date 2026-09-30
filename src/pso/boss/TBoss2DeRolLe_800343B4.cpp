#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Vec_800344A4 {
    f32 x, y, z;
} Vec_800344A4;

typedef struct DeRolLe_800344A4 {
    u8 pad0[0x3D8];
    u8 unk3D8[0x540 - 0x3D8];
    Vec_800344A4 pts[8];
    u8 pad5A0[0x5E0 - 0x5A0];
    void *joints[8];
    u8 pad600[0x654 - 0x600];
    s32 mode;
} DeRolLe_800344A4;

extern "C" {
s32 TBoss2DeRolLe__sub_80035FCC(void *);
extern const f32 TBoss2DeRolLe__data_805D8280;
extern const f32 TBoss2DeRolLe__data_805D8328;
extern const f32 TBoss2DeRolLe__data_805D8334;
extern const f32 lbl_805D8438;
extern const f32 lbl_805D843C;
u8 TBoss2DeRolLe__sub_80034800(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 TBoss2DeRolLe__data_805D82DC;
void TBoss2DeRolLe__sub_8003443C(u8 *arg0);
s32 TBoss2DeRolLe__sub_80035FCC(void *);
extern const f32 TBoss2DeRolLe__data_805D8328;
extern const f32 TBoss2DeRolLe__data_805D8334;
extern const f32 lbl_805D8440;
u8 TBoss2DeRolLe__sub_80034960(u8 *arg0);
void call_36A90_with_1__11TBoss2JointFPv(void *);
void *__ct__15TBoss2PhotonPadFv(void *, void *, Vec_800344A4 *, Vec_800344A4 *, s32);
void TBoss3Volopt__sub_8022675C(s32, Vec_800344A4 *, s32, s32);
void *__nw__7TObjectFUl(u32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 TBoss2DeRolLe__data_805D827C;
extern const f32 TBoss2DeRolLe__data_805D832C;
void TBoss2DeRolLe__sub_800344A4(DeRolLe_800344A4 *self, s32 idx, s32 arg2);
}

extern "C" {

void activate_laser_light__13TBoss2DeRolLeFPv(void *arg0);
void free_laser__13TBoss2DeRolLeFPv(void *arg0);
void init_move_params__13TBoss2DeRolLeFPv(u8 *arg0);
void init_movement__13TBoss2DeRolLeFPv(u8 *arg0);
void init_wave_params__13TBoss2DeRolLeFPv(u8 *arg0);
u8 update_state__13TBoss2DeRolLeFPv(u8 *arg0);
s32 TBoss2DeRolLe__sub_80035FCC(void *);
M2C_UNK TBoss2LaserLight__sub_80037474(void *);
M2C_UNK TBoss2LaserLight__sub_80037480(void *);
f32 get_random_float__8TObjFishFv(f32);
M2C_UNK init_params__13TBoss2DeRolLeFPvfff(void *, f32, f32, f32);
M2C_UNK set_move_params__13TBoss2DeRolLeFPvffff(void *, f32, f32, f32, f32);

void free_laser__13TBoss2DeRolLeFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6B8) != 0U) {
        TBoss2LaserLight__sub_80037474(M2C_FIELD(arg0, void **, 0x6B8));
    }
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFEF);
}

void activate_laser_light__13TBoss2DeRolLeFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6B8) != 0U) {
        TBoss2LaserLight__sub_80037480(M2C_FIELD(arg0, void **, 0x6B8));
    }
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 0x10);
}

extern const f32 TBoss2DeRolLe__data_805D82D8;
extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8358;
extern const f32 TBoss2DeRolLe__data_805D83DC;

#pragma push
#pragma fp_contract on
void TBoss2DeRolLe__sub_8003443C(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x6BC, arg0 + 0x4E8);
    M2C_FIELD(arg0, f32 *, 0x6BC) = (f32) ((TBoss2DeRolLe__data_805D82DC * M2C_FIELD(arg0, f32 *, 0x4F4)) + M2C_FIELD(arg0, f32 *, 0x6BC));
    M2C_FIELD(arg0, f32 *, 0x6C0) = (f32) ((TBoss2DeRolLe__data_805D82DC * M2C_FIELD(arg0, f32 *, 0x4F8)) + M2C_FIELD(arg0, f32 *, 0x6C0));
    M2C_FIELD(arg0, f32 *, 0x6C4) = (f32) ((TBoss2DeRolLe__data_805D82DC * M2C_FIELD(arg0, f32 *, 0x4FC)) + M2C_FIELD(arg0, f32 *, 0x6C4));
}
#pragma pop

void TBoss2DeRolLe__sub_800344A4(DeRolLe_800344A4 *self, s32 idx, s32 arg2) {
    Vec_800344A4 v;
    s32 ang;
    void *p;
    ang = 0x3800 - idx * 0x33;
    v.x = TBoss8Dragon__sub_803D64C0(ang);
    v.y = TBoss2DeRolLe__data_805D827C;
    v.z = TBoss8Dragon__sub_803D64DC(ang);
    if (self->mode == 2) {
        v.x *= TBoss2DeRolLe__data_805D832C;
    }
    p = __nw__7TObjectFUl(0x38);
    if (p != NULL) {
        __ct__15TBoss2PhotonPadFv(p, self->unk3D8, &self->pts[idx], &v, arg2);
    }
    TBoss3Volopt__sub_8022675C(0x4003B708, &self->pts[idx], 0, 1);
    call_36A90_with_1__11TBoss2JointFPv(self->joints[idx]);
}

void init_wave_params__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x660) = 1;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D83DC - M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x684, TBoss2DeRolLe__data_805D82D8, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D8358 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8330);
}

extern const f32 TBoss2DeRolLe__data_805D8280;
extern const f32 TBoss2DeRolLe__data_805D82B4;
extern const f32 TBoss2DeRolLe__data_805D8328;

u8 update_state__13TBoss2DeRolLeFPv(u8 *arg0) {
    s32 temp_r0;

    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x684);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x65C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) TBoss2DeRolLe__data_805D8280;
        if (M2C_FIELD(arg0, f32 *, 0x69C) > TBoss2DeRolLe__data_805D82B4) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 1;
        }
        break;
    case 1:
        if (TBoss2DeRolLe__sub_80035FCC(arg0 + 0x664) == 3) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 2;
        }
        break;
    }
    if (M2C_FIELD(arg0, f32 *, 0x69C) > TBoss2DeRolLe__data_805D82B4) {
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) TBoss2DeRolLe__data_805D8328;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x65C) == 2);
}

extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8300;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8348;
extern const f32 TBoss2DeRolLe__data_805D83AC;
extern const f32 lbl_805D8434;

void init_move_params__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(-M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    set_move_params__13TBoss2DeRolLeFPvffff(arg0 + 0x684, TBoss2DeRolLe__data_805D8348, get_random_float__8TObjFishFv(lbl_805D8434 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8300, TBoss2DeRolLe__data_805D83AC);
}

extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8300;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8348;
extern const f32 TBoss2DeRolLe__data_805D8358;
extern const f32 TBoss2DeRolLe__data_805D83AC;
extern const f32 TBoss2DeRolLe__data_805D83DC;

u8 TBoss2DeRolLe__sub_80034800(u8 *arg0) {
  const f32 *new_var;
  s32 temp_r0;
  TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x664));
  temp_r0 = *((s32 *) (((s8 *) arg0) + 0x660));
  switch (temp_r0)
  {
    case 0:
      if ((*((f32 *) (((s8 *) arg0) + 0x67C))) > lbl_805D8438)
    {
      *((s32 *) (((s8 *) arg0) + 0x660)) = 2;
    }
      break;
    case 2:
      *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) TBoss2DeRolLe__data_805D8280;
      *((s32 *) (((s8 *) arg0) + 0x660)) = 3;
      break;
    case 3:
      if (TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x684)) == 3)
    {
      *((s32 *) (((s8 *) arg0) + 0x660)) = 4;
    }
      if ((*((f32 *) (((s8 *) arg0) + 0x69C))) > lbl_805D843C)
    {
      *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC8))) + TBoss2DeRolLe__data_805D8334);
      if ((*((f32 *) (((s8 *) arg0) + 0xC8))) > (*(new_var = &TBoss2DeRolLe__data_805D8328)))
      {
        *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) (*new_var);
      }
    }
      break;
  }
  return (u8) ((*((s32 *) (((s8 *) arg0) + 0x660))) == 4);
}

void init_movement__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x660) = 0;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D83DC - M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    set_move_params__13TBoss2DeRolLeFPvffff(arg0 + 0x684, TBoss2DeRolLe__data_805D8348, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D8358 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8300, TBoss2DeRolLe__data_805D83AC);
}
#pragma push
#pragma opt_common_subs off
u8 TBoss2DeRolLe__sub_80034960(u8 *arg0) {
    s32 temp_r0;
    TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x684));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x65C);
    switch (temp_r0) {
    case 0:
        if (M2C_FIELD(arg0, f32 *, 0x69C) > lbl_805D8440) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 1;
        }
        break;
    case 1:
        if (TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x664)) == 3) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 2;
        }
        break;
    }
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (M2C_FIELD(arg0, f32 *, 0xC8) + TBoss2DeRolLe__data_805D8334);
    if (M2C_FIELD(arg0, f32 *, 0xC8) > TBoss2DeRolLe__data_805D8328) {
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) TBoss2DeRolLe__data_805D8328;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x65C) == 2);
}
#pragma pop

}
