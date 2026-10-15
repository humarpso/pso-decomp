#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int read_be16_field2__10TObjPlayerFv(void*);

int TLobby::bswap_packet_header() { return read_be16_field2__10TObjPlayerFv(this); }

}
