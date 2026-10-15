#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 send_logout__9TProtocolFv(void *);

extern void *TLobby__protocol_instance;

void TLobby::disconnect_protocol() {
    void *temp_r3;
    temp_r3 = TLobby__protocol_instance;
    if (temp_r3 != NULL) {
        send_logout__9TProtocolFv(temp_r3);
    }
}

}
