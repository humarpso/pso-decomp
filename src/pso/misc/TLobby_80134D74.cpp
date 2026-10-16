#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/TProtocol.h"

extern "C" {

extern void *TLobby__protocol_instance;

void TLobby::disconnect_protocol() {
    void *temp_r3;
    temp_r3 = TLobby__protocol_instance;
    if (temp_r3 != NULL) {
        ((TProtocol *)temp_r3)->send_logout();
    }
}

}
