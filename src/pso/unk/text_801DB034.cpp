#include "types.h"
struct Pkt_801DB034 { u32 hdr; u8 body[0x10]; };

extern "C" {
void bswap_cmd_8a_header(void *);
void handle_cmd_8A__9TProtocolFR6packet(u8 *arg0, Pkt_801DB034 *arg1);
}

extern "C" {

typedef void (*Fn_801DB034)(void *);
void handle_cmd_8A__9TProtocolFR6packet(u8 *arg0, Pkt_801DB034 *arg1) {
    Pkt_801DB034 tmp = *arg1;
    bswap_cmd_8a_header(&tmp);
    Fn_801DB034 f = *(Fn_801DB034 *)(arg0 + 0xBC88);
    if (f != NULL) {
        f(tmp.body);
    }
}

}
