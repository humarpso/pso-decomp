#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
void set_and_notify__6TLobbyFi(int);
extern const f32 lbl_805DC2E0;
void fn_801C247C(u8 *arg0);
u8 *init__17TWindowDuelResultFPvPvPvPv(void *, s32, s32, s32);
void set_and_notify__6TLobbyFi(int);
u8 *__nw__7TObjectFUl(s32);
extern u8 *lbl_805D5D90;
extern s32 tl_00;
void fn_801C23A8(s32 arg0, s32 arg1);
}

extern "C" {

void fn_801C23A8(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((void *) lbl_805D5D90 != NULL) {
        M2C_FIELD(lbl_805D5D90, s32 *, 0x1C) = arg1;
        M2C_FIELD(lbl_805D5D90, s32 *, 0x20) = arg0;
        set_and_notify__6TLobbyFi((int)((void *) (arg0)));
        return;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x24));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(init__17TWindowDuelResultFPvPvPvPv(temp_r3, tl_00, arg0, arg1));
    }
    lbl_805D5D90 = var_r0;
}

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
