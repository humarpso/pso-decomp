#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TPlayerBattleCtrl4P__vt0(void* p);
void TPlayerBattleCtrl4P__vt7(void *arg0);
int TPlayerBattleCtrl4P__sub_803112AC(void*, void*);
int TPlayerBattleCtrl4P__sub_8031171C(void*);
void send_and_handle__6TLobbyFPvii(void *, void *, int);
void set_score__19TPlayerBattleCtrl4PFPvi(void *, int);

void TPlayerBattleCtrl4P__vt7(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x20) != NULL) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, void **, 0x20), (void *)((char *)arg0 + 56), 128);
    }
    M2C_FIELD(arg0, u32 *, 0x240) = 240;
    set_score__19TPlayerBattleCtrl4PFPvi(arg0, 2);
}

void TPlayerBattleCtrl4P__vt0(void* p) { TPlayerBattleCtrl4P__sub_8031171C(p); TPlayerBattleCtrl4P__sub_803112AC(p, (void*)1); }

}
