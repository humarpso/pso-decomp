#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8023F880_lbl_805162EC
{
  M2C_UNK value;
  u8 remaining[0x1B54];
};

typedef s32 M2C_UNK;

typedef struct Range_8023FBBC {
    s32 start;
    s32 end;
} Range_8023FBBC;

typedef struct Tables_8023FBBC {
    u8 pad[0x728];
    Range_8023FBBC *common[7];
    Range_8023FBBC *tbl[3][22];
} Tables_8023FBBC;

typedef struct Owner_8023FBBC {
    u8 pad[0x288];
    s32 kind;
} Owner_8023FBBC;

extern "C" {
extern RecoveredGlobal_8023F880_lbl_805162EC lbl_805162EC;
s32 TLobby__sub_8023F880(s32 arg0);
extern RecoveredGlobal_8023F880_lbl_805162EC lbl_805162EC;
void clamp_field9c__6TLobbyFPvf(void *voice, f32 scale);
void TLobby__sub_8023F780(s32 slot, f32 scale);
extern RecoveredGlobal_8023F880_lbl_805162EC lbl_805162EC;
void TLobby__sub_80241FD8(void *voice, s32 step);
void TLobby__sub_8023F8B0(s32 slot, s32 step);
extern RecoveredGlobal_8023F880_lbl_805162EC lbl_805162EC;
s32 TLobby__sub_80240B40(u8 *arg0, s32 arg1, s32 arg2);
void set_sound_slot_pitch(s32 slot, s32 pitch, s32 duration);
extern Tables_8023FBBC lbl_804CCFB8;
s32 resolve_sound_effect_bank(Owner_8023FBBC *owner, s32 kind, s32 bank, s32 index);
}

extern "C" {

s32 advance_rng__6TLobbyFPv(void *arg0);
s32 get_field_0x280__6TLobbyFPv(void* p);
f32 get_field_2a4__6TLobbyFPv(void* p);
void set_clamped_field27c__6TLobbyFPvf(void *arg0, f32 farg0);
void set_menu_index__6TLobbyFPvi(void* p, s32 v);
void set_mode__6TLobbyFPvi(void *arg0, s32 arg1);
s32 TLobby__sub_803AA35C(s32);

s32 advance_rng__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2AC) = (s32) ((M2C_FIELD(arg0, s32 *, 0x2AC) * 0x10DCD) + 1);
    return M2C_FIELD(arg0, s32 *, 0x2AC);
}

struct Slot_8023F754 { u8 pad[0x88]; s32 f88; u8 pad2[0x14]; };
void TLobby__sub_8023F754(s32 arg0, s32 arg1);
void TLobby__sub_8023F754(s32 arg0, s32 arg1) {
    if (arg0 < 0 || arg0 >= 0x20) {
        return;
    }
    s32 *p = (s32 *)&lbl_805162EC;
    p[arg0 * 40 + 34] = arg1;
}

void TLobby__sub_8023F780(s32 slot, f32 scale) {
    if (slot < 0 || slot >= 32) return;
    clamp_field9c__6TLobbyFPvf((u8 *)&lbl_805162EC.value + slot * 0xA0, scale);
}

f32 get_field_2a4__6TLobbyFPv(void* p) { return *(f32*)((char*)p + 0x2a4); }
s32 get_field_0x280__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x280); }
void set_menu_index__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x280) = v; }
void set_mode__6TLobbyFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        TLobby__sub_803AA35C(0);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    case 1:
        TLobby__sub_803AA35C(1);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    case 2:
        TLobby__sub_803AA35C(2);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    }
}

extern f32 lbl_805DC9C0;
extern f32 lbl_805DC9C4;

void set_clamped_field27c__6TLobbyFPvf(void *arg0, f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_805DC9C0) {
        var_f1 = lbl_805DC9C0;
    }
    if (var_f1 > lbl_805DC9C4) {
        var_f1 = lbl_805DC9C4;
    }
    M2C_FIELD(arg0, f32 *, 0x27C) = var_f1;
}
typedef struct RecoveredGlobal_8023F880_lbl_805162EC RecoveredGlobal_8023F880_lbl_805162EC;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_8023F880_lbl_805162EC_size[((sizeof(RecoveredGlobal_8023F880_lbl_805162EC)) == 0x1B58) ? (1) : (-1)];
s32 TLobby__sub_8023F880(s32 arg0) {
  u8 *new_var;
  s8 *new_var2;
  if ((arg0 >= 0) && (arg0 < 0x28))
  {
    new_var = (u8 *) (&lbl_805162EC.value);
    new_var2 = (s8 *) (new_var + (arg0 * 0xA0));
    return *((s32 *) (new_var2 + 4));
  }
  return -9;
}
void TLobby__sub_8023F8B0(s32 slot, s32 step) {
    if (slot < 0 || slot >= 32) return;
    TLobby__sub_80241FD8((u8 *)&lbl_805162EC.value + slot * 0xA0, step);
}
void set_sound_slot_pitch(s32 slot, s32 pitch, s32 duration) {
    if (slot < 0 || slot >= 0x20) {
        return;
    }
    TLobby__sub_80240B40((u8 *)&lbl_805162EC.value + slot * 0xA0, (s32)((u32)pitch << 13) / 3072, duration);
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
s32 resolve_sound_effect_bank(Owner_8023FBBC *owner, s32 kind, s32 bank, s32 index) {
    u8 *t = (u8 *)&lbl_804CCFB8;
    s32 result = -1;
    Range_8023FBBC *r = NULL;
    switch (kind) {
    case 0:
        switch (bank) {
        case 0:
        case 1:
        case 2:
        case 5:
            { s32 off = bank * 4; u8 *a = t + 0x728; r = *(Range_8023FBBC **)(a + off); }
            break;
        case 3:
            if (owner->kind >= 0 && owner->kind < 22) {
                { s32 off = owner->kind * 4; u8 *a = t + 0x744; r = *(Range_8023FBBC **)(a + off); }
            }
            break;
        case 4:
            if (owner->kind >= 0 && owner->kind < 22) {
                { s32 off = owner->kind * 4; u8 *a = t + 0x79C; r = *(Range_8023FBBC **)(a + off); }
            }
            break;
        case 6:
            if (owner->kind >= 0 && owner->kind < 22) {
                { s32 off = owner->kind * 4; u8 *a = t + 0x7F4; r = *(Range_8023FBBC **)(a + off); }
            }
            break;
        }
        break;
    }
    if (r != NULL && index >= 0 && index <= r->end - r->start) {
        result = index + r->start;
    }
    return result;
}
#pragma pop

}
