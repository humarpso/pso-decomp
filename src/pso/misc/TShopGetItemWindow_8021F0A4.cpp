#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_shop_stock_and_params(void);
M2C_UNK clear_shop_armor_flags();
M2C_UNK clear_shop_weapon_flags();
s32 get_task_id__14TFontSmallTaskFPv(M2C_UNK *);
M2C_UNK clear_shop_tool_flags();

extern M2C_UNK TLobby__data_805011D8[];
extern s32 lbl_805D5550;
extern s32 lbl_805D6238;
extern s32 shop_difficulty_tier;
extern s32 lbl_805D6244;

void reset_shop_stock_and_params(void) {
    s32 temp_r3;

    clear_shop_weapon_flags();
    clear_shop_armor_flags();
    clear_shop_tool_flags();
    lbl_805D6244 = 0;
    temp_r3 = get_task_id__14TFontSmallTaskFPv(TLobby__data_805011D8);
    lbl_805D6238 = temp_r3;
    if (temp_r3 < 0) {
        lbl_805D6238 = 0;
    }
    if ((s32) lbl_805D6238 > 9) {
        lbl_805D6238 = 9;
    }
    shop_difficulty_tier = lbl_805D5550;
    if ((s32) lbl_805D5550 < 0) {
        shop_difficulty_tier = 0;
    }
    if ((s32) shop_difficulty_tier > 3) {
        shop_difficulty_tier = 3;
    }
}

}
