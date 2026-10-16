#include "types.h"
#include "pso/item/TItemProArmor.h"

extern "C" {

u8 get_tool_pmt_amount_byte__11TItemObjectFv();

extern s32 game_difficulty_selection;

s16 TItemProArmor::calc_armor_value() {
    return (s16) ((game_difficulty_selection * 0x19) + get_tool_pmt_amount_byte__11TItemObjectFv());
}

}
