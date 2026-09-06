#include "types.h"
extern "C" {
void queue_destruction__7TObjectFv(void *);
void set_and_notify__6TLobbyFi(int);
extern const f32 lbl_805DC2E0;
void fn_801C247C(u8 *arg0);
}

extern "C" {

void fn_801C247C(u8 *arg0) {
  s32 temp_r0;
  s32 temp_r0_2;
  int new_var;
  temp_r0 = (*((s32 *) (((s8 *) arg0) + 0x1C))) - 1;
  *((s32 *) (((s8 *) arg0) + 0x1C)) = temp_r0;
  if (temp_r0 <= 0)
  {
    set_and_notify__6TLobbyFi(0);
    queue_destruction__7TObjectFv(arg0);
    return;
  }
  temp_r0_2 = *((s32 *) (((s8 *) arg0) + 0x1C));
  new_var = 0x20;
  if (temp_r0_2 <= 0xF)
  {
    set_and_notify__6TLobbyFi((s32) ((lbl_805DC2E0 * ((f32) temp_r0_2)) * ((f32) (*((s32 *) (((s8 *) arg0) + new_var))))));
  }
}

}
