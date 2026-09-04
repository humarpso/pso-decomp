#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_801B07E0(s32 arg0);
void check_flag_01000000__10TObjPlayerFPv(void *arg0);
void set_flag_drop_weapon_on_death__10TObjPlayerFPv(void *arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);
M2C_UNK check_flag__10TObjPlayerFPvi(void *, M2C_UNK);

void check_flag_01000000__10TObjPlayerFPv(void *arg0) {
    check_flag__10TObjPlayerFPvi(arg0, 0x01000000);
}

void set_flag_drop_weapon_on_death__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8011E204(arg0, 0x01000000);
}

s32 TLobby__sub_801B07E0(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

}
