#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80078378_lbl_8048D3B8 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct Sock_80078110 { char pad[0x1c]; s32 f1c; u16 port; u8 pad22[2]; s32 addr; s16 fd; };

struct Q_80078110 { s32 len; s32 v; u8 pad[0xc]; };

struct R_80078110 { s16 a; s32 b; };

struct C_80078110 { s32 len; s8 a; s8 b; s8 c; u8 pad[8]; };

struct Sock_800781B8 { char pad[0x1c]; s32 f1c; u16 port; u8 pad22[2]; s32 addr; s16 fd; };

struct Q_800781B8 { s32 len; s32 v; u8 pad[0xc]; };

struct R_800781B8 { s16 a; s32 b; };

struct C_800781B8 { s32 len; s8 a; s8 b; s8 c; u8 pad[8]; };

extern "C" {
void fn_8007841C(void *, void *);
extern RecoveredGlobal_80078378_lbl_8048D3B8 lbl_8048D3B8;
s32 TUdpSocket__sub_80078378(s16 arg0, u8 *arg1);
void TLobby__sub_8014672C(void *);
void bswap_16__FPUs(void *);
void TUdpSocket__sub_80421BAC(int, void *, void *, int, void *, int, void *);
void TUdpSocket__sub_80078110(Sock_80078110 *arg0, s32 arg1, s16 arg2);
void TLobby__sub_8014672C(void *);
void bswap_16__FPUs(void *);
s16 strlen(void *);
void TUdpSocket__sub_80421BAC(int, void *, void *, int, void *, int, void *);
void TUdpSocket__sub_800781B8(Sock_800781B8 *arg0, s32 arg1);
}

extern "C" {

struct Base_80078064 { char pad[0x18]; };
struct VObj_80078064 : Base_80078064 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5();
};

void *__dt__10TUdpSocketFv(void *arg0, s16 arg1);
void reset_buffer(u8 *arg0);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TSocketFv(void *, M2C_UNK);
M2C_UNK memset(void *, int, int);

extern M2C_UNK __vt__10TUdpSocket[];

void *__dt__10TUdpSocketFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_80078064 *o = (struct VObj_80078064 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TUdpSocket;
        o->m5();
        __dt__7TSocketFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void reset_buffer(u8 *arg0) {
    memset(arg0 + 0x74, 0, 0x800);
    M2C_FIELD(arg0, s8 *, 0x2B) = 1;
}
typedef char RecoveredGlobal_80078378_lbl_8048D3B8_size[sizeof(RecoveredGlobal_80078378_lbl_8048D3B8) == 0x40 ? 1 : -1];

void TUdpSocket__sub_80078110(Sock_80078110 *arg0, s32 arg1, s16 arg2) {
    Q_80078110 q2;
    Q_80078110 q1;
    C_80078110 c;
    R_80078110 r;
    u16 port;
    q1.len = 4;
    q1.v = arg0->f1c;
    TLobby__sub_8014672C(&arg0->addr);
    q2.len = 4;
    q2.v = arg0->addr;
    c.len = 4;
    c.a = 0x78;
    c.b = 0;
    c.c = 0;
    r.b = arg1;
    r.a = arg2;
    port = arg0->port;
    bswap_16__FPUs(&port);
    TUdpSocket__sub_80421BAC(arg0->fd, &q2, &q1, port, &c, 1, &r);
}

void TUdpSocket__sub_800781B8(Sock_800781B8 *arg0, s32 arg1) {
    Q_800781B8 q2;
    Q_800781B8 q1;
    C_800781B8 c;
    R_800781B8 r;
    u16 port;
    q1.len = 4;
    q1.v = arg0->f1c;
    TLobby__sub_8014672C(&arg0->addr);
    q2.len = 4;
    q2.v = arg0->addr;
    c.len = 4;
    c.a = 0x78;
    c.b = 0;
    c.c = 0;
    r.b = arg1;
    r.a = strlen((void *)arg1);
    port = arg0->port;
    bswap_16__FPUs(&port);
    TUdpSocket__sub_80421BAC(arg0->fd, &q2, &q1, port, &c, 1, &r);
}

s32 TUdpSocket__sub_80078378(s16 arg0, u8 *arg1) {
    M2C_UNK (*temp_r12)(void *);
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(&lbl_8048D3B8.value, M2C_UNK *, ((M2C_FIELD(arg1, s16 *, 0) - 0x400) * 4)));
    if (temp_r5 == NULL) {
        return 1;
    }
    if (arg0 == 0) {
        M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_r5 + 0x74);
        fn_8007841C(temp_r5 + 0x884, arg1);
        M2C_FIELD(arg1, s16 *, 2) = 0x800;
    } else {
        M2C_FIELD(temp_r5, s8 *, 0x2B) = 0;
        M2C_FIELD(temp_r5, s16 *, 0x2E) = 0;
        M2C_FIELD(temp_r5, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
        temp_r12 = M2C_FIELD(temp_r5, M2C_UNK (**)(void *), 0x880);
        if (temp_r12 != NULL) {
            temp_r12(temp_r5);
        }
    }
    return 0;
}

}
