#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_801EE6A0(void* p);
int create_alt_timer__6TLobbyFPv(void* p);
void notify_battle_ctrl_player__6TLobbyFv(void);
void open_door__6TLobbyFv(void);
void set_table_entry__6TLobbyFi(int a0);
void update_doors__6TLobbyFv(void);
int TLobby__sub_803DF1CC(void);
int TObjDoor__sub_801F3754(void);
int TObjDoor__sub_801F3760(void);
M2C_UNK TObjPlayer__sub_80011160(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
int TWindowCtrl__sub_8024A4EC(void*);
int create_alt_timer__11TWindowCtrlFv(void*);
int reset_door_state__6TLobbyFv(void);
int reset_instance__8TObjDoorFv(void);

    extern int* TLobby__data_805D5E78;
void set_table_entry__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_803DF1CC(); }

int TLobby__sub_801EE6A0(void* p) { return TWindowCtrl__sub_8024A4EC(p); }
int create_alt_timer__6TLobbyFPv(void* p) { return create_alt_timer__11TWindowCtrlFv(p); }
void open_door__6TLobbyFv(void) { reset_door_state__6TLobbyFv(); reset_instance__8TObjDoorFv(); }
void update_doors__6TLobbyFv(void) { TObjDoor__sub_801F3760(); TObjDoor__sub_801F3754(); }

extern s32 TLobby__data_80512220[];
extern s32 lbl_805D53A0;

void notify_battle_ctrl_player__6TLobbyFv(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = TLobby__data_80512220[0];
    ret = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (ret != 0U) {
        TObjPlayer__sub_80011160(ret, temp_r31);
    }
}

}
