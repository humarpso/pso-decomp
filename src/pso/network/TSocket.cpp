// Adapted from pso-gc-reference (mrb0nk500) for GPOE8P (MWCC 2.6)

#include "types.h"
#include <string.h>
#include "pso/macros.h"
#include "pso/TObject.h"
#include "pso/TSocket.h"

extern const char *sock_status_names[];

int TSocket::is_empty() {
    if (all_parents_unqueued_for_destruction()) {
        return !m_size;
    } else {
        return true;
    }
}

const u8 TSocket::next() {
    const u8 val = m_packet_buffer[m_buffer_offset++];
    if (m_buffer_offset >= m_size) {
        m_buffer_offset = 0;
        m_size = 0;
    }
    return val;
}

void TSocket::set_port(u32 port) {
    m_dst_port = to_le_uint16_t(port);
}

void TSocket::set_ip_address(u32 addr) {
    u8 *ptr = reinterpret_cast<u8 *>(&addr);
    m_dst_addr.addr_bytes[3] = ptr[0];
    m_dst_addr.addr_bytes[2] = ptr[1];
    m_dst_addr.addr_bytes[1] = ptr[2];
    m_dst_addr.addr_bytes[0] = ptr[3];
}

int TSocket::resolve_domain(char *domain) {
    return 0;
}

TSocket::TSocket(TObject *parent) : TObject(parent) {
    m_dst_addr.addr_bytes[0] = 0;
    m_dst_addr.addr_bytes[1] = 0;
    m_dst_addr.addr_bytes[2] = 0;
    m_dst_addr.addr_bytes[3] = 0;
    m_dst_port = 0;
    m_src_port = 0;
    m_sock_fd = -1;
    m_is_invalid_packet = false;
    m_size = 0;
    m_buffer_offset = 0;
    m_buffer_cleared = true;
    m_callback = nullptr;
}

char *get_sock_status_name(s16 status) {
    return (char *)sock_status_names[(u8)-status & 0xF];
}

u16 to_be_uint16_t(u16 val) {
    u8 *ptr = reinterpret_cast<u8 *>(&val);
    return ptr[0] + (ptr[1] << 8);
}

u16 to_le_uint16_t(u16 val) {
    u8 *ptr = reinterpret_cast<u8 *>(&val);
    return ptr[1] + (ptr[0] << 8);
}

TSocket::~TSocket() {

}
