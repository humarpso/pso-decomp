#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801DA7DC { char pad[0x18]; };
struct VObj_801DA7DC : Base_801DA7DC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m_call(void *a1, M2C_UNK a2);
};

struct Pkt_801DA848 { u8 hdr[4]; u8 body[0xD50]; };

extern "C" {
M2C_UNK bswap__13packet_headerFv(void *);
void handle_cmd_9C(u8 *arg0, s32 *arg1);
void bswap_cmd_c5(void *);
void handle_cmd_C5(u8 *arg0, Pkt_801DA848 *arg1);
}

extern "C" {

void send_c6_packet__6TLobbyFPvPv(void *arg0, void *arg1);
M2C_UNK bswap_c6_packet__6TLobbyFPv(void *);

void send_c6_packet__6TLobbyFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1910) != 0) {
        M2C_FIELD(arg1, u8 *, 0) = 0xC6;
        M2C_FIELD(arg1, s16 *, 2) = 0x7C;
        bswap_c6_packet__6TLobbyFPv(arg1);
        ((VObj_801DA7DC *)arg0)->m_call(arg1, 0x7C);
    }
}

typedef void (*Fn_801DA848)(void *, u8);
void handle_cmd_C5(u8 *arg0, Pkt_801DA848 *arg1) {
    Pkt_801DA848 tmp = *arg1;
    bswap_cmd_c5(&tmp);
    Fn_801DA848 f = *(Fn_801DA848 *)(arg0 + 0xBC8C);
    if (f != NULL) {
        f(tmp.body, tmp.hdr[1]);
    }
}

void handle_cmd_9C(u8 *arg0, s32 *arg1) {
    s32 sp8;
    M2C_UNK (*temp_r12)(u8);
    sp8 = M2C_FIELD(arg1, s32 *, 0);
    bswap__13packet_headerFv((void *) (&sp8));
    M2C_FIELD(arg0, s32 *, 0x190C) = (s32) M2C_FIELD(&sp8, u8 *, 0x1);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(u8), 0xBC2C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(&sp8, u8 *, 0x1));
    }
}

}
