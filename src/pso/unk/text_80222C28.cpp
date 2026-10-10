#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80222C54_lbl_8044C330
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_80222CBC_lbl_8044C308
{
  M2C_UNK value;
  u8 remaining[0x24];
};

extern "C" {
extern s32 quest_and_shop_error_text;
extern s32 **lbl_805D6258;
s32 get_shop_text(s32 arg0);
extern s32 quest_and_shop_error_text;
extern s32 **lbl_805D6258;
s32 get_quest_list_text(s32 arg0, s32 arg1);
s32 get_game_play_mode();
extern RecoveredGlobal_80222C54_lbl_8044C330 lbl_8044C330;
extern s32 quest_and_shop_error_text;
extern s32 **lbl_805D6258;
s32 get_guild_text(s32 arg0);
extern RecoveredGlobal_80222CBC_lbl_8044C308 lbl_8044C308;
extern s32 quest_and_shop_error_text;
extern s32 lbl_805D6238;
extern s32 **lbl_805D6258;
s32 get_appraisal_text(s32 arg0);
}

extern "C" {

s32 get_quest_list_text(s32 arg0, s32 arg1) {
    if ((s32 *) (*(s32 * *)&lbl_805D6258) != NULL) {
        return M2C_FIELD((M2C_FIELD((M2C_FIELD((*(s32 * *)&lbl_805D6258), s32 *, 0) + (arg0 * 4)), s32 *, 0) + (arg1 * 4)), s32 *, 0);
    }
    return quest_and_shop_error_text;
}

typedef struct RecoveredGlobal_80222C54_lbl_8044C330 RecoveredGlobal_80222C54_lbl_8044C330;
typedef char RecoveredGlobal_80222C54_lbl_8044C330_size[((sizeof(RecoveredGlobal_80222C54_lbl_8044C330)) == 0x10) ? (1) : (-1)];
s32 get_guild_text(s32 arg0) {
  s32 new_var;
  if (((s32 *) (*(s32 * *)&lbl_805D6258)) != 0)
  {
    new_var = *((s32 *) (((s8 *) (((u8 *) (&lbl_8044C330.value)) + (get_game_play_mode() * 4))) + 0));
    return *((s32 *) (((s8 *) ((*((s32 *) (((s8 *) ((*((s32 *) (((s8 *) (*(s32 * *)&lbl_805D6258)) + 0))) + (new_var * 4))) + 0))) + (arg0 * 4))) + 0));
  }
  return quest_and_shop_error_text;
}

typedef struct RecoveredGlobal_80222CBC_lbl_8044C308 RecoveredGlobal_80222CBC_lbl_8044C308;
typedef char RecoveredGlobal_80222CBC_lbl_8044C308_size[((sizeof(RecoveredGlobal_80222CBC_lbl_8044C308)) == 0x28) ? (1) : (-1)];
s32 get_appraisal_text(s32 arg0) {
  if (((s32 *) (*(s32 * *)&lbl_805D6258)) != 0)
  {
    return *((s32 *) (((s8 *) ((*((s32 *) (((s8 *) ((*((s32 *) (((s8 *) (*(s32 * *)&lbl_805D6258)) + 0))) + ((*((s32 *) (((s8 *) (((u8 *) (&lbl_8044C308.value)) + (lbl_805D6238 * 4))) + 0))) * 4))) + 0))) + (2 * (2 * arg0)))) + 0));
  }
  return quest_and_shop_error_text;
}

s32 get_shop_text(s32 arg0) {
    if ((s32 **) lbl_805D6258 != NULL) {
        return M2C_FIELD(**lbl_805D6258, M2C_UNK *, (arg0 * 4));
    }
    return quest_and_shop_error_text;
}

}
