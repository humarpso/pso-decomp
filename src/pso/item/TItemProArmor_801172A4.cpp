#include "types.h"

extern "C" {

s16 calc_armor_value__13TItemProArmorFv(void);
u8 get_tool_pmt_amount_byte();

extern s32 game_difficulty_selection;

s16 calc_armor_value__13TItemProArmorFv(void) {
    return (s16) ((game_difficulty_selection * 0x19) + get_tool_pmt_amount_byte());
}

}
