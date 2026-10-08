#include "types.h"
extern "C" {
s32 is_split_screen(void);
void set_player_count__6TLobbyFi(int);
void TLobby__sub_802930B8(void);
extern s32 TAdMultiSelGameModeGC__data_805D69F0;
void fn_803000C8(void);
}

extern "C" {

void fn_803000C8(void) {
    if (is_split_screen() != 0) {
        switch (TAdMultiSelGameModeGC__data_805D69F0) {
        case 1:
            set_player_count__6TLobbyFi(1);
            break;
        case 2:
            TLobby__sub_802930B8();
            break;
        case 0:
            break;
        }
    }
}

}
