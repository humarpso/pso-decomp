#include "types.h"

extern "C" {

u8 is_idle__6TLobbyFv(void);

extern s32 TLobby__data_805D5594;

u8 is_idle__6TLobbyFv(void) {
    return (u8) (TLobby__data_805D5594 == 0);
}

}
