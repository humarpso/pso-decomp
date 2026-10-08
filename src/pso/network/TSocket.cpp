// Adapted from pso-gc-reference (mrb0nk500) for GPOE8P (MWCC 2.6)

#include "types.h"
#include <string.h>
#include "pso/macros.h"
#include "pso/TObject.h"
#include "pso/TSocket.h"

extern const char *sock_status_names[];

extern "C" {
void func_80019A68__Fv();
s32 get_csn_group_flags(s32);
s8 func_801A5E54__Fv();
void controller_stuff__Fv();
void render_tick__Fv();
void bswap_32__FPUl(u32 *);
void render_screen_overlay__9TMainTaskFv(void *);
void some_empty_func__9TMainTaskFv(void *);
void run_tl_camera_tasks__9TMainTaskFv(void *);
void render__9TMainTaskFv(void *);
int atoi(const char *);
void func_803DCDFC__Fv();
s8 str_length__6TLobbyFi(char *);
void TLobby__sub_8040A630(s16);
s16 TLobby__sub_8040A698(s16, void *, void *, int, void *, int);
s16 TLobby__sub_8040A8B0(char *, s32, int);
}

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
    s32 ret;
    s16 result;
    s32 i;
    s32 n;
    char *start;
    s16 count;
    s16 handle;
    char buf[0x20];
    u32 sp10[4];
    s32 spC;
    s16 spA;
    s16 sp8;

    start = buf;
    memset(start, 0, 0x20);
    strncpy(start, domain, 0x1F);
    if (get_csn_group_flags(buf[0]) != 0) {
        handle = TLobby__sub_8040A8B0(start, str_length__6TLobbyFi(start), 4);
        if (handle >= 0) {
            spC = 4;
            count = 0;
            spA = 1;
            sp8 = 0;
            do {
                result = TLobby__sub_8040A698(handle, &spC, &spA, 0, &sp8, -1);
                count++;
                if (count > 0x1518) {
                    break;
                }
                func_803DCDFC__Fv();
                controller_stuff__Fv();
                if (func_801A5E54__Fv() != 0) {
                    break;
                }
                some_empty_func__9TMainTaskFv(&main_task);
                run_tl_camera_tasks__9TMainTaskFv(&main_task);
                render__9TMainTaskFv(&main_task);
                render_screen_overlay__9TMainTaskFv(&main_task);
                func_80019A68__Fv();
                render_tick__Fv();
            } while (result == -1);
            switch (result) {
            case 0:
                bswap_32__FPUl(sp10);
                set_ip_address(sp10[0]);
                ret = 0;
                break;
            case -66:
            case -68:
            case -70:
            case -2:
                set_ip_address(0);
                ret = 3;
                break;
            case -71:
                set_ip_address(0);
                ret = 5;
                break;
            case -1:
            case -69:
                set_ip_address(0);
                ret = 2;
                break;
            default:
                set_ip_address(0);
                ret = 6;
                break;
            }
            TLobby__sub_8040A630(handle);
        } else {
            set_ip_address(0);
            ret = 4;
        }
        return ret;
    }
    i = 0;
    n = 0;
    while (n < 4) {
        if (buf[i] == '.' || buf[i] == 0) {
            buf[i] = 0;
            m_dst_addr.addr_bytes[n] = atoi(start);
            start = &buf[i + 1];
            n++;
        }
        i++;
    }
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
