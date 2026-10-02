#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Owner_8012B9B4 { u8 pad[0x38]; f32 pos[3]; u8 pad44[0x60 - 0x44]; s32 f60; };

struct Self_8012B9B4 {
    u8 pad0[0xF0];
    Owner_8012B9B4 *owner;
    u8 padF4[0x1FC - 0xF4];
    u8 icon[0xC];
    s32 f208;
    s16 f20C;
    s16 f20E;
    u8 pad210[0x264 - 0x210];
    s32 f264;
    f32 f268[3];
};

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK create_ex__9TTecBartaFPvPvPvPv(int, void *, int, int);
M2C_UNK create__8TTecFoieFPvPvPvPv(int, void *, int, int);
M2C_UNK create_tec_zonde__10TObjPlayerFPvPvPvPv(int, void *, void *, int);
void TObjPlayer__sub_8012B8F0(u8 *arg0, s32 arg1);
u8 * init_vtable_and_clear_field1f8__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8012B898(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TObjPlayer__sub_801012DC(void *, s32);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, void *);
s32 get_extended_state__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_80121238(s32);
s16 get_uid__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_80121248(s32, s32);
s32 TObjPlayer__sub_8012125C(s32);
s32 rand(void);
extern const f32 lbl_805DAEC0;
extern const f32 lbl_805DAEC4;
void TObjPlayer__sub_8012B9B4(Self_8012B9B4 *self);
}

extern "C" {

u8 *TObjPlayer__sub_8012B898(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_vtable_and_clear_field1f8__10TObjPlayerFPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer__sub_8012B8F0(u8 *arg0, s32 arg1) {
  s32 new_var;
  s32 temp_r31;
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0xF0)))) != 0U)
  {
    if (reset_key_machine_state__10TObjPlayerFv() != 0)
    {
      temp_r31 = get_field_3e4__10TObjPlayerFPv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))));
      new_var = get_current_floor();
      if (new_var == temp_r31)
      {
        switch (arg1)
        {
          case 0:
            create_tec_zonde__10TObjPlayerFPvPvPvPv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))), (void *) (arg0 + 0x1FC), (void *) (arg0 + 0x208), (int) 0xA);
            return;
          case 1:
            create__8TTecFoieFPvPvPvPv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))), (void *) (arg0 + 0x1FC), (int) (*((s32 *) (((s8 *) arg0) + 0x264))), (int) 0xA);
            return;
          case 2:
            create_ex__9TTecBartaFPvPvPvPv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))), (void *) (arg0 + 0x268), (int) (*((s32 *) (((s8 *) arg0) + 0x264))), (int) 0xA);
            break;
        }
      }
    }
  }
}
void TObjPlayer__sub_8012B9B4(Self_8012B9B4 *self) {
    s32 ext;
    s32 item;
    draw_icon__10TObjPlayerFPvii(self, 4, self->icon);
    ext = get_extended_state__10TObjPlayerFPv(self->owner);
    item = TObjPlayer__sub_80121248(ext, 0);
    if (TObjPlayer__sub_8012125C(ext) != 0) {
        self->f208 = 1;
        self->f20C = get_uid__10TObjPlayerFPv(item);
        self->f20E = TObjPlayer__sub_80121238(item);
    } else {
        self->f208 = 0;
    }
    self->f264 = self->owner->f60;
    VecCopy__FP3VecPC3Vec(self->f268, self->owner->pos);
    TObjPlayer__sub_801012DC(self, lbl_805DAEC0 * (lbl_805DAEC4 * (f32)rand()));
}

}
