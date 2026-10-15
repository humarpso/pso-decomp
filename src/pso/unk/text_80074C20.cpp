#include "types.h"
#include "pso/misc/TLobby.h"
struct Lobby_80074C20 { u8 pad[0xBC88]; void *cb; };

extern "C" {
void fn_80074C70(void);
void fn_80074BD0(void);
s32 send_lobby_name_request__9TProtocolFv(void *);
extern Lobby_80074C20 *TLobby__protocol_instance;
}

extern "C" {

s32 TLobby::start_lobby_name_request() {
    fn_80074C70();
    if (TLobby__protocol_instance == 0) {
        return 0;
    }
    TLobby__protocol_instance->cb = (void *)fn_80074BD0;
    send_lobby_name_request__9TProtocolFv(TLobby__protocol_instance);
    return 1;
}

}
