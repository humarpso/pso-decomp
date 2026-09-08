#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8006F23C_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_8006F1EC_lbl_8048C9D8
{
  M2C_UNK value;
  u8 remaining[0x744];
};

extern "C" {
s32 is_flag_set__6TLobbyFv();
extern RecoveredGlobal_8006F23C_lbl_8048C9D8 lbl_8048C9D8;
s32 TLobby__sub_8006F23C(void);
s32 is_flag_set__6TLobbyFv();
extern RecoveredGlobal_8006F23C_lbl_8048C9D8 lbl_8048C9D8;
s32 TLobby__sub_8006F1EC(s32 arg0);
}

extern "C" {

s32 get_layout_id__20TWindowSubStatusDispFv(void);
s32 TWindowSubStatusDisp__sub_8006F190();

extern M2C_UNK lbl_8043859C[];

s32 get_layout_id__20TWindowSubStatusDispFv(void) {
    if (TWindowSubStatusDisp__sub_8006F190() < 3) {
        return lbl_8043859C[TWindowSubStatusDisp__sub_8006F190()];
    }
    return 5;
}
typedef char RecoveredGlobal_8006F23C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8006F23C_lbl_8048C9D8) == 0x748 ? 1 : -1];

typedef struct RecoveredGlobal_8006F1EC_lbl_8048C9D8 RecoveredGlobal_8006F1EC_lbl_8048C9D8;
#pragma optimize_for_size off
typedef char RecoveredGlobal_8006F1EC_lbl_8048C9D8_size[((sizeof(RecoveredGlobal_8006F1EC_lbl_8048C9D8)) == 0x748) ? (1) : (-1)];
s32 TLobby__sub_8006F1EC(s32 arg0) {
  u8 *new_var;
  if (is_flag_set__6TLobbyFv() != 0)
  {
    new_var = (u8 *) (&(*(RecoveredGlobal_8006F1EC_lbl_8048C9D8 *)&lbl_8048C9D8).value);
    new_var = new_var + (arg0 * 4);
    return *((s32 *) (((s8 *) new_var) + 0x38));
  }
  return 0;
}

s32 TLobby__sub_8006F23C(void) {
    if (is_flag_set__6TLobbyFv() != 0) {
        return M2C_FIELD(&lbl_8048C9D8.value, s32 *, 0x34);
    }
    return 0;
}

}
