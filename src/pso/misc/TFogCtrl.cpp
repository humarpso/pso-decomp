#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800FB8A0___vt__8TFogCtrl {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct O_800FB400 { u8 pad[0x174]; s32 arr[1]; };

struct Fog_800FB424 { u8 pad[0x40]; s32 entry; f32 f44; s32 f48[3]; };

struct Ctrl_800FB424 { u8 pad[0x174]; Fog_800FB424 *fogs[1]; };

struct FogRow_800FB134 {
    u32 flags;
    u32 color;
    f32 end;
    f32 start;
    f32 rate;
    u32 reserved14;
    f32 speed;
    f32 reserved1c;
    f32 end_amplitude;
    f32 reserved24;
    f32 start_amplitude;
    f32 reserved2c;
    f32 width;
    f32 reserved34;
    u8 phases[8];
};

struct FogCtrl_800FB134 {
    u8 prefix[0x1C];
    u32 dirty;
    u8 pad20[0x174 - 0x20];
    FogRow_800FB134 *slots[4];
    s32 selected;
    u32 color;
    f32 end;
    f32 start;
    f32 width;
};

extern "C" {
M2C_UNK get_random_float__21TObjEneMe3ShinowaRealFv(f32);
extern const f32 TFogCtrl__data_805DA948;
extern const f32 lbl_805DA958;
s32 TFogCtrl__sub_800FB31C(s32 arg0, s32 arg1);
u8 * __dt__7TObjectFv(void *, s16);
void end_effect_render__13TParticleCtrlFv(void);
void __dl__7TObjectFPv(s32);
void fn_803E2070(void);
extern RecoveredGlobal_800FB8A0___vt__8TFogCtrl __vt__8TFogCtrl;
extern RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188 TFogCtrl__data_80501188;
u8 *__dt__8TFogCtrlFv(u8 *arg0, s16 arg1);
void TFogCtrl__sub_800FB400(O_800FB400 *self, s32 i, s32 j);
void copy_fog_entry(u8 *arg0, u8 *arg1);
void *get_entry__8TFogCtrlFi(int a0);
extern const f32 TFogCtrl__data_805DA948;
void TFogCtrl__sub_800FB424(Ctrl_800FB424 *self, s32 i, s32 entry);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern s32 lbl_805D53A4;
extern const f32 TFogCtrl__data_805DA948;
extern const f32 TFogCtrl__data_805DA94C;
extern const f32 lbl_805DA954;
void apply_slot_params__8TFogCtrlFPvi(FogCtrl_800FB134 *self, s32 idx);
}

extern "C" {

void TFogCtrl__sub_800FBA54(void);
s32 get_param__8TFogCtrlFPv(void* p);
void render__8TFogCtrlFv(void);

s32 get_param__8TFogCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c0); }

#pragma push
#pragma fp_contract on
void apply_slot_params__8TFogCtrlFPvi(FogCtrl_800FB134 *self, s32 idx) {
    FogRow_800FB134 *row = self->slots[idx];
    f32 t;
    self->color = row->color;
    self->end = row->end;
    self->start = row->start;
    self->width = TFogCtrl__data_805DA94C;
    if (TFogCtrl__data_805DA948 != row->end_amplitude) {
        t = row->end_amplitude * TBoss8Dragon__sub_803D64C0((s32)(lbl_805DA954 * ((f32)lbl_805D53A4 * row->speed + (f32)row->phases[2])));
        self->end += t;
    }
    if (TFogCtrl__data_805DA948 != row->start_amplitude) {
        t = row->start_amplitude * TBoss8Dragon__sub_803D64C0((s32)(lbl_805DA954 * ((f32)lbl_805D53A4 * row->speed + (f32)row->phases[4])));
        self->start += t;
    }
    if (TFogCtrl__data_805DA948 != row->width) {
        self->width = (f32)row->phases[6] * TBoss8Dragon__sub_803D64C0((s32)(lbl_805DA954 * ((f32)lbl_805D53A4 * row->speed))) + row->width;
    }
    self->dirty |= 1;
}
#pragma pop

s32 TFogCtrl__sub_800FB31C(s32 arg0, s32 arg1) {
  f32 temp_f31;
  f32 var_f31;
  s32 temp_r3;
  u8 *temp_r31;
  temp_r3 = arg0 + (arg1 * 4);
  temp_r31 = (u8 *) (*((u8 **) (((s8 *) temp_r3) + 0x174)));
  temp_r3 = *((s32 *) (((s8 *) temp_r31) + 0));
  if (temp_r3 & 2)
  {
    if (((TFogCtrl__data_805DA948 != (*((f32 *) (((s8 *) temp_r31) + 0x20)))) || (TFogCtrl__data_805DA948 != (*((f32 *) (((s8 *) temp_r31) + 0x28))))) || (((u8) (*((u8 *) (((s8 *) temp_r31) + 0x3E)))) != 0))
    {
      return 1;
    }
    return 0;
  }
  if (temp_r3 & 4)
  {
    temp_f31 = *((f32 *) (((s8 *) temp_r31) + 0x44));
    get_random_float__21TObjEneMe3ShinowaRealFv((f32) temp_f31);
    var_f31 = temp_f31 + (*((f32 *) (((s8 *) temp_r31) + 0x18)));
    get_random_float__21TObjEneMe3ShinowaRealFv((f32) var_f31);
    if (var_f31 < TFogCtrl__data_805DA948)
    {
      var_f31 += lbl_805DA958;
    }
    else
      if (var_f31 >= lbl_805DA958)
    {
      var_f31 -= lbl_805DA958;
    }
    *((f32 *) (((s8 *) temp_r31) + 0x44)) = var_f31;
    return 1;
  }
  return 0;
}

void TFogCtrl__sub_800FB400(O_800FB400 *self, s32 i, s32 j) {
    s32 t = self->arr[i];
    self->arr[i] = self->arr[j];
    self->arr[j] = t;
}

void TFogCtrl__sub_800FB424(Ctrl_800FB424 *self, s32 i, s32 entry) {
    s32 k;
    Fog_800FB424 *f = self->fogs[i];
    f->entry = entry;
    copy_fog_entry((u8 *)f, (u8 *)get_entry__8TFogCtrlFi(entry));
    f->f44 = TFogCtrl__data_805DA948;
    for (k = 0; k < 3; k++) {
        f->f48[k] = 0;
    }
}

void render__8TFogCtrlFv(void) {  }

typedef char RecoveredGlobal_800FB8A0___vt__8TFogCtrl_size[sizeof(RecoveredGlobal_800FB8A0___vt__8TFogCtrl) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188_size[sizeof(RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188) == 0x10 ? 1 : -1];
u8 *__dt__8TFogCtrlFv(u8 *arg0, s16 arg1) {
    s32 temp_r0;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TFogCtrl.value;
        fn_803E2070();
        end_effect_render__13TParticleCtrlFv();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C4);
        if ((temp_r0 >= 0) && (temp_r0 < 4)) {
            M2C_FIELD(&TFogCtrl__data_80501188.value, M2C_UNK *, (temp_r0 * 4)) = 0;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void TFogCtrl__sub_800FBA54(void) {  }

}
