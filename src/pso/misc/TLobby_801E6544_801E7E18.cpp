#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int destroy__6TLobbyFPv(void* p);
int get_selected_slot__6TLobbyFPv(void* p);
int init_graph__6TLobbyFPv(void* p);
void notify_player_battle__6TLobbyFv(void);
void set_handler_entry__6TLobbyFi(int a0);
M2C_UNK TObjPlayer__sub_801B8DE8(u32, s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
int TWindowSubComCard__sub_8007AFB8(void);
int destroy_singleton__6TLobbyFv(void*);
int get_selected_slot__6TLobbyFv(void*);
int init_graph__6TLobbyFv(void*);

    extern int* TLobby__data_805D5E78;
void set_handler_entry__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TWindowSubComCard__sub_8007AFB8(); }

extern s32 TLobby__data_80512220[];
extern s32 lbl_805D53A0;

void notify_player_battle__6TLobbyFv(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = TLobby__data_80512220[0];
    ret = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (ret != 0U) {
        TObjPlayer__sub_801B8DE8(ret, temp_r31, 1);
    }
}

int get_selected_slot__6TLobbyFPv(void* p) { return get_selected_slot__6TLobbyFv(p); }
int destroy__6TLobbyFPv(void* p) { return destroy_singleton__6TLobbyFv(p); }
int init_graph__6TLobbyFPv(void* p) { return init_graph__6TLobbyFv(p); }

}
