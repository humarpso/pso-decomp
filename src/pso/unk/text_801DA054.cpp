#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(s8 *, M2C_UNK);
};

struct Cfg_801DA054 { u32 w[8]; };

struct Pkt_801DA054 { u8 cmd; u8 flag; u16 size; struct Cfg_801DA054 cfg; };

extern "C" {
M2C_UNK bswap__13packet_headerFv(void *);
void handle_cmd_DA(u8 *arg0, s32 *arg1);
M2C_UNK bswap_packet_header__9TProtocolFPv(void *);
M2C_UNK __as__16TPlyClientConfigFRC16TPlyClientConfig(void *, void *);
M2C_UNK memset(void *, int, int);
void handle_cmd_9F(u8 *arg0);
}

extern "C" {

int handle_cmd_D7(void* p);
int fn_801E08F4(void*);

void handle_cmd_9F(u8 *arg0) {
    struct Pkt_801DA054 pkt;
    memset(&pkt, 0, 0x24);
    pkt.cmd = 0x9F;
    pkt.size = 0x24;
    __as__16TPlyClientConfigFRC16TPlyClientConfig(&pkt.cfg, arg0 + 0x3FAC);
    bswap_packet_header__9TProtocolFPv(&pkt);
    ((VObj_18 *)(arg0))->m8((s8 *)&pkt, 0x24);
}

void handle_cmd_DA(u8 *arg0, s32 *arg1) {
    s32 sp8;
    M2C_UNK (*temp_r12)(u8);
    sp8 = M2C_FIELD(arg1, s32 *, 0);
    bswap__13packet_headerFv((void *) (&sp8));
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(u8), 0xBC90);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(&sp8, u8 *, 0x1));
    }
}

int handle_cmd_D7(void* p) { return fn_801E08F4(p); }

}
