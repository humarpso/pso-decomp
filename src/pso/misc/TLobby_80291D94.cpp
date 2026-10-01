#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80292574_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80291F9C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_802925C4_lbl_80540968 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80292200_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80292604_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_802924B4_lbl_804DB1F0
{
  M2C_UNK value;
  u8 remaining[0x6AC];
};

typedef s32 M2C_UNK;
struct RecoveredGlobal_80070F4C_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_80070FD8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_800713C8_lbl_804FF82C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80070DA8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_80071064_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_80070EE4_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_8007119C_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_800710D8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct Entry_800712D8 {
    s32 value;
    s32 arg;
    u8 pad[0x14];
};

struct Table_800712D8 {
    u8 pad[0x21C];
    Entry_800712D8 entries[3];
};

extern "C" {
void TLobby__sub_8006F910(void *, void *, s32);
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_80292574(u8 *arg0, s32 arg1);
extern M2C_UNK lbl_804DB1F0[];
s32 TLobby__sub_80291F9C(void);
M2C_UNK strncpy(void *, void *, int);
extern RecoveredGlobal_802925C4_lbl_80540968 lbl_80540968;
void TLobby__sub_802925C4(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 is_value_out_of_range__6TLobbyFi(s32);
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_80292200(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
void TObjCHTimeWin__sub_80071DF4(int);
s32 TLobby__sub_80293080();
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_80292604(s32 arg0);
s32 TWindowSubStatusDisp__sub_8006F134(s32, s32);
s32 TWindowSubStatusDisp__sub_8006F190(s32);
s32 register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(s32, s32);
s32 get_card_window__17TWindowSubComCardFUi(s32);
extern M2C_UNK lbl_804DB1F0[];
s32 TLobby__sub_802924B4(s32 arg0, u16 arg1);
s32 mix_seed_checked__6TLobbyFi(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_value_out_of_range__6TLobbyFi(s32);
s32 TLobby__sub_80293080();
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_80292164(s32 arg0);
extern M2C_UNK lbl_804DB1F0[];
s32 calc_layout_hash__20TWindowSubStatusDispFv(int);
s32 calc_entry_offset__20TWindowSubStatusDispFv(int);
s32 TLobby__sub_802923C4(s32 idx, s32 value, s32 arg);
f32 get_random_float__8TObjFishFv(f32);
s32 is_level_capped__23TAdSinglePlyChrSelectGCFPv();
s32 get_card_window__17TWindowSubComCardFUi(s32);
s32 TLobby__sub_80292DA0(s32, s32);
s32 is_value_out_of_range__6TLobbyFi(s32);
s32 TLobby__sub_80293080();
extern M2C_UNK lbl_804DB1F0[];
s32 TLobby__sub_80292270(s32 arg0, s32 arg1);
}

extern "C" {

int TLobby__sub_80292268(void);
s32 check_ready_status__6TLobbyFv(void);
void draw_if_ready2__6TLobbyFv(void);
s32 TLobby__sub_80293080();
M2C_UNK create__20TObjChallenge4PRetryFPv(void*);
s32 is_multi_ready__6TLobbyFv();

extern u32 lbl_805D6580;

void draw_if_ready2__6TLobbyFv(void) {
    if ((TLobby__sub_80293080() != 0) && (is_multi_ready__6TLobbyFv() != 0) && ((u32) lbl_805D6580 != 0U)) {
        create__20TObjChallenge4PRetryFPv((void*)lbl_805D6580);
    }
}

extern M2C_UNK lbl_804DB1F0[];

s32 check_ready_status__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80291F9C();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}

typedef char RecoveredGlobal_80291F9C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80291F9C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
s32 TLobby__sub_80291F9C(void) {
    if ((s32) M2C_FIELD(&(*(RecoveredGlobal_80291F9C_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x20) != 0) {
        return M2C_FIELD(&(*(RecoveredGlobal_80291F9C_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x24);
    }
    return 0;
}

typedef char RecoveredGlobal_80292200_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292200_lbl_804DB1F0) == 0x6B0 ? 1 : -1];

void TLobby__sub_80292164(s32 arg0) {
    s32 i;
    if (TLobby__sub_80293080() != 0) {
        for (i = 0; i < 4; i++) {
            if (TPlayerBattleCtrl4P__sub_801BA74C(i) != 0) {
                s32 v = mix_seed_checked__6TLobbyFi(arg0);
                if (is_value_out_of_range__6TLobbyFi(arg0) != 0) {
                    v = mix_seed_checked__6TLobbyFi(0x8C9F);
                }
                (((s32 *)&lbl_804DB1F0) + 0x1A0)[i] = v;
            }
        }
    }
}

void TLobby__sub_80292200(s32 arg0) {
    is_value_out_of_range__6TLobbyFi(arg0);
    get_random_float__8TObjFishFv((f32) (arg0 - M2C_FIELD(&(*(RecoveredGlobal_80292200_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0xC)));
    TLobby__sub_80292164((s32)((void *) (arg0)));
}

int TLobby__sub_80292268(void) { return 1; }
typedef char RecoveredGlobal_80292574_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292574_lbl_804DB1F0) == 0x6B0 ? 1 : -1];

typedef struct RecoveredGlobal_802924B4_lbl_804DB1F0 RecoveredGlobal_802924B4_lbl_804DB1F0;
typedef char RecoveredGlobal_802924B4_lbl_804DB1F0_size[((sizeof(RecoveredGlobal_802924B4_lbl_804DB1F0)) == 0x6B0) ? (1) : (-1)];

typedef char RecoveredGlobal_80070F4C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070F4C_lbl_8048C9D8) == 0x748 ? 1 : -1];
typedef char RecoveredGlobal_80070DA8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070DA8_lbl_8048C9D8) == 0x748 ? 1 : -1];
typedef char RecoveredGlobal_80070EE4_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070EE4_lbl_8048C9D8) == 0x748 ? 1 : -1];
typedef char RecoveredGlobal_80070FD8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070FD8_lbl_8048C9D8) == 0x748 ? 1 : -1];
typedef char RecoveredGlobal_800713C8_lbl_804FF82C_size[sizeof(RecoveredGlobal_800713C8_lbl_804FF82C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80071064_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80071064_lbl_8048C9D8) == 0x748 ? 1 : -1];
typedef char RecoveredGlobal_8007119C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8007119C_lbl_8048C9D8) == 0x748 ? 1 : -1];
typedef char RecoveredGlobal_800710D8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_800710D8_lbl_8048C9D8) == 0x748 ? 1 : -1];
#define TBL_800712D8 (*(Table_800712D8 *)lbl_804DB1F0)

s32 TLobby__sub_80292270(s32 arg0, s32 arg1) {
    s32 r;
    if (TLobby__sub_80293080() == 0 || M2C_FIELD(lbl_804DB1F0, s32 *, 0) == -1 ||
        (u32)get_card_window__17TWindowSubComCardFUi((u16)arg1) == 0) {
        M2C_FIELD(lbl_804DB1F0, s32 *, 0x14) = -4;
        return -4;
    }
    get_random_float__8TObjFishFv(arg0 - M2C_FIELD(lbl_804DB1F0, s32 *, 0xC));
    if (is_value_out_of_range__6TLobbyFi(arg0) != 0) {
        arg0 = 0x8C9F;
    }
    r = TLobby__sub_80292DA0(arg0, arg1);
    if (r == -1) {
        M2C_FIELD(lbl_804DB1F0, s32 *, 0x14) = -1;
        return -1;
    }
    if (r < 0) {
        M2C_FIELD(lbl_804DB1F0, s32 *, 0x14) = -2;
        return -2;
    }
    if ((u32)get_card_window__17TWindowSubComCardFUi((u16)arg1) != 0 && is_level_capped__23TAdSinglePlyChrSelectGCFPv() != 0) {
        M2C_FIELD(lbl_804DB1F0, s32 *, 0x14) = -3;
        return -3;
    }
    M2C_FIELD(lbl_804DB1F0, s32 *, 0x14) = r;
    return r;
}

s32 TLobby__sub_802923C4(s32 idx, s32 value, s32 arg) {
    s32 prev;
    Entry_800712D8 *e;
    Entry_800712D8 *p;
    Entry_800712D8 *end;
    if (idx < 0 || idx >= 3 || value < calc_entry_offset__20TWindowSubStatusDispFv(-1)) {
        return 0;
    }
    if (idx == 0) {
        value = calc_layout_hash__20TWindowSubStatusDispFv(-1);
    }
    e = &TBL_800712D8.entries[idx];
    if (e->value != 0) {
        return 0;
    }
    e->value = value;
    e->arg = arg;
    prev = 0x7FFFFFFF;
    end = &TBL_800712D8.entries[3];
    for (p = TBL_800712D8.entries; p < end; p++) {
        s32 v = p->value;
        if (v != 0) {
            if (prev <= v) {
                return 0;
            }
            prev = v;
        }
    }
    return 1;
}

s32 TLobby__sub_802924B4(s32 arg0, u16 arg1) {
  s32 new_var2;
  s32 *temp_r3_2;
  s32 temp_r3;
  u8 *temp_r30;
  int new_var;
  if ((((s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_802924B4_lbl_804DB1F0 *)&lbl_804DB1F0).value)) + 0x14)))) < 0) || (((s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_802924B4_lbl_804DB1F0 *)&lbl_804DB1F0).value)) + 0x14)))) > 2))
  {
    return 0;
  }
  temp_r3 = get_card_window__17TWindowSubComCardFUi((s32) arg1);
  new_var = 0;
  if (temp_r3 == new_var)
  {
    return new_var;
  }
  if (register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(temp_r3 & 0xFFFFFFFFFFFFFFFFu, arg0) != 0)
  {
    temp_r30 = (((u8 *) (&(*(RecoveredGlobal_802924B4_lbl_804DB1F0 *)&lbl_804DB1F0).value)) + ((*((s32 *) (((s8 *) (&(*(RecoveredGlobal_802924B4_lbl_804DB1F0 *)&lbl_804DB1F0).value)) + 0x14))) * 0x1C)) + 0x21C;
    new_var2 = TWindowSubStatusDisp__sub_8006F190(-1);
    temp_r3_2 = (s32 *) TWindowSubStatusDisp__sub_8006F134(temp_r3 + 0x21C4, new_var2);
    *temp_r3_2 |= *((s32 *) (((s8 *) temp_r30) + 4));
    return 1;
  }
  return 0;
  arg0 = arg0;
}

void TLobby__sub_80292574(u8 *arg0, s32 arg1) {
    TLobby__sub_8006F910((u8 *)&(*(RecoveredGlobal_80292574_lbl_804DB1F0 *)&lbl_804DB1F0).value + 0x50, arg0, 0xC);
    M2C_FIELD(&(*(RecoveredGlobal_80292574_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x18) = (s32) (arg1 | 0xFF000000);
}
typedef char RecoveredGlobal_802925C4_lbl_80540968_size[sizeof(RecoveredGlobal_802925C4_lbl_80540968) == 0x20 ? 1 : -1];
void TLobby__sub_802925C4(s32 arg0) {
    strncpy((void *) (&lbl_80540968.value), (void *) (arg0), (int) (0x20));
    M2C_FIELD(&lbl_80540968.value, s8 *, 0x1F) = 0;
}
typedef char RecoveredGlobal_80292604_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292604_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_80292604(s32 arg0) {
    if (TLobby__sub_80293080() != 0) {
        get_random_float__8TObjFishFv((f32) (arg0 - M2C_FIELD(&(*(RecoveredGlobal_80292604_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0xC)));
        M2C_FIELD(&(*(RecoveredGlobal_80292604_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0xC) = arg0;
        TObjCHTimeWin__sub_80071DF4(arg0);
    }
}

}
