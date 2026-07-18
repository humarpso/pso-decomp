#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_photon_blast_ready__15TFontSmallLobbyFv(void);
u16 get_type__15TFontSmallLobbyFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK send_field_state__10TObjPlayerFPv();

void send_photon_blast_ready__15TFontSmallLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(get_type__15TFontSmallLobbyFPv()) != 0U) {
        send_field_state__10TObjPlayerFPv();
    }
}

}
