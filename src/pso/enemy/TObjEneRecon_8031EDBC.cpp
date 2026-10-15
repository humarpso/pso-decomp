#include "types.h"

struct Stack_8031EE54 {
    s32 sp8;
    f32 spC;
};

struct T_8031EDBC { u8 pad[0x424]; u16 ids[30]; };

struct Rec_8031EDF8
{
  u8 pad0[0x1C];
  u16 base;
  u8 pad1[0x3F4 - 0x1E];
  s32 count;
  u8 pad2[0x424 - 0x3F8];
  u16 ids[1];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * csnVectorUnder(s32, void *, s32);
void set_active__12TObjEneReconFv(void);
extern s32 actor_frame_tick;
extern const f32 lbl_805DF448;
void update_floor_probe__12TObjEneReconFPv(u8 *arg0);
void remove_tracked_id__12TObjEneReconFPvi(T_8031EDBC *self, s32 id);
u16 alloc_child_id__12TObjEneReconFPv(Rec_8031EDF8 *o);
}

extern "C" {

void remove_tracked_id__12TObjEneReconFPvi(T_8031EDBC *self, s32 id) {
    s32 i;
    for (i = 0; i < 30; i++) {
        if (self->ids[i] == id) {
            self->ids[i] = 0xFFFF;
            return;
        }
    }
}

#pragma push
#pragma opt_propagation off
typedef struct Rec_8031EDF8 Rec_8031EDF8;
u16 alloc_child_id__12TObjEneReconFPv(Rec_8031EDF8 *o) {
  s32 new_var;
  s32 i;
  s32 v;
  for (i = 0; i < o->count; i++)
  {
    if (o->ids[i] == 0xFFFF)
    {
      v = (0, o->base + i);
      new_var = i;
      o->ids[new_var] = v + 1;
      return o->ids[new_var];
    }
  }
  return 0xFFFF;
}
#pragma pop

void update_floor_probe__12TObjEneReconFPv(u8 *arg0) {
    Stack_8031EE54 stack;
    u8 *temp_r3;
    if ((actor_frame_tick % 5) == 0) {
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
        stack.spC += lbl_805DF448;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            *(s32 *)((s8 *)arg0 + 0x3E0) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 4)) + 0x18);
            VecCopy__FP3VecPC3Vec(arg0 + 0x3E4, *(u8 **)((s8 *)temp_r3 + 4));
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3E4, arg0 + 0x38);
        }
    }
    if (*(s32 *)((s8 *)arg0 + 0x3E0) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

}
