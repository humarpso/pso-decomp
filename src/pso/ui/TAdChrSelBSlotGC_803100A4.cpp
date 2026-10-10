#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
s32 are_split_screen_battle_players_tied(void *);
extern s32 TLobby__battle_ctrl_default_value;
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

    extern int TAdChrSelBSlotGC__global_state;
int get_global_state__16TAdChrSelBSlotGCFv(void) {  return TAdChrSelBSlotGC__global_state; }

    extern int TAdChrSel__global_slot_data;
int get_global_slot_data__16TAdChrSelBSlotGCFv(void) {  return TAdChrSel__global_slot_data; }
s32 get_battle_ctrl_default__6TLobbyFPv(void *self) {
    return are_split_screen_battle_players_tied(self) != 0 ? 0 : TLobby__battle_ctrl_default_value;
}

}
