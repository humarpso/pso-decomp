#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TFontSmallLobby__sub_801D6428(void);
u16 TFontSmallLobby__sub_801D67A4();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK send_field_state__10TObjPlayerFPv();

void TFontSmallLobby__sub_801D6428(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(TFontSmallLobby__sub_801D67A4()) != 0U) {
        send_field_state__10TObjPlayerFPv();
    }
}

}
