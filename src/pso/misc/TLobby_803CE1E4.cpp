#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby::set_flag_4(s8 arg1) {
    u8 *arg0 = (u8 *)this;
    *(s8 *)&this->m_flags = arg1;
}

void TLobby::set_client_slot(s8 arg1) {
    u8 *arg0 = (u8 *)this;
    *(s8 *)((s8 *)arg0 + 3) = arg1;
}

}
