#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TObjPlayer__sub_8011E204(void *, u32);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
void clear_stealth_suit_flags__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void clear_stealth_suit_flags__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_8011E204(arg0, 0x800000U);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000);
}

}
