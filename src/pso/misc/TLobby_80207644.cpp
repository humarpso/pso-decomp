#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80207798_lbl_80513920 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

struct RecoveredGlobal_802077CC_lbl_80513920 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

struct RecoveredGlobal_802078A4_lbl_8044B658
{
  M2C_UNK value;
  u8 remaining[0x11C];
};

struct RecoveredGlobal_802078A4_lbl_8044B778
{
  M2C_UNK value;
  u8 remaining[0x11C];
};

struct RecoveredGlobal_802078A4_lbl_80513920
{
  M2C_UNK value;
  u8 remaining[0xD4];
};

struct Map_80207C60 { s32 map; s32 layout; s32 entities; };

struct Ids_80207C60 { s32 w[18]; };

extern "C" {
extern RecoveredGlobal_80207798_lbl_80513920 lbl_80513920;
s32 TLobby__sub_80207798(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern RecoveredGlobal_80207798_lbl_80513920 lbl_80513920;
s32 TLobby__sub_802077CC(s32 arg0, u8 *arg1);
s32 get_main_phase(void);
M2C_UNK set_state__16TAdStorySelectGCFi(void*);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
s32 rand__11TOBoss4RockFv(void);
extern RecoveredGlobal_802078A4_lbl_8044B658 lbl_8044B658;
extern RecoveredGlobal_802078A4_lbl_8044B778 lbl_8044B778;
extern RecoveredGlobal_80207798_lbl_80513920 lbl_80513920;
extern int lbl_805D6060;
extern const f32 lbl_805DC610;
void TOBoss4Rock__sub_802078A4(void);
M2C_UNK memset(void *, int, int);
extern struct Ids_80207C60 lbl_8044B898;
extern RecoveredGlobal_80207798_lbl_80513920 lbl_80513920;
void TLobby__sub_80207C60(void);
extern RecoveredGlobal_80207798_lbl_80513920 lbl_80513920;
M2C_UNK memset(void *, int, int);
extern struct Ids_80207C60 lbl_8044B8E0;
void TLobby__sub_80207BB0(void);
}

extern "C" {

struct Buf12_80207718_80207644 { s32 a, b, c; };

void TLobby__sub_80207644(void);
s32 get_player_floor__6TLobbyFi(s32 idx);
void reset_story_select_state__6TLobbyFv(void);
void sync_story_select__6TLobbyFv(void);
M2C_UNK set_state__16TAdStorySelectGCFi(void*);

    extern int lbl_805D362C;
    extern int lbl_805D6060;
void TLobby__sub_80207644(void) { lbl_805D6060 = lbl_805D362C; }

    extern int lbl_805D362C;
    extern int lbl_805D6060;
void sync_story_select__6TLobbyFv(void) { lbl_805D362C = lbl_805D6060; }

s32 get_player_floor__6TLobbyFi(s32 idx) {
    struct Buf12_80207718_80207644 buf;

    if (TLobby__sub_802077CC((s32)(idx), (u8 *)(&buf)) == 1) {
        return buf.a;
    }
    return -1;
}

extern s32 lbl_805D3628;

void TLobby__sub_80207750(s32 arg0, s32 arg1) {
    if (arg0 <= 0x11) {
        s32 *p = (s32 *)&lbl_80513920;
        p[arg0 * 3 + 1] = arg1;
    }
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80207798_lbl_80513920_size[sizeof(RecoveredGlobal_80207798_lbl_80513920) == 0xD8 ? 1 : -1];
s32 TLobby__sub_80207798(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    u8 *temp_r4;
    if (arg0 > 0x11) {
        return 0;
    }
    temp_r0 = arg0 * 0xC;
    M2C_FIELD(((u8 *)(&lbl_80513920.value) + temp_r0), s32 *, 0) = arg1;
    temp_r4 = (u8 *)(&lbl_80513920.value) + temp_r0;
    M2C_FIELD(temp_r4, s32 *, 4) = arg2;
    M2C_FIELD(temp_r4, s32 *, 8) = arg3;
    return 1;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_802077CC_lbl_80513920_size[sizeof(RecoveredGlobal_802077CC_lbl_80513920) == 0xD8 ? 1 : -1];
s32 TLobby__sub_802077CC(s32 arg0, u8 *arg1) {
    s32 temp_r6;
    u8 *temp_r5;
    if (arg0 > 0x11) {
        return 0;
    }
    temp_r6 = arg0 * 0xC;
    temp_r5 = (u8 *)(&(*(RecoveredGlobal_802077CC_lbl_80513920 *)&lbl_80513920).value) + temp_r6;
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_802077CC_lbl_80513920 *)&lbl_80513920).value) + temp_r6), s32 *, 0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
    return 1;
}
#pragma pop

typedef struct RecoveredGlobal_802078A4_lbl_8044B658 RecoveredGlobal_802078A4_lbl_8044B658;
typedef struct RecoveredGlobal_802078A4_lbl_8044B778 RecoveredGlobal_802078A4_lbl_8044B778;
typedef struct RecoveredGlobal_802078A4_lbl_80513920 RecoveredGlobal_802078A4_lbl_80513920;
typedef char RecoveredGlobal_802078A4_lbl_8044B658_size[((sizeof(RecoveredGlobal_802078A4_lbl_8044B658)) == 0x120) ? (1) : (-1)];
typedef char RecoveredGlobal_802078A4_lbl_8044B778_size[((sizeof(RecoveredGlobal_802078A4_lbl_8044B778)) == 0x120) ? (1) : (-1)];
typedef char RecoveredGlobal_802078A4_lbl_80513920_size[((sizeof(RecoveredGlobal_802078A4_lbl_80513920)) == 0xD8) ? (1) : (-1)];
void TOBoss4Rock__sub_802078A4(void) {
  M2C_UNK *var_r31;
  s32 var_r30;
  s32 var_r29;
  var_r31 = (M2C_UNK *) (&(*(RecoveredGlobal_802078A4_lbl_80513920 *)&lbl_80513920).value);
  set_state__16TAdStorySelectGCFi((void*)((*(s32 *)&lbl_805D6060)));
  var_r30 = get_main_phase();
  if (is_not_split_screen__13TRaderMapCoreFv() == 1)
  {
    var_r30 = 0xF;
  }
  var_r29 = 0;
  do
  {
    if (((s32) (*((s32 *) (((s8 *) var_r31) + 0)))) >= 0)
    {
      switch (var_r30)
      {
        case 14:
          *((s32 *) (((s8 *) var_r31) + 4)) = (s32) (((f32) (*((M2C_UNK *) (((s8 *) (&lbl_8044B658.value)) + ((*((s32 *) (((s8 *) var_r31) + 0))) * 8))))) * (lbl_805DC610 * ((f32) rand__11TOBoss4RockFv())));
          *((s32 *) (((s8 *) var_r31) + 8)) = (s32) (((f32) (*((s32 *) (((s8 *) (((u8 *) (&lbl_8044B658.value)) + ((*((s32 *) (((s8 *) var_r31) + 0))) * 8))) + 4)))) * (lbl_805DC610 * ((f32) rand__11TOBoss4RockFv())));
          break;
        case 15:
          *((s32 *) (((s8 *) var_r31) + 4)) = (s32) (((f32) (*((M2C_UNK *) (((s8 *) (&lbl_8044B778.value)) + ((*((s32 *) (((s8 *) var_r31) + 0))) * 8))))) * (lbl_805DC610 * ((f32) rand__11TOBoss4RockFv())));
          *((s32 *) (((s8 *) var_r31) + 8)) = (s32) (((f32) (*((s32 *) (((s8 *) (((u8 *) (&lbl_8044B778.value)) + ((*((s32 *) (((s8 *) var_r31) + 0))) * 8))) + 4)))) * (lbl_805DC610 * ((f32) rand__11TOBoss4RockFv())));
          break;
        default:
          *((s32 *) (((s8 *) var_r31) + 4)) = (s32) (((f32) (*((M2C_UNK *) (((s8 *) (&lbl_8044B658.value)) + ((*((s32 *) (((s8 *) var_r31) + 0))) * 8))))) * (lbl_805DC610 * ((f32) rand__11TOBoss4RockFv())));
          *((s32 *) (((s8 *) var_r31) + 8)) = (s32) (((f32) (*((s32 *) (((s8 *) (((u8 *) (&lbl_8044B658.value)) + ((*((s32 *) (((s8 *) var_r31) + 0))) * 8))) + 4)))) * (lbl_805DC610 * ((f32) rand__11TOBoss4RockFv())));
          break;
      }
    }
    var_r29 += 1;
    var_r31 = (M2C_UNK *) (((u8 *) var_r31) + 0xC);
  }
  while (var_r29 < 0x12);
}

#pragma push
#pragma opt_common_subs off
void TLobby__sub_80207BB0(void) {
    struct Ids_80207C60 ids = lbl_8044B8E0;
    s32 i;
    memset((void *) ((struct Map_80207C60 *)&lbl_80513920), 0, 0xD8);
    for (i = 0; i < 18; i++) {
        ((struct Map_80207C60 *)&lbl_80513920)[i].map = -1;
    }
    for (i = 0; i < 18; i++) {
        ((struct Map_80207C60 *)&lbl_80513920)[i].map = ids.w[i];
    }
}
#pragma pop

void TLobby__sub_80207C60(void) {
    struct Ids_80207C60 ids = lbl_8044B898;
    s32 i;
    memset((void *) ((struct Map_80207C60 *)&lbl_80513920), 0, 0xD8);
    for (i = 0; i < 18; i++) {
        ((struct Map_80207C60 *)&lbl_80513920)[i].map = -1;
    }
    for (i = 0; i < 18; i++) {
        ((struct Map_80207C60 *)&lbl_80513920)[i].map = ids.w[i];
    }
}

void reset_story_select_state__6TLobbyFv(void) {
    if ((s32) lbl_805D3628 != -1) {
        set_state__16TAdStorySelectGCFi((void*)lbl_805D3628);
        lbl_805D3628 = -1;
    }
}

}
