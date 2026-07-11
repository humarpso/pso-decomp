#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GameListEntry_80139538 { char pad[0x1C]; };
struct Root_80139538 { char pad[0x1DA8]; struct GameListEntry_80139538 entries[1]; };

extern "C" {

void handle_game_list_select__6TLobbyFv(void);
M2C_UNK close_and_set_state_12__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK TWindow__close(u32);
s32 fn_8013AD38(u32);
s32 fn_8013AD44(u32);
s32 fn_80266E0C(u32);
M2C_UNK send_action__9TProtocolFR13GameListEntryPcPc(void *, void *, M2C_UNK *, M2C_UNK *);

extern struct Root_80139538 *TLobby__data_805D5580;
extern u32 TLobby__data_805D55D0;
extern M2C_UNK TLobby__data_805DB0B0;

void handle_game_list_select__6TLobbyFv(void) {
    s32 temp_r31;

    if (TLobby__data_805D55D0 != 0U) {
        if (fn_8013AD38(TLobby__data_805D55D0) != 0) {
            temp_r31 = fn_80266E0C(TLobby__data_805D55D0);
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            send_action__9TProtocolFR13GameListEntryPcPc(TLobby__data_805D5580, &TLobby__data_805D5580->entries[temp_r31], &TLobby__data_805DB0B0, &TLobby__data_805DB0B0);
            close_and_set_state_12__6TLobbyFv();
            return;
        }
        if (fn_8013AD44(TLobby__data_805D55D0) != 0) {
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            close_all_windows__6TLobbyFv();
        }
    }
}

}
