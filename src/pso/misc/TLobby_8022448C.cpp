#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct SRock_80224544_8022448C;

extern "C" {
extern unsigned char lbl_80513F70[];
void *TLobby__sub_8022598C(int a0);
s32 strncpy(void *, void *, int);
extern s32 lbl_805D6270;
void TLobby__sub_80225BC8(u8 *arg0, u8 *arg1);
}

extern "C" {

s32 TLobby__sub_80224840(s32 arg0);
void TLobby__sub_80225238(int a0, int a1);
int TLobby__sub_80225C44(void* p);
int TLobby__sub_80225C64(void* p);
void TLobby__sub_80225C8C(void* p);
void TLobby__sub_80225CB8(void);
s32 classify_level_bracket_narrow__6TLobbyFi(s32 arg0);
s32 classify_level_bracket_wide__6TLobbyFi(s32 arg0);
void clear_lobby_flag__6TLobbyFv(void);
void free_all_rocks__6TLobbyFv(void);
void* get_com_card_list__6TLobbyFPv(void* p);
s32 get_level_bracket__6TLobbyFi(s32 arg0);
s32 get_level_tier__6TLobbyFi(s32 arg0);
s32 get_lobby_id__6TLobbyFPv(void* p);
int get_short_mail_ctrl__6TLobbyFv(void);
int is_flag_set__6TLobbyFPv(void* p);
s32 level_to_reward__6TLobbyFi(s32 arg0);
void set_6264_and_call_2244B0__6TLobbyFii(int a0, int a1);
void try_close__6TLobbyFPv(void* p);
M2C_UNK TLobby__sub_800F957C(u32);
int TLobby__sub_802244B0(void);
int TLobby__sub_8022525C(void);
int TLobby__sub_80225A08(void*);
int TLobby__sub_80225B40(void*);
int TLobby__sub_80225B90(void*);
M2C_UNK free__11TOBoss4RockFUi(u32);

    extern int lbl_805D6264;
void set_6264_and_call_2244B0__6TLobbyFii(int a0, int a1) { lbl_805D6264 = a1; TLobby__sub_802244B0(); }

extern M2C_UNK lbl_80513F20[];
extern u32 lbl_805D6260;

void free_all_rocks__6TLobbyFv(void) {
    s32 var_r28 = 3;
    M2C_UNK *var_r29 = lbl_80513F20;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            free__11TOBoss4RockFUi(v);
            var_r29[var_r31] = (M2C_UNK)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lbl_805D6260 != 0U) {
        TLobby__sub_800F957C(lbl_805D6260);
        lbl_805D6260 = var_r30;
    }
}

s32 classify_level_bracket_wide__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 5)) {
        return 0;
    }
    if ((arg0 >= 6) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 2;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 3;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 4;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 5;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 6;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 7;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 8;
    }
    if (arg0 >= 0x65) {
        return 8;
    }
    return -1;
}

s32 get_level_bracket__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 3)) {
        return 0;
    }
    if ((arg0 >= 4) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 2;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 3;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 4;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 5;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 6;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 7;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 8;
    }
    if (arg0 >= 0x65) {
        return 8;
    }
    return -1;
}

s32 TLobby__sub_80224840(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 1;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 2;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 3;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 4;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 5;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 6;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 7;
    }
    if (arg0 >= 0x65) {
        return 7;
    }
    return -1;
}

s32 classify_level_bracket_narrow__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 3)) {
        return 0;
    }
    if ((arg0 >= 4) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 2;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x28)) {
        return 3;
    }
    if ((arg0 >= 0x29) && (arg0 <= 0x37)) {
        return 4;
    }
    if ((arg0 >= 0x38) && (arg0 <= 0x64)) {
        return 5;
    }
    if (arg0 >= 0x65) {
        return 5;
    }
    return -1;
}

extern s32 lbl_805D6240;

s32 get_level_tier__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D6240 != 3) {
        if ((arg0 >= 1) && (arg0 <= 0xA)) {
            return 0;
        }
        if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
            return 1;
        }
        if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
            return 2;
        }
        if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
            return 3;
        }
        if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
            return 4;
        }
        if (arg0 >= 0x65) {
            return 4;
        }
        return -1;
    }
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 1;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 3;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x63)) {
        return 4;
    }
    if ((arg0 >= 0x64) && (arg0 <= 0x96)) {
        return 5;
    }
    if (arg0 >= 0x97) {
        return 6;
    }
    return -1;
}

s32 level_to_reward__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0xA;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 0xC;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 0xC;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x64)) {
        return 0x10;
    }
    if (arg0 >= 0x65) {
        return 0x10;
    }
    return 0;
}

    extern int lbl_805D626C;
void TLobby__sub_80225238(int a0, int a1) { lbl_805D626C = a1; TLobby__sub_8022525C(); }

void try_close__6TLobbyFPv(void* p) { if (TLobby__sub_80225B90(p) == 0) { TLobby__sub_80225A08(p); } }

void *TLobby__sub_8022598C(int a0) {
  unsigned char *new_var;
  new_var = lbl_80513F70;
  if ((!new_var) && (!new_var))
  {
  }
  return ((char *) new_var) + (a0 * 0xd0);
}

void TLobby__sub_80225BC8(u8 *arg0, u8 *arg1) {
    s32 temp_r7;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 8);
    temp_r7 = lbl_805D6270;
    lbl_805D6270 = temp_r7 + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_r7;
    M2C_FIELD(arg0, s8 *, 0xCC) = 0xB;
    strncpy((void *) (arg0 + 8), (void *) (arg1 + 0xC), (int) (0x17));
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    strncpy((void *) (arg0 + 0x20), (void *) (arg1 + 0x20), (int) (0xAB));
    M2C_FIELD(arg0, s8 *, 0xCB) = 0;
}

int TLobby__sub_80225C44(void* p) { return TLobby__sub_80225B40(p); }
int TLobby__sub_80225C64(void* p) { return TLobby__sub_80225B40(p); }
void* get_com_card_list__6TLobbyFPv(void* p) { return (char*)p + 0x8; }
void TLobby__sub_80225C8C(void* p) { *(u8*)((char*)p + 0xcc) &= 0xfffffffd; }
int is_flag_set__6TLobbyFPv(void* p) { return *(u8*)((char*)p + 0xcc) & 0x1; }
s32 get_lobby_id__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lbl_805D6274;
int get_short_mail_ctrl__6TLobbyFv(void) {  return lbl_805D6274; }

extern u16 lbl_805D63FC;

void TLobby__sub_80225CB8(void) {
    lbl_805D63FC |= 1;
}

extern u16 lbl_805D63FC;

void clear_lobby_flag__6TLobbyFv(void) {
    lbl_805D63FC &= 0xFFFE;
}

}
