#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

    extern unsigned char TLobby__trade_partner_client_id;
unsigned char TLobby::get_trade_mode() {  return TLobby__trade_partner_client_id; }

}
