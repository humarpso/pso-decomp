#include "pso/TProtocol.h"
#include <stddef.h>
typedef char TradeResultCallbackOffset[(offsetof(TProtocol, m_recv_handlers) + offsetof(recv_packet_handlers, handle_D4_trade_result_packet) == 0xBC9C) ? 1 : -1];
typedef char TradeAdvanceCallbackOffset[(offsetof(TProtocol, m_recv_handlers) + offsetof(recv_packet_handlers, handle_D1_advance_trade_state_packet) == 0xBCA0) ? 1 : -1];
typedef char TradeHeaderSize[sizeof(packet_header) == 4 ? 1 : -1];
typedef char TradeStateOffset[offsetof(packet_header, flags) == 1 ? 1 : -1];

void TProtocol::send_cancel_trade() {
    packet_header header;
    header.command = 0xD4;
    header.flags = 0;
    header.size = sizeof(header);
    header.bswap();
    send((u8*)&header, sizeof(header));
}

void TProtocol::recv_trade_result(packet &pkt) {
    packet_header header = pkt.pkt.header;
    header.bswap();
    if (m_recv_handlers.handle_D4_trade_result_packet != 0) {
        m_recv_handlers.handle_D4_trade_result_packet(header.flags);
    }
}

void TProtocol::send_trade_ready() {
    packet_header header;
    header.command = 0xD2;
    header.flags = 0;
    header.size = sizeof(header);
    header.bswap();
    send((u8*)&header, sizeof(header));
}

void TProtocol::recv_advance_trade_state(packet &pkt) {
    packet_header header = pkt.pkt.header;
    header.bswap();
    if (m_recv_handlers.handle_D1_advance_trade_state_packet != 0) {
        m_recv_handlers.handle_D1_advance_trade_state_packet(header.flags);
    }
}

void TProtocol::send_info_board_request() {
    packet_header header;
    memset(&header, 0, sizeof(header));
    header.command = 0xD8;
    header.flags = 0;
    header.size = sizeof(header);
    header.bswap();
    send((u8*)&header, sizeof(header));
}

void TProtocol::send_disable_auto_reply() {
    packet_header header;
    header.command = 0xC8;
    header.flags = 0;
    header.size = sizeof(header);
    header.bswap();
    send((u8*)&header, sizeof(header));
}
