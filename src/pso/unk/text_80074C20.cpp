#include "types.h"
struct Lobby_80074C20 { u8 pad[0xBC88]; void *cb; };

extern "C" {
void fn_80074C70(void);
void fn_80074BD0(void);
s32 send_lobby_name_request__9TProtocolFv(void *);
extern Lobby_80074C20 *TLobby__data_805D5580;
s32 TLobby__sub_80074C20(void);
}

extern "C" {

s32 TLobby__sub_80074C20(void) {
    fn_80074C70();
    if (TLobby__data_805D5580 == 0) {
        return 0;
    }
    TLobby__data_805D5580->cb = (void *)fn_80074BD0;
    send_lobby_name_request__9TProtocolFv(TLobby__data_805D5580);
    return 1;
}

}
