#include "types.h"

extern "C" {

void disconnect_protocol__6TLobbyFv(void);
s32 send_logout__9TProtocolFv(void *);

extern void *TLobby__protocol_instance;

void disconnect_protocol__6TLobbyFv(void) {
    void *temp_r3;
    temp_r3 = TLobby__protocol_instance;
    if (temp_r3 != NULL) {
        send_logout__9TProtocolFv(temp_r3);
    }
}

}
