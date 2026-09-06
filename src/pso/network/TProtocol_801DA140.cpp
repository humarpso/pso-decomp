#include "pso/TProtocol.h"

void TProtocol::send_message_box_closed() {
    packet_header header;
    header.command = 0xD6;
    header.flags = 0;
    header.size = sizeof(header);
    header.bswap();
    send((u8*)&header, sizeof(header));
}
