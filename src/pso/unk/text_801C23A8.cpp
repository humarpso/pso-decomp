#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801C241C_lbl_804C3E60 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void set_and_notify__6TLobbyFi(int);
extern const f32 lbl_805DC2E0;
void fn_801C247C(u8 *arg0);
u8 *init__17TWindowDuelResultFPvPvPvPv(void *, s32, s32, s32);
void set_and_notify__6TLobbyFi(int);
u8 *__nw__7TObjectFUl(s32);
extern u8 *duel_result_window;
extern s32 tl_00;
void show_duel_result_window(s32 arg0, s32 arg1);
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_801C241C_lbl_804C3E60 lbl_804C3E60;
extern u8 *duel_result_window;
u8 *fn_801C241C(u8 *arg0, s16 arg1);
}

extern "C" {

void show_duel_result_window(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((void *) duel_result_window != NULL) {
        M2C_FIELD(duel_result_window, s32 *, 0x1C) = arg1;
        M2C_FIELD(duel_result_window, s32 *, 0x20) = arg0;
        set_and_notify__6TLobbyFi((int)((void *) (arg0)));
        return;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x24));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(init__17TWindowDuelResultFPvPvPvPv(temp_r3, tl_00, arg0, arg1));
    }
    duel_result_window = var_r0;
}

typedef char RecoveredGlobal_801C241C_lbl_804C3E60_size[sizeof(RecoveredGlobal_801C241C_lbl_804C3E60) == 0x18 ? 1 : -1];
u8 *fn_801C241C(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804C3E60.value;
        (*(s32 *)&duel_result_window) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
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
