#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/TProtocol.h"
struct Lobby_80074C20 { u8 pad[0xBC88]; void *cb; };

extern "C" {
void fn_80074C70(void);
void fn_80074BD0(void);
extern Lobby_80074C20 *TLobby__protocol_instance;
s32 TLobby::start_lobby_name_request() {
    fn_80074C70();
    if (TLobby__protocol_instance == 0) {
        return 0;
    }
    TLobby__protocol_instance->cb = (void *)fn_80074BD0;
    ((TProtocol *)TLobby__protocol_instance)->send_lobby_name_request();
    return 1;
}

}
