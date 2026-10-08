#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
s32 TPlayerBattleCtrl4P__sub_8031030C(void *);
extern s32 TLobby__data_805D5DC0;
s32 get_battle_ctrl_default__6TLobbyFPv(void *self);
}

extern "C" {

void *create__16TAdChrSelBSlotGCFPv(void *arg0);
int get_global_state__16TAdChrSelBSlotGCFv(void);
int get_global_slot_data__16TAdChrSelBSlotGCFv(void);
void *TAdChrSelBSlotGC__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__16TAdChrSelBSlotGCFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x80);
    if (o != NULL) {
        o = TAdChrSelBSlotGC__ct(o, arg0);
    }
    return o;
}

    extern int lbl_805D6AA0;
int get_global_state__16TAdChrSelBSlotGCFv(void) {  return lbl_805D6AA0; }

    extern int lbl_805D6A98;
int get_global_slot_data__16TAdChrSelBSlotGCFv(void) {  return lbl_805D6A98; }
s32 get_battle_ctrl_default__6TLobbyFPv(void *self) {
    return TPlayerBattleCtrl4P__sub_8031030C(self) != 0 ? 0 : TLobby__data_805D5DC0;
}

}
