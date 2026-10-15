#include "types.h"

extern "C" {

void set_flag_4__6TLobbyFPvc(u8 *arg0, s8 arg1);
void set_client_slot__6TLobbyFPvc(u8 *arg0, s8 arg1);

void set_flag_4__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    *(s8 *)((s8 *)arg0 + 4) = arg1;
}

void set_client_slot__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    *(s8 *)((s8 *)arg0 + 3) = arg1;
}

}
