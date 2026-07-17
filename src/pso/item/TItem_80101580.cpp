#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void claim_ownership__5TItemFii(s32 arg0, s32 arg1);
M2C_UNK set_item_count__6TLobbyFPvs(s32, s32);
s32 TLobby__sub_80103AD4();
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(s32, M2C_UNK, M2C_UNK);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(s32);
u16 obj_getField1c();

void claim_ownership__5TItemFii(s32 arg0, s32 arg1) {
    if ((u16) obj_getField1c() == 0xFFFF) {
        set_item_count__6TLobbyFPvs(arg0, TLobby__sub_80103AD4());
        reset_photon_effect__10TObjPlayerFPv(arg0);
        if (arg1 != 0) {
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        }
    }
}

}
