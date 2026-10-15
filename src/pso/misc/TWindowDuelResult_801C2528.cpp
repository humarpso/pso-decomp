#include "types.h"

struct RecoveredGlobal_801C257C_TLobby__data_80511C80 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
s32 is_not_split_screen__13TRaderMapCoreFv(void);
u8 * get_split_screen_battle_rankings(void);
extern RecoveredGlobal_801C257C_TLobby__data_80511C80 TLobby__duel_result_table;
s32 *TWindowDuelResult__sub_801C257C(void);
}

extern "C" {

void *init__17TWindowDuelResultFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
void set_and_notify__6TLobbyFi(void *);

extern s32 lbl_804C3E60[];

void *init__17TWindowDuelResultFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C3E60;
    *(void **)((s8 *)arg0 + 0x1C) = arg3;
    *(void **)((s8 *)arg0 + 0x20) = arg2;
    set_and_notify__6TLobbyFi(arg2);
    return arg0;
}
typedef char RecoveredGlobal_801C257C_TLobby__data_80511C80_size[sizeof(RecoveredGlobal_801C257C_TLobby__data_80511C80) == 0x20 ? 1 : -1];
s32 *TWindowDuelResult__sub_801C257C(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return (long *) (get_split_screen_battle_rankings());
    }
    return &TLobby__duel_result_table.value;
}

}
