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

typedef s32 M2C_UNK;
struct TFogCtrl_800FB92C {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    s32 f1C;
    s32 f20;
    Fog_800FB424 fogs[4];
    Fog_800FB424 *ptrs[4];
    s32 f184;
    u8 pad188[0x19C - 0x188];
    s32 f19C;
    s32 f1A0;
    s32 f1A4;
    s32 f1A8;
    s32 f1AC;
    s32 f1B0;
    s32 f1B4;
    f32 f1B8;
    f32 f1BC;
    s32 f1C0;
    s32 index;
};

extern "C" {
M2C_UNK get_random_float__21TObjEneMe3ShinowaRealFv(f32);
extern const f32 TFogCtrl__data_805DA948;
extern const f32 lbl_805DA958;
s32 is_controller_animated__8TFogCtrlFii(s32 arg0, s32 arg1);
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
void load_entry_into_slot__8TFogCtrlFPvii(Ctrl_800FB424 *self, s32 i, s32 entry);
f32 sin_table_lookup(s32);
extern s32 lbl_805D53A4;
extern const f32 TFogCtrl__data_805DA948;
extern const f32 TFogCtrl__data_805DA94C;
extern const f32 lbl_805DA954;
void apply_slot_params__8TFogCtrlFPvi(FogCtrl_800FB134 *self, s32 idx);
void copy_fog_entry(u8 *arg0, u8 *arg1);
void apply_slot_params__8TFogCtrlFPvi(FogCtrl_800FB134 *self, s32 idx);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_800FB8A0___vt__8TFogCtrl __vt__8TFogCtrl;
extern RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188 TFogCtrl__data_80501188;
extern u8 lbl_80501198[];
extern s32 lbl_805D2B18;
extern const f32 TFogCtrl__data_805DA948;
TFogCtrl_800FB92C *TFogCtrl__ct(TFogCtrl_800FB92C *self, void *parent, s32 index);
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
        t = row->end_amplitude * sin_table_lookup((s32)(lbl_805DA954 * ((f32)lbl_805D53A4 * row->speed + (f32)row->phases[2])));
        self->end += t;
    }
    if (TFogCtrl__data_805DA948 != row->start_amplitude) {
        t = row->start_amplitude * sin_table_lookup((s32)(lbl_805DA954 * ((f32)lbl_805D53A4 * row->speed + (f32)row->phases[4])));
        self->start += t;
    }
    if (TFogCtrl__data_805DA948 != row->width) {
        self->width = (f32)row->phases[6] * sin_table_lookup((s32)(lbl_805DA954 * ((f32)lbl_805D53A4 * row->speed))) + row->width;
    }
    self->dirty |= 1;
}
#pragma pop

s32 is_controller_animated__8TFogCtrlFii(s32 arg0, s32 arg1) {
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

void load_entry_into_slot__8TFogCtrlFPvii(Ctrl_800FB424 *self, s32 i, s32 entry) {
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

#pragma push
#pragma opt_common_subs off
TFogCtrl_800FB92C *TFogCtrl__ct(TFogCtrl_800FB92C *self, void *parent, s32 index) {
    s32 i;
    f32 one;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = &__vt__8TFogCtrl;
    self->f0 = lbl_805D2B18;
    self->index = index;
    if (self->index >= 0 && self->index < 4) {
        ((TFogCtrl_800FB92C **)&TFogCtrl__data_80501188)[self->index] = self;
    }
    self->f20 = 0;
    one = TFogCtrl__data_805DA948;
    for (i = 0; i < 4; i++) {
        self->fogs[i].entry = 0;
        copy_fog_entry((u8 *)&self->fogs[i], lbl_80501198);
        self->fogs[i].f44 = one;
        self->ptrs[i] = &self->fogs[i];
    }
    self->f184 = 0;
    one = TFogCtrl__data_805DA948;
    self->f19C = 0;
    self->f1A0 = 0;
    self->f1A4 = 0;
    self->f1A8 = 0;
    self->f1AC = 0;
    self->f1B0 = 0;
    self->f1B4 = 0;
    self->f1B8 = one;
    self->f1BC = one;
    self->f1C0 = 0;
    self->f1C = 0;
    apply_slot_params__8TFogCtrlFPvi((FogCtrl_800FB134 *)(self), (s32)(0));
    return self;
}
#pragma pop

void TFogCtrl__sub_800FBA54(void) {  }

}
