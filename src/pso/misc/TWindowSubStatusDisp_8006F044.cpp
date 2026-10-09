#include "types.h"

extern "C" {

s32 get_layout_id__20TWindowSubStatusDispFv();

s32 calc_layout_hash__20TWindowSubStatusDispFv(void) {
    return get_layout_id__20TWindowSubStatusDispFv() * 0x8C9F;
}

s32 get_layout_id__20TWindowSubStatusDispFv();

s32 calc_entry_offset__20TWindowSubStatusDispFv(void) {
    return get_layout_id__20TWindowSubStatusDispFv() * 0x12C;
}

}

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

struct O_8006F0D8 { u8 pad[4]; s32 a[(0xec - 4) / 4]; s32 def; };

struct E_8006F134 { s32 a; s32 b; };

struct O_8006F134 { u8 pad[0xc0]; E_8006F134 e[4]; s32 pad2; E_8006F134 def; };

extern "C" {
s32 is_flag_set__6TLobbyFv();
extern RecoveredGlobal_8006F23C_lbl_8048C9D8 challenge_mode_state;
s32 get_flag_value_if_set__6TLobbyFv(void);
s32 is_flag_set__6TLobbyFv();
extern RecoveredGlobal_8006F23C_lbl_8048C9D8 challenge_mode_state;
s32 get_flagged_table_entry__6TLobbyFi(s32 arg0);
s32 is_split_screen(void);
s32 get_instance__6TLobbyFv(void);
s32 resolve_player_slot__20TWindowSubStatusDispFi(s32 slot);
extern s32 lbl_80438590[];
s32 resolve_player_slot__20TWindowSubStatusDispFi(s32 slot);
s32 *TWindowSubStatusDisp__sub_8006F0D8(O_8006F0D8 *self, s32 slot);
extern s32 lbl_80438584[];
s32 resolve_player_slot__20TWindowSubStatusDispFi(s32 slot);
E_8006F134 *TWindowSubStatusDisp__sub_8006F134(O_8006F134 *self, s32 slot);
}

extern "C" {

s32 get_layout_id__20TWindowSubStatusDispFv(void);

extern M2C_UNK lbl_8043859C[];

typedef s32 (*SlotQueryNoArgs_8006F094)(void);

s32 get_layout_id__20TWindowSubStatusDispFv(void) {
    if (((SlotQueryNoArgs_8006F094)resolve_player_slot__20TWindowSubStatusDispFi)() < 3) {
        return lbl_8043859C[((SlotQueryNoArgs_8006F094)resolve_player_slot__20TWindowSubStatusDispFi)()];
    }
    return 5;
}
typedef char RecoveredGlobal_8006F23C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8006F23C_lbl_8048C9D8) == 0x748 ? 1 : -1];

typedef struct RecoveredGlobal_8006F1EC_lbl_8048C9D8 RecoveredGlobal_8006F1EC_lbl_8048C9D8;
#pragma optimize_for_size off
typedef char RecoveredGlobal_8006F1EC_lbl_8048C9D8_size[((sizeof(RecoveredGlobal_8006F1EC_lbl_8048C9D8)) == 0x748) ? (1) : (-1)];

s32 *TWindowSubStatusDisp__sub_8006F0D8(O_8006F0D8 *self, s32 slot) {
    s32 idx = resolve_player_slot__20TWindowSubStatusDispFi(slot);
    if (idx < 3) {
        return &self->a[lbl_80438590[idx]];
    }
    return &self->def;
}

E_8006F134 *TWindowSubStatusDisp__sub_8006F134(O_8006F134 *self, s32 slot) {
    s32 idx = resolve_player_slot__20TWindowSubStatusDispFi(slot);
    if (idx < 3) {
        return &self->e[lbl_80438584[idx]];
    }
    return &self->def;
}

s32 resolve_player_slot__20TWindowSubStatusDispFi(s32 slot) {
    switch (slot) {
    case -1:
        if (is_split_screen()) {
            s32 inst = get_instance__6TLobbyFv();
            s32 r = 2;
            if (inst == 1) {
                r = 3;
            }
            return r;
        }
        return (get_instance__6TLobbyFv() == 1) ? 1 : 0;
    }
    return slot;
}

s32 get_flagged_table_entry__6TLobbyFi(s32 arg0) {
  u8 *new_var;
  if (is_flag_set__6TLobbyFv() != 0)
  {
    new_var = (u8 *) (&(*(RecoveredGlobal_8006F1EC_lbl_8048C9D8 *)&challenge_mode_state).value);
    new_var = new_var + (arg0 * 4);
    return *((s32 *) (((s8 *) new_var) + 0x38));
  }
  return 0;
}

s32 get_flag_value_if_set__6TLobbyFv(void) {
    if (is_flag_set__6TLobbyFv() != 0) {
        return M2C_FIELD(&challenge_mode_state.value, s32 *, 0x34);
    }
    return 0;
}

}
