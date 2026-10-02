#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802E7F30_lbl_804739AC
{
  M2C_UNK value;
  u8 remaining[0x24];
};

struct RecoveredGlobal_802E7F30_lbl_804739D4
{
  M2C_UNK value;
  u8 remaining[0x24];
};

struct RecoveredFields_802E7F30_temp_r3
{
  u8 unknown_0[0x4];
  u8 *field_4;
};

struct RecoveredFields_802E7F30_var_r3
{
  u8 unknown_0[0x4];
  s32 field_4;
};

struct RecoveredFields_802E7F30_temp_r3_2
{
  u8 unknown_0[0x4];
  u8 *field_4;
};

struct Fish_802E7B40 { u8 pad[0x6DC]; void* t[4]; };

struct Fish_802E7B94 { u8 pad[0x6DC]; void* t[4]; };

extern "C" {
s32 collect_and_count__12TBoss3VoloptFUii(u32, s32);
u32 queue_boss_effect__10TObjPlayerFPv(int);
extern RecoveredGlobal_802E7F30_lbl_804739AC lbl_804739AC;
extern RecoveredGlobal_802E7F30_lbl_804739D4 lbl_804739D4;
void TObjPlayer__sub_802E7F30(void *unused, s32 arg1);
void TBoss7Tentacle__sub_802F0B80(void* p);
void TObjFish__sub_802E7B40(Fish_802E7B40* o);
void TBoss7Tentacle__sub_802F0B70(void* p);
void TObjFish__sub_802E7B94(Fish_802E7B94* o);
}

extern "C" {

s32 render_actor_shadows_default(void *);
void set_flag_800__11TBoss7JointFPv(void* p);

void fn_802E7B10(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 1) {
        render_actor_shadows_default(arg0);
    }
}

void TObjFish__sub_802E7B40(Fish_802E7B40* o) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (o->t[i] != 0) {
            TBoss7Tentacle__sub_802F0B80(o->t[i]);
        }
    }
}

typedef struct RecoveredFields_802E7F30_temp_r3 RecoveredFields_802E7F30_temp_r3;
typedef struct RecoveredFields_802E7F30_temp_r3_2 RecoveredFields_802E7F30_temp_r3_2;
typedef struct RecoveredFields_802E7F30_var_r3 RecoveredFields_802E7F30_var_r3;
typedef struct RecoveredGlobal_802E7F30_lbl_804739AC RecoveredGlobal_802E7F30_lbl_804739AC;
typedef struct RecoveredGlobal_802E7F30_lbl_804739D4 RecoveredGlobal_802E7F30_lbl_804739D4;
typedef char RecoveredGlobal_802E7F30_lbl_804739AC_size[((sizeof(RecoveredGlobal_802E7F30_lbl_804739AC)) == 0x28) ? (1) : (-1)];
typedef char RecoveredGlobal_802E7F30_lbl_804739D4_size[((sizeof(RecoveredGlobal_802E7F30_lbl_804739D4)) == 0x28) ? (1) : (-1)];

void TObjFish__sub_802E7B94(Fish_802E7B94* o) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (o->t[i] != 0) {
            TBoss7Tentacle__sub_802F0B70(o->t[i]);
        }
    }
}

void TObjPlayer__sub_802E7F30(void *unused, s32 arg1) {
  M2C_UNK *var_r4;
  s32 var_r31;
  u8 *temp_r3;
  u8 *temp_r3_2;
  u8 *var_r3;
  var_r31 = arg1;
  if ((var_r31 >= 0) && (var_r31 < 0xA))
  {
    var_r3 = (u8 *) 0;
    var_r4 = (M2C_UNK *) (&lbl_804739AC.value);
    var_r31 *= 4;
    if (1)
    {
      var_r4 = (M2C_UNK *) (&lbl_804739AC.value);
      var_r4 = (M2C_UNK *) (*((M2C_UNK *) (((s8 *) (&lbl_804739AC.value)) + var_r31)));
      temp_r3 = (u8 *) collect_and_count__12TBoss3VoloptFUii(queue_boss_effect__10TObjPlayerFPv((int) 0), (s32) var_r4);
    }
    if (temp_r3 != 0)
    {
      var_r3 = (u8 *) ((RecoveredFields_802E7F30_temp_r3 *) temp_r3)->field_4;
      ((RecoveredFields_802E7F30_var_r3 *) var_r3)->field_4 = 0;
    }
    var_r3 = (u8 *) 0;
    var_r4 = (M2C_UNK *) (&lbl_804739D4.value);
    var_r4 = (M2C_UNK *) (&lbl_804739D4.value);
    var_r4 = (M2C_UNK *) (*((M2C_UNK *) (((s8 *) (&lbl_804739D4.value)) + var_r31)));
    temp_r3_2 = (u8 *) collect_and_count__12TBoss3VoloptFUii(queue_boss_effect__10TObjPlayerFPv((int) 0), (s32) var_r4);
    if (temp_r3_2 != 0)
    {
      var_r3 = (u8 *) ((RecoveredFields_802E7F30_temp_r3_2 *) temp_r3_2)->field_4;
      ((RecoveredFields_802E7F30_var_r3 *) var_r3)->field_4 = 0;
    }
  }
}

}
