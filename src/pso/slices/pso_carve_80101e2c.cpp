#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_shop_item__6TLobbyFPv(void *);
s32 is_not_matching_lobby_id__10TObjPlayerFPv(void *);
void TItemData__sub_8010CCB0(void *);
void TItem__sub_801007B4(int, void *);
struct VOff_80101E2C_arg0 { char pad_0[0x4]; char f_4[1]; };

void handle_6x5E_buy_shop_item(void *arg0) {
    s32 x;
    struct VOff_80101E2C_arg0 *self = (struct VOff_80101E2C_arg0 *)arg0;
    bswap_shop_item__6TLobbyFPv(arg0);
    x = is_not_matching_lobby_id__10TObjPlayerFPv(arg0);
    if (x != 0) {
        TItemData__sub_8010CCB0(self->f_4);
        TItem__sub_801007B4(M2C_FIELD(arg0, u16 *, 0x2), self->f_4);
    }
}

}
