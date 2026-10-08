#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern f32 TLobby__data_805D7EC8;
s32 calc_time_from_hms__6TLobbyFi(s32 arg0);
s32 TLobby__sub_8001E75C(void *arg0);
}

extern "C" {

s32 get_instance__6TLobbyFv(void);

extern s32 lbl_805D6060;

s32 get_instance__6TLobbyFv(void) {
    return lbl_805D6060;
}
s32 calc_time_from_hms__6TLobbyFi(s32 arg0) {
  s32 *new_var;
  int new_var2;
  s32 temp_r31_2;
  s32 temp_r31;
  temp_r31_2 = TLobby__sub_8001E75C((void *)((void *) (arg0 + 0xC)));
  new_var = &arg0;
  temp_r31 = (temp_r31_2 * 0x3C) + TLobby__sub_8001E75C((void *)((void *) (arg0 + 0xF)));
  new_var2 = (temp_r31 * 0x3C) + TLobby__sub_8001E75C((void *)((void *) ((*new_var) + 0x12)));
  return (s32) (TLobby__data_805D7EC8 * ((f32) new_var2));
}
s32 TLobby__sub_8001E75C(void *arg0) {
    s8 *s = (s8 *)arg0;
    s32 v = (s[0] - '0') * 10;
    v += s[1] - '0';
    return v;
}

}
