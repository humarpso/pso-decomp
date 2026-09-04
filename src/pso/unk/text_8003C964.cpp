#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_actions__12TBoss3VoloptFPv(void *);
extern M2C_UNK lbl_804FEE74[];
void move_data__6TLobbyFv(void *, void *, int);
extern u32 lbl_805D4C44;
void TCameraCtrl__sub_8003CFFC(int);

void handle_6x84_vol_opt_boss_actions(void *arg0) {
    bswap_actions__12TBoss3VoloptFPv(arg0);
    move_data__6TLobbyFv(lbl_804FEE74, (void *)((char *)arg0 + 4), 6);
    lbl_805D4C44 = M2C_FIELD(arg0, s16 *, 0xC);
    TCameraCtrl__sub_8003CFFC(M2C_FIELD(arg0, s16 *, 0xA));
}

}
