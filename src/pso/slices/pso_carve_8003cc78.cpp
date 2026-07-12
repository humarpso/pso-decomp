#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss3Volopt__sub_8003F240(void *);
extern M2C_UNK lbl_804FEE74[];
void TLobby__sub_803DE778(void *, void *, int);
void TCameraCtrl__sub_8003CFFC(int);
extern u32 lbl_805D4C44;

void handle_6x16_vol_opt_boss_actions(void *arg0) {
    TBoss3Volopt__sub_8003F240(arg0);
    TLobby__sub_803DE778(lbl_804FEE74, (void *)((char *)arg0 + 4), 6);
    TCameraCtrl__sub_8003CFFC(M2C_FIELD(arg0, s16 *, 0xA));
    lbl_805D4C44 = -1;
}

}
