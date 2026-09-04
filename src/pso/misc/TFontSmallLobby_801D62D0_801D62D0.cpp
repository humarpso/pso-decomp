#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_photon_blast_ready__15TFontSmallLobbyFv(void);
void update_if_ready__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801D67AC(void*);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
u16 get_type__15TFontSmallLobbyFPv();
M2C_UNK send_field_state__10TObjPlayerFPv();
int update_ready__15TFontSmallLobbyFPv(void*);

void send_photon_blast_ready__15TFontSmallLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(get_type__15TFontSmallLobbyFPv()) != 0U) {
        send_field_state__10TObjPlayerFPv();
    }
}

void update_if_ready__15TFontSmallLobbyFPv(void* p) { if (TFontSmallLobby__sub_801D67AC(p) != 0) { update_ready__15TFontSmallLobbyFPv(p); } }

}
