#include "types.h"

struct Rec_80327A38 { u8 type; u8 pad; u16 val; u8 pad2[0xC]; };

struct Src_80327A38 { Rec_80327A38 *recs; u8 pad[4]; void *t0; void *t1; };

struct Acc_80327A38 { s32 sum; s32 count; };

extern "C" {
void visit_model_tree_recursive(s32 arg0, u8 *arg1, s32 arg2);
s32 has_texture_scroll_entry(void *, u16);
void fn_80327A38(Acc_80327A38 *acc, Src_80327A38 *src, s32 id);
void visit_model_tree_recursive(s32 acc, u8 *arg1, s32 arg2) {
  unsigned int new_var;
  u32 src;
  u8 *temp_r4_2;
  u8 *var_r30;
  var_r30 = (u8 *) arg1;
  do
  {
    src = *((u32 *) (((s8 *) var_r30) + 4));
    new_var = arg2;
    if (src != 0U)
    {
      fn_80327A38((Acc_80327A38 *)((void *) acc), (Src_80327A38 *)((int) src), (s32)((void *) new_var));
    }
    temp_r4_2 = (u8 *) (*((u8 **) (((s8 *) var_r30) + 0x2C)));
    if (temp_r4_2 != 0)
    {
      visit_model_tree_recursive(acc, temp_r4_2, new_var);
    }
    var_r30 = (u8 *) (*((u8 **) (((s8 *) var_r30) + 0x30)));
  }
  while (var_r30 != 0);
}
void fn_80327A38(Acc_80327A38 *acc, Src_80327A38 *src, s32 id) {
    s32 hit = 0;
    Rec_80327A38 *p;
    if (src->t0 != 0 && has_texture_scroll_entry(src->t0, id) == 1) {
        hit = 1;
    }
    if (src->t1 != 0 && has_texture_scroll_entry(src->t1, id) == 1) {
        hit = 1;
    }
    if (hit != 0) {
        for (p = src->recs; p != 0 && p->type != 0xFF; p++) {
            if (p->type == 5 || p->type == 6) {
                u16 v = p->val;
                acc->count++;
                acc->sum += v;
            }
        }
    }
}

}
