#include "pso/network/NetworkDispatch.h"
#include "pso/misc/TLobby.h"
#include "pso/network/BufferRef.h"
#include "pso/network/IPv6.h"

#include "types.h"
#include "pso/protocol/NetworkRuntime.h"

struct Self_803FD85C;
struct Tbl_803FD85C {
    u8 pad[0x14];
    void (*f14)(Self_803FD85C *, Tbl_803FD85C *);
    u8 pad18[8];
    void (*f20)(Self_803FD85C *, Tbl_803FD85C *);
};
struct Self_803FD85C {
    u8 f0; u8 f1; u8 f2; u8 f3; u8 f4; u8 f5; u8 f6; u8 f7;
    u8 pad8[8];
    u8 f10[0x1C];
    Tbl_803FD85C *tbl;
    void *f30;
};

struct Info_8040098C { u8 pad[0x1C]; s16 f1C; u8 pad1E[6]; u16 f24; u8 pad26[0x2A]; s16 f50; u8 pad52[6]; u16 f58; };
struct St_8040098C { s8 f0; u8 f1; u8 f2; u8 pad3[0x69]; u8 f6C[0x9C]; s32 f108; s32 f10C; };
struct Self_8040098C { u8 pad[0xC]; St_8040098C *st; u8 pad10[0x20]; Info_8040098C *info; };

struct RecoveredGlobal_803F8AA0_lbl_805BA5C0 {
    s32 value;
    u8 remaining[0x30A8];
};

struct RecoveredGlobal_803F8A0C_lbl_805B9534 {
    s32 value;
    u8 remaining[0x1088];
};

struct RecoveredGlobal_8041552C_lbl_805C1BE0 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_803FB110_lbl_805BFF68 {
    s32 value;
    u8 remaining[0xCC];
};

struct RecoveredGlobal_804050DC_lbl_805C18A0 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803FD520_lbl_805C0310 {
    s16 h0;
    s16 h2;
    s16 h4;
    s16 h6;
    s16 h8;
    u8 padA[2];
    s16 *buf;
    u8 pad10[6];
    s16 h16;
};

struct RecoveredGlobal_803F895C_lbl_805AEEB0 {
    s32 value;
    u8 remaining[0x49C4];
};

struct RecoveredGlobal_803F89A4_lbl_805B52D4 {
    s32 value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_803F89A4_lbl_805B5454 {
    s32 value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_803F89DC_lbl_805B54BC {
    s32 value;
    u8 remaining[0x3FFC];
};

struct RecoveredGlobal_803F89DC_lbl_805B94BC {
    s32 value;
    u8 remaining[0x74];
};

struct RecoveredGlobal_803F8A28_lbl_805AEEB0 {
    s32 value;
    u8 remaining[0x49C4];
};

struct RecoveredGlobal_803F94A0_lbl_805BF770 {
    s32 value;
    u8 remaining[0x74C];
};

struct RecoveredGlobal_803FC178_lbl_805C02D0 {
    s32 value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_803FC1A0_lbl_805C02D0 {
    s32 value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_80401A68_lbl_805C04A8 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80401A90_lbl_805C04A8 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80402B60_lbl_805C0620 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80402B88_lbl_805C0620 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80403D28_lbl_805C0638 {
    s32 value;
    u8 remaining[0x9C];
};

struct RecoveredGlobal_804050EC_lbl_805C18A0 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80405114_lbl_805C18A0 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8040EF00_lbl_805C1B60 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8040FE40_lbl_805C1B60 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8040FE9C_lbl_805C1B60 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8041123C_lbl_805C1BB8 {
    union { s32 value; struct { s16 a; s16 b; } ab; };
    s16 c;
    u8 remaining[0x22];
};

struct RecoveredGlobal_804112B8_lbl_805C1BB8 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80411ECC_lbl_805C1BB8 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8041471C_lbl_805C1BB8 {
    s32 value;
    u8 remaining[0x24];
};

#include <stddef.h>
struct Stack_80416008 {
    s32 sp10;
    u8 pad_14[0xC];
    s32 sp20;
    u8 trailing_storage[0x14];
};

struct E_805C1D48 { u8 pad[4]; u16 f4; s16 f6; u8 pad2[0x53C]; };
struct RecoveredGlobal_8041E178_lbl_805C1D48 {
    union { s32 value; E_805C1D48 *p; };
    s16 n;
    u8 remaining[0xA2];
};

struct RecoveredGlobal_803AA0C0_lbl_80556E88 {
    s32 value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803F8930_lbl_805B4F84 {
    s32 value;
    u8 remaining[0x34C];
};

struct RecoveredGlobal_803F8B7C_lbl_805BD66C {
    s32 value;
    u8 remaining[0xA00];
};

struct RecoveredFields_80401B8C_arg0 {
    s32 field_0;
    u16 field_4;
};

struct E_8040DDB0 { u8 c0; u8 c1; u8 c2; u8 c3; s16 f4; u8 pad6[0x16]; };
struct RecoveredGlobal_8040DD68_lbl_805C1B38 {
    s16 value;
    u8 pad2[2];
    E_8040DDB0 *ents;
    s16 f8;
    u8 padA[0x1E];
};

struct RecoveredGlobal_8040ED28_lbl_805C1B60 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8040ED70_lbl_805C1B60 {
    s32 value;
    u8 remaining[0x14];
};

struct E_8040FF58 { u8 c0; u8 c1; u8 c2; u8 c3; s16 f4; u8 pad6[0x2E]; };
struct RecoveredGlobal_8040FF0C_lbl_805C1B78 {
    s16 value;
    u8 pad2[2];
    E_8040FF58 *ents;
    s32 f8;
    u8 padC[0x34];
};

struct RecoveredGlobal_80415650_lbl_805C1BF8 {
    s16 value;
    u8 remaining[0xE];
};

struct RecoveredGlobal_80419A34_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80419A7C_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80409A3C_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_803F88E4_lbl_805AEEB0
{
  s32 value;
  u8 remaining[0x49C4];
};

struct RecoveredFields_803F88E4_arg0
{
  s16 field_0;
  s16 field_2;
  s16 field_4;
  u8 unknown_6[0x2];
  u8 *field_8;
  u8 *field_C;
  u8 *field_10;
  s16 field_14;
  u8 unknown_16[0x2];
  u8 *field_18;
};

struct Inner_80401CAC { u8 pad[4]; u16 f4; };

struct Outer_80401CAC { Inner_80401CAC *p; };

struct Ent_80408718 { s16 f0; u8 pad[0x16]; };

struct Tbl_80408718 { s16 count; s16 h2; s16 h4; s16 h6; s16 h8; u8 pad[4]; Ent_80408718 *list; };

struct Obj_80405304 { u8 pad[0x18]; u8 f18; };

struct Cfg_803F87E0 { s32 w[10]; };

struct Obj_803F87E0 {
    s16 x0;
    u8 pad2[2];
    void *x4;
    u8 pad8[4];
    s16 xc;
    u8 pade[2];
    s32 x10;
    s8 x14;
    u8 pad15[3];
    Cfg_803F87E0 cfg;
};

struct Desc_803F8AD8 {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    void *funcs;
    void *x;
    void *y;
    void *z;
};

typedef struct Conn_804004DC {
    u8 state;
    u8 pad[7];
    s16 abort;
    u8 pad2[2];
    u8 *sub;
} Conn_804004DC;

typedef struct Blk_80400BA8 {
    s16 flags;
    u8 pad[2];
    s32 w8;
    s32 wC;
    s32 time;
    s32 w14;
    s32 w18;
} Blk_80400BA8;

typedef struct St_80400BA8 {
    s16 flags;
    u8 pad[2];
    Blk_80400BA8 cur;
    Blk_80400BA8 saved;
    s16 f34;
    u8 pad36[2];
    s16 f38;
    u8 pad3A[0x16];
    s16 f50;
} St_80400BA8;

typedef struct Cfg_804019A8 {
    u8 pad[4];
    s16 flags;
    u8 pad6[6];
    u16 mode;
    u8 padE[0xA];
    u8 b18;
    u8 b19;
} Cfg_804019A8;

typedef struct Names_80403168 {
    u8 pad[0x48];
    u8 a[0x80];
    u8 b[0x80];
} Names_80403168;

typedef struct Ent_804099B4 {
    s16 active;
    u8 pad[0x2E];
} Ent_804099B4;

typedef struct Tbl_804099B4 {
    s16 count;
    Ent_804099B4 *ents;
} Tbl_804099B4;

typedef struct Ent_80409B48 {
    s16 active;
    u8 pad[0x2A];
    s32 (*fn)(s32, s32, s32, s32);
} Ent_80409B48;

typedef struct Tbl_80409B48 {
    s16 count;
    Ent_80409B48 *ents;
} Tbl_80409B48;

typedef struct Ent_80409BD4 {
    s16 active;
    s16 flags;
    u8 pad[0x24];
    s32 (*fn)(s32, s32, s32);
    u8 pad2[0x4];
} Ent_80409BD4;

typedef struct Tbl_80409BD4 {
    s16 count;
    Ent_80409BD4 *ents;
} Tbl_80409BD4;

struct Hdr_8040B6E4 { u16 id; u8 f2; u8 f3; s16 qd; s16 an; s16 ns; s16 ar; u8 body[4]; };

struct Pkt_8040B6E4 { u8 pad0[2]; s16 len; Hdr_8040B6E4 *hdr; };

struct Q_8040B6E4 { u8 pad0[6]; u16 id; u8 pad8[0x10]; Pkt_8040B6E4 *pkt; };

struct QT_8040B6E4 { s16 type; s16 cls; };

struct Hdr_8040B790 { u16 id; u8 f2; u8 f3; s16 qd; s16 an; s16 ns; s16 ar; u8 body[4]; };

struct Pkt_8040B790 { u8 pad0[2]; s16 len; Hdr_8040B790 *hdr; };

struct Q_8040B790 { u8 pad0[6]; u16 id; u8 pad8[0x10]; Pkt_8040B790 *pkt; };

struct QT_8040B790 { s16 type; s16 cls; };

struct P_8041D2B8 { s32 a; s32 b; s32 c; s32 d; };

struct O_8041D2B8 { u8 pad0[0x238]; s32 f238; u8 pad23C[0x320 - 0x23C]; s16 n; u8 pad322[0xE]; P_8041D2B8 items[32]; };

struct Strm_80405A74 { u8 *p; u16 len; };

typedef struct B_803FADA0 { u8 *buf; u16 len; } B_803FADA0;

typedef struct A_803FADA0 { u8 pad0[4]; u32 a; u32 b; } A_803FADA0;

struct G_8041509C { s16 a; u8 pad[0xA]; s16 c; };

struct Tbl_80409AD8 { s16 count; u8 *list; };

typedef struct Pkt_804081C0 { u8 pad0[4]; s32 f4; s32 f8; s16 fC; u8 padE[2]; u8 f10[8]; } Pkt_804081C0;

typedef struct Pool_804081C0 { u8 pad0[0x24]; u8 *f24; } Pool_804081C0;

typedef struct Out_804081C0 { u8 *f0; u8 *f4; u8 *f8; u8 *fC; u8 *f10; } Out_804081C0;

struct Ent_8040A13C { s16 f0; s16 f2; u8 pad[0x2C]; };

struct G_8040A13C { s16 n; Ent_8040A13C *p; };

struct Ent_8040A19C { s16 f0; s16 f2; u8 pad[0x2C]; };

struct G_8040A19C { s16 n; Ent_8040A19C *p; };

struct Ent_80409F44 { s16 st; s16 pad2; s32 (*f4)(s32); s32 (*f8)(s32); s32 (*fC)(s32); s32 (*f10)(s32); u8 pad14[0x30-0x14]; };

struct Tbl_80409F44 { s16 count; Ent_80409F44 *list; };

#include "pso/network/IPv6Send.h"
#include "pso/misc/TUdpSocket.h"

typedef struct T_804179A4 { u8 pad0[3]; u8 f3; u8 pad4[2]; s16 f6; u8 pad8[0xC]; u8 f14[0x10]; } T_804179A4;

struct Seg_804179A4 { s16 len; s16 pad; u8 buf[8]; };

struct Pkt_804179A4 { u8 pad0[4]; u32 n; s32 total; Seg_804179A4 seg[1]; };

struct Na_804179A4 { u8 type; u8 code; s16 cksum; u8 flags; u8 rsv[3]; u8 target[16]; };

struct Cur_804179A4 { u8 pad[8]; };

struct Sock_804179A4 { u8 pad0[0x10]; u8 addr[0x10]; s32 f20; s16 f24; u8 f26; u8 f27; };

struct Q_804179A4 { u8 pad0[3]; u8 f3; u8 pad4[0x2C]; s16 f30; u8 pad32[2]; u8 *f34; };

struct E_804179A4 { u8 pad0[3]; u8 f3; s16 f4; s16 f6; s16 f8; s16 fa; u8 fc; u8 pad[3]; Q_804179A4 *f10; s16 f14; u8 f16[0x10]; s16 f26; u8 f28[1]; };

struct E_8041A230 {
    u8 c0;
    u8 c1;
    u8 c2;
    u8 c3;
    s16 f4;
    u8 pad6[2];
    s16 f8;
    u8 padA[0x544 - 0xA];
};

struct G_8041A230 {
    E_8041A230 *ents;
    s16 count;
    s16 avail;
    u8 pad8[8];
    s16 h10;
    s16 h12;
    s16 h14;
    u8 pad16[2];
    u8 tick[6];
    s16 h1E;
    s16 h20;
    s16 h22;
    u8 pad24[0x2C];
    u8 b50;
    u8 b51;
    u8 b52;
    u8 b53;
    u8 b54;
    u8 b55;
    u8 b56;
    u8 b57;
    u8 b58;
    u8 b59;
    u8 b5A;
    u8 b5B;
    s16 s5C;
    s16 s5E;
    s16 s60;
    s16 s62;
    s16 s64;
    s16 s66;
    s16 s68;
    s16 s6A;
    s16 s6C;
    s16 s6E;
    s16 s70;
    s16 s72;
    s16 s74;
    u8 pad76[0x2C];
    u8 bA2;
    u8 padA3[5];
};

extern "C" {
void TLobby__sub_803F8AA0(u8 *arg0);
void TLobby__sub_803F8A0C(u8 *arg0);
extern RecoveredGlobal_8041552C_lbl_805C1BE0 network_loopback_state;
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
void TLobby__sub_804050DC(s16 arg0);
extern s16 lbl_805D7A7A;
void NetIPv6ApplyNeighborDiscoveryDefaults(u8 *arg0);
void TLobby__sub_803F89A4(u8 *arg0);
void NetStoreTick(s32 *arg0);
s32 NetMemcmp(void *, void *, int);
void NetMemset(void *, int, int);
void NetMemcpy(void *, void *, int);
void TLobby__sub_803FD85C(void *);
s32 TLobby__sub_804062A0(s16);
s32 TLobby__sub_803F79AC(void *);
void TLobby__sub_803F79B0(u8 *arg0);
extern s32 lobby_timer_list_head;
s16 reset_network_timer_list(void);
void TLobby__sub_803F8A08(void *);
extern s16 lobby_udp_socket_table;
s32 TUdpSocket__sub_80407508(void);
void TLobby__sub_804073B8(void);
s32 TLobby__sub_80407C60(s16, s32);
s32 TLobby__sub_80407D98(s16, s32);
s32 TLobby__sub_8040799C(s16, void *, void *);
s16 TLobby__sub_80407F20(s16, s16, s16, s16, s16, s32, s8, s32);
s32 TLobby__sub_8040878C(void);
void TLobby__sub_803F8A9C(void *);
extern s16 lobby_handler_table_desc;
s32 TLobby__sub_80409AA8(void);
s32 NetMemcmp(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040C9E0(u8 *arg0, u8 *arg1);
u16 TLobby__sub_8040D8F0(u8 *arg0, u8 *arg1, s8 arg2, u8 *arg3, s16 arg4);
s32 TLobby__sub_8040DA54(u8 *arg0, u8 *arg1);
s32 TLobby__sub_8040FDA0(u32, s16);
s32 is_addr_unspecified__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
u8 * TLobby__sub_8040F76C(u32, u32);
s32 NetIPv4IsLoopback(s32 arg0);
s32 NetIPv4IsUnspecified(u32 arg0);
s32 TLobby__sub_8040FEE4(s32 arg0, s32 arg1);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
u8 * TLobby__sub_80413264(void *, s32);
s32 TLobby__sub_80413230(u8 *arg0, s32 arg1);
void TLobby__sub_804136AC(s16 arg0);
s32 is_socket_flag_set__6TLobbyFs(s16);
void TLobby__sub_804136CC(s16 arg0);
s16 NetIPv6IsLoopback(u8 *arg0);
s32 NetIPv6IsMulticast(u8 *arg0);
s32 NetIPv6IsUnspecified(u8 *arg0);
s32 NetIPv6CompareAddresses(s32 arg0, s32 arg1);
s16 TLobby__sub_8041510C(void);
void TLobby__sub_804150EC(void);
void TLobby__sub_8041615C(void);
void NetIPv6TickNeighborCache(void);
void NetIPv6TickNeighborDiscovery(void);
void NetMemset(void * _w0, int _w1, int _w2);
s16 TLobby__sub_80413D78();
s32 NetIPv6EmitNeighborSolicitation(int, void *, void *, void *, int);
s32 NetIPv6SendUnspecifiedSourceNeighborSolicitation(s32 arg0, s32 arg1);
extern NetworkDispatchState network_dispatch_state;
void TLobby__sub_80419A00(void);
s32 TLobby__sub_8041D368(u8 *arg0);
u8 * TLobby__sub_8041B5C0(void *);
extern RecoveredGlobal_8041E178_lbl_805C1D48 tcp_protocol_state;
s32 TLobby__sub_804112B8(s32 arg0, s32 arg1, s16 arg2);
s32 TLobby__sub_8041123C(s32 arg0, s32 arg1, s16 arg2);
s16 TLobby__sub_8040EF00(s16 arg0);
s32 TLobby__sub_8040FE40(s16 arg0);
void TLobby__sub_803F8930(u8 *arg0);
s32 TLobby__sub_803FE6CC(void *, int, int, void *);
void TLobby__sub_80405328(u8 *arg0);
s16 TLobby__sub_8040FCEC(u32);
s16 TLobby__sub_804136EC(s32);
s16 TLobby__sub_8040DABC(u8 *arg0);
void TLobby__sub_803F892C(void *);
extern RecoveredGlobal_8040DD68_lbl_805C1B38 ipv4_protocol_state;
s32 TLobby__sub_8040DD68(void);
void TLobby__sub_803F8958(void *);
s32 TLobby__sub_8040ED28(void);
s32 TLobby__sub_8040ED70(void);
void TLobby__sub_803F87DC(void *);
extern RecoveredGlobal_8040FF0C_lbl_805C1B78 ipv6_protocol_state;
s32 NetIPv6Shutdown(void);
void TLobby__sub_803F89D8(void *);
extern RecoveredGlobal_80415650_lbl_805C1BF8 network_buffer_pool_state;
s32 TLobby__sub_803F8E9C();
void TLobby__sub_80419A34(void);
s32 TLobby__sub_803F95E4(int);
s32 TLobby__sub_80419A7C(void);
s16 TLobby__sub_8041579C(void *);
s32 TLobby__sub_8041EB74(u8 *arg0);
s16 TLobby__sub_8040A2BC(void *, s16);
s16 TLobby__sub_80409A3C(u8 *arg0, s16 arg1);
s16 TLobby__sub_80415954(void *, int, int);
s32 TLobby__sub_8041ECA4(u8 *arg0);
void TLobby__sub_803FD958(u8 *arg0);
void TLobby__sub_80401CAC(Outer_80401CAC *o, u16 v);
u16 read_network_u16_be(u8 *p);
u32 TLobby__sub_80402AFC(u8 *p);
u8 *write_network_u16_be(u8 *p, u16 v);
extern Tbl_80408718 lbl_805C1AB0;
Ent_80408718 *find_free_peer_entry__6TLobbyFv(void);
s32 TLobby__sub_80405304(void *arg0);
u16 TLobby__sub_80406BD8(void *, s16);
s32 OSDisableInterrupts(void);
s32 OSRestoreInterrupts(s32);
void TLobby__sub_803F97E8(int);
void NetMemcpy(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_803FC684(u8 *, u8 *, u8 *);
extern u8 lbl_805C0038[];
extern s16 lbl_805D7A7C;
s32 TLobby__sub_8040B838(u8 *dst, u8 *src, s16 len);
s16 TLobby__sub_8040DC8C(u8 *arg0, u8 *arg1);
s32 TLobby__sub_804217E4(void);
s32 TLobby__sub_80421814(void);
s32 TLobby__sub_80421B3C(s32);
s16 TLobby__sub_80401BCC(void *, void *, int);
extern u8 lcp_read_value_buffer[4];
extern u8 lobby_read_byte_buffer[1];
s32 TLobby__sub_803FDBF8(void *, Strm_80405A74 *);
void TLobby__sub_8040098C(Self_8040098C *self);
s32 PADRead(void *, Strm_80405A74 *);
s16 TLobby__sub_80403F4C(void *, Strm_80405A74 **);
s16 TLobby__sub_804040E0(void *, Strm_80405A74 **);
s32 TLobby__sub_804060B8(u8 *, u16, int);
extern u8 lobby_ppp_read_buf;
extern u8 ppp_input_byte;
void ppp_input_packet__6TLobbyFPv(Strm_80405A74 *arg0);
s32 NetCompareBitsBackward(u8 *arg0, u8 *arg1, s16 arg2);
s32 NetCompareBitPrefix(u8 *a, u8 *b, s16 bits);
s32 NetIPv6MakeSolicitedNodeMulticastAddress(u8 *arg0, u8 *arg1);
void TLobby__sub_803F8B78(void *);
s32 TLobby__sub_8041509C(void);
s32 TLobby__sub_80409AD8(void);
Pkt_804081C0 *alloc_packet_with_header__6TLobbyFPvPv(Out_804081C0 *arg0, u8 *arg1);
s32 init_ipv6_all_routers_multicast_address(u8 *arg0, s8 arg1);
bool init_ipv6_all_nodes_multicast_address(u8 *arg0, s8 arg1);
s32 TLobby__sub_8041A9AC(int);
s32 TLobby__sub_8041FFF8(int, int);
s32 TLobby__sub_80420BD0(void *, void *, s32);
s32 tcp_start_send(s16 arg0, u8 *arg1, void (*completion)(s16, s16), u8 arg3);
void TLobby__sub_80406EB8(void *);
void TLobby__sub_80406FD8(void *, void *, s32);
s16 TLobby__sub_80413F0C(void *, void *);
s16 TLobby__sub_80416F58(u8 *, u32, void *, void *);
s16 TLobby__sub_80417028(void *, void *, void *, void *);
s16 NetIPv6HandleNeighborSolicitation(u8 *arg0, void *arg1, void *arg2, void *arg3);
s32 TLobby__sub_80410BA8(void *, void *, s32, void *);
u16 TLobby__sub_80411040(const IPv6Address *, const IPv6Address *, u8, const NetPacket *, s16);
s16 NetIPv6GetInterfaceLinkLayerAddress(s32 arg0, s16 arg1, s16 arg2);
s32 NetIPv6EmitRouterSolicitation(NetPacket *arg0, NetIPv6SendParameters *arg1, s32 arg2);
extern struct G_80415B38 ipv6_neighbor_discovery_state;
s16 NetIPv6SendNeighborAdvertisement(Pkt_804179A4 *arg0, u8 *arg1, u8 arg2, Sock_804179A4 *arg3, s16 arg4);
s32 NetRegisterTimer(s32 period, s16 locked, NetTimerCallback fn);
void TLobby__sub_8041A3CC(void);
void TLobby__sub_8041A5B4(void);
s32 NetTCPInit(void);
void TLobby__sub_803F9344(s32, void *, s32);
void NetEnqueueProtocolMessage(s32 arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4);
void TLobby__sub_803F8794(void *);
void TLobby__sub_803F8864(void *);
void TLobby__sub_803F88E0(void *);
void TLobby__sub_803F89A0(void *);
void TLobby__sub_803F8A24(void *);
s32 NetIPv6IsLinkLocal(u8 *arg0);
s32 TLobby__sub_8041549C(s16 arg0);
s32 TLobby__sub_804154C0(s16 arg0);
s32 TLobby__sub_804154E4(s16 arg0);
s32 TLobby__sub_80415508(s16 arg0);
s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);

void TLobby__sub_803F87DC(void * _w0);

typedef struct RecoveredFields_803F88E4_arg0 RecoveredFields_803F88E4_arg0;
typedef struct RecoveredGlobal_803F88E4_lbl_805AEEB0 RecoveredGlobal_803F88E4_lbl_805AEEB0;
typedef char RecoveredGlobal_803F88E4_lbl_805AEEB0_size[((sizeof(RecoveredGlobal_803F88E4_lbl_805AEEB0)) == 0x49C8) ? (1) : (-1)];

void TLobby__sub_803F892C(void * _w0);

#pragma push
#pragma opt_common_subs on
typedef char RecoveredGlobal_803F8930_lbl_805B4F84_size[sizeof(RecoveredGlobal_803F8930_lbl_805B4F84) == 0x350 ? 1 : -1];
#pragma pop

void TLobby__sub_803F8958(void * _w0);

typedef char RecoveredGlobal_803F895C_lbl_805AEEB0_size[sizeof(RecoveredGlobal_803F895C_lbl_805AEEB0) == 0x49C8 ? 1 : -1];

typedef char RecoveredGlobal_803F89A4_lbl_805B52D4_size[sizeof(RecoveredGlobal_803F89A4_lbl_805B52D4) == 0x180 ? 1 : -1];
typedef char RecoveredGlobal_803F89A4_lbl_805B5454_size[sizeof(RecoveredGlobal_803F89A4_lbl_805B5454) == 0x68 ? 1 : -1];

void TLobby__sub_803F89D8(void * _w0);

typedef char RecoveredGlobal_803F89DC_lbl_805B54BC_size[sizeof(RecoveredGlobal_803F89DC_lbl_805B54BC) == 0x4000 ? 1 : -1];
typedef char RecoveredGlobal_803F89DC_lbl_805B94BC_size[sizeof(RecoveredGlobal_803F89DC_lbl_805B94BC) == 0x78 ? 1 : -1];

void TLobby__sub_803F8A08(void * _w0);

typedef char RecoveredGlobal_803F8A0C_lbl_805B9534_size[sizeof(RecoveredGlobal_803F8A0C_lbl_805B9534) == 0x108C ? 1 : -1];

typedef char RecoveredGlobal_803F8A28_lbl_805AEEB0_size[sizeof(RecoveredGlobal_803F8A28_lbl_805AEEB0) == 0x49C8 ? 1 : -1];

void TLobby__sub_803F8A9C(void * _w0);

typedef char RecoveredGlobal_803F8AA0_lbl_805BA5C0_size[sizeof(RecoveredGlobal_803F8AA0_lbl_805BA5C0) == 0x30AC ? 1 : -1];

typedef char RecoveredGlobal_803F8B7C_lbl_805BD66C_size[sizeof(RecoveredGlobal_803F8B7C_lbl_805BD66C) == 0xA04 ? 1 : -1];

typedef char RecoveredGlobal_803F94A0_lbl_805BF770_size[sizeof(RecoveredGlobal_803F94A0_lbl_805BF770) == 0x750 ? 1 : -1];

typedef char RecoveredGlobal_803AA0C0_lbl_80556E88_size[sizeof(RecoveredGlobal_803AA0C0_lbl_80556E88) == 0x100 ? 1 : -1];

typedef char RecoveredGlobal_803FB110_lbl_805BFF68_size[sizeof(RecoveredGlobal_803FB110_lbl_805BFF68) == 0xD0 ? 1 : -1];

typedef char RecoveredGlobal_803FC178_lbl_805C02D0_size[sizeof(RecoveredGlobal_803FC178_lbl_805C02D0) == 0x40 ? 1 : -1];

extern s16 lbl_805D7A86;

typedef char RecoveredGlobal_803FC1A0_lbl_805C02D0_size[sizeof(RecoveredGlobal_803FC1A0_lbl_805C02D0) == 0x40 ? 1 : -1];

s32 TLobby__sub_803FE8BC(u8 *, void *);
typedef struct Hdr_803FC4B4 { u8 type; u8 flag; s16 len; } Hdr_803FC4B4;
struct O_80400ACC;
void TLobby__sub_80400ACC(O_80400ACC *);
struct Outer_80401CAC;
void TLobby__sub_80401CAC(Outer_80401CAC *, u16);
s32 TLobby__sub_80405304(void *);

s32 TLobby__sub_803FC684(u8 *arg0, u8 *arg1, u8 *arg2);

typedef void (*Fn_803FD10C)(void);

typedef char RecoveredGlobal_803FD520_lbl_805C0310_size[sizeof(RecoveredGlobal_803FD520_lbl_805C0310) == 0x18 ? 1 : -1];

struct N_80405298;
void TLobby__sub_80405298(N_80405298 *o, s32 v);

#define self ((Self_803FD85C *)arg0)
void TLobby__sub_803FD85C(void *arg0);
#undef self

struct Self_803FDA68;
struct Tbl_803FDA68 {
    u8 pad[0x14];
    void (*f14)(Self_803FDA68 *, Tbl_803FDA68 *);
    u8 pad18[0xC];
    void (*f24)(Self_803FDA68 *, Tbl_803FDA68 *);
    void *(*f28)(Self_803FDA68 *, Tbl_803FDA68 *);
};
struct Self_803FDA68 {
    u8 f0; u8 f1; u8 f2; u8 f3; u8 f4; u8 f5; u8 f6; u8 f7;
    s16 f8; u8 padA[6];
    u8 f10[0x1C];
    Tbl_803FDA68 *tbl;
    void *f30;
};

struct V_803FE600;
struct O_803FE600 {
    u8 b0; u8 b1; u8 b2; u8 b3; u8 b4; u8 b5; u8 b6; u8 b7;
    u8 pad8[0x2C - 8];
    V_803FE600 *p2C;
};
struct V_803FE600 {
    u8 pad[0x14];
    void (*fn)(O_803FE600 *, V_803FE600 *);
};

s32 TLobby__sub_803FE8BC(u8 *dst, void *src);

struct O_80400ACC { u8 b0; u8 b1; u8 b2; u8 pad3[0x108 - 3]; s32 f108; };
void TLobby__sub_80400ACC(O_80400ACC *o);

typedef char RecoveredGlobal_80401A68_lbl_805C04A8_size[sizeof(RecoveredGlobal_80401A68_lbl_805C04A8) == 0x30 ? 1 : -1];

#define rd16_804012E0(src) (TLobby__sub_80401BCC(src, lcp_read_value_buffer, 2) != 2 ? -1 : read_network_u16_be(lcp_read_value_buffer))
#define rd32_804012E0(src) (TLobby__sub_80401BCC(src, lcp_read_value_buffer, 4) != 4 ? 0 : TLobby__sub_80402AFC(lcp_read_value_buffer))
#define rd8_804012E0(src) (TLobby__sub_80401BCC(src, lobby_read_byte_buffer, 1) != 1 ? -1 : (s16)lobby_read_byte_buffer[0])
#define F(t, o) (*(t *)(arg2 + (o)))

typedef char RecoveredGlobal_80401A90_lbl_805C04A8_size[sizeof(RecoveredGlobal_80401A90_lbl_805C04A8) == 0x30 ? 1 : -1];

#pragma opt_propagation off
#pragma opt_propagation reset

typedef char RecoveredGlobal_80402B60_lbl_805C0620_size[sizeof(RecoveredGlobal_80402B60_lbl_805C0620) == 0x18 ? 1 : -1];

#define S11_80401FE8 7
#define S12_80401FE8 12
#define S13_80401FE8 17
#define S14_80401FE8 22
#define S21_80401FE8 5
#define S22_80401FE8 9
#define S23_80401FE8 14
#define S24_80401FE8 20
#define S31_80401FE8 4
#define S32_80401FE8 11
#define S33_80401FE8 16
#define S34_80401FE8 23
#define S41_80401FE8 6
#define S42_80401FE8 10
#define S43_80401FE8 15
#define S44_80401FE8 21
#define F_80401FE8(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G_80401FE8(x, y, z) (((x) & (z)) | ((y) & (~z)))
#define H_80401FE8(x, y, z) ((x) ^ (y) ^ (z))
#define I_80401FE8(x, y, z) ((y) ^ ((x) | (~z)))
#define ROTATE_LEFT_80401FE8(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
#define FF_80401FE8(a, b, c, d, x, s, ac) { (a) += F_80401FE8((b), (c), (d)) + (x) + ac; (a) = ROTATE_LEFT_80401FE8((a), (s)); (a) += (b); }
#define GG_80401FE8(a, b, c, d, x, s, ac) { (a) += G_80401FE8((b), (c), (d)) + (x) + ac; (a) = ROTATE_LEFT_80401FE8((a), (s)); (a) += (b); }
#define HH_80401FE8(a, b, c, d, x, s, ac) { (a) += H_80401FE8((b), (c), (d)) + (x) + ac; (a) = ROTATE_LEFT_80401FE8((a), (s)); (a) += (b); }
#define II_80401FE8(a, b, c, d, x, s, ac) { (a) += I_80401FE8((b), (c), (d)) + (x) + ac; (a) = ROTATE_LEFT_80401FE8((a), (s)); (a) += (b); }
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
#pragma pop
#undef S11_80401FE8
#undef S12_80401FE8
#undef S13_80401FE8
#undef S14_80401FE8
#undef S21_80401FE8
#undef S22_80401FE8
#undef S23_80401FE8
#undef S24_80401FE8
#undef S31_80401FE8
#undef S32_80401FE8
#undef S33_80401FE8
#undef S34_80401FE8
#undef S41_80401FE8
#undef S42_80401FE8
#undef S43_80401FE8
#undef S44_80401FE8
#undef FF_80401FE8
#undef GG_80401FE8
#undef HH_80401FE8
#undef II_80401FE8
#undef ROTATE_LEFT_80401FE8
#undef F_80401FE8
#undef G_80401FE8
#undef H_80401FE8
#undef I_80401FE8

typedef char RecoveredGlobal_80402B88_lbl_805C0620_size[sizeof(RecoveredGlobal_80402B88_lbl_805C0620) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_804050DC_lbl_805C18A0_size[sizeof(RecoveredGlobal_804050DC_lbl_805C18A0) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_80403D28_lbl_805C0638_size[sizeof(RecoveredGlobal_80403D28_lbl_805C0638) == 0xA0 ? 1 : -1];

#pragma push
#pragma opt_common_subs on
#pragma pop

typedef struct A_80403F4C {
    u8 pad0[0x16];
    u8 count;
    u8 pad17[0x40 - 0x17];
} A_80403F4C;

typedef struct B_80403F4C {
    u8 bytes[0x44];
} B_80403F4C;

typedef struct Ent_80403F4C {
    u8 pad0[8];
    A_80403F4C a;
    B_80403F4C b;
} Ent_80403F4C;

typedef struct Obj_80403F4C {
    u8 pad0[4];
    Ent_80403F4C *ents;
    u8 pad8;
    u8 max;
    u8 padA[2];
    u8 cur;
    u8 flags;
    u8 padE[0x28 - 0xE];
    s32 n28;
    u8 pad2C[4];
    s32 n30;
} Obj_80403F4C;

#define o ((Obj_80403F4C *)ov)
#define pp ((u8 **)spp)
s16 TLobby__sub_80403F4C(void *ov, Strm_80405A74 **spp);
#undef o
#undef pp

u32 lbl_805C1AD8[6];
#define lbl_805C1AD8 (*(Tbl_80408F2C *)lbl_805C1AD8)

void TLobby__sub_804050DC(s16 arg0) {
    *(s16 *)((s8 *)(&lbl_805C18A0.value) + 8) = arg0;
}

typedef char RecoveredGlobal_804050EC_lbl_805C18A0_size[sizeof(RecoveredGlobal_804050EC_lbl_805C18A0) == 0x10 ? 1 : -1];
void TLobby::init_net_block_18A0() {
    TLobby__sub_803F79AC((void *) (&(*(RecoveredGlobal_804050EC_lbl_805C18A0 *)&lbl_805C18A0).value));
}

typedef char RecoveredGlobal_80405114_lbl_805C18A0_size[sizeof(RecoveredGlobal_80405114_lbl_805C18A0) == 0x10 ? 1 : -1];
s32 TLobby::run_net_init_step() {
    TLobby__sub_803F79B0((u8 *)(&(*(RecoveredGlobal_80405114_lbl_805C18A0 *)&lbl_805C18A0).value));
    return 0;
}

s16 reset_network_timer_list(void) {
    lobby_timer_list_head = 0;
    return 0;
}

struct G_80405150 { s32 p0; s32 p4; s16 h8; };
extern s16 lbl_805D7A84;
extern s16 lbl_805D7A88;
s32 TLobby__sub_803FB6A0(void);
void TLobby__sub_803FB7A4(void);
void TLobby::run_net_thread_loop() {
    G_80405150 *g = (G_80405150 *)&lbl_805C18A0;
    for (;;) {
        if (lbl_805D7A86 != 0) {
            TLobby::lock_mutex(g->p0);
            TLobby__sub_803FB6A0();
            TUdpSocket::unlock_mutex(g->p0);
            continue;
        }
        if (lbl_805D7A88 != 0) {
            TLobby::lock_mutex(g->p0);
            TLobby__sub_803FB7A4();
            TUdpSocket::unlock_mutex(g->p0);
            continue;
        }
        TLobby__sub_803F97E8(g->h8);
        if (lbl_805D7A84 != 0) {
            TLobby::process_expired_timers();
        }
    }
}

typedef struct Timer_804051CC {
    struct Timer_804051CC *next;
    u8 pad4[4];
    u32 f8;
    s32 fC;
    void (*f10)(s32);
    s32 f14;
    u8 f18;
} Timer_804051CC;

s32 TLobby__sub_80405700();

void TLobby::process_expired_timers() {
    s32 now;
    Timer_804051CC *t;

    TLobby::lock_mutex(lbl_805C18A0.value);
    TLobby__sub_80405700();
    TLobby::get_time_ms(&now);
    t = (Timer_804051CC *)lobby_timer_list_head;
    while (t != NULL) {
        if (t->f18 == 1 && (u32)(now - t->fC) > t->f8) {
            if (t != NULL && t->f18 == 1) {
                t->f18 = 0;
            }
            t->f18 = 2;
            if (t->f10 != NULL) {
                t->f18 = 0;
                t->f10(t->f14);
            }
        }
        t = t->next;
    }
    TUdpSocket::unlock_mutex(lbl_805C18A0.value);
}

struct N_80405298 { N_80405298 *next; s32 f4; u8 pad8[0x18 - 8]; u8 b18; };
#define HEAD_80405298 (*(N_80405298 **)&lobby_timer_list_head)
void TLobby__sub_80405298(N_80405298 *o, s32 v) {
    N_80405298 *p, *n;
    if (o == 0) {
        return;
    }
    o->f4 = v;
    if (HEAD_80405298 == 0) {
        HEAD_80405298 = o;
        o->next = 0;
    } else {
        p = HEAD_80405298;
        while ((n = p->next) != 0) {
            if (p == o) {
                o->b18 = 0;
                return;
            }
            p = n;
        }
        p->next = o;
        o->next = 0;
    }
    o->b18 = 0;
}

s32 TLobby__sub_80405304(void *arg0) {
    Obj_80405304 *o = (Obj_80405304 *)arg0;
    if (o == NULL || o->f18 != 1) {
        return;
    }
    o->f18 = 0;
}

void TLobby__sub_80405328(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[4]; u32 field_4; u32 field_8; u8 pad_C[4]; u32 field_10; u8 pad_14[4]; u8 field_18; };
    u32 temp_r0_2;
    u8 temp_r0;
    if (arg0 != NULL) {
        temp_r0 = ((Fields_arg0*)arg0)->field_18;
        if ((temp_r0 == 1) && (arg0 != NULL) && (temp_r0 == 1)) {
            ((Fields_arg0*)arg0)->field_18 = 0U;
        }
        temp_r0_2 = ((Fields_arg0*)arg0)->field_4;
        if (temp_r0_2 != 0U) {
            ((Fields_arg0*)arg0)->field_8 = temp_r0_2;
            if ((u32) ((Fields_arg0*)arg0)->field_8 == 0U) {
                ((Fields_arg0*)arg0)->field_8 = 1U;
            }
            TLobby::get_time_ms((s32 *)((void *) (arg0 + 0xC)));
            if ((u32) ((Fields_arg0*)arg0)->field_10 != 0U) {
                ((Fields_arg0*)arg0)->field_18 = 1U;
            }
        }
    }
}

typedef struct Lobby_804062A0 {
    u8 state;
    u8 pad[3];
    u8 sub[0x140];
} Lobby_804062A0;

struct RecoveredFields_80401B8C_arg0;
struct Self_8040098C;
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 valid_80405A74(Strm_80405A74 **s) {
    s32 r = 0;
    if (s != NULL && *s != NULL) {
        r = 1;
    }
    return r;
}
inline s32 avail_80405A74(Strm_80405A74 **s) {
    s32 r = 0;
    if (valid_80405A74(s) && (*s)->len > 1) {
        r = 1;
    }
    return r;
}
inline s32 get_80405A74(Strm_80405A74 **s) {
    if (avail_80405A74(s)) {
        (*s)->len--;
        return *(*s)->p++;
    }
    if (TLobby__sub_80401BCC(s, &ppp_input_byte, 1) != 1) {
        return -1;
    }
    return (s16)ppp_input_byte;
}
#define FWD_80405A74()                                                       \
    (*(s16 *)(G + 0x13A))++;                                            \
    t = (Strm_80405A74 *)((TLobby *)arg0)->alloc_from_buffer(4); \
    p = t->p;                                                                \
    *p++ = 0xFF;                                                             \
    *p++ = 3;                                                                \
    write_network_u16_be(p, code);                                           \
    u = t;                                                                   \
    if (u == NULL) {                                                         \
        (*(s16 *)(G + 0x142))++;                                        \
        return;                                                              \
    }                                                                        \
    if (TLobby__sub_80401BCC(&u, &lobby_ppp_read_buf, 2) == 2) {                   \
        read_network_u16_be(&lobby_ppp_read_buf);                                 \
    }                                                                        \
    TLobby__sub_803FE6CC(G + 4, 8, 0, u);                                    \
    return;
void ppp_input_packet__6TLobbyFPv(Strm_80405A74 *arg0) {
    u16 code;
    u8 *G;
    Strm_80405A74 *t;
    u8 *p;
    Strm_80405A74 *u;
    u8 pad[0x24];
    if (arg0 == NULL) {
        return;
    }
    G = lbl_805C0038;
    if (lbl_805D7A7A == 0 && arg0->p[0] == 0xFF && arg0->p[1] == 3 &&
        TLobby__sub_80401BCC(&arg0, &lobby_ppp_read_buf, 2) == 2) {
        read_network_u16_be(&lobby_ppp_read_buf);
    }
    code = (u16)get_80405A74(&arg0);
    if (!(code & 1)) {
        code = (code << 8) | get_80405A74(&arg0);
    }
    switch (code) {
    case 0x21:
        if (*(u8 *)((s8 *)G + 0x6C) != 5) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        TLobby__sub_804060B8(arg0->p, arg0->len, 0x800);
        return;
    case 0x57:
        if (*(u8 *)((s8 *)G + 0xD4) != 5) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        TLobby__sub_804060B8(arg0->p, arg0->len, -0x7923);
        return;
    case 0x2D:
        if (*(u8 *)((s8 *)G + 0x6C) != 5) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        if (!(*(s16 *)((s8 *)(*(u8 **)((s8 *)G + 0x9C)) + 0x28) & 4)) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        if (TLobby__sub_804040E0(*(void **)((s8 *)(*(u8 **)((s8 *)G + 0x9C)) + 0x98), &arg0) <= 0) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        TLobby__sub_804060B8(arg0->p, arg0->len, 0x800);
        return;
    case 0x2F:
        if (*(u8 *)((s8 *)G + 0x6C) != 5) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        if (!(*(s16 *)((s8 *)(*(u8 **)((s8 *)G + 0x9C)) + 0x28) & 4)) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        if (TLobby__sub_80403F4C(*(void **)((s8 *)(*(u8 **)((s8 *)G + 0x9C)) + 0x98), &arg0) <= 0) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        TLobby__sub_804060B8(arg0->p, arg0->len, 0x800);
        return;
    case 0xC021:
        (*(s16 *)((s8 *)G + 0x130))++;
        TLobby__sub_803FDBF8(G + 4, arg0);
        return;
    case 0xC023:
        if (G[0] != 2 && G[0] != 3) {
            (*(s16 *)((s8 *)G + 0x140))++;
            if (G[0] == 0) {
                TLobby__sub_8040098C((Self_8040098C *)(G + 4));
            }
            return;
        }
        (*(s16 *)((s8 *)G + 0x132))++;
        PADRead(G + 0x38, arg0);
        return;
    case 0xC223:
        if (G[0] != 2 && G[0] != 3) {
            (*(s16 *)((s8 *)G + 0x140))++;
            if (G[0] == 0) {
                TLobby__sub_8040098C((Self_8040098C *)(G + 4));
            }
            return;
        }
        (*(s16 *)((s8 *)G + 0x136))++;
        ((TLobby *)(G + 0xA0))->dispatch_received_packet((s32)arg0);
        return;
    case 0x8021:
        if (G[0] != 3) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        (*(s16 *)((s8 *)G + 0x134))++;
        TLobby__sub_803FDBF8(G + 0x6C, arg0);
        return;
    case 0x8057:
        if (G[0] != 3) {
            (*(s16 *)((s8 *)G + 0x140))++;
            return;
        }
        if (lbl_805D7A7C != 6 && (s16)(s32)lbl_805D7A7C) {
            FWD_80405A74()
        }
        (*(s16 *)((s8 *)G + 0x138))++;
        TLobby__sub_803FDBF8(G + 0xD4, arg0);
        return;
    default:
        FWD_80405A74()
    }
}

s32 TLobby__sub_804062A0(s16 arg0) {
    Lobby_804062A0 *l = (Lobby_804062A0 *)lbl_805C0038;

    switch (arg0) {
    case 0x82:
        if (l->state == 0) {
            l->state = 1;
        }
        TLobby__sub_803FD958(l->sub);
        return 0;
    case 0x81:
        TLobby__sub_803FD85C(l->sub);
        l->state = 0;
        return 0;
    default:
        return -1;
    }
}

s32 TLobby::shutdown_network_handle() {
    TLobby__sub_803F8A08((void *)((void *) (&lobby_udp_socket_table)));
    lobby_udp_socket_table = 0;
    return 0;
}

void TLobby::init_msg(s32 arg1) {
    *(s32 *)&this->m_name = arg1;
    *(s8 *)&this->m_flags = 4;
}

void TLobby::init_packet_header(s32 arg1) {
    *(s32 *)&this->m_name = arg1;
    *(s8 *)&this->m_flags = 3;
}

void TLobby::set_value_and_enable(s32 arg1) {
    *(s32 *)&this->m_name = arg1;
    *(s8 *)&this->m_flags = 1;
}

struct Ent_80406B14 { s16 st; u8 pad[0x9c - 2]; };
struct Tbl_80406B14 { s16 count; Ent_80406B14 *list; };
#pragma push
#pragma optimization_level 3
#pragma opt_unroll_loops off
s32 TLobby::reset_socket_table() {
    s16 n;
    s16 i;
    Ent_80406B14 *p;
    TLobby__sub_803F8A0C((u8 *)&lobby_udp_socket_table);
    n = ((Tbl_80406B14 *)&lobby_udp_socket_table)->count;
    p = ((Tbl_80406B14 *)&lobby_udp_socket_table)->list;
    for (i = 0; i < n; i++, p++) {
        p->st = 0;
    }
    return 0;
}
#pragma pop

struct O_80406B6C { u32 w0; u8 b4; };
s32 TLobby__sub_80406B6C(O_80406B6C *o) {
    if (o != 0) {
        switch (o->b4) {
        case 1:
        case 3:
            break;
        case 2:
        case 4:
            if (TLobby__sub_8041579C(o) < 0) {
                return -1;
            }
            return 0;
        }
    }
    return -1;
}

struct Ent_804072C4 { s16 st; u8 pad[0x9c - 2]; };
struct Tbl_804072C4 { s16 count; Ent_804072C4 *list; };
void TUdpSocket::release_entry() {
    Ent_804072C4 *e = (Ent_804072C4 *)this;
    s16 i;
    s16 n = ((Tbl_804072C4 *)&lobby_udp_socket_table)->count;
    Ent_804072C4 *p = ((Tbl_804072C4 *)&lobby_udp_socket_table)->list;
    for (i = 0; i < n; i++, p++) {
        if (p->st == 1 && p == e) {
            p->st = 0;
            return;
        }
    }
}

struct Ent_80407310 { s16 st; u8 pad[0x9c - 2]; };
struct Tbl_80407310 { s16 count; Ent_80407310 *list; };
u8 *TLobby::alloc_free_entry() {
    s16 n = ((Tbl_80407310 *)&lobby_udp_socket_table)->count;
    Ent_80407310 *p = ((Tbl_80407310 *)&lobby_udp_socket_table)->list;
    s16 i;
    for (i = 0; i < n; i++, p++) {
        if (p->st == 0) {
            p->st = 1;
            return (u8 *)p;
        }
    }
    return 0;
}

void NetUnregisterTimer(void *);
void TLobby__sub_804078B4(void);
s32 TLobby__sub_80407358(void) {
    Tbl_80408718 *g = &lbl_805C1AB0;
    s32 tmp[2];
    TLobby::release_slot_by_id(0x806);
    NetUnregisterTimer((void *)TLobby__sub_804078B4);
    TLobby__sub_803F8A24(g);
    g->count = 0;
    g->h2 = 0;
    g->h4 = 0;
    g->h8 = 0;
    return 0;
}

void TLobby__sub_804073B8(void) {
    TUdpSocket__sub_80407508();
}

s32 TLobby::dispatch_slot_a(s16 arg0, s32 arg1) {
    return TLobby__sub_80407C60(arg0, arg1);
}

s32 TLobby::dispatch_slot_b(s16 arg0, s32 arg1) {
    return TLobby__sub_80407D98(arg0, arg1);
}

typedef struct Ent_80407418 {
    s16 active;
    s16 a;
    s16 pad4;
    s16 b;
    u8 pad8[0x18];
} Ent_80407418;

typedef struct Tbl_80407418 {
    s16 pad0;
    s16 count;
    u8 pad4[0x10];
    Ent_80407418 *ents;
} Tbl_80407418;

s32 TLobby__sub_80408388(s16);

s32 TLobby__sub_80407418(s16 id) {
    Tbl_80407418 *t = (Tbl_80407418 *)&lbl_805C1AB0;
    Ent_80407418 *e;
    s16 ok;
    s32 tmp[2];

    e = t->ents;
    if (id >= 0 && id < t->count) {
        ok = 1;
    } else {
        ok = -1;
    }
    if (ok >= 0) {
        e = &e[id];
    } else {
        e = NULL;
    }
    if (e == NULL) {
        return -2;
    }
    if (e->active == 0) {
        return -2;
    }
    TLobby::call_entry_callback(e->a, e->b);
    TLobby__sub_80408388(id);
    return 0;
}

s32 TLobby::forward_net_op(s16 arg0, u8 *arg1, u8 *arg2) {
    return TLobby__sub_8040799C(arg0, arg1, arg2);
}

void TLobby::forward_net_op_5args(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s8 arg6, s32 arg7) {
    TLobby__sub_80407F20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

struct Conn_8040799C { s32 a; s16 f4; s16 f6; };
struct Peer_8040799C { s16 st; s16 f2; u8 pad4; u8 f5; u8 pad6[2]; Conn_8040799C *conn; u8 addr[6]; u8 name[6]; };
struct Ent_8040799C { s16 f0; s16 f2; s16 f4; s16 f6; u8 pad8[6]; u8 fE; u8 fF; u8 pad10[2]; u8 a12[6]; u8 a18[8]; };
struct Tbl_8040799C { s16 count; s16 h2; s16 h4; s16 h6; s16 h8; s16 hA; s16 hC; u8 padE[2]; Peer_8040799C *list; Ent_8040799C *ents; };
struct Out_8040799C { Conn_8040799C *a; void *b; void *c; void *d; void *e; };
void TLobby__sub_80408060(void *, void *);
struct Ent_80408428;
struct Ent_80408428 *find_or_add_peer_entry__6TLobbyFsiUcPvUcPvs(s16, s32, u8, void *, u8, void *, s16);

#define TBL ((Tbl_8040799C *)&lbl_805C1AB0)

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_8040799C *Lookup_8040799C(Tbl_8040799C *t, s16 idx) {
    Ent_8040799C *list = t->ents;
    s16 ok;
    if (idx >= 0 && idx < t->h2) {
        ok = 1;
    } else {
        ok = -1;
    }
    if (ok >= 0) {
        return &list[idx];
    }
    return NULL;
}

inline Peer_8040799C *Find_8040799C(Tbl_8040799C *t, u8 k, void *name) {
    s16 n = t->count;
    Peer_8040799C *p = t->list;
    for (; n > 0; n--, p++) {
        if (p->f5 == k && p->st != 0 && NetMemcmp(p->name, name, p->f5) == 0) {
            return p;
        }
    }
    return NULL;
}

inline void Clear_8040799C(Peer_8040799C *p) {
    if (p->conn != NULL) {
        p->conn->a = 0;
        p->conn->f6 = 0;
        p->conn->f4 = 0;
    }
}

inline void Send_8040799C(Ent_8040799C *e, void *name) {
    Out_8040799C o;
    void *r = alloc_packet_with_header__6TLobbyFPvPv((Out_804081C0 *)(&o), (u8 *)e);
    if (r != NULL) {
        o.a->f6 = 1;
        NetMemcpy(o.b, e->a12, e->fE);
        NetMemcpy(o.c, e->a18, e->fF);
        NetMemset(o.d, 0, e->fE);
        NetMemcpy(o.e, name, e->fF);
        TLobby::call_handler_by_index(e->f2, e->f6, 1, 0, (s32)r);
        if (r != NULL) {
            ((TUdpSocket *)r)->release_entry();
        }
    }
}

s32 TLobby__sub_8040799C(s16 idx, void *name, void *arg2) {
    Tbl_8040799C *t = TBL;
    Ent_8040799C *e;
    Peer_8040799C *p;
    s32 ret;
    Peer_8040799C *np;

    e = Lookup_8040799C(t, idx);
    if (e == NULL) {
        return -2;
    }
    ret = 0;
    p = Find_8040799C(t, e->fF, name);
    if (p != NULL) {
        p->f2 = t->hA;
        if (p->st != 1) {
            ret = TLobby::call_handler_by_index(e->f2, e->f4, 0, (s32)p->addr, (s32)arg2);
        } else {
            if (p->conn != NULL) {
                Clear_8040799C(p);
                p->conn = NULL;
            }
            TLobby__sub_80408060(p, arg2);
            Send_8040799C(e, name);
            p->f2 = t->hC;
        }
    } else {
        u8 buf[6];
        NetMemset(buf, 0, 6);
        np = (Peer_8040799C *)find_or_add_peer_entry__6TLobbyFsiUcPvUcPvs(e->f2, e->f4, e->fF, name, e->fE, buf, 1);
        TLobby__sub_80408060(np, arg2);
        Send_8040799C(e, name);
        np->f2 = t->hC;
    }
    return ret;
}
#pragma pop
#undef TBL

typedef struct Node_804082AC { struct Node_804082AC *next; u8 pad4[2]; u8 f6[0x10]; } Node_804082AC;
typedef struct Ent_804082AC { u8 pad0[0xE]; u8 fE; u8 fF; u8 pad10[2]; u8 f12[6]; u8 f18[4]; Node_804082AC *f1C; } Ent_804082AC;
typedef struct Key_804082AC { u8 pad0[0x10]; void *f10; } Key_804082AC;
typedef struct Pool_804082AC { u8 pad0[8]; s16 f8; } Pool_804082AC;

struct Tbl_80408718;
Pkt_804081C0 *alloc_packet_with_header__6TLobbyFPvPv(Out_804081C0 *arg0, u8 *arg1) {
    s16 len;
    Pkt_804081C0 *pkt;
    u8 *buf;
    u16 t;
    u8 *q;
    t = arg1[0xE] * 2 + 8;
    t += arg1[0xF] * 2;
    len = t;
    if ((u32)len > 0x1CU) {
        return NULL;
    }
    pkt = (Pkt_804081C0 *)TLobby::alloc_free_entry();
    if (pkt == NULL) {
        return NULL;
    }
    pkt->f4 = 1;
    pkt->f8 = len;
    buf = (u8 *)&((Pool_804081C0 *)&lbl_805C1AB0)->f24;
    pkt->fC = t;
    ((TLobby *)(pkt->f10))->set_value_and_enable(*(s32 *)buf);
    buf = *(u8 **)buf;
    NetMemset(buf, 0, len);
    NetMemcpy(buf, arg1 + 0xA, 6);
    arg0->f0 = buf;
    q = buf + 8;
    arg0->f4 = q;
    q += arg1[0xE];
    arg0->f8 = q;
    q += arg1[0xF];
    arg0->fC = q;
    q += arg1[0xE];
    arg0->f10 = q;
    return pkt;
}

s32 TLobby__sub_804082AC(Ent_804082AC *arg0, Key_804082AC *arg1, void *arg2) {
    s16 i;
    Node_804082AC *p;

    if (NetMemcmp(arg0->f18, arg1->f10, arg0->fF) == 0) {
        NetMemcpy(arg2, arg0->f12, arg0->fE);
        return 1;
    }
    if (arg0->f1C != NULL) {
        p = arg0->f1C;
        i = 0;
        while (p != NULL) {
            i++;
            if (lbl_805C1AB0.h8 <= i) {
                return -1;
            }
            if (NetMemcmp(p->f6, arg1->f10, arg0->fF) == 0) {
                NetMemcpy(arg2, arg0->f12, arg0->fE);
                return 1;
            }
            p = p->next;
        }
    }
    return -1;
}

typedef struct Node_80408388 {
    struct Node_80408388 *next;
    s16 used;
} Node_80408388;

typedef struct Ent_80408388 {
    u8 pad[0x1C];
    Node_80408388 *head;
} Ent_80408388;

typedef struct Tbl_80408388 {
    s16 pad0;
    s16 count;
    u8 pad4[0x10];
    Ent_80408388 *ents;
} Tbl_80408388;

s32 TLobby__sub_80408388(s16 id) {
    Tbl_80408388 *t = (Tbl_80408388 *)&lbl_805C1AB0;
    Ent_80408388 *e;
    Node_80408388 *n;
    Node_80408388 *next;
    s16 ok;

    e = t->ents;
    if (id >= 0 && id < t->count) {
        ok = 1;
    } else {
        ok = -1;
    }
    if (ok >= 0) {
        e = &e[id];
        for (n = e->head; n != NULL; n = next) {
            next = n->next;
            n->next = NULL;
            n->used = 0;
        }
        NetMemset(e, 0, 0x20);
        return 1;
    }
    return -1;
}

typedef struct Sub_80408428 {
    s32 f0;
    s16 f4;
    s16 f6;
    u8 pad8[4];
    s32 fC;
} Sub_80408428;

typedef struct Ent_80408428 {
    s16 state;
    s16 stamp;
    u8 type4;
    u8 type5;
    u8 pad6[2];
    Sub_80408428 *sub;
    u8 addrC[6];
    u8 addr12[6];
} Ent_80408428;

typedef struct Tbl_80408428 {
    s16 count;
    u8 pad2[8];
    s16 stampA;
    u8 padC[4];
    Ent_80408428 *list;
} Tbl_80408428;

typedef struct Pkt_80408428 {
    u8 pad0[4];
    s32 f4;
    s32 f8;
    s16 fC;
    u8 padE[2];
    u8 f10[4];
} Pkt_80408428;

struct Ent_804086B4;
Ent_804086B4 *find_oldest_peer_entry__6TLobbyFs(s16 key);

#pragma push
#pragma inline_depth(4)
#pragma dont_inline off

inline Ent_80408428 *find_80408428(Tbl_80408428 *t, u8 type, void *addr) {
    s16 n = t->count;
    Ent_80408428 *e = t->list;
    while (n > 0) {
        if (e->type5 == type && e->state != 0 && NetMemcmp(e->addr12, addr, e->type5) == 0) {
            return e;
        }
        n--;
        e++;
    }
    return NULL;
}

inline void detach_80408428(Ent_80408428 *e) {
    if (e->sub != NULL) {
        e->sub->f0 = 0;
        e->sub->f6 = 0;
        e->sub->f4 = 0;
    }
    e->sub = NULL;
}

Ent_80408428 *find_or_add_peer_entry__6TLobbyFsiUcPvUcPvs(s16 arg0, s32 arg1, u8 type, void *addr, u8 type2, void *addr2, s16 state) {
    Tbl_80408428 *t = (Tbl_80408428 *)&lbl_805C1AB0;
    Ent_80408428 *e;
    Pkt_80408428 *p;

    e = find_80408428(t, type, addr);
    if (e != NULL) {
        e->stamp = t->stampA;
        if (addr2 == NULL) {
            return e;
        }
        if (e->state != 1) {
            int n2 = type2;
            if (NetMemcmp(e->addrC, addr2, n2) != 0) {
                NetMemcpy(e->addrC, addr2, n2);
                e->state = state;
            }
            return e;
        }
        NetMemcpy(e->addrC, addr2, type2);
        e->state = state;
        if (e->sub != NULL) {
            p = (Pkt_80408428 *)TLobby::alloc_free_entry();
            if (p != NULL) {
                p->f4 = 1;
                p->f8 = e->sub->f6;
                p->fC = e->sub->f6;
                ((TLobby *)(p->f10))->set_value_and_enable(e->sub->fC);
                TLobby::call_handler_by_index(arg0, arg1, 0, (s32)e->addrC, (s32)p);
                ((TUdpSocket *)p)->release_entry();
            }
        }
        detach_80408428(e);
        return e;
    }
    if (addr2 == NULL) {
        return NULL;
    }
    e = (Ent_80408428 *)find_free_peer_entry__6TLobbyFv();
    if (e == NULL) {
        e = (Ent_80408428 *)find_oldest_peer_entry__6TLobbyFs(4);
        if (e == NULL) {
            e = (Ent_80408428 *)find_oldest_peer_entry__6TLobbyFs(0);
        }
        if (e->sub != NULL) {
            detach_80408428(e);
        }
        e->state = 0;
        e->stamp = 0;
        NetMemset(e->addrC, 0, 6);
        NetMemset(e->addr12, 0, 4);
    }
    if (addr2 != NULL) {
        NetMemcpy(e->addrC, addr2, type2);
    }
    NetMemcpy(e->addr12, addr, type);
    e->type4 = type2;
    e->type5 = type;
    e->state = state;
    e->stamp = t->stampA;
    e->sub = NULL;
    return e;
}

#pragma pop
struct Ent_804086B4 { s16 f0; s16 f2; u8 pad[0x14]; };
struct Tbl_804086B4 { s16 count; u8 pad[0xE]; Ent_804086B4 *list; };
Ent_804086B4 *find_oldest_peer_entry__6TLobbyFs(s16 key) {
    Ent_804086B4 *best = 0;
    Ent_804086B4 *p;
    s16 n = ((Tbl_804086B4 *)&lbl_805C1AB0)->count;
    s32 v;
    p = ((Tbl_804086B4 *)&lbl_805C1AB0)->list;
    for (; n > 0; n--, p++) {
        v = p->f0;
        if ((s16)v != 0 && v != key) {
            if (best == 0) {
                best = p;
            } else if (best->f2 > p->f2) {
                best = p;
            }
        }
    }
    return best;
}

Ent_80408718 *find_free_peer_entry__6TLobbyFv(void) {
    s16 n = lbl_805C1AB0.count;
    Ent_80408718 *e = lbl_805C1AB0.list;
    while (n > 0) {
        if (e->f0 == 0) {
            return e;
        }
        n--;
        e++;
    }
    return NULL;
}

void TLobby::flush_flags_step() {
    TLobby__sub_8040878C();
}

void TLobby::run_connect_step() {
    TLobby::init_net_sockets();
}

typedef void (*Fn_8040881C)(void);
typedef s16 (*Init_8040881C)(s16);

struct Desc_8040881C {
    Init_8040881C fn;
    u8 pad4[0x18];
};

struct Ent_8040881C {
    s16 used;
    s16 id;
    s16 idx;
    u8 pad6[0xA];
};

struct G_8040881C {
    s16 count;
    s16 n2;
    s16 n4;
    s16 n6;
    Desc_8040881C *descs;
    Ent_8040881C *ents;
    void *p10;
    void *p14;
};

s32 TLobby__sub_80408F2C(s16 id, u8 *pkt);
s32 TLobby__sub_80409130(s16 arg0, s16 arg1, s32 arg2);
void TLobby__sub_80408FD8(void);
void TLobby__sub_8040920C(void);
void TLobby__sub_804092FC(void);
void TLobby__sub_8040939C(void);
void TLobby__sub_804093EC(void);
void TLobby__sub_804094B8(void);
void TLobby__sub_8040970C(void);
struct Tbl_80408F2C;
#define LG_8040881C (*(G_8040881C *)&lbl_805C1AD8)
s16 TLobby::init_net_sockets() {
    Fn_8040881C fns[11];
    s16 r;
    s16 first;
    s16 cnt;
    s16 i;
    Ent_8040881C *e;
    Desc_8040881C *d;
    Ent_8040881C **pe;

    ((TLobby *)((Desc_803F8AD8 *)&LG_8040881C))->init_net_func_table();
    pe = &LG_8040881C.ents;
    NetMemset(*pe, 0, LG_8040881C.n2 * 0x10);
    NetMemset(LG_8040881C.p10, 0, LG_8040881C.n4 * 0x10);
    NetMemset(LG_8040881C.p14, 0, LG_8040881C.n6 * 0x5F8);
    fns[0] = TLobby__sub_8040970C;
    fns[1] = TLobby__sub_804094B8;
    fns[2] = TLobby__sub_804093EC;
    fns[3] = TLobby__sub_8040939C;
    fns[4] = TLobby__sub_804092FC;
    fns[5] = TLobby__sub_8040920C;
    fns[6] = (Fn_8040881C)TLobby__sub_80409130;
    fns[7] = TLobby__sub_80408FD8;
    fns[8] = (Fn_8040881C)TLobby__sub_80408F2C;
    fns[9] = (Fn_8040881C)TLobby::forward_socket_op_by_handle;
    fns[10] = (Fn_8040881C)TLobby::send_ethernet_frame;
    first = -1;
    cnt = LG_8040881C.count;
    d = LG_8040881C.descs;
    e = *pe;
    i = 0;
    while (i < cnt) {
        if (d->fn != NULL) {
            r = d->fn(i);
            if (r < 0) {
                return r;
            }
        } else {
            return -0x111;
        }
        r = TLobby__sub_80409A3C((u8 *)fns, 0x7C);
        if (r < 0) {
            return r;
        }
        if (first < 0) {
            first = r;
        }
        e->used = 1;
        e->id = r;
        e->idx = i;
        d++;
        i++;
        e++;
    }
    return first;
}

typedef s32 (*SendFn_80408C24)(s16, u8 *, s16);
struct If_80408C24 { u8 pad[0x18]; SendFn_80408C24 send; };
struct Conn_80408C24 { s16 used; s16 id; s16 handle; u8 mac[6]; u8 *buf; };
struct Ent_80408C24 { s16 used; s16 id; s16 iface; u16 type; u8 pad[8]; };
struct Glob_80408C24 {
    s16 f0;
    s16 nconn;
    s16 nent;
    s16 f6;
    If_80408C24 *ifaces;
    Conn_80408C24 *conns;
    Ent_80408C24 *ents;
};
struct Hdr_80408C24 { u8 dst[6]; u8 src[6]; u16 type; };

s16 TLobby__sub_804098B4(void *);
s32 TLobby__sub_80409908(void *, void *);
u8 *TLobby__sub_8042558C(u32 size);
struct Tbl_80408F2C;

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Conn_80408C24 *find_conn_80408C24(Glob_80408C24 *g, s16 id) {
    Conn_80408C24 *c = g->conns;
    s16 n = g->nconn;
    for (; n > 0; n--, c++) {
        if (c->used != 0 && c->id == id) {
            return c;
        }
    }
    return NULL;
}

s32 TLobby::send_ethernet_frame(s16 idx, s16 mode, u8 *addr, void *pkt) {
    void NetMemset(void *, int, int);
    void NetMemcpy(void *, void *, int);
    Glob_80408C24 *g = (Glob_80408C24 *)&lbl_805C1AD8;
    Hdr_80408C24 hdr;
    Conn_80408C24 *c;
    Ent_80408C24 *e;
    s16 len;
    SendFn_80408C24 fn;

    if (idx < 0 || idx >= g->nent) {
        return -0x111;
    }
    e = g->ents;
    e += idx;
    if (e->used == 0) {
        return -2;
    }
    c = find_conn_80408C24(g, e->id);
    if (c == NULL) {
        return -2;
    }
    switch (mode) {
    case 0:
        NetMemcpy(hdr.dst, addr, 6);
        break;
    case 1:
        NetMemset(hdr.dst, 0xFF, 6);
        break;
    case 2:
        if (e->type == 0x800) {
            hdr.dst[0] = 1;
            hdr.dst[1] = 0;
            hdr.dst[2] = 5;
            hdr.dst[3] = addr[1] & 0x7F;
            hdr.dst[4] = addr[2];
            hdr.dst[5] = addr[3];
        } else if (e->type == 0x86DD) {
            hdr.dst[0] = 0x33;
            hdr.dst[1] = 0x33;
            hdr.dst[2] = addr[12];
            hdr.dst[3] = addr[13];
            hdr.dst[4] = addr[14];
            hdr.dst[5] = addr[15];
        } else {
            return -2;
        }
        break;
    default:
        return -2;
    }
    c->buf = TLobby__sub_8042558C(0x5EA);
    if (c->buf == NULL) {
        return 0;
    }
    NetMemcpy(hdr.src, c->mac, 6);
    hdr.type = e->type;
    NetMemcpy(c->buf, &hdr, 0xE);
    len = TLobby__sub_804098B4(pkt);
    if (len > 0x5DC) {
        TLobby::clear_message_entry((s32)c->buf);
        return -2;
    }
    TLobby__sub_80409908(c->buf + 0xE, pkt);
    if (len + 0xE < 0x3C) {
        len = 0x2E;
    }
    fn = g->ifaces[e->iface].send;
    if (fn != NULL) {
        fn(c->handle, c->buf, len + 0xE);
    } else {
        TLobby::clear_message_entry((s32)c->buf);
        return -0x111;
    }
    return 0;
}
#pragma pop

typedef char RecoveredGlobal_80409A3C_lbl_805C1C50_size[sizeof(RecoveredGlobal_80409A3C_lbl_805C1C50) == 0xF8 ? 1 : -1];

typedef struct Ent_80408E98 {
    s16 active;
    u8 pad2[4];
    u16 type;
    s16 sock;
    u8 padA[6];
} Ent_80408E98;

typedef struct Tbl_80408E98 {
    u8 pad0[4];
    s16 count;
    u8 pad6[0xA];
    Ent_80408E98 *ents;
} Tbl_80408E98;

#define TBL_80408E98 ((Tbl_80408E98 *)&lbl_805C1AD8)

s32 TLobby::forward_socket_op_by_handle(s16 id, u8 *a, u8 *b) {
    Ent_80408E98 *e;
    s32 sock;

    if (id < 0 || id >= TBL_80408E98->count) {
        return -0x111;
    }
    e = TBL_80408E98->ents;
    e += id;
    if (e->active == 0) {
        return -2;
    }
    switch (e->type) {
    case 0x800:
        sock = e->sock;
        if ((s16)sock >= 0) {
            return TLobby::forward_net_op(sock, a, b);
        }
        return -2;
    default:
        return -2;
    }
}
#undef TBL_80408E98

typedef struct Buf_80408F2C {
    s16 h0;
    s16 h2;
    s16 h4;
    s16 h6;
    s16 h8;
    u8 data[0x5EE];
} Buf_80408F2C;

typedef struct Tbl_80408F2C {
    u8 pad0[4];
    s16 count;
    s16 nbufs;
    u8 pad8[0xC];
    Buf_80408F2C *bufs;
} Tbl_80408F2C;

s32 TLobby__sub_80408F2C(s16 id, u8 *pkt) {
    Tbl_80408F2C *t = &lbl_805C1AD8;
    Buf_80408F2C *b;
    u8 *data;
    s16 n;
    s16 i;

    if (id < 0 || id >= t->count) {
        return -0x111;
    }
    b = t->bufs;
    data = pkt - 0xE;
    n = t->nbufs;
    i = 0;
    while (i < n) {
        if (b->data == data) {
            s32 lvl = OSDisableInterrupts();
            b->h0 = 0;
            b->h2 = 0;
            b->h4 = 0;
            b->h6 = 0;
            b->h8 = 0;
            OSRestoreInterrupts(lvl);
            return 0;
        }
        i++;
        b++;
    }
    return -2;
}

typedef struct Sock_80409130 { s16 f0; u8 pad2[4]; u16 f6; s16 f8; u8 padA[6]; } Sock_80409130;

s32 TLobby__sub_80409130(s16 arg0, s16 arg1, s32 arg2) {
    s32 h;
    Sock_80409130 *e;

    if (arg0 < 0 || arg0 >= lbl_805C1AD8.count) {
        return -0x111;
    }
    e = *(Sock_80409130 **)((s8 *)(&lbl_805C1AD8) + 0x10);
    e += arg0;
    if (e->f0 == 0) {
        return -2;
    }
    switch (e->f6) {
    case 0x800:
        h = e->f8;
        if ((s16)h < 0) {
            return -2;
        }
        if (arg1 == 1) {
            return TLobby::dispatch_slot_b(h, arg2);
        }
        if (arg1 == 2) {
            return TLobby::dispatch_slot_a(h, arg2);
        }
        return -2;
    default:
        return -2;
    case 0x86DD:
        return 0;
    }
}

#define TBL_804099B4 (*(Tbl_804099B4 *)&lobby_handler_table_desc)
s32 TLobby::clear_table_entry_locked(s16 arg0) {
    s32 ret;
    TLobby::lock_mutex(network_dispatch_state.lock_handle);
    if (arg0 < 0 || arg0 > TBL_804099B4.count) {
        ret = -0x10F;
    } else {
        Ent_804099B4 *e = TBL_804099B4.ents;
        e += arg0;
        NetMemset(e, 0, 0x30);
        ret = 0;
    }
    TUdpSocket::unlock_mutex(network_dispatch_state.lock_handle);
    return ret;
}

s16 TLobby__sub_80409A3C(u8 *arg0, s16 arg1) {
    s16 temp_r31;
    TLobby::lock_mutex((*(RecoveredGlobal_80409A3C_lbl_805C1C50 *)&network_dispatch_state).value);
    temp_r31 = TLobby__sub_8040A2BC(arg0, arg1);
    TUdpSocket::unlock_mutex((*(RecoveredGlobal_80409A3C_lbl_805C1C50 *)&network_dispatch_state).value);
    return temp_r31;
}

s32 TLobby__sub_80409AA8(void) {
    TLobby__sub_803F8A9C((void *)((void *) (&lobby_handler_table_desc)));
    lobby_handler_table_desc = 0;
    return 0;
}

struct Rec_8040B33C { u32 f0; u8 pad[0x10]; };
struct A_8040B33C { u8 pad[0x10]; s16 idx; u8 pad2[2]; s16 off; };
struct A_8040A45C { s16 f0; u8 pad2[2]; s32 f4; };
struct C_8040A45C { s16 f0; u8 pad2[0x1E]; s32 f20; u8 pad24[4]; };
struct D_8040A45C { s16 f0; u8 pad2[0x102]; u8 f104; u8 pad105[0xFF]; s16 f204; u8 pad206[2]; s32 f208; };
struct E_8040A45C { s16 f0; u8 pad2[0x16]; s32 f18; u8 f1C; u8 pad1D[0xFF]; };
struct F_8040A45C {
    s16 f0;
    s16 f2;
    s16 f4;
    s16 f6;
    u8 pad8[4];
    s32 fC;
    s16 f10;
    s16 f12;
    u8 pad14[4];
    s32 f18;
    s32 f1C;
    u8 pad20[8];
    s32 f28;
    u8 pad2C[8];
    s32 f34;
    u8 pad38[4];
};

struct G_8040A45C {
    s16 h0;
    u8 pad2[0xE];
    s16 nb;
    u8 pad12[2];
    Rec_8040B33C *b;
    u8 pad18[2];
    s16 lim;
    s16 step;
    u8 pad1E[2];
    s32 base;
    s16 na;
    u8 pad26[2];
    A_8040A45C *a;
    s16 nc;
    s16 nd;
    s16 ne;
    u8 pad32[2];
    C_8040A45C *c;
    D_8040A45C *d;
    E_8040A45C *e;
    s16 nf;
    u8 pad42[2];
    F_8040A45C *f;
};

extern G_8040A45C dns_resolver_state;

#define TBL_80409B48 (*(Tbl_80409B48 *)&lobby_handler_table_desc)

#define T_ (*(Tbl_80409AD8 *)&lobby_handler_table_desc)
s32 TLobby__sub_80409AD8(void) {
    s16 i;
    u8 *p;
    TLobby__sub_803F8AA0((u8 *)&T_);
    p = T_.list;
    i = 0;
    while (i < T_.count) {
        NetMemset(p, 0, 0x30);
        i++;
        p += 0x30;
    }
    return 0;
}

s32 TLobby::call_handler_by_index(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 (*fn)(s32, s32, s32, s32);
    if (arg0 < 0 || arg0 > TBL_80409B48.count) {
        return -0x10F;
    }
    Ent_80409B48 *e = TBL_80409B48.ents;
    e += arg0;
    if (e->active == 0) {
        return -2;
    }
    fn = e->fn;
    if (fn == NULL) {
        return -2;
    }
    return fn(arg1, arg2, arg3, arg4);
}

#define TBL_80409BD4 (*(Tbl_80409BD4 *)&lobby_handler_table_desc)
s32 TLobby::dispatch_handler_by_index(s16 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*fn)(s32, s32, s32);
    if (arg0 < 0 || arg0 > TBL_80409BD4.count) {
        return -0x10F;
    }
    Ent_80409BD4 *e = TBL_80409BD4.ents;
    e += arg0;
    if (e->active == 0) {
        return -2;
    }
    fn = e->fn;
    if (fn == NULL) {
        return -2;
    }
    return fn(arg1, arg2, arg3);
}

typedef struct Ent_80409C5C {
    s16 active;
    s16 flags;
    u8 pad[0x20];
    s32 (*fn)(s32, s32);
    u8 pad2[0x8];
} Ent_80409C5C;

typedef struct Tbl_80409C5C {
    s16 count;
    Ent_80409C5C *ents;
} Tbl_80409C5C;

#define TBL_80409C5C (*(Tbl_80409C5C *)&lobby_handler_table_desc)

s32 TLobby::dispatch_handler_by_id(s16 arg0, s32 arg1, s32 arg2) {
    s32 (*fn)(s32, s32);

    if (arg0 < 0 || arg0 > TBL_80409C5C.count) {
        return -0x10F;
    }
    Ent_80409C5C *e = TBL_80409C5C.ents;
    e += arg0;
    if (e->active == 0) {
        return -2;
    }
    fn = e->fn;
    if (fn == NULL) {
        return -2;
    }
    return fn(arg1, arg2);
}

typedef struct Ent_80409CE0 {
    s16 active;
    s16 flags;
    u8 pad[0x1C];
    s32 (*fn)(s32, s32, s32);
    u8 pad2[0xC];
} Ent_80409CE0;

typedef struct Tbl_80409CE0 {
    s16 count;
    Ent_80409CE0 *ents;
} Tbl_80409CE0;

#define TBL_80409CE0 (*(Tbl_80409CE0 *)&lobby_handler_table_desc)

s32 TLobby__sub_80409CE0(s16 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*fn)(s32, s32, s32);

    if (arg0 < 0 || arg0 > TBL_80409CE0.count) {
        return -0x10F;
    }
    Ent_80409CE0 *e = TBL_80409CE0.ents;
    e += arg0;
    if (e->active == 0) {
        return -2;
    }
    if (!(e->flags & 4)) {
        return 0;
    }
    fn = e->fn;
    if (fn == NULL) {
        return -2;
    }
    return fn(arg1, arg2, arg3);
}

typedef struct Ent_80409D7C {
    s16 active;
    s16 flags;
    u8 pad[0x18];
    s32 (*fn)(s32, s32, s32);
    u8 pad2[0x10];
} Ent_80409D7C;

typedef struct Tbl_80409D7C {
    s16 count;
    Ent_80409D7C *ents;
} Tbl_80409D7C;

#define TBL_80409D7C (*(Tbl_80409D7C *)&lobby_handler_table_desc)

s32 TLobby__sub_80409D7C(s16 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*fn)(s32, s32, s32);

    if (arg0 < 0 || arg0 > TBL_80409D7C.count) {
        return -0x10F;
    }
    Ent_80409D7C *e = TBL_80409D7C.ents;
    e += arg0;
    if (e->active == 0) {
        return -2;
    }
    if (!(e->flags & 4)) {
        return 0;
    }
    fn = e->fn;
    if (fn == NULL) {
        return -2;
    }
    return fn(arg1, arg2, arg3);
}

typedef struct Ent_80409E18 {
    s16 active;
    s16 flags;
    u8 pad[0x14];
    s32 (*fn)(s32, s32);
    u8 pad2[0x14];
} Ent_80409E18;

typedef struct Tbl_80409E18 {
    s16 count;
    Ent_80409E18 *ents;
} Tbl_80409E18;

#define TBL_80409E18 (*(Tbl_80409E18 *)&lobby_handler_table_desc)

s32 TLobby__sub_80409E18(s16 arg0, s32 arg1, s32 arg2) {
    s32 (*fn)(s32, s32);

    if (arg0 < 0 || arg0 > TBL_80409E18.count) {
        return -0x10F;
    }
    Ent_80409E18 *e = TBL_80409E18.ents;
    e += arg0;
    if (e->active == 0) {
        return -2;
    }
    if (!(e->flags & 4)) {
        return 0;
    }
    fn = e->fn;
    if (fn == NULL) {
        return -2;
    }
    return fn(arg1, arg2);
}

typedef struct Ent_80409EB0 {
    s16 active;
    s16 flags;
    u8 pad[0x10];
    s32 (*fn)(s32);
    u8 pad2[0x18];
} Ent_80409EB0;

typedef struct Tbl_80409EB0 {
    s16 count;
    Ent_80409EB0 *ents;
} Tbl_80409EB0;

#define TBL_80409EB0 (*(Tbl_80409EB0 *)&lobby_handler_table_desc)

s32 TLobby__sub_80409EB0(s16 arg0, s32 arg1) {
    s32 (*fn)(s32);

    if (arg0 < 0 || arg0 > TBL_80409EB0.count) {
        return -0x10F;
    }
    Ent_80409EB0 *e = TBL_80409EB0.ents;
    e += arg0;
    if (e->active == 0) {
        return -2;
    }
    if (!(e->flags & 4)) {
        return 0;
    }
    fn = e->fn;
    if (fn == NULL) {
        return -2;
    }
    return fn(arg1);
}

typedef struct Ent_8040A3C0 {
    s16 active;
    u8 pad[0x3A];
} Ent_8040A3C0;

typedef struct Mgr_8040A3C0 {
    u8 pad[0x40];
    s16 count;
    u8 pad42[2];
    Ent_8040A3C0 *ents;
} Mgr_8040A3C0;

void TLobby__sub_803F86BC(void *);
s32 TLobby__sub_80421844(s32 arg0);

typedef struct Ent_80409FC4 { s16 st; s16 pad2; s32 (*f4)(s32); s32 (*f8)(s32); s32 (*fC)(s32); s32 (*f10)(s32); u8 pad14[0x30-0x14]; } Ent_80409FC4;
typedef struct Tbl_80409FC4 { s16 count; Ent_80409FC4 *list; } Tbl_80409FC4;
typedef struct Ent_8040A630 { s16 f0; u8 pad[0x3A]; } Ent_8040A630;
typedef struct G_8040A630 { u8 pad[0x40]; s16 n; u8 pad2[2]; Ent_8040A630 *p; } G_8040A630;

#pragma push
#pragma opt_propagation off
s32 TLobby::invoke_socket_callback(s16 i, s32 arg) {
    Ent_80409F44 *e;
    if (i < 0 || i > (*(Tbl_80409F44 *)&lobby_handler_table_desc).count) {
        return -0x10F;
    }
    e = (*(Tbl_80409F44 *)&lobby_handler_table_desc).list + i;
    if (e->st == 0) {
        return -2;
    }
    if (e->f10 == 0) {
        return -2;
    }
    return e->f10(arg);
}
#pragma pop

#pragma push
#pragma opt_propagation off
s32 TLobby::call_entry_callback(s16 i, s32 arg) {
    Ent_80409FC4 *e;
    if (i < 0 || i > (*(Tbl_80409FC4 *)&lobby_handler_table_desc).count) {
        return -0x10F;
    }
    e = (*(Tbl_80409FC4 *)&lobby_handler_table_desc).list + i;
    if (e->st == 0) {
        return -2;
    }
    if (e->fC == 0) {
        return -2;
    }
    return e->fC(arg);
}
#pragma pop

#pragma push
#pragma optimization_level 2
s32 TLobby::is_slot_flag_0x40_set(s16 i) {
    if (i < 0 || i > (*(G_8040A13C *)&lobby_handler_table_desc).n) { return 0; }
    Ent_8040A13C *e = (*(G_8040A13C *)&lobby_handler_table_desc).p;
    if (e[i].f0 == 0) { return 0; }
    if (e[i].f2 & 0x40) { return 1; }
    return 0;
}
#pragma pop

#pragma push
#pragma optimization_level 2
s32 TLobby::is_slot_flag_0x20_set(s16 i) {
    Ent_8040A19C *e;
    if (i < 0 || i > (*(G_8040A19C *)&lobby_handler_table_desc).n) { return 0; }
    e = (*(G_8040A19C *)&lobby_handler_table_desc).p;
    if (*(s16 *)((u8 *)e + i * 0x30) == 0) { return 0; }
    e = (Ent_8040A19C *)((u8 *)e + i * 0x30);
    if (e->f2 & 0x20) { return 1; }
    return 0;
}
#pragma pop

struct Ent_8040A1FC { s16 f0; s16 f2; u8 pad[0x2C]; };
struct G_8040A1FC { s16 n; Ent_8040A1FC *p; };
#pragma push
#pragma optimization_level 2
#pragma dont_inline on
s32 TLobby::is_entry_flag10_set(s16 i) {
    if (i < 0 || i > (*(G_8040A1FC *)&lobby_handler_table_desc).n) { return 0; }
    Ent_8040A1FC *e = (*(G_8040A1FC *)&lobby_handler_table_desc).p;
    if (e[i].f0 == 0) { return 0; }
    if (e[i].f2 & 0x10) { return 1; }
    return 0;
}
#pragma pop

struct Ent_8040A25C { s16 f0; s16 f2; u8 pad[0x2C]; };
struct G_8040A25C { s16 n; Ent_8040A25C *p; };
#pragma push
#pragma optimization_level 2
#pragma dont_inline on
s32 is_socket_flag_set__6TLobbyFs(s16 i) {
    if (i < 0 || i > (*(G_8040A25C *)&lobby_handler_table_desc).n) { return 0; }
    Ent_8040A25C *e = (*(G_8040A25C *)&lobby_handler_table_desc).p;
    if (e[i].f0 == 0) { return 0; }
    if (e[i].f2 & 1) { return 1; }
    return 0;
}
#pragma pop

s32 TLobby__sub_8040A3C0(void) {
    s32 ret;
    s16 i;
    Mgr_8040A3C0 *m = (Mgr_8040A3C0 *)&dns_resolver_state;
    Ent_8040A3C0 *e;

    ret = TLobby__sub_80421844((s32)((void *)TLobby::tick_connection_timeouts));
    e = m->ents;
    i = 0;
    while (i < m->count) {
        if (e->active != 0) {
            ((TLobby *)e)->close_and_reset_connection();
        }
        i++;
        e++;
    }
    TLobby__sub_803F86BC(m);
    return ret;
}

void TLobby__sub_804218AC(void (*)(void), int);

void TLobby::init_net_tables() {
    G_8040A45C *g = &dns_resolver_state;
    s16 i;

    NetMemset(&g->h0, 0, sizeof(G_8040A45C));
    ((TLobby *)(&g->h0))->init_net_config();
    {
        A_8040A45C *p = g->a;
        i = 0;
        while (i < g->na) {
            p->f0 = 0;
            p->f4 = g->base + g->step * i;
            i++;
            p++;
        }
    }
    {
        Rec_8040B33C *p = g->b;
        i = 0;
        while (i < g->nb) {
            p->f0 = 0;
            i++;
            p++;
        }
    }
    {
        C_8040A45C *p = g->c;
        i = 0;
        while (i < g->nc) {
            p->f0 = 0;
            i++;
            p->f20 = 0;
            p++;
        }
    }
    {
        D_8040A45C *p = g->d;
        i = 0;
        while (i < g->nd) {
            p->f0 = 0;
            i++;
            p->f104 = 0;
            p->f204 = 0;
            p->f208 = 0;
            p++;
        }
    }
    {
        E_8040A45C *p = g->e;
        i = 0;
        while (i < g->ne) {
            p->f0 = 0;
            i++;
            p->f18 = 0;
            p->f1C = 0;
            p++;
        }
    }
    {
        F_8040A45C *p = g->f;
        i = 0;
        while (i < g->nf) {
            p->f2 = i;
            i++;
            p->f0 = 0;
            p->f4 = -1;
            p->f6 = 0;
            p->fC = -1;
            p->f10 = -65;
            p->f12 = 0;
            p->f18 = 0;
            p->f1C = 0;
            p->f34 = 0;
            p->f28 = 0;
            p++;
        }
    }
    TLobby__sub_804218AC(TLobby::tick_connection_timeouts, 1000);
}

#pragma push
#pragma opt_propagation off
s32 TLobby::close_connection_by_index(s16 i) {
    G_8040A630 *g = (G_8040A630 *)&dns_resolver_state;
    if (i < 0 || i > g->n) { return -2; }
    Ent_8040A630 *e = (Ent_8040A630 *)((u8 *)g->p + i * 0x3C);
    if (e->f0 == 0) { return -2; }
    return ((TLobby *)e)->close_and_reset_connection();
}
#pragma pop

typedef struct Rec_8040AD64 {
    u32 used;
    u8 pad[0x10];
} Rec_8040AD64;

typedef struct Mgr_8040AD64 {
    u8 pad[0x10];
    s16 n;
    u8 pad12[2];
    Rec_8040AD64 *recs;
    s16 f18;
} Mgr_8040AD64;

s32 TLobby::clear_all_used_records() {
    Mgr_8040AD64 *g = (Mgr_8040AD64 *)&dns_resolver_state;
    s32 cnt;
    s16 i;
    Rec_8040AD64 *r;

    TLobby__sub_80421814();
    g->f18 = 0;
    cnt = 0;
    i = 0;
    r = g->recs;
    while (i < g->n) {
        if (r->used != 0) {
            r->used = 0;
            cnt++;
        }
        i++;
        r++;
    }
    TLobby__sub_804217E4();
    return cnt;
}

typedef struct Conn_8040AF48 {
    s16 state;
    u8 pad[0x16];
    s32 timer;
    u8 pad1C[0x100];
} Conn_8040AF48;

typedef struct Mgr_8040AF48 {
    u8 pad[0x30];
    s16 nconns;
    u8 pad32[0xA];
    Conn_8040AF48 *conns;
} Mgr_8040AF48;

void TLobby__sub_8040AFE0(void);
void TLobby__sub_8040B3B4(void);
void reset_connection_requests__6TLobbyFPvs(Conn_8040AF48 *, s16);

void TLobby::tick_connection_timeouts() {
    Mgr_8040AF48 *g;
    Conn_8040AF48 *c;
    s16 i;

    TLobby__sub_8040B3B4();
    g = (Mgr_8040AF48 *)&dns_resolver_state;
    c = g->conns;
    i = 0;
    while (i < g->nconns) {
        if (c->state == 1 && c->timer > 0) {
            if (--c->timer <= 0) {
                reset_connection_requests__6TLobbyFPvs(c, 0);
            }
        }
        i++;
        c++;
    }
    TLobby__sub_8040AFE0();
}

Rec_8040B33C *find_next_active_record__6TLobbyFPv(A_8040B33C *a) {
    G_8040A45C *g = &dns_resolver_state;
    s16 n, t, i;
    for (i = 0; i < (n = g->nb); i++) {
        Rec_8040B33C *r = &g->b[(a->off + (t = a->idx)) % n];
        if (r->f0 != 0) {
            if (t < g->lim) {
                return r;
            }
            break;
        }
        a->idx = t + 1;
    }
    return 0;
}

typedef struct Ent_8040B654 {
    s16 state;
    u8 pad2[2];
    s16 id;
    u8 pad6[4];
    s16 fA;
    u8 padC[4];
    s16 f10;
    u8 pad12[0x2A];
} Ent_8040B654;

typedef struct Mgr_8040B654 {
    u8 pad[0x40];
    s16 count;
    u8 pad42[2];
    Ent_8040B654 *ents;
} Mgr_8040B654;

struct Conn_8040C540;

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline Ent_8040B654 *find_8040B654(s16 id) {
    Mgr_8040B654 *g = (Mgr_8040B654 *)&dns_resolver_state;
    s16 n;
    Ent_8040B654 *e;
    s16 i;

    e = g->ents;
    n = g->count;
    for (i = 0; i < n; i++, e++) {
        if (e->state == 1 && id == e->id) {
            return e;
        }
    }
    return NULL;
}

void TLobby::complete_pending_request(s16 id) {
    Ent_8040B654 *e;

    if ((e = find_8040B654(id)) != NULL) {
        e->fA = 1;
        if (e->f10 < 0) {
            ((TLobby *)e)->dispatch_request_callback(0);
        }
    }
}
#pragma pop

#pragma push
#pragma opt_propagation off
s32 TLobby::build_dns_query_aaaa(u8 *name, s16 len) {
    Q_8040B6E4 *q = (Q_8040B6E4 *)this;
    Hdr_8040B6E4 *h;
    u8 *body;
    s32 n;
    s16 total;
    QT_8040B6E4 qt;
    h = q->pkt->hdr;
    h->id = q->id;
    body = h->body;
    h->f2 = 1;
    h->f3 = 0;
    h->qd = 1;
    h->an = 0;
    h->ns = 0;
    h->ar = 0;
    n = TLobby__sub_8040B838(body, name, len);
    qt.type = 0x1C;
    body += (s16)n;
    qt.cls = 1;
    total = n + 0xC;
    NetMemcpy(body, &qt, 4);
    q->pkt->len = total + 4;
    return 0;
}
#pragma pop

#pragma push
#pragma opt_propagation off
s32 TLobby::build_dns_query_a(u8 *name, s16 len) {
    Q_8040B790 *q = (Q_8040B790 *)this;
    Hdr_8040B790 *h;
    u8 *body;
    s32 n;
    s16 total;
    QT_8040B790 qt;
    h = q->pkt->hdr;
    h->id = q->id;
    body = h->body;
    h->f2 = 1;
    h->f3 = 0;
    h->qd = 1;
    h->an = 0;
    h->ns = 0;
    h->ar = 0;
    n = TLobby__sub_8040B838(body, name, len);
    qt.type = 1;
    body += (s16)n;
    qt.cls = 1;
    total = n + 0xC;
    NetMemcpy(body, &qt, 4);
    q->pkt->len = total + 4;
    return 0;
}
#pragma pop

struct N_8040C4B0 { u8 pad0[0x20]; N_8040C4B0 *next; };
struct O_8040C4B0 { u8 pad0[0x204]; s16 count; u8 pad206[2]; N_8040C4B0 *head; };
struct G_8040C4B0 { u8 pad0[0x2C]; s16 lim; };

#pragma dont_inline off
#pragma inline_depth(4)
inline s32 close_8040BF38(u8 *p, s32 id) {
    s32 r;
    if ((s16)id < 0) {
        return 0;
    }
    r = TLobby__sub_80421B3C(id);
    *(s16 *)((s8 *)p + 4) = -1;
    return r;
}
s32 TLobby::close_and_reset_connection() {
    u8 *arg0 = (u8 *)this;
    s16 *temp_r3_2;
    s16 *temp_r3_3;
    s32 temp_r3;
    s32 var_r31;
    var_r31 = close_8040BF38(arg0, *(s16 *)&this->m_flags);
    TLobby__sub_80421814();
    temp_r3_2 = (s16 *)(*(s16 **)((s8 *)arg0 + 0x18));
    if (temp_r3_2 != NULL) {
        *(s16 *)((s8 *)temp_r3_2 + 0) = 0;
        *(s16 **)((s8 *)arg0 + 0x18) = NULL;
    }
    temp_r3_3 = (s16 *)(*(s16 **)((s8 *)arg0 + 0x1C));
    if (temp_r3_3 != NULL) {
        *(s16 *)((s8 *)temp_r3_3 + 0) = 0;
        *(s16 **)((s8 *)arg0 + 0x1C) = NULL;
    }
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s16 *)&this->m_name = 0;
    *(s16 *)&this->m_prev = 0;
    *(s16 *)&this->m_up = -0x41;
    *(s16 *)((s8 *)arg0 + 0x12) = 0;
    if (*(u32 *)&this->m_next != 0xFFFFFFFFU) {
        TLobby::resume_thread((s32)this->m_next);
        *(s32 *)&this->m_next = -1;
    }
    TLobby__sub_804217E4();
    return var_r31;
}

struct O_8040C00C { s16 f0; u8 pad2[0x16]; s32 f18; u8 f1C; };
struct E_8040C00C { u8 pad0[0x10]; s16 f10; s16 f12; u8 pad14[0x18]; O_8040C00C *owner; u8 pad30[0xC]; };
struct G_8040C00C { u8 pad0[0x40]; s16 count; u8 pad42[2]; E_8040C00C *ents; };
struct Conn_8040C540;

#define g ((G_8040C00C *)&dns_resolver_state)
#define o ((O_8040C00C *)o_)
void reset_connection_requests__6TLobbyFPvs(Conn_8040AF48 *o_, s16 arg1) {
    s16 i;
    E_8040C00C *e;

    o->f0 = 0;
    o->f18 = 0;
    o->f1C = 0;
    i = 0;
    e = g->ents;
    while (i < g->count) {
        if (e->owner == o) {
            e->f10 = -0x42;
            e->f12 = 0;
            e->owner = 0;
            ((TLobby *)e)->dispatch_request_callback(arg1);
        }
        i++;
        e++;
    }
}
#undef g
#undef o

s32 append_to_list__6TLobbyFPvPv(O_8040C4B0 *o, N_8040C4B0 *n) {
    s16 i;
    N_8040C4B0 *p;

    if (o == NULL || n == NULL) {
        return -1;
    }
    if (o->head == NULL) {
        o->count = 1;
        o->head = n;
        return 0;
    }
    for (p = o->head, i = 0; i < ((G_8040C4B0 *)&dns_resolver_state)->lim; i++) {
        if (p->next == NULL) {
            o->count++;
            p->next = n;
            return 0;
        }
        p = p->next;
    }
    return -1;
}

typedef void (*CbA_8040C540)(s16, s32, s16, s32, s16);
typedef void (*CbB_8040C540)(s16, u32, s16);

struct SubA_8040C540 {
    u32 f0;
    s32 f4;
    s16 f8;
    u8 padA[2];
    s32 fC;
    s16 f10;
    u8 pad12[2];
    CbA_8040C540 cb;
};

struct SubB_8040C540 {
    u32 f0;
    s16 f4;
    u8 pad6[2];
    CbB_8040C540 cb;
    u8 *fC;
};

struct Conn_8040C540 {
    s16 f0;
    s16 id;
    u8 pad4[4];
    s16 state;
    u8 padA[2];
    u32 thread;
    s16 err;
    u8 pad12[0xE];
    u8 sub[0x20];
};

void TLobby__sub_8040C74C(void *);
s16 TLobby__sub_8040C8A8(u32, void *, s16);
s16 TLobby__sub_8040C978(void *);

void TLobby::dispatch_request_callback(s16 status) {
    Conn_8040C540 *connection = (Conn_8040C540 *)this;
    SubA_8040C540 *a;
    SubB_8040C540 *b;
    s32 err;

    switch (connection->state) {
    case 1:
        a = (SubA_8040C540 *)connection->sub;
        if ((u32)a->cb == 0xFFFFFFFFU) {
            return;
        }
        if (a->cb == NULL) {
            if (status != 0) {
                TLobby__sub_80421814();
                if (connection->thread != 0xFFFFFFFFU) {
                    TLobby::resume_thread(connection->thread);
                    connection->thread = -1;
                }
                TLobby__sub_804217E4();
                return;
            }
            if (connection->thread != 0xFFFFFFFFU) {
                TLobby::resume_thread(connection->thread);
                connection->thread = -1;
            }
            return;
        }
        err = connection->err;
        if ((s16)err < 0) {
            a->cb(connection->id, a->f4, err, a->fC, 0);
        } else {
            TLobby__sub_8040C74C(a);
            a->cb(connection->id, a->f4, a->f8, a->fC, a->f10);
        }
        a->cb = NULL;
        break;
    case 12:
        b = (SubB_8040C540 *)connection->sub;
        if ((u32)b->cb == 0xFFFFFFFFU) {
            return;
        }
        if (b->cb == NULL) {
            if (status != 0) {
                TLobby__sub_80421814();
                if (connection->thread != 0xFFFFFFFFU) {
                    TLobby::resume_thread(connection->thread);
                    connection->thread = -1;
                }
                TLobby__sub_804217E4();
                return;
            }
            if (connection->thread != 0xFFFFFFFFU) {
                TLobby::resume_thread(connection->thread);
                connection->thread = -1;
            }
            return;
        }
        err = connection->err;
        if ((s16)err < 0) {
            b->cb(connection->id, b->f0, err);
        } else {
            if (b->fC == NULL) {
                b->f4 = -0x42;
            } else if (b->f0 == 0) {
                b->f4 = TLobby__sub_8040C978(b->fC + 0x1C);
            } else {
                b->f4 = TLobby__sub_8040C8A8(b->f0, b->fC + 0x1C, b->f4);
            }
            b->cb(connection->id, b->f0, b->f4);
        }
        b->cb = NULL;
        break;
    }
}

s32 TLobby__sub_8040C9E0(u8 *arg0, u8 *arg1) {
    struct Fields_arg0 { u8 pad_0[4]; s32 field_4; u8 pad_8[16]; u16 field_18; };
    struct Fields_arg1 { u8 pad_0[4]; u32 field_4; u8 pad_8[16]; u16 field_18; };
    s32 var_r5;
    u8 *var_r3;
    u8 *var_r4;
    switch ((s32) (((Fields_arg0*)arg0)->field_18)) {
    case 1:
        if ((u16) ((Fields_arg1*)arg1)->field_18 != 1) {
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        switch (((Fields_arg0*)arg0)->field_4) {
        case 4:
            if ((u32) ((Fields_arg1*)arg1)->field_4 != 4U) {
                var_r3 = (u8 *)((void *)-1);
                return -1;
            }
            var_r3 = (u8 *)(arg0 + 8);
            var_r4 = (u8 *)(arg1 + 8);
            var_r5 = 4;
            return NetMemcmp((void *)(var_r3), (void *)(var_r4), 4);
        case 6:
            if ((u32) ((Fields_arg1*)arg1)->field_4 != 6U) {
                var_r3 = (u8 *)((void *)-1);
                return -1;
            }
            var_r3 = (u8 *)(arg0 + 8);
            var_r4 = (u8 *)(arg1 + 8);
            var_r5 = 0x10;
            return NetMemcmp((void *)(var_r3), (void *)(var_r4), 0x10);
        default:
        case 0:
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        break;
    case 28:
        if ((u16) ((Fields_arg1*)arg1)->field_18 != 0x1C) {
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        switch (((Fields_arg0*)arg0)->field_4) {
        case 4:
            if ((u32) ((Fields_arg1*)arg1)->field_4 != 4U) {
                var_r3 = (u8 *)((void *)-1);
                return -1;
            }
            var_r3 = (u8 *)(arg0 + 8);
            var_r4 = (u8 *)(arg1 + 8);
            var_r5 = 4;
            return NetMemcmp((void *)(var_r3), (void *)(var_r4), 4);
        case 6:
            if ((u32) ((Fields_arg1*)arg1)->field_4 != 6U) {
                var_r3 = (u8 *)((void *)-1);
                return -1;
            }
            var_r3 = (u8 *)(arg0 + 8);
            var_r4 = (u8 *)(arg1 + 8);
            var_r5 = 0x10;
            return NetMemcmp((void *)(var_r3), (void *)(var_r4), 0x10);
        default:
        case 0:
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        break;
    default:
        var_r3 = (u8 *)((void *)-1);
        return -1;
    }
}

s32 TLobby__sub_8040E780(s32, s32, s32, s32, s32, s32, void *);
s32 TLobby__sub_80410A98(s32, void *, void *, void *, void *);

s32 TLobby::dispatch_by_addr_family(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, void *arg4, void *arg5) {
    switch (*(s32 *)arg2) {
    case 4:
        return TLobby__sub_8040E780(arg0, *(s32 *)(arg1 + 4), *(s32 *)(arg2 + 4), arg3[0], arg3[1], arg3[2], arg5);
    case 6:
        return TLobby__sub_80410A98(arg0, arg1 + 4, arg2 + 4, arg4, arg5);
    case 0:
    default:
        return -2;
    }
}

u16 TLobby__sub_8040D8F0(u8 *arg0, u8 *arg1, s8 arg2, u8 *pkt, s16 flag) {
    struct Fields_arg0 { s32 field_0; s32 field_4; };
    struct Fields_arg1 { u8 pad_0[4]; s32 field_4; };
    switch (((Fields_arg0*)arg0)->field_0) {
    case 4:
        return TLobby::calc_pseudo_header_checksum(((Fields_arg0*)arg0)->field_4, ((Fields_arg1*)arg1)->field_4, arg2, pkt, flag);
    case 6:
        return TLobby__sub_80411040((const IPv6Address *)((void *) (arg0 + 4)), (const IPv6Address *)((void *) (arg1 + 4)), arg2, (const NetPacket *)(pkt), flag);
    case 0:
    default:
        return 0xFFFEU;
    }
}

struct Ent_8040D95C { u8 pad0[2]; s16 f2; u8 pad4[2]; s16 f6; u8 pad8[4]; s32 fC; };
struct In_8040D95C { s32 type; s32 f4; };
struct Out_8040D95C { s32 type; u32 f4; };
s32 TLobby__sub_8040EF50(void *, s32, s32);
s32 TLobby__sub_80411F1C(void *, void *, s32);
s32 select_source_address__6TLobbyFPvPv(Out_8040D95C *arg0, In_8040D95C *arg1) {
    Ent_8040D95C *e;
    s16 ok;
    s16 NetIPv6IsUnspecified(u8 *arg0);

    switch (arg1->type) {
    case 4:
        {
        u32 v = arg0->f4;
        if (v != 0) {
            return 0;
        }
        e = (Ent_8040D95C *)TLobby__sub_8040F76C(arg1->f4, v);
        if (e == NULL) {
            return -6;
        }
        arg0->type = 4;
        return TLobby__sub_8040EF50(&arg0->f4, e->fC, e->f2);
        }
    case 6:
        ok = NetIPv6IsUnspecified((u8 *)&arg0->f4);
        if (ok == 0) {
            return 0;
        }
        e = (Ent_8040D95C *)TLobby__sub_80413264(&arg1->f4, (s32)&arg0->f4);
        if (e == NULL) {
            return -6;
        }
        arg0->type = 6;
        return TLobby__sub_80411F1C(&arg0->f4, &arg1->f4, e->f6);
    case 0:
    default:
        return -2;
    }
}

s32 TLobby__sub_8040DA54(u8 *arg0, u8 *arg1) {
    struct Fields_arg0 { s32 field_0; u8 * field_4; };
    struct Fields_arg1 { u8 pad_0[4]; s32 field_4; };
    s32 var_r4;
    u8 *var_r3;
    switch (((Fields_arg0*)arg0)->field_0) {
    case 4:
        var_r3 = (u8 *)(((Fields_arg0*)arg0)->field_4);
        var_r4 = ((Fields_arg1*)arg1)->field_4;
        return TLobby::is_lookup_found((u32)var_r3, (u32)(var_r4));
    case 6:
        var_r3 = (u8 *)(arg0 + 4);
        var_r4 = (long) (arg1 + 4);
        return TLobby__sub_80413230((u8 *)(var_r3), (s32)(var_r4));
    default:
    case 0:
        var_r3 = (u8 *)((void *)-2);
        return -2;
    }
}

s16 TLobby__sub_8040DABC(u8 *arg0) {
    u32 ip;
    switch (*(s32 *)((s8 *)arg0 + 0)) {
    case 0:
        return 0;
    case 4:
        ip = *(u32 *)((s8 *)arg0 + 4);
        if (ip != 0) {
            return TLobby__sub_8040FCEC(ip);
        }
        return 0;
    case 6:
        return TLobby__sub_804136EC((s32) (arg0 + 4));
    default:
        return -2;
    }
}

s32 TLobby::is_multicast_address(s16 arg1) {
    u8 *arg0 = (u8 *)this;
    struct Fields_arg0 { s32 field_0; u32 field_4; };
    switch (((Fields_arg0*)arg0)->field_0) {
    case 4:
        return TLobby__sub_8040FDA0(((Fields_arg0*)arg0)->field_4, arg1);
    case 6:
        return NetIPv6IsMulticast((u8 *)(arg0 + 4));
    case 0:
    default:
        return 0;
    }
}

s32 is_addr_unspecified__6TLobbyFPv(u8 *arg0) {
    struct Fields_arg0 { s32 field_0; u32 field_4; };
    switch (((Fields_arg0*)arg0)->field_0) {
    case 0:
        return 1;
    case 4:
        return NetIPv4IsUnspecified((u32)(((Fields_arg0*)arg0)->field_4));
    case 6:
        return NetIPv6IsUnspecified((u8 *)(arg0 + 4));
    default:
        return 0;
    }
}

s32 TLobby::compare_sockaddr(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    struct Fields_arg0 { s32 field_0; u8 * field_4; };
    struct Fields_arg1 { u32 field_0; u8 * field_4; };
    u8 *var_r3;
    u8 *var_r4;
    switch (((Fields_arg0*)arg0)->field_0) {
    case 4:
        if ((u32) ((Fields_arg1*)arg1)->field_0 != 4U) {
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        var_r3 = (u8 *)(((Fields_arg0*)arg0)->field_4);
        var_r4 = (u8 *)(((Fields_arg1*)arg1)->field_4);
        return TLobby__sub_8040FEE4((s32)(var_r3), (s32)(var_r4));
    case 6:
        if ((u32) ((Fields_arg1*)arg1)->field_0 != 6U) {
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        var_r3 = (u8 *)(arg0 + 4);
        var_r4 = (u8 *)(arg1 + 4);
        return NetIPv6CompareAddresses((s32)(var_r3), (s32)(var_r4));
    default:
    case 0:
        var_r3 = (u8 *)((void *)-1);
        return -1;
    }
}

typedef char RecoveredGlobal_8040EF00_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040EF00_lbl_805C1B60) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8040DD68_lbl_805C1B38_size[sizeof(RecoveredGlobal_8040DD68_lbl_805C1B38) == 0x28 ? 1 : -1];

s16 TLobby__sub_8040DC8C(u8 *arg0, u8 *arg1) {
    s16 temp_r3;
    s16 entry_field_26;
    u32 temp_r5;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    temp_r5 = *(u32 *)((s8 *)arg0 + 0);
    if ((u32) *(u32 *)((s8 *)arg1 + 0) != temp_r5) {
        return -2;
    }
    switch ((s32) temp_r5) {
    case 4:
        temp_r3_3 = (u8 *)(TLobby__sub_8040F76C(*(s32 *)((s8 *)arg0 + 4), *(s32 *)((s8 *)arg1 + 4)));
        if (temp_r3_3 == NULL) {
            return -6;
        }
        temp_r3 = TLobby__sub_8040EF00(*(s16 *)((s8 *)temp_r3_3 + 2));
        if (temp_r3 < 0x28) {
            return -6;
        }
        return temp_r3 - 0x28;
    case 6:
        temp_r3_4 = (u8 *)(TLobby__sub_80413264(arg0 + 4, (s32)(arg1 + 4)));
        if (temp_r3_4 == NULL) {
            return -6;
        }
        entry_field_26 = TLobby::get_entry_field_26(*(s16 *)((s8 *)temp_r3_4 + 6));
        if (entry_field_26 < 0x3C) {
            return -6;
        }
        return entry_field_26 - 0x3C;
    case 0:
    default:
        return -2;
    }
}

s32 TLobby__sub_8040DD68(void) {
    TLobby::release_slot_by_id(0x800);
    TLobby__sub_803F892C((void *)((void *) (&ipv4_protocol_state.value)));
    ipv4_protocol_state.value = 0;
    return 0;
}

typedef void (*Handler_8041A130)(s32, s16, s16, s16);
s32 register_protocol_handler__6TLobbyFUsi(u16 type, Handler_8041A130 fn);
void TUdpSocket__sub_8040DE4C(void);
s32 TLobby::init_ipv4_interfaces() {
    s16 i;
    E_8040DDB0 *e;
    RecoveredGlobal_8040DD68_lbl_805C1B38 *g = &ipv4_protocol_state;

    TLobby__sub_803F8930((u8 *)&g->value);
    e = g->ents;
    for (i = 0; i < g->value; i++) {
        e->c0 = 0x49;
        e->c1 = 0x50;
        e->c2 = 0x34;
        e->c3 = i;
        e->f4 = 0;
        e++;
    }
    g->f8 = 1;
    register_protocol_handler__6TLobbyFUsi(0x800, (Handler_8041A130)TUdpSocket__sub_8040DE4C);
    return 0;
}

typedef char RecoveredGlobal_8040ED28_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040ED28_lbl_805C1B60) == 0x18 ? 1 : -1];

struct PH_8040EC38 { s32 src; s32 dst; u8 zero; s8 proto; u16 len; };
struct P_8040EC38 { u8 pad0[8]; s32 f8; s16 fC; };

u16 TUdpSocket__sub_80419864(void *, s32);

u16 TLobby::calc_pseudo_header_checksum(s32 src, s32 dst, s8 proto, void *pkt, s16 flag) {
    PH_8040EC38 ph;
    u32 sum;

    ph.src = src;
    ph.dst = dst;
    ph.zero = 0;
    ph.proto = proto;
    if (flag == 0) {
        ph.len = ((P_8040EC38 *)pkt)->f8 - ((P_8040EC38 *)pkt)->fC;
    } else {
        ph.len = ((P_8040EC38 *)pkt)->f8;
    }
    sum = TUdpSocket__sub_80419864(&ph, 6);
    sum += TLobby__sub_80406BD8(pkt, flag);
    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += sum >> 16;
    return ~sum;
}

u16 TLobby::calc_ip_checksum(s16 b) {
    u32 s = TLobby__sub_80406BD8(this, b);
    s = (s >> 16) + (s & 0xFFFF);
    s += (s >> 16);
    return ~s;
}

s32 TLobby__sub_8040ED28(void) {
    TLobby__sub_803F8958((void *)((void *) (&(*(RecoveredGlobal_8040ED28_lbl_805C1B60 *)&ipv4_address_routing_state).value)));
    *(s16 *)((s8 *)(&(*(RecoveredGlobal_8040ED28_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 0) = 0;
    *(s16 *)((s8 *)(&(*(RecoveredGlobal_8040ED28_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 2) = 0;
    *(s16 *)((s8 *)(&(*(RecoveredGlobal_8040ED28_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 4) = 0;
    return 0;
}

typedef char RecoveredGlobal_8040ED70_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040ED70_lbl_805C1B60) == 0x18 ? 1 : -1];
s32 TLobby__sub_8040ED70(void) {
    ((TLobby *)(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&ipv4_address_routing_state).value))->init_buffer_descriptor_a();
    NetMemset((void *)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 8))), 0, (int)((int) (*(s16 *)((s8 *)(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 0) * 0x14)));
    NetMemset((void *)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 0xC))), 0, (int)((int) (*(s16 *)((s8 *)(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 2) * 0x14)));
    NetMemset((void *)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 0x10))), 0, (int)((int) (*(s16 *)((s8 *)(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 4) * 0x18)));
    return 0;
}

#pragma push
#pragma opt_common_subs on
s16 TLobby__sub_8040EF00(s16 arg0) {
    struct Fields_temp_r3 { s16 field_0; u8 pad_2[2]; s16 field_4; };
    u8 *temp_r3;
    if ((arg0 < 0) || (arg0 >= (s16) *(s16 *)((s8 *)(&ipv4_address_routing_state.value) + 2))) {
        return -0x109;
    }
    temp_r3 = (u8 *)(*(s32 *)((s8 *)(&ipv4_address_routing_state.value) + 0xC) + (arg0 * 0x1C));
    if ((s16) ((Fields_temp_r3*)temp_r3)->field_0 != 1) {
        return -2;
    }
    return ((Fields_temp_r3*)temp_r3)->field_4;
}
#pragma pop

s32 TLobby::is_lookup_found(u32 arg0, u32 arg1) {
    if (TLobby__sub_8040F76C(arg0, arg1) != NULL) {
        return 1;
    }
    return 0;
}

struct A_RT { u8 pad0[4]; u32 addr; u8 pad8[8]; u32 mask; A_RT *next; };
struct E_RT { s16 state; u8 pad2[6]; u32 addr; u8 padC[8]; u32 mask; A_RT *alias; };
struct G_RT { s16 f0; s16 count; s16 maxalias; u8 pad6[6]; E_RT *ents; };

s16 TLobby__sub_8040FCEC(u32 ip) {
    G_RT *g;
    s16 m;
    s16 n;
    s16 i;
    s16 j;
    E_RT *e;
    A_RT *a;

    g = (G_RT *)&ipv4_address_routing_state;
    e = g->ents;
    i = 0;
    m = g->maxalias;
    n = g->count;

    for (; i < n; i++, e++) {
        if (e->state == 1) {
            if (e->addr == ip) {
                return i;
            }
            for (a = e->alias, j = 0; a != NULL && j < m; j++) {
                if (a->addr == ip) {
                    return i;
                }
                a = a->next;
            }
        }
    }
    return -1;
}

s32 NetIPv4IsLoopback(s32 arg0) {
    if ((u32) ((arg0 & 0xFF000000) + 0x81000000) == 0U) {
        return 1;
    }
    return 0;
}

struct Ent_8040FDA0 { s16 state; u8 pad2[6]; u32 f8; u32 fC; u8 pad10[0xC]; };
struct G_8040FDA0 { s16 f0; s16 count; u8 pad4[8]; Ent_8040FDA0 *ents; };

s32 TLobby__sub_8040FDA0(u32 arg0, s16 arg1) {
    Ent_8040FDA0 *e;
    if (arg1 < 0 || arg1 >= ((G_8040FDA0 *)&ipv4_address_routing_state)->count) {
        e = NULL;
    } else {
        e = ((G_8040FDA0 *)&ipv4_address_routing_state)->ents;
        e += arg1;
        if (e->state != 1) {
            e = NULL;
        }
    }
    if (e == NULL) {
        return 0;
    }
    if (e->f8 == 0 || arg0 == 0xFFFFFFFF || arg0 == e->fC) {
        return 1;
    }
    return 0;
}

s32 NetIPv4IsUnspecified(u32 arg0) {
    if (arg0 == 0U) {
        return 1;
    }
    return 0;
}

typedef char RecoveredGlobal_8040FE40_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040FE40_lbl_805C1B60) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8040FE9C_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040FE9C_lbl_805C1B60) == 0x18 ? 1 : -1];

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_8040FE40(s16 arg0) {
    struct Fields_var_r3 { s16 field_0; };
    s16 *var_r3;
    if ((arg0 < 0) || (arg0 >= (s16) *(s16 *)((s8 *)(&(*(RecoveredGlobal_8040FE40_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 2))) {
        var_r3 = (s16 *)(NULL);
    } else {
        var_r3 = (s16 *)(*(s32 *)((s8 *)(&(*(RecoveredGlobal_8040FE40_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 0xC) + (arg0 * 0x1C));
        if ((s16) ((Fields_var_r3*)var_r3)->field_0 != 1) {
            var_r3 = (s16 *)(NULL);
        }
    }
    if (var_r3 != NULL) {
        return 1;
    }
    return 0;
}
#pragma pop

#pragma push
#pragma opt_common_subs on
s16 *TLobby::get_active_entry_by_index(s16 arg0) {
    s16 *temp_r3;
    if ((arg0 < 0) || (arg0 >= (s16) *(s16 *)((s8 *)(&(*(RecoveredGlobal_8040FE9C_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 2))) {
        return NULL;
    }
    temp_r3 = (s16 *)(*(s32 *)((s8 *)(&(*(RecoveredGlobal_8040FE9C_lbl_805C1B60 *)&ipv4_address_routing_state).value) + 0xC) + (arg0 * 0x1C));
    if ((s16) *temp_r3 != 1) {
        return NULL;
    }
    return temp_r3;
}
#pragma pop

s32 TLobby__sub_8040FEE4(s32 arg0, s32 arg1) {
    s32 temp_r0;
    temp_r0 = arg0 - arg1;
    if (temp_r0 < 0) {
        return -1;
    }
    if (temp_r0 > 0) {
        return 1;
    }
    return 0;
}

typedef char RecoveredGlobal_8041123C_lbl_805C1BB8_size[sizeof(RecoveredGlobal_8041123C_lbl_805C1BB8) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_804112B8_lbl_805C1BB8_size[sizeof(RecoveredGlobal_804112B8_lbl_805C1BB8) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_80411ECC_lbl_805C1BB8_size[sizeof(RecoveredGlobal_80411ECC_lbl_805C1BB8) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_8040FF0C_lbl_805C1B78_size[sizeof(RecoveredGlobal_8040FF0C_lbl_805C1B78) == 0x40 ? 1 : -1];
s32 NetIPv6Shutdown(void) {
    TLobby::release_slot_by_id(0x86DD);
    TLobby__sub_803F87DC((void *)((void *) (&ipv6_protocol_state.value)));
    ipv6_protocol_state.value = 0;
    return 0;
}

void TLobby__sub_8040FFF8(void);
s32 NetIPv6Init(void) {
    s16 i;
    E_8040FF58 *e;
    RecoveredGlobal_8040FF0C_lbl_805C1B78 *g = &ipv6_protocol_state;

    ((TLobby *)((Obj_803F87E0 *)&g->value))->init_ipv6_interface_config();
    e = g->ents;
    for (i = 0; i < g->value; i++) {
        e->c0 = 0x49;
        e->c1 = 0x50;
        e->c2 = 0x36;
        e->c3 = i;
        e->f4 = 0;
        e++;
    }
    g->f8 = 1;
    register_protocol_handler__6TLobbyFUsi(0x86DD, (Handler_8041A130)TLobby__sub_8040FFF8);
    return 0;
}

#pragma push
#pragma opt_common_subs on
void TLobby__sub_80411334(void);
s32 TLobby__sub_8041112C(void) {
    RecoveredGlobal_8041123C_lbl_805C1BB8 *g = &ipv6_address_routing_state;
    NetUnregisterTimer((void *)TLobby__sub_80411334);
    NetUnregisterTimer((void *)TLobby::tick_entry_timers);
    TLobby__sub_803F8864(g);
    g->ab.a = 0;
    g->ab.b = 0;
    g->c = 0;
    return 0;
}

struct G_8041118C {
    s16 n0; s16 n1; s16 n2; u8 pad6[0xE]; s16 n14; u8 pad16[2];
    void *p18; void *p1C; void *p20; void *p24;
};

#define g ((G_8041118C *)&ipv6_address_routing_state)
s32 TUdpSocket__sub_8041118C(void) {
    ((TLobby *)g)->init_udp_socket_config();
    NetMemset(g->p18, 0, g->n0 * 0x2A);
    NetMemset(g->p1C, 0, g->n1 * 0x2A);
    NetMemset(g->p20, 0, g->n2 * 0x2C);
    NetMemset(g->p24, 0, g->n14 * 0x16);
    NetRegisterTimer(0x3E8, (s16)(1), (NetTimerCallback)(TLobby__sub_80411334));
    NetRegisterTimer(0x3E8, (s16)(1), (NetTimerCallback)(TLobby::tick_entry_timers));
    return 0;
}
#undef g

s32 TLobby__sub_8041123C(s32 arg0, s32 arg1, s16 arg2) {
    struct Fields_temp_r3 { s16 field_0; s16 field_2; };
    u8 *temp_r3;
    if ((arg2 < 0) || (arg2 >= (s16) *(s16 *)((s8 *)(&ipv6_address_routing_state.value) + 2))) {
        return -0x10A;
    }
    temp_r3 = (u8 *)(*(s32 *)((s8 *)(&ipv6_address_routing_state.value) + 0x1C) + (arg2 * 0x30));
    if ((s16) ((Fields_temp_r3*)temp_r3)->field_0 != 1) {
        return -6;
    }
    return TLobby::call_handler_by_index(arg2, (s32)((s32) ((Fields_temp_r3*)temp_r3)->field_2), 0, arg1, arg0);
}
#pragma pop

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_804112B8(s32 arg0, s32 arg1, s16 arg2) {
    struct Fields_temp_r3 { s16 field_0; s16 field_2; };
    u8 *temp_r3;
    if ((arg2 < 0) || (arg2 >= (s16) *(s16 *)((s8 *)(&(*(RecoveredGlobal_804112B8_lbl_805C1BB8 *)&ipv6_address_routing_state).value) + 2))) {
        return -0x10A;
    }
    temp_r3 = (u8 *)(*(s32 *)((s8 *)(&(*(RecoveredGlobal_804112B8_lbl_805C1BB8 *)&ipv6_address_routing_state).value) + 0x1C) + (arg2 * 0x30));
    if ((s16) ((Fields_temp_r3*)temp_r3)->field_0 != 1) {
        return -6;
    }
    return TLobby::call_handler_by_index(arg2, (s32)((s32) ((Fields_temp_r3*)temp_r3)->field_2), 2, arg1, arg0);
}
#pragma pop

#pragma push
#pragma opt_common_subs on
struct Ent_80411BE8 { s16 f0; u8 pad[0x12]; s16 f14; };
struct G_80411BE8 { u8 pad[0x14]; s16 n; u8 pad2[0xE]; Ent_80411BE8 *p; };

void TLobby::tick_entry_timers() {
    G_80411BE8 *G = (G_80411BE8 *)&ipv6_address_routing_state;
    s16 i;
    Ent_80411BE8 *e = G->p;
    for (i = 0; i < G->n; i++, e++) {
        if (e->f0 == 1) {
            if (e->f14 > 0) {
                e->f14--;
            } else {
                e->f0 = 0;
            }
        }
    }
}

s16 TLobby::get_entry_field_26(s16 arg0) {
    struct Fields_temp_r3 { s16 field_0; u8 pad_2[36]; s16 field_26; };
    u8 *temp_r3;
    if ((arg0 < 0) || (arg0 >= (s16) *(s16 *)((s8 *)(&(*(RecoveredGlobal_80411ECC_lbl_805C1BB8 *)&ipv6_address_routing_state).value) + 2))) {
        return -0x10A;
    }
    temp_r3 = (u8 *)(*(s32 *)((s8 *)(&(*(RecoveredGlobal_80411ECC_lbl_805C1BB8 *)&ipv6_address_routing_state).value) + 0x1C) + (arg0 * 0x30));
    if ((s16) ((Fields_temp_r3*)temp_r3)->field_0 != 1) {
        return -2;
    }
    return ((Fields_temp_r3*)temp_r3)->field_26;
}
#pragma pop

struct Ent_80412210 {
    s16 f0;
    u8 p2[4];
    s16 f6;
    u8 f8[16];
    u8 f18[16];
    s16 f28;
};
struct Grp_80412210 {
    s16 f0;
    u8 f2[16];
    s16 f12;
    u8 p14[0x14];
    Grp_80412210 *f28;
};
struct If_80412210 {
    s16 f0;
    s16 f2;
    u8 f4[16];
    s16 f14;
    u8 p16[0x10];
    s16 f26;
    s32 f28;
    Grp_80412210 *f2c;
};
struct G_80412210 {
    s16 f0;
    s16 f2;
    s16 f4;
    u8 p6[0x12];
    Ent_80412210 *table;
    If_80412210 *ifs;
};

void TLobby__sub_80414B98(void *, s32, void *);

#define G ((G_80412210 *)&ipv6_address_routing_state)

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline s16 cmp_80412210(void *a, void *b) {
    s32 r = NetMemcmp(a, b, 16);
    if (r < 0) {
        return -1;
    }
    if (r > 0) {
        return 1;
    }
    return 0;
}

inline s16 getaddr_80412210(s16 *n, If_80412210 **ifs, void *out) {
    if (*n <= 0) {
        return 0;
    }
    if ((*ifs)->f0 != 1) {
        return 0;
    }
    NetMemcpy(out, (*ifs)->f4, 16);
    return 1;
}

inline void remove_80412210(G_80412210 *g, void *grp, void *src) {
    s16 n = g->f0;
    Ent_80412210 *e = g->table;
    for (; n > 0; n--, e++) {
        if (e->f0 == 1 && e->f28 == 0x80 && cmp_80412210(e->f8, grp) == 0 && cmp_80412210(e->f18, src) == 0) {
            e->f0 = 0;
            return;
        }
    }
}

s16 TLobby__sub_80412210(s16 idx) {
    s16 is_socket_flag_set__6TLobbyFs(s16);
    G_80412210 *g = G;
    u8 d[16];
    u8 c[16];
    u8 b[16];
    u8 a[16];
    s16 *pn;
    If_80412210 **pifs;
    s16 count;
    If_80412210 *ifc;
    Grp_80412210 *grp;

    if (idx < 0 || idx >= *(pn = &g->f2)) {
        return -0x10A;
    }
    ifc = *(pifs = &g->ifs);
    ifc += idx;
    if (ifc->f0 != 1) {
        return 0;
    }
    grp = ifc->f2c;
    count = 0;
    while (grp != NULL && count < g->f4) {
        Grp_80412210 *next;
        if (is_socket_flag_set__6TLobbyFs(idx) == 0 && getaddr_80412210(pn, pifs, d)) {
            TLobby__sub_80414B98(b, 0x80, grp->f2);
            remove_80412210(g, b, d);
        }
        TLobby__sub_80409D7C(idx, ifc->f2, 2, (s32)grp->f2);
        NetIPv6MakeSolicitedNodeMulticastAddress(c, grp->f2);
        TLobby__sub_80409CE0(idx, ifc->f2, 2, (s32)c);
        next = grp->f28;
        grp->f0 = 0;
        NetMemset(grp->f2, 0, 16);
        grp->f12 = 0;
        count++;
        grp->f28 = NULL;
        grp = next;
    }
    if (is_socket_flag_set__6TLobbyFs(idx) == 0 && getaddr_80412210(pn, pifs, d)) {
        TLobby__sub_80414B98(a, 0x80, ifc->f4);
        remove_80412210(g, a, d);
    }
    {
        Ent_80412210 *e;
        s16 n;
        n = g->f0;
        e = g->table;
        for (; n > 0; n--, e++) {
            if (e->f0 == 1 && e->f6 == idx) {
                e->f0 = 0;
            }
        }
    }
    NetIPv6MakeSolicitedNodeMulticastAddress(c, ifc->f4);
    TLobby__sub_80409CE0(idx, ifc->f2, 2, (s32)c);
    init_ipv6_all_nodes_multicast_address(c, (s8)(2));
    TLobby__sub_80409CE0(idx, ifc->f2, 2, (s32)c);
    init_ipv6_all_nodes_multicast_address(c, (s8)(1));
    TLobby__sub_80409CE0(idx, ifc->f2, 2, (s32)c);
    TLobby::call_entry_callback(idx, ifc->f2);
    ifc->f0 = 0;
    ifc->f2 = 0;
    ifc->f26 = 0;
    NetMemset(ifc->f4, 0, 16);
    ifc->f14 = 0;
    ifc->f2c = NULL;
    ifc->f28 = 0;
    return 0;
}
#pragma pop
#undef G

s32 TLobby__sub_80413230(u8 *arg0, s32 arg1) {
    if (TLobby__sub_80413264(arg0, arg1) != NULL) {
        return 1;
    }
    return 0;
}

void TLobby__sub_804136AC(s16 i) {
    TLobby::is_slot_flag_0x20_set(i);
}

void TLobby__sub_804136CC(s16 i) {
    is_socket_flag_set__6TLobbyFs(i);
}

typedef char RecoveredGlobal_8041471C_lbl_805C1BB8_size[sizeof(RecoveredGlobal_8041471C_lbl_805C1BB8) == 0x28 ? 1 : -1];

struct RecoveredFields_804143BC_arg0 {
    u8 field_0;
    u8 field_1;
};
typedef char RecoveredFields_804143BC_arg0_0_offset[offsetof(RecoveredFields_804143BC_arg0, field_0) == 0x0 ? 1 : -1];
typedef char RecoveredFields_804143BC_arg0_1_offset[offsetof(RecoveredFields_804143BC_arg0, field_1) == 0x1 ? 1 : -1];
#pragma push
#pragma scheduling off
s32 NetIPv6GetAddressScopeClass(u8 *arg0) {
    s16 var_r0;
    s16 var_r0_2;
    s16 var_r0_3;
    s16 var_r0_4;
    s32 var_r3;
    u8 var_r4;
    u8 var_r5;

    var_r5 = ((RecoveredFields_804143BC_arg0 *)arg0)->field_0;
    if (var_r5 != 0xFE) {
        var_r0 = 0;
    } else {
        var_r4 = ((RecoveredFields_804143BC_arg0 *)arg0)->field_1;
        if (!(var_r4 & 0x80) || (var_r4 & 0x40)) {
            var_r0 = 0;
        } else {
            var_r0 = 1;
        }
    }
    if (var_r0 != 0) {
        var_r3 = 2;
        return 2;
    }
    if (var_r5 != 0xFE) {
        var_r0_2 = 0;
    } else {
        var_r4 = ((RecoveredFields_804143BC_arg0 *)arg0)->field_1;
        if (!(var_r4 & 0x80) || !(var_r4 & 0x40)) {
            var_r0_2 = 0;
        } else {
            var_r0_2 = 1;
        }
    }
    if (var_r0_2 != 0) {
        var_r3 = 3;
        return 3;
    }
    if ((s32) (var_r5 & 0xE0) != 0x20) {
        var_r0_3 = 0;
    } else {
        var_r0_3 = 1;
    }
    if (var_r0_3 != 0) {
        var_r3 = 4;
        return 4;
    }
    if (var_r5 == 0xFF) {
        var_r0_4 = 1;
    } else {
        var_r0_4 = 0;
    }
    if (var_r0_4 != 0) {
        switch (((RecoveredFields_804143BC_arg0 *)arg0)->field_1 & 0xF) {
        case 1:
            var_r3 = 1;
            return 1;
        case 2:
            var_r3 = 2;
            return 2;
        case 5:
            var_r3 = 3;
            return 3;
        default:
            var_r3 = 4;
            return 4;
        }
    } else {
        if (NetIPv6IsLoopback(arg0) != 0) {
            var_r3 = 1;
            return 1;
        }
        var_r3 = 0;
        return 0;
    }
}
#pragma pop

typedef struct Ent_80414504 { s16 state; s16 f2; u8 pad[0x2C]; } Ent_80414504;
typedef struct Mgr_80414504 {
    s16 a;
    s16 count;
    u8 pad4[0x18];
    Ent_80414504 *ents;
} Mgr_80414504;

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline Ent_80414504 *find_80414504(s16 id) {
    Mgr_80414504 *g;
    Ent_80414504 *e;

    if (id < 0 || id >= (g = (Mgr_80414504 *)&ipv6_address_routing_state)->count) {
        return NULL;
    }
    e = g->ents;
    e += id;
    if (e->state != 1) {
        return NULL;
    }
    return e;
}

s16 NetIPv6GetInterfaceLinkLayerAddress(s32 arg0, s16 arg1, s16 id) {
    Ent_80414504 *e;
    s16 r;
    s16 TLobby__sub_80409EB0(s16 arg0, s32 arg1);

    e = find_80414504(id);
    if (e == NULL) {
        return -0x10A;
    }
    r = TLobby__sub_80409EB0(id, e->f2);
    if (r < 0) {
        return r;
    }
    if (r > arg1) {
        return -2;
    }
    TLobby__sub_80409E18(id, e->f2, arg0);
    return r;
}
#pragma pop

#pragma push
#pragma opt_common_subs on
s16 *TLobby::get_valid_entry(s16 arg0) {
    s16 *temp_r3;
    if ((arg0 < 0) || (arg0 >= (s16) *(s16 *)((s8 *)(&(*(RecoveredGlobal_8041471C_lbl_805C1BB8 *)&ipv6_address_routing_state).value) + 2))) {
        return NULL;
    }
    temp_r3 = (s16 *)(*(s32 *)((s8 *)(&(*(RecoveredGlobal_8041471C_lbl_805C1BB8 *)&ipv6_address_routing_state).value) + 0x1C) + (arg0 * 0x30));
    if ((s16) *temp_r3 != 1) {
        return NULL;
    }
    return temp_r3;
}
#pragma pop

s32 NetIPv6MakeSolicitedNodeMulticastAddress(u8 *arg0, u8 *arg1) {
    *(u8 *)((s8 *)arg0 + 0) = 0xFF;
    *(s8 *)((s8 *)arg0 + 1) = 2;
    *(s8 *)((s8 *)arg0 + 2) = 0;
    *(s8 *)((s8 *)arg0 + 3) = 0;
    *(s8 *)((s8 *)arg0 + 4) = 0;
    *(s8 *)((s8 *)arg0 + 5) = 0;
    *(s8 *)((s8 *)arg0 + 6) = 0;
    *(s8 *)((s8 *)arg0 + 7) = 0;
    *(s8 *)((s8 *)arg0 + 8) = 0;
    *(s8 *)((s8 *)arg0 + 9) = 0;
    *(s8 *)((s8 *)arg0 + 0xA) = 0;
    *(s8 *)((s8 *)arg0 + 0xB) = 1;
    *(u8 *)((s8 *)arg0 + 0xC) = 0xFF;
    *(u8 *)((s8 *)arg0 + 0xD) = (u8) *(u8 *)((s8 *)arg1 + 0xD);
    *(u8 *)((s8 *)arg0 + 0xE) = (u8) *(u8 *)((s8 *)arg1 + 0xE);
    *(u8 *)((s8 *)arg0 + 0xF) = (u8) *(u8 *)((s8 *)arg1 + 0xF);
    return 0;
}

s32 init_ipv6_all_routers_multicast_address(u8 *address, s8 scope) {
    address[0] = 0xFF;
    address[1] = scope;
    address[2] = 0;
    address[3] = 0;
    address[4] = 0;
    address[5] = 0;
    address[6] = 0;
    address[7] = 0;
    address[8] = 0;
    address[9] = 0;
    address[0xA] = 0;
    address[0xB] = 0;
    address[0xC] = 0;
    address[0xD] = 0;
    address[0xE] = 0;
    address[0xF] = 2;
    return 0;
}

bool init_ipv6_all_nodes_multicast_address(u8 *address, s8 scope) {
    address[0] = 0xFF;
    address[1] = scope;
    address[2] = 0;
    address[3] = 0;
    address[4] = 0;
    address[5] = 0;
    address[6] = 0;
    address[7] = 0;
    address[8] = 0;
    address[9] = 0;
    address[0xA] = 0;
    address[0xB] = 0;
    address[0xC] = 0;
    address[0xD] = 0;
    address[0xE] = 0;
    address[0xF] = 1;
    return 0;
}

s32 NetIPv6IsLinkLocal(u8 *arg0) {
    u8 temp_r3;

    if ((u8) *(u8 *)((s8 *)arg0 + 0) != 0xFE) {
        return 0;
    }
    temp_r3 = *(u8 *)((s8 *)arg0 + 1);
    if (!(temp_r3 & 0x80) || (temp_r3 & 0x40)) {
        return 0;
    }
    return 1;
}

s16 NetIPv6IsLoopback(u8 *arg0) {
    struct Fields_arg0 { u8 field_0; u8 field_1; u8 field_2; u8 field_3; u8 field_4; u8 field_5; u8 field_6; u8 field_7; u8 field_8; u8 field_9; u8 field_A; u8 field_B; u8 field_C; u8 field_D; u8 field_E; u8 field_F; };
    if ((u8) ((Fields_arg0*)arg0)->field_0 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_1 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_2 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_3 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_4 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_5 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_6 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_7 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_8 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_9 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_A != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_B != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_C != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_D != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_E != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_F == 1) {
        return 1;
    }
    return 0;
}

s32 NetIPv6IsMulticast(u8 *arg0) {
    if ((u8) *arg0 == 0xFF) {
        return 1;
    }
    return 0;
}

s32 NetIPv6IsUnspecified(u8 *arg0) {
    struct Fields_arg0 { u8 field_0; u8 field_1; u8 field_2; u8 field_3; u8 field_4; u8 field_5; u8 field_6; u8 field_7; u8 field_8; u8 field_9; u8 field_A; u8 field_B; u8 field_C; u8 field_D; u8 field_E; u8 field_F; };
    if ((u8) ((Fields_arg0*)arg0)->field_0 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_1 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_2 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_3 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_4 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_5 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_6 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_7 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_8 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_9 != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_A != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_B != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_C != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_D != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_E != 0) {
        return 0;
    }
    if ((u8) ((Fields_arg0*)arg0)->field_F != 0) {
        return 0;
    }
    return 1;
}

s32 NetIPv6CompareAddresses(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = NetMemcmp((void *)arg0, (void *)arg1, 0x10);
    if (temp_r3 < 0) {
        return -1;
    }
    if (temp_r3 > 0) {
        return 1;
    }
    return 0;
}

s32 NetCompareBitsBackward(u8 *arg0, u8 *arg1, s16 arg2) {
    s16 n;
    s16 rem;
    s32 a;
    s32 b;
    if (arg2 <= 0) {
        return 0;
    }
    rem = arg2 % 8;
    n = arg2 / 8;
    while (n > 0) {
        if (*arg0 != *arg1) {
            return *arg0 - *arg1;
        }
        arg0--;
        arg1--;
        n--;
    }
    switch (rem) {
    case 1:
        a = *arg0 & 1;
        b = *arg1 & 1;
        if (a != b) {
            return a - b;
        }
        return 0;
    case 2:
        a = *arg0 & 3;
        b = *arg1 & 3;
        if (a != b) {
            return a - b;
        }
        return 0;
    case 3:
        a = *arg0 & 7;
        b = *arg1 & 7;
        if (a != b) {
            return a - b;
        }
        return 0;
    case 4:
        a = *arg0 & 0xF;
        b = *arg1 & 0xF;
        if (a != b) {
            return a - b;
        }
        return 0;
    case 5:
        a = *arg0 & 0x1F;
        b = *arg1 & 0x1F;
        if (a != b) {
            return a - b;
        }
        return 0;
    case 6:
        a = *arg0 & 0x3F;
        b = *arg1 & 0x3F;
        if (a != b) {
            return a - b;
        }
        return 0;
    case 7:
        a = *arg0 & 0x7F;
        b = *arg1 & 0x7F;
        if (a != b) {
            return a - b;
        }
        return 0;
    }
    return 0;
}

s32 NetCompareBitPrefix(u8 *a, u8 *b, s16 bits) {
    s16 n;
    s16 rem;
    if (bits <= 0) {
        return 0;
    }
    rem = bits % 8;
    n = bits / 8;
    for (; n > 0; n--) {
        if (*a != *b) {
            return *a - *b;
        }
        a++;
        b++;
    }
    switch (rem) {
    case 1:
        if ((*a & 0x80) != (*b & 0x80)) return (*a & 0x80) - (*b & 0x80);
        return 0;
    case 2:
        if ((*a & 0xC0) != (*b & 0xC0)) return (*a & 0xC0) - (*b & 0xC0);
        return 0;
    case 3:
        if ((*a & 0xE0) != (*b & 0xE0)) return (*a & 0xE0) - (*b & 0xE0);
        return 0;
    case 4:
        if ((*a & 0xF0) != (*b & 0xF0)) return (*a & 0xF0) - (*b & 0xF0);
        return 0;
    case 5:
        if ((*a & 0xF8) != (*b & 0xF8)) return (*a & 0xF8) - (*b & 0xF8);
        return 0;
    case 6:
        if ((*a & 0xFC) != (*b & 0xFC)) return (*a & 0xFC) - (*b & 0xFC);
        return 0;
    case 7:
        if ((*a & 0xFE) != (*b & 0xFE)) return (*a & 0xFE) - (*b & 0xFE);
        return 0;
    case 0:
    default:
        return 0;
    }
}

#define G_ (*(G_8041509C *)&network_loopback_state)
s32 TLobby__sub_8041509C(void) {
    u8 unused[8];
    TLobby::clear_table_entry_locked(G_.a);
    G_.a = -1;
    TLobby__sub_803F8B78(&G_);
    G_.c = 0;
    return 0;
}

void TLobby__sub_804150EC(void) {
    TLobby__sub_8041510C();
}

s32 TLobby__sub_8041549C(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_804154C0(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_804154E4(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_80415508(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

typedef char RecoveredGlobal_8041552C_lbl_805C1BE0_size[sizeof(RecoveredGlobal_8041552C_lbl_805C1BE0) == 0x18 ? 1 : -1];
s16 TLobby::get_slot_offset_or_default(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return *(s16 *)((s8 *)(&network_loopback_state.value) + 0xA);
}

struct E_80415558 { s16 a; s16 b; };
struct G_80415558 { s16 h; E_80415558 e[2]; };
s32 TLobby::clear_conn_slot(s16 i) {
    if (i != 0 && i != 1) { return -0x110; }
    G_80415558 *g = (G_80415558 *)&network_loopback_state;
    g->e[i].a = 0;
    g->e[i].b = 0;
    return 0;
}

struct E_8041559C { s16 a; s16 b; };
struct G_8041559C { s16 h; E_8041559C e[2]; };
s16 TLobby::alloc_conn_slot(s16 h, s16 v) {
    s16 r;
    G_8041559C *g = (G_8041559C *)&network_loopback_state;
    if (h != g->h) { return -0x110; }
    if (g->e[0].a == 0) {
        r = 0;
    } else if (g->e[1].a == 0) {
        r = 1;
    } else {
        return -0x110;
    }
    g->e[r].a = 1;
    g->e[r].b = v;
    return r;
}

s32 TLobby::fill_reply_buffer(s16 h, u8 *p) {
    if (h != *(s16 *)&network_loopback_state) { return -0x110; }
    p[0] = 0;
    *++p = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 1;
    return 0;
}

typedef char RecoveredGlobal_80415650_lbl_805C1BF8_size[sizeof(RecoveredGlobal_80415650_lbl_805C1BF8) == 0x10 ? 1 : -1];
s32 TLobby::reset_net_value() {
    TLobby__sub_803F89D8((void *)((void *) (&network_buffer_pool_state.value)));
    network_buffer_pool_state.value = 0;
    return 0;
}

struct A_80415B38 { s8 c0; s8 c1; s8 c2; s8 c3; u8 pad4[0x30]; s32 off; };
struct C_80415B38 { s8 c0; s8 c1; s8 c2; s8 c3; u8 pad4[2]; s16 f6; u8 pad8[0x1C]; };
struct B_80415B38 {
    s8 c0;
    s8 c1;
    s8 c2;
    s8 c3;
    u8 pad4[4];
    s16 id;
    u8 padA[2];
    u8 flags;
    u8 padD[3];
    A_80415B38 *link;
    u8 pad14[2];
    u8 addr[0x10];
    s16 f26;
    u8 pad28[0x20];
};
struct G_80415B38 {
    s16 na;
    s16 nb;
    s16 nc;
    u8 pad6[2];
    A_80415B38 *a;
    B_80415B38 *b;
    C_80415B38 *c;
    s16 stride;
    u8 pad16[2];
    s32 base;
    u8 pad1C[8];
    s16 maxage;
    u8 pad26[0xA];
};
extern G_80415B38 ipv6_neighbor_discovery_state;
void NetIPv6ShutdownNeighborDiscovery(void) {
    G_80415B38 *g = &ipv6_neighbor_discovery_state;
    NetUnregisterTimer((void *)NetIPv6TickNeighborDiscovery);
    TLobby__sub_803F88E0(g);
    g->nb = 0;
    g->nc = 0;
}

struct Arg2_80415B38 { u8 *addr; u8 *val; };
typedef struct Ent_80418670 { u8 pad0[3]; u8 f3; u8 pad4[2]; s16 f6; u8 pad8[0xC]; u8 f14[0x10]; } Ent_80418670;
s32 TLobby__sub_80411604(int, int, void *);
Ent_80418670 *NetIPv6SelectDefaultRouter(void *arg0);

s32 NetIPv6InitNeighborDiscovery(void) {
    s16 n;
    s32 off;
    A_80415B38 *a;
    C_80415B38 *c;
    B_80415B38 *b;
    Ent_80418670 *r;
    G_80415B38 *g;
    s16 stride;
    Arg2_80415B38 a2;
    Arg2_80415B38 a1;

    g = &ipv6_neighbor_discovery_state;
    NetMemset(g, 0, sizeof(G_80415B38));
    ((TLobby *)g)->init_buffer_descriptor_b();
    NetIPv6ApplyNeighborDiscoveryDefaults((u8 *)g);
    n = g->na;
    a = g->a;
    off = g->base;
    stride = g->stride;
    for (; n > 0; n--) {
        a->c0 = 0x50;
        a->c1 = 0x45;
        a->c2 = 0x4E;
        a->off = off;
        off += stride;
        a->c3 = 0;
        a++;
    }
    n = g->nc;
    c = g->c;
    for (; n > 0; n--) {
        c->c0 = 0x44;
        c->c1 = 0x4C;
        c->c2 = 0x45;
        c->c3 = 0;
        c->f6 = 0;
        c++;
    }
    n = g->nb;
    b = g->b;
    for (; n > 0; n--) {
        b->c0 = 0x4E;
        b->c1 = 0x43;
        b->c2 = 0x45;
        b->flags = 0;
        b->link = NULL;
        if (b->link != NULL) {
            b->link->c3 = 0;
            b->link = NULL;
        }
        if (b->flags & 0x80) {
            r = NetIPv6SelectDefaultRouter(b->addr);
            if (r == NULL) {
                a1.addr = b->addr;
                TLobby__sub_80411604(b->id, 6, &a1);
            } else {
                a2.val = r->f14;
                a2.addr = b->addr;
                TLobby__sub_80411604(b->id, 7, &a2);
            }
        }
        b->c3 = 0;
        b->f26 = 0;
        b++;
    }
    NetRegisterTimer(1000, (s16)(1), (NetTimerCallback)(NetIPv6TickNeighborDiscovery));
    return 0;
}

void NetIPv6TickNeighborDiscovery(void) {
    NetIPv6TickNeighborCache();
    TLobby__sub_8041615C();
}

s32 NetIPv6SendUnspecifiedSourceNeighborSolicitation(s32 arg0, s32 arg1) {
    struct Fields_temp_r3 { u8 pad_0[4]; s32 field_4; s32 field_8; };
    typedef char sp10_offset[(offsetof(Stack_80416008, sp10) == 0x0) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80416008, sp20) == 0x10) ? 1 : -1];
    Stack_80416008 stack;
    s32 temp_r31;
    u8 *free_entry;
    if (TLobby__sub_80413D78() != 0) {
        return -0x10E;
    }
    free_entry = (u8 *)(TLobby::alloc_free_entry());
    if (free_entry == NULL) {
        return -0x10E;
    }
    ((Fields_temp_r3*)free_entry)->field_4 = 0;
    ((Fields_temp_r3*)free_entry)->field_8 = 0;
    NetMemset((void *) (&stack.sp10), 0, 0x10);
    NetIPv6MakeSolicitedNodeMulticastAddress((u8 *)((void *) (&stack.sp20)), (u8 *)(arg0));
    temp_r31 = NetIPv6EmitNeighborSolicitation((int)free_entry, (void *)arg0, (void *) (&stack.sp10), (void *)arg1, 0);
    ((TUdpSocket *)free_entry)->release_entry();
    return temp_r31;
}

s16 TLobby__sub_804145D4(void *, void *);

s32 NetIPv6SendRouterSolicitation(s32 arg0) {
    u8 address[0x1C];
    u8 addr[0x10];
    s32 temp_r31;
    u8 *free_entry;

    free_entry = (u8 *)(TLobby::alloc_free_entry());
    if (free_entry == NULL) {
        return -0x10E;
    }
    *(s32 *)((s8 *)free_entry + 4) = 0;
    *(s32 *)((s8 *)free_entry + 8) = 0;
    init_ipv6_all_routers_multicast_address((u8 *)(address), (s8)(2));
    if (TLobby__sub_804145D4((void *)addr, (void *)arg0) < 0) {
        NetMemset(addr, 0, 0x10);
    }
    temp_r31 = NetIPv6EmitRouterSolicitation((NetPacket *)(free_entry), (NetIPv6SendParameters *)(addr), (s32)(arg0));
    ((TUdpSocket *)free_entry)->release_entry();
    return temp_r31;
}

typedef struct Sub_804162A4 { u8 pad0[3]; u8 state; s16 count; } Sub_804162A4;
typedef struct Ent_804162A4 {
    u8 pad0[3];
    u8 state;
    s16 phase;
    u8 pad6[2];
    s16 id;
    s16 timer;
    u8 flags;
    u8 padD[3];
    Sub_804162A4 *sub;
    s16 tries;
    u8 name[0x10];
    s16 f26;
    u8 pad28[0x20];
} Ent_804162A4;
typedef struct Glob_804162A4 {
    u8 pad0[2];
    s16 count;
    u8 pad4[8];
    Ent_804162A4 *ents;
    u8 pad10[0xC];
    s16 maxTries0;
    s16 maxTries1;
    u8 pad20[4];
    s16 delay1;
    u8 pad26[2];
    s16 delay;
} Glob_804162A4;
typedef struct Arg_804162A4 { u8 *p; s32 v; } Arg_804162A4;
s32 NetIPv6SendMulticastNeighborProbe(u8 *arg0);
s32 NetIPv6SendUnicastNeighborProbe(u8 *arg0);

void NetIPv6TickNeighborCache(void) {
    Arg_804162A4 a7;
    Arg_804162A4 a6;
    Arg_804162A4 a7b;
    Arg_804162A4 a6b;
    Glob_804162A4 *g = (Glob_804162A4 *)&ipv6_neighbor_discovery_state;
    s16 n;
    Ent_804162A4 *e;
    Ent_80418670 *r;

    n = g->count;
    e = g->ents;
    while (n > 0) {
        if (e->state == 1) {
            if (e->timer > 1) {
                e->timer--;
                if (e->sub != NULL) {
                    e->sub->count--;
                }
            } else {
                switch (e->phase) {
                case 0:
                    if (++e->tries < g->maxTries0) {
                        NetIPv6SendMulticastNeighborProbe((u8 *)e);
                        e->timer = g->delay;
                    } else {
                        if (e->sub != NULL) {
                            e->sub->state = 0;
                            e->sub = NULL;
                        }
                        if (e->flags & 0x80) {
                            r = NetIPv6SelectDefaultRouter(e->name);
                            if (r == NULL) {
                                a6.p = e->name;
                                TLobby__sub_80411604(e->id, 6, &a6);
                            } else {
                                a7.v = (s32)r->f14;
                                a7.p = e->name;
                                TLobby__sub_80411604(e->id, 7, &a7);
                            }
                        }
                        e->state = 0;
                        e->f26 = 0;
                    }
                    break;
                case 1:
                    e->phase = 2;
                    e->timer = g->delay1;
                    break;
                case 2:
                    e->timer = 0;
                    break;
                case 3:
                    NetIPv6SendUnicastNeighborProbe((u8 *)e);
                    e->phase = 4;
                    e->timer = g->delay;
                    e->tries = 0;
                    break;
                case 4:
                    if (++e->tries < g->maxTries1) {
                        NetIPv6SendUnicastNeighborProbe((u8 *)e);
                        e->timer = g->delay;
                    } else {
                        if (e->sub != NULL) {
                            e->sub->state = 0;
                            e->sub = NULL;
                        }
                        if (e->flags & 0x80) {
                            r = NetIPv6SelectDefaultRouter(e->name);
                            if (r == NULL) {
                                a6b.p = e->name;
                                TLobby__sub_80411604(e->id, 6, &a6b);
                            } else {
                                a7b.v = (s32)r->f14;
                                a7b.p = e->name;
                                TLobby__sub_80411604(e->id, 7, &a7b);
                            }
                        }
                        e->state = 0;
                        e->f26 = 0;
                    }
                    break;
                }
            }
        }
        n--;
        e++;
    }
}

typedef struct Ent_80416678 { u8 pad0[0xC]; u8 fC; } Ent_80416678;
s32 NetIPv6ParseRedirectOptions(u8 *arg0, s32 n, u8 *arg2, s32 arg3, s16 *arg4, s16 arg5) {
    u8 sp20[8];
    u8 *h;
    s16 len;
    Ent_80416678 *e;
    void TLobby__sub_80406EB8(void *, s32);
    u8 *TLobby__sub_80406F0C(void *);
    void TLobby__sub_80406FD8(void *, void *, s32);
    Ent_80416678 *TLobby__sub_804182DC(void *, void *, s32, s16);

    while (n >= 8) {
        h = TLobby__sub_80406F0C(arg0 + 4);
        if (h[1] == 0) {
            return -0x10E;
        }
        len = h[1] * 8;
        n -= len;
        if (n < 0) {
            return -0x10E;
        }
        switch (h[0]) {
        case 1:
        case 3:
        case 5:
        default:
            TLobby__sub_80406EB8(arg0 + 4, len);
            break;
        case 4:
            *arg4 = (*arg4 < len) ? *arg4 : len;
            ((TLobby *)sp20)->set_value_and_enable(arg3);
            TLobby__sub_80406FD8(sp20, arg0 + 4, *arg4);
            TLobby__sub_80406EB8(arg0 + 4, len);
            break;
        case 2: {
            u8 *p = h + 2;
            s32 l = len - 2;
            e = TLobby__sub_804182DC(arg2 + 8, p, l, arg5);
            if (e != NULL && NetMemcmp(arg2 + 8, arg2 + 0x18, 0x10) != 0) {
                e->fC |= 0x80;
            }
            TLobby__sub_80406EB8(arg0 + 4, len);
            break;
        }
        }
    }
    return 0;
}

u8 *TLobby__sub_80406F0C(void *);

s32 NetIPv6FindTargetLinkLayerAddressOption(u8 *o, s32 len, u8 **out, s16 *outlen) {
    u8 *p;
    s16 sz;

    while (len >= 8) {
        p = TLobby__sub_80406F0C(o + 4);
        if (p[1] == 0) {
            return -0x10E;
        }
        sz = p[1] << 3;
        len -= sz;
        if (len < 0) {
            return -0x10E;
        }
        if ((s32)p[0] != 2) {
            TLobby__sub_80406EB8(o + 4);
        } else {
            *out = p + 2;
            *outlen = sz - 2;
            TLobby__sub_80406EB8(o + 4);
        }
    }
    return 0;
}

struct Peer_80416994 { u8 pad0[3]; u8 state; u8 pad4[2]; s16 f6; u8 pad8[0x14 - 0x8]; u8 name[0x10]; };
struct Sub_80416994 { u8 pad0[3]; u8 state; u8 pad4[4]; u8 addr[0x30 - 0x8]; s16 port; u8 pad32[2]; s32 val; };
struct Ent_80416994 {
    u8 pad0[3];
    u8 state;
    s16 phase;
    u8 pad6[2];
    s16 f8;
    s16 timer;
    u8 flags;
    u8 padD[3];
    Sub_80416994 *sub;
    u8 pad14[2];
    u8 name[0x10];
    s16 len;
    u8 data[0x48 - 0x28];
};
struct Glob_80416994 {
    u8 pad0[2];
    s16 count;
    s16 count2;
    u8 pad6[0xC - 6];
    Ent_80416994 *ents;
    Peer_80416994 *peers;
    u8 pad14[0x24 - 0x14];
    s16 delay2;
    s16 delay1;
};
struct Msg_80416994 { u8 pad0[4]; u8 flags; u8 pad5[3]; u8 name[0x10]; };
struct Item_80416994 { s16 port; u8 pad2[2]; u8 val[8]; };
struct Pkt_80416994 { u8 pad0[4]; s32 n; s32 port; Item_80416994 items[1]; };
struct Arg_80416994 { u8 *p; s32 v; };

s16 TLobby__sub_80413C0C(void *, s32);
s16 TLobby__sub_80413AA0(void *, s32);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_80416994 *FindEnt_80416994(Glob_80416994 *g, void *name) {
    s16 n = g->count;
    Ent_80416994 *e = g->ents;
    for (; n > 0; n--, e++) {
        if (e->state == 1 && NetMemcmp(e->name, name, 0x10) == 0) {
            return e;
        }
    }
    return 0;
}

inline void ClearPeer_80416994(Peer_80416994 *p) {
    p->state = 0;
    p->f6 = 0;
}

inline Peer_80416994 *ScanPeers_80416994(Glob_80416994 *g, void *name) {
    s16 m;
    Peer_80416994 *p;
    Peer_80416994 *hit;
    hit = 0;
    m = g->count2;
    p = g->peers;
    for (; m > 0; m--, p++) {
        if (p->state == 1) {
            if (NetMemcmp(p->name, name, 0x10) == 0) {
                ClearPeer_80416994(p);
            } else {
                hit = p;
            }
        }
    }
    return hit;
}

s32 NetIPv6ApplyNeighborAdvertisement(Msg_80416994 *msg, u8 *name, s16 len, s32 arg3, s32 arg4, s32 id) {
    Arg_80416994 a;
    Arg_80416994 b;
    Glob_80416994 *g = (Glob_80416994 *)&ipv6_neighbor_discovery_state;
    Ent_80416994 *e;

    if (TLobby__sub_80413C0C(msg->name, id) != 0) {
        a.p = msg->name;
        TLobby__sub_80411604(id, 1, &a);
        return 0;
    }
    if (TLobby__sub_80413AA0(msg->name, id) != 0) {
        return 0;
    }
    e = FindEnt_80416994(g, msg->name);
    if (e == 0) {
        return 0;
    }
    if ((e->flags ^ msg->flags) & 0x80) {
        if (len == 0 || name == 0 || (e->len == len && NetMemcmp(e->data, name, len) == 0) || (msg->flags & 0x20)) {
            if (msg->flags & 0x80) {
                e->flags |= 0x80;
                a.p = msg->name;
                TLobby__sub_80411604(id, 8, &a);
            } else {
                Peer_80416994 *hit;
                e->flags |= ~0x80;
                hit = ScanPeers_80416994(g, msg->name);
                if (hit == 0) {
                    a.p = msg->name;
                    TLobby__sub_80411604(id, 9, &a);
                } else {
                    b.v = (s32)hit->name;
                    b.p = msg->name;
                    TLobby__sub_80411604(id, 7, &b);
                }
            }
        }
    }
    switch (e->phase) {
    case 0:
        if (len != 0 && name != 0) {
            e->len = ((u32)len > 0x20) ? 0x20 : len;
            NetMemcpy(e->data, name, e->len);
            if (msg->flags & 0x40) {
                e->phase = 1;
                e->timer = g->delay1;
            } else {
                e->phase = 2;
                e->timer = g->delay2;
            }
            e->flags = msg->flags;
            if (e->sub != 0) {
                Pkt_80416994 *pkt = (Pkt_80416994 *)TLobby::alloc_free_entry();
                s32 ret;
                if (pkt == 0) {
                    ret = -0x10E;
                } else {
                    pkt->n = 0;
                    pkt->port = e->sub->port;
                    pkt->items[pkt->n].port = e->sub->port;
                    ((TLobby *)(pkt->items[pkt->n].val))->set_value_and_enable(e->sub->val);
                    pkt->n++;
                    ret = TLobby__sub_80410BA8(pkt, e->sub->addr, e->f8, e->data);
                    ((TUdpSocket *)pkt)->release_entry();
                }
                e->sub->state = 0;
                e->sub = 0;
                return ret;
            }
        }
        break;
    case 1:
        if (len != 0 && name != 0 && (e->len != len || NetMemcmp(e->data, name, len) != 0)) {
            if (msg->flags & 0x20) {
                e->len = ((u32)len > 0x20) ? 0x20 : len;
                NetMemcpy(e->data, name, e->len);
                e->flags = msg->flags;
                if (msg->flags & 0x40) {
                    e->phase = 1;
                    e->timer = g->delay1;
                    break;
                }
            }
            e->phase = 2;
            e->timer = g->delay2;
        }
        break;
    case 2:
    case 3:
    case 4:
        if (len != 0 && name != 0 && (e->len != len || NetMemcmp(e->data, name, len) != 0)) {
            if (msg->flags & 0x20) {
                e->len = ((u32)len > 0x20) ? 0x20 : len;
                NetMemcpy(e->data, name, e->len);
                if (msg->flags & 0x40) {
                    e->phase = 1;
                    e->timer = g->delay1;
                } else {
                    e->phase = 2;
                    e->timer = g->delay2;
                }
                e->flags = msg->flags;
            }
        } else if (msg->flags & 0x40) {
            e->phase = 1;
            e->timer = g->delay1;
            e->flags = msg->flags;
        }
        break;
    }
    return 0;
}
#pragma pop

s16 TLobby__sub_80417294(void *, u32, u8 *, void *);
s16 TLobby__sub_80417494(void *, u8 *, void *);

s16 NetIPv6HandleNeighborSolicitation(u8 *arg0, void *arg1, void *arg2, void *arg3) {
    void TLobby__sub_80406EB8(void *, int);
    s16 NetIPv6IsMulticast(u8 *arg0);
    s16 NetIPv6IsUnspecified(u8 *arg0);
    NetBufferRef sp30;
    IPv6NeighborSolicitation sp18;
    u8 *hdr;
    u32 len;
    s16 r;
    hdr = arg0 + 0x18;
    len = *(s16 *)(arg0 + 0x18);
    if (len < 0x18) {
        return -1;
    }
    if ((s16)NetIPv6IsUnspecified((u8 *)arg1) && TLobby__sub_80413F0C(arg2, arg3) == 0) {
        return -1;
    }
    ((TLobby *)((u8 *)&sp30))->set_value_and_enable((s32)&sp18);
    TLobby__sub_80406FD8(&sp30, hdr + 4, 0x18);
    if ((s16)NetIPv6IsMulticast(sp18.target.bytes)) {
        return -1;
    }
    len -= 0x18;
    if (len >= 8) {
        TLobby__sub_80406EB8(hdr + 4, 24);
        r = TLobby__sub_80416F58(hdr, len, arg1, arg3);
        if (r < 0) {
            return r;
        }
    }
    return TLobby__sub_80417028(&sp18, arg1, arg2, arg3);
}

s16 NetIPv6HandleRouterAdvertisement(u8 *arg0, u8 *arg1, s32 arg2, void *arg3) {
    u8 sp28[8];
    u8 sp18[16];
    u32 n;
    u8 *p;
    s16 r;
    void TLobby__sub_80406EB8(void *, s32);
    s16 NetIPv6IsLinkLocal(u8 *arg0);

    p = arg0 + 0x18;
    n = *(s16 *)(arg0 + 0x18);
    if (n < 0x10U) {
        return -1;
    }
    r = NetIPv6IsLinkLocal(arg1);
    if (r == 0) {
        return -1;
    }
    ((TLobby *)sp28)->set_value_and_enable((s32)sp18);
    TLobby__sub_80406FD8(sp28, p + 4, 0x10);
    n -= 0x10;
    if (n >= 8U) {
        TLobby__sub_80406EB8(p + 4, 0x10);
        r = TLobby__sub_80417294(p, n, arg1, arg3);
        if (r < 0) {
            return r;
        }
    }
    return TLobby__sub_80417494(sp18, arg1, arg3);
}

typedef struct Hdr_804177A0 {
    s16 len;
    u8 pad[2];
    u8 data[8];
} Hdr_804177A0;
s16 TLobby__sub_80417868(void *, u32, s32, s32);
s16 NetIPv6HandleRouterSolicitation(u8 *o, s32 arg1, s32 arg2, s32 arg3) {
    u8 b[8];
    u8 a[8];
    s32 pad;
    s32 v;
    Hdr_804177A0 *h = (Hdr_804177A0 *)(o + 0x18);
    u32 len = h->len;
    s16 r;
    void TLobby__sub_80406EB8(void *, s32);

    if (len < 8) {
        return -1;
    }
    ((TLobby *)b)->set_value_and_enable((s32)a);
    TLobby__sub_80406FD8(b, h->data, 8);
    len -= 8;
    if (len >= 8) {
        TLobby__sub_80406EB8(h->data, 8);
        r = TLobby__sub_80417868(h, len, arg1, arg3);
        if (r < 0) {
            return r;
        }
    }
    v = arg1;
    TLobby__sub_80411604(arg3, 0xC, &v);
    return 0;
}

typedef struct Arg_80417D1C { u8 *p; s32 v; } Arg_80417D1C;
s16 TLobby__sub_804137FC(void *, int);

#pragma push
#pragma opt_propagation off
#pragma opt_common_subs on
struct G_80415B38;
s16 NetIPv6SendNeighborAdvertisement(Pkt_804179A4 *arg0, u8 *address, u8 arg2, Sock_804179A4 *arg3, s16 arg4) {
    Na_804179A4 na;
    Cur_804179A4 cur;
    E_804179A4 *e;
    void *p6;
    s32 TLobby__sub_80406FD8(void *, void *, int);
    s16 TLobby__sub_80410BA8(void *, void *, s16, void *);
    s16 TLobby__sub_80411040(void *, void *, int, void *, int);
    s32 TLobby__sub_80411604(int, int, void *);
    s16 TLobby__sub_804136AC(s16 arg0);
    s16 TLobby__sub_80413934(void *, s16);
    s16 TLobby__sub_804145D4(void *, s16);
    s16 NetIPv6IsMulticast(u8 *arg0);
    s16 NetIPv6IsUnspecified(u8 *arg0);
    s16 NetIPv6SendMulticastNeighborProbe(u8 *arg0);
    E_804179A4 *NetIPv6FindOrSelectNeighborCacheEntry(void *, int, int);
    T_804179A4 *NetIPv6SelectDefaultRouter(void *arg0);
    Q_804179A4 *NetIPv6SelectPendingPacketSlot(void);
    if (NetIPv6IsMulticast(address) != 0) {
        return -0x10E;
    }
    if (NetIPv6IsUnspecified((u8 *)arg3) != 0) {
        s16 r = TLobby__sub_804145D4(arg3, arg4);
        if (r < 0) {
            return r;
        }
    } else if (TLobby__sub_80413934(arg3, arg4) == 0) {
        return -0x10E;
    }
    arg3->f24 = 0;
    arg3->f20 = 0;
    arg3->f27 = 0x3A;
    arg3->f26 = 0xFF;
    arg0->total += 0x18;
    arg0->seg[arg0->n].len = 0x18;
    ((TLobby *)(arg0->seg[arg0->n].buf))->set_value_and_enable((s32)&na);
    arg0->n++;
    na.type = 0x88;
    na.code = 0;
    na.flags = arg2;
    NetMemset(na.rsv, 0, 3);
    NetMemcpy(na.target, address, 0x10);
    if (NetIPv6IsMulticast(arg3->addr) != 0 || TLobby__sub_804136AC(arg4) == 0) {
        na.flags |= 0xFFBF;
        na.cksum = 0;
        na.cksum = TLobby__sub_80411040(arg3, arg3->addr, arg3->f27, arg0, 1);
        p6 = NULL;
    } else {
        e = NetIPv6FindOrSelectNeighborCacheEntry(arg3->addr, 0, 0);
        if (e == NULL) {
            return -0x10E;
        }
        na.flags |= 0x40;
        na.cksum = 0;
        na.cksum = TLobby__sub_80411040(arg3, arg3->addr, arg3->f27, arg0, 1);
        switch (e->f6) {
        case 1:
            break;
        case 3:
            break;
        case 2:
            p6 = e->f28;
            goto tail;
        }
        {
            s16 ret;
            u8 *src;
            u32 n;
            Q_804179A4 *q;
            void *b[2];
            void *a[2];
            Seg_804179A4 *seg;
            e->f8 = arg4;
            e->f4 = 0;
            e->fa = ((s16 *)&ipv6_neighbor_discovery_state)[0x15];
            e->f14 = 0;
            NetMemcpy(e->f16, arg3->addr, 0x10);
            if (e->f10 == NULL) {
                e->f10 = NetIPv6SelectPendingPacketSlot();
            }
            q = e->f10;
            n = arg0->n;
            src = q->f34;
            q->f30 = 0;
            seg = (Seg_804179A4 *)((u8 *)arg0 + n * 0xC);
            while (n != 0) {
                s16 l = seg->len;
                q->f30 += l;
                if (q->f30 > ((s16 *)&ipv6_neighbor_discovery_state)[0xA]) {
                    ret = -0x10E;
                    goto done;
                }
                ((TLobby *)((u8 *)&cur))->set_value_and_enable((s32)src);
                TLobby__sub_80406FD8(&cur, arg0->seg[n - 1].buf, l);
                src += l;
                seg--;
                n--;
            }
            ret = 0;
done:
            if (ret < 0) {
                if (e->f10 != NULL) {
                    e->f10->f3 = 0;
                    e->f10 = NULL;
                }
                if (e->fc & 0x80) {
                    T_804179A4 *t = NetIPv6SelectDefaultRouter(e->f16);
                    if (t == NULL) {
                        a[0] = e->f16;
                        TLobby__sub_80411604(e->f8, 6, a);
                    } else {
                        b[1] = t->f14;
                        b[0] = e->f16;
                        TLobby__sub_80411604(e->f8, 7, b);
                    }
                }
                e->f3 = 0;
                e->f26 = 0;
                return ret;
            }
            NetMemcpy((u8 *)e->f10 + 8, arg3, 0x28);
            return NetIPv6SendMulticastNeighborProbe((u8 *)e);
        }
    }
tail:
    return TLobby__sub_80410BA8(arg0, arg3, arg4, p6);
}
#pragma pop

s32 NetIPv6SendMulticastNeighborProbe(u8 *arg0) {
    s32 TLobby__sub_804145D4(void *, int);
    u8 sp2C[0x18];
    u8 sp1C[0x10];
    Arg_80417D1C a7;
    Arg_80417D1C a6;
    s32 temp_r31;
    Ent_80418670 *temp_r3_3;
    u8 *free_entry;
    u8 *temp_r3_2;
    u8 *temp_r3_4;

    free_entry = TLobby::alloc_free_entry();
    if (free_entry == NULL) {
        temp_r3_2 = *(u8 **)((s8 *)arg0 + 0x10);
        if (temp_r3_2 != NULL) {
            *(s8 *)((s8 *)temp_r3_2 + 3) = 0;
            *(u8 **)((s8 *)arg0 + 0x10) = NULL;
        }
        if (*(u8 *)((s8 *)arg0 + 0xC) & 0x80) {
            temp_r3_3 = NetIPv6SelectDefaultRouter(arg0 + 0x16);
            if (temp_r3_3 == NULL) {
                a6.p = arg0 + 0x16;
                TLobby__sub_80411604(*(s16 *)((s8 *)arg0 + 8), 6, &a6);
            } else {
                a7.v = (s32)temp_r3_3->f14;
                a7.p = arg0 + 0x16;
                TLobby__sub_80411604(*(s16 *)((s8 *)arg0 + 8), 7, &a7);
            }
        }
        *(s8 *)((s8 *)arg0 + 3) = 0;
        *(s16 *)((s8 *)arg0 + 0x26) = 0;
        return -0x10E;
    }
    *(s32 *)((s8 *)free_entry + 4) = 0;
    *(s32 *)((s8 *)free_entry + 8) = 0;
    temp_r3_4 = *(u8 **)((s8 *)arg0 + 0x10);
    if (temp_r3_4 != NULL && TLobby__sub_804137FC(temp_r3_4 + 8, *(s16 *)((s8 *)arg0 + 8)) != 0) {
        NetMemcpy(sp1C, *(u8 **)((s8 *)arg0 + 0x10) + 8, 0x10);
    } else {
        TLobby__sub_804145D4(sp1C, *(s16 *)((s8 *)arg0 + 8));
    }
    NetIPv6MakeSolicitedNodeMulticastAddress(sp2C, (u8 *)(arg0 + 0x16));
    temp_r31 = NetIPv6EmitNeighborSolicitation((int)free_entry, arg0 + 0x16, sp1C, (void *)*(s16 *)((s8 *)arg0 + 8), 0);
    ((TUdpSocket *)free_entry)->release_entry();
    return temp_r31;
}

typedef struct Arg_80417E60 { u8 *p; s32 v; } Arg_80417E60;

s32 NetIPv6SendUnicastNeighborProbe(u8 *arg0) {
    s32 TLobby__sub_804145D4(void *, int);
    u8 sp2C[0x18];
    u8 sp1C[0x10];
    Arg_80417E60 a7;
    Arg_80417E60 a6;
    s32 temp_r31;
    Ent_80418670 *temp_r3_3;
    u8 *free_entry;
    u8 *temp_r3_2;
    u8 *temp_r3_4;

    free_entry = TLobby::alloc_free_entry();
    if (free_entry == NULL) {
        temp_r3_2 = *(u8 **)((s8 *)arg0 + 0x10);
        if (temp_r3_2 != NULL) {
            *(s8 *)((s8 *)temp_r3_2 + 3) = 0;
            *(u8 **)((s8 *)arg0 + 0x10) = NULL;
        }
        if (*(u8 *)((s8 *)arg0 + 0xC) & 0x80) {
            temp_r3_3 = NetIPv6SelectDefaultRouter(arg0 + 0x16);
            if (temp_r3_3 == NULL) {
                a6.p = arg0 + 0x16;
                TLobby__sub_80411604(*(s16 *)((s8 *)arg0 + 8), 6, &a6);
            } else {
                a7.v = (s32)temp_r3_3->f14;
                a7.p = arg0 + 0x16;
                TLobby__sub_80411604(*(s16 *)((s8 *)arg0 + 8), 7, &a7);
            }
        }
        *(s8 *)((s8 *)arg0 + 3) = 0;
        *(s16 *)((s8 *)arg0 + 0x26) = 0;
        return -0x10E;
    }
    *(s32 *)((s8 *)free_entry + 4) = 0;
    *(s32 *)((s8 *)free_entry + 8) = 0;
    temp_r3_4 = *(u8 **)((s8 *)arg0 + 0x10);
    if (temp_r3_4 != NULL && TLobby__sub_804137FC(temp_r3_4 + 8, *(s16 *)((s8 *)arg0 + 8)) != 0) {
        NetMemcpy(sp1C, *(u8 **)((s8 *)arg0 + 0x10) + 8, 0x10);
    } else {
        TLobby__sub_804145D4(sp1C, *(s16 *)((s8 *)arg0 + 8));
    }
    NetMemcpy(sp2C, arg0 + 0x16, 0x10);
    temp_r31 = NetIPv6EmitNeighborSolicitation((int)free_entry, arg0 + 0x16, sp1C, (void *)*(s16 *)((s8 *)arg0 + 8), (int)(arg0 + 0x28));
    ((TUdpSocket *)free_entry)->release_entry();
    return temp_r31;
}

struct E_804184DC {
    u8 pad0[3];
    u8 used;
    s16 kind;
    s16 state;
    u8 pad8[2];
    s16 age;
    u8 padC[0xA];
    u8 addr[0x10];
    s16 klen;
    u8 key[0x20];
};

#pragma push
#pragma optimization_level 3
#pragma dont_inline on
typedef char Layout_pointer_size[sizeof(void *) == 4 ? 1 : -1];
typedef char Layout_word_size[sizeof(u32) == 4 ? 1 : -1];
typedef char Layout_NetBufferRef_size[sizeof(NetBufferRef) == 8 ? 1 : -1];
typedef char Layout_NetBufferRef_kind[offsetof(NetBufferRef, kind) == 4 ? 1 : -1];
typedef char Layout_NetBufferRef_value[offsetof(NetBufferRef, value) == 0 ? 1 : -1];
typedef char Layout_IPv6Address_size[sizeof(IPv6Address) == 16 ? 1 : -1];
typedef char Layout_IPv6Address_bytes[offsetof(IPv6Address, bytes) == 0 ? 1 : -1];
typedef char Layout_IPv6NeighborSolicitation_size[sizeof(IPv6NeighborSolicitation) == 24 ? 1 : -1];
typedef char Layout_IPv6NeighborSolicitation_header[offsetof(IPv6NeighborSolicitation, header) == 0 ? 1 : -1];
typedef char Layout_IPv6NeighborSolicitation_target[offsetof(IPv6NeighborSolicitation, target) == 8 ? 1 : -1];
typedef char Layout_NetPacketFragment_size[sizeof(NetPacketFragment) == 12 ? 1 : -1];
typedef char Layout_NetPacketFragment_buffer[offsetof(NetPacketFragment, buffer) == 4 ? 1 : -1];
typedef char Layout_NetPacketFragment_length[offsetof(NetPacketFragment, length) == 0 ? 1 : -1];
typedef char Layout_NetPacket_size[sizeof(NetPacket) == 156 ? 1 : -1];
typedef char Layout_NetPacket_fragment_count[offsetof(NetPacket, fragment_count) == 4 ? 1 : -1];
typedef char Layout_NetPacket_fragments[offsetof(NetPacket, fragments) == 12 ? 1 : -1];
typedef char Layout_NetPacket_in_use[offsetof(NetPacket, in_use) == 0 ? 1 : -1];
typedef char Layout_NetPacket_total_bytes[offsetof(NetPacket, total_bytes) == 8 ? 1 : -1];
typedef char Layout_NetIPv6SendParameters_size[sizeof(NetIPv6SendParameters) == 40 ? 1 : -1];
typedef char Layout_NetIPv6SendParameters_destination[offsetof(NetIPv6SendParameters, destination) == 16 ? 1 : -1];
typedef char Layout_NetIPv6SendParameters_flow_label[offsetof(NetIPv6SendParameters, flow_label) == 32 ? 1 : -1];
typedef char Layout_NetIPv6SendParameters_hop_limit[offsetof(NetIPv6SendParameters, hop_limit) == 38 ? 1 : -1];
typedef char Layout_NetIPv6SendParameters_next_header[offsetof(NetIPv6SendParameters, next_header) == 39 ? 1 : -1];
typedef char Layout_NetIPv6SendParameters_source[offsetof(NetIPv6SendParameters, source) == 0 ? 1 : -1];
typedef char Layout_NetIPv6SendParameters_traffic_class_bits[offsetof(NetIPv6SendParameters, traffic_class_bits) == 36 ? 1 : -1];
typedef char Layout_NetLinkLayerAddressBuffer_size[sizeof(NetLinkLayerAddressBuffer) == 32 ? 1 : -1];
typedef char Layout_NetLinkLayerAddressBuffer_bytes[offsetof(NetLinkLayerAddressBuffer, bytes) == 0 ? 1 : -1];
typedef char Layout_NetSourceLinkLayerOption_size[sizeof(NetSourceLinkLayerOption) == 34 ? 1 : -1];
typedef char Layout_NetSourceLinkLayerOption_address[offsetof(NetSourceLinkLayerOption, address) == 2 ? 1 : -1];
typedef char Layout_NetSourceLinkLayerOption_length_units[offsetof(NetSourceLinkLayerOption, length_units) == 1 ? 1 : -1];
typedef char Layout_NetSourceLinkLayerOption_type[offsetof(NetSourceLinkLayerOption, type) == 0 ? 1 : -1];
typedef char Layout_NetIcmpv6Header_size[sizeof(NetIcmpv6Header) == 8 ? 1 : -1];
typedef char Layout_NetIcmpv6Header_checksum[offsetof(NetIcmpv6Header, checksum) == 2 ? 1 : -1];
typedef char Layout_NetIcmpv6Header_code[offsetof(NetIcmpv6Header, code) == 1 ? 1 : -1];
typedef char Layout_NetIcmpv6Header_reserved[offsetof(NetIcmpv6Header, reserved) == 4 ? 1 : -1];
typedef char Layout_NetIcmpv6Header_type[offsetof(NetIcmpv6Header, type) == 0 ? 1 : -1];
typedef char Layout_NetIcmpv6NeighborSolicitation_size[sizeof(NetIcmpv6NeighborSolicitation) == 24 ? 1 : -1];
typedef char Layout_NetIcmpv6NeighborSolicitation_header[offsetof(NetIcmpv6NeighborSolicitation, header) == 0 ? 1 : -1];
typedef char Layout_NetIcmpv6NeighborSolicitation_target[offsetof(NetIcmpv6NeighborSolicitation, target) == 8 ? 1 : -1];
typedef char Layout_NetIcmpv6RouterSolicitation_size[sizeof(NetIcmpv6RouterSolicitation) == 8 ? 1 : -1];
typedef char Layout_NetIcmpv6RouterSolicitation_header[offsetof(NetIcmpv6RouterSolicitation, header) == 0 ? 1 : -1];
s32 NetIPv6EmitRouterSolicitation(NetPacket *net_packet, NetIPv6SendParameters *addr, s32 arg2) {
    s16 NetIPv6GetInterfaceLinkLayerAddress(s32, s16, s32);
    s16 NetIPv6IsMulticast(u8 *);
    s16 NetIPv6IsUnspecified(u8 *);
    NetIcmpv6RouterSolicitation message;
    NetSourceLinkLayerOption option;
    s16 temp_r3;
    s16 temp_r5;
    if ((NetIPv6IsMulticast((u8 *)(&addr->destination))) == 0) {
        return -0x10E;
    }
    if ((NetIPv6IsUnspecified((u8 *)(&addr->source))) == 0) {
        temp_r3 = NetIPv6GetInterfaceLinkLayerAddress((s32)(&option.address), (s16)(0x20), arg2);
        if (temp_r3 > 0) {
            temp_r5 = temp_r3 + 2;
            option.type = 1;
            option.length_units = (u8) (temp_r5 >> 3);
            net_packet->total_bytes += temp_r5;
            net_packet->fragments[net_packet->fragment_count].length = temp_r5;
            ((TLobby *)(&net_packet->fragments[net_packet->fragment_count].buffer))->set_value_and_enable((s32)(&option));
            net_packet->fragment_count += 1;
        }
    }
    addr->traffic_class_bits = 0;
    addr->flow_label = 0;
    addr->next_header = 0x3A;
    addr->hop_limit = 0xFF;
    net_packet->total_bytes += 8;
    net_packet->fragments[net_packet->fragment_count].length = 8;
    ((TLobby *)(&net_packet->fragments[net_packet->fragment_count].buffer))->set_value_and_enable((s32)(&message));
    net_packet->fragment_count += 1;
    message.header.type = 0x85;
    message.header.code = 0;
    message.header.reserved = 0;
    message.header.checksum = 0;
    message.header.checksum = TLobby__sub_80411040((const IPv6Address *)(&addr->source), (const IPv6Address *)(&addr->destination), addr->next_header, (const NetPacket *)(net_packet), (s16)(1));
    return TLobby__sub_80410BA8(net_packet, addr, arg2, NULL);
}
#pragma pop

E_804184DC *NetIPv6FindOrSelectNeighborCacheEntry(u8 *addr, u8 *key, s16 klen) {
    E_804184DC *e;
    s16 n;
    E_804184DC *oldest_b;
    E_804184DC *oldest_a;
    E_804184DC *empty;
    s16 age_b;
    s16 age_a;

    oldest_a = NULL;
    empty = NULL;
    {
        s16 m = ipv6_neighbor_discovery_state.maxage;
        age_b = m;
        age_a = m;
    }
    if (addr == NULL) {
        return NULL;
    }
    n = ipv6_neighbor_discovery_state.nb;
    e = (E_804184DC *)ipv6_neighbor_discovery_state.b;
    while (n > 0) {
        if (e->used != 1) {
            if (empty == NULL) {
                empty = e;
            }
        } else if (NetMemcmp(e->addr, addr, 0x10) == 0) {
            if (klen == 0) {
                if (e->klen != 0) {
                    e->state = 2;
                } else {
                    e->state = 3;
                }
            } else if (e->klen != klen || NetMemcmp(e->key, key, klen) != 0) {
                e->state = 2;
            } else {
                e->state = 3;
            }
            return e;
        } else {
            switch (e->kind) {
            case 2:
                if (e->age < age_a) {
                    oldest_a = e;
                    age_a = e->age;
                }
                break;
            default:
                if (e->age < age_b) {
                    oldest_b = e;
                    age_b = e->age;
                }
                break;
            }
        }
        n--;
        e++;
    }
    if (empty != NULL) {
        empty->state = 0;
        return empty;
    }
    if (oldest_a != NULL) {
        oldest_a->state = 1;
        return oldest_a;
    }
    oldest_b->state = 1;
    return oldest_b;
}

typedef struct G_80418670 { u8 pad0[4]; s16 f4; u8 pad6[0xA]; Ent_80418670 *f10; } G_80418670;

Ent_80418670 *NetIPv6SelectDefaultRouter(void *arg0) {
    s16 n;
    Ent_80418670 *e;
    Ent_80418670 *found;
    Ent_80418670 *best;

    found = NULL;
    best = NULL;
    n = (*(G_80418670 *)&ipv6_neighbor_discovery_state).f4;
    e = (*(G_80418670 *)&ipv6_neighbor_discovery_state).f10;
    while (n > 0) {
        if (e->f3 == 1) {
            if (NetMemcmp(e->f14, arg0, 0x10) == 0) {
                found = e;
                e->f6++;
            } else if (best == NULL) {
                best = e;
            } else if (e->f6 <= best->f6) {
                best = e;
            }
        }
        n--;
        e++;
    }
    if (best == NULL) {
        return found;
    }
    return best;
}

struct Ent_804188E4 { u8 pad0[3]; u8 f3; s16 f4; u8 pad6[0x32]; };
struct Rec_804188E4 { u8 pad0[3]; u8 f3; u8 pad4[0xC]; Ent_804188E4 *f10; u8 pad14[0x34]; };
struct G_804188E4 { s16 n0; s16 n2; u8 pad4[4]; Ent_804188E4 *e8; Rec_804188E4 *rC; u8 pad10[0x14]; s16 f24; };
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Rec_804188E4 *find_804188E4(G_804188E4 *g, Ent_804188E4 *e) {
    s16 n = g->n2;
    Rec_804188E4 *r = g->rC;
    while (n > 0) {
        if (r->f3 == 1 && r->f10 == e) {
            return r;
        }
        n--;
        r++;
    }
    return NULL;
}

Ent_804188E4 *NetIPv6SelectPendingPacketSlot(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, Ent_804188E4 *best) {
    Ent_804188E4 *free_;
    G_804188E4 *g = (G_804188E4 *)&ipv6_neighbor_discovery_state;
    s16 v;
    s16 n;
    Ent_804188E4 *e;
    s16 bestv;
    Rec_804188E4 *r;

    bestv = g->f24;
    free_ = NULL;
    n = g->n0;
    e = g->e8;
    while (n > 0) {
        if (e->f3 != 1) {
            if (free_ == NULL) {
                free_ = e;
            }
        } else {
            v = e->f4;
            if (v < bestv) {
                best = e;
                bestv = v;
            }
        }
        n--;
        e++;
    }
    if (free_ != NULL) {
        free_->f3 = 1;
        return free_;
    }
    r = find_804188E4(g, best);
    if (r != NULL) {
        r->f10 = NULL;
    }
    return best;
}

#pragma pop

void NetIPv6ApplyNeighborDiscoveryDefaults(u8 *arg0) {
    if (*(s16 *)((s8 *)arg0 + 0x14) == 0) {
        *(s16 *)((s8 *)arg0 + 0x14) = 0x5DC;
    }
    if (*(s16 *)((s8 *)arg0 + 0x1C) == 0) {
        *(s16 *)((s8 *)arg0 + 0x1C) = 3;
    }
    if (*(s16 *)((s8 *)arg0 + 0x1E) == 0) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 3;
    }
    if (*(s16 *)((s8 *)arg0 + 0x20) == 0) {
        *(s16 *)((s8 *)arg0 + 0x20) = 1;
    }
    if (*(s16 *)((s8 *)arg0 + 0x22) == 0) {
        *(s16 *)((s8 *)arg0 + 0x22) = 3;
    }
    if (*(s16 *)((s8 *)arg0 + 0x24) == 0) {
        *(s16 *)((s8 *)arg0 + 0x24) = 0x1900;
    }
    if (*(s16 *)((s8 *)arg0 + 0x26) == 0) {
        *(s16 *)((s8 *)arg0 + 0x26) = 0x1E;
    }
    if (*(s16 *)((s8 *)arg0 + 0x28) == 0) {
        *(s16 *)((s8 *)arg0 + 0x28) = 1;
    }
    if (*(s16 *)((s8 *)arg0 + 0x2A) == 0) {
        *(s16 *)((s8 *)arg0 + 0x2A) = *(s16 *)((s8 *)arg0 + 0x28) + 1;
    }
    if (*(s16 *)((s8 *)arg0 + 0x2C) == 0) {
        *(s16 *)((s8 *)arg0 + 0x2C) = 6;
    }
}

struct A_80418ACC { s8 c0; s8 c1; s8 c2; s8 c3; s16 f4; u8 pad6[0x2E]; };
struct B_80418ACC { s8 c0; s8 c1; s8 c2; s8 c3; s16 f4; u8 pad6[0x12]; };
struct G_80418ACC {
    s16 na;
    s16 nb;
    u8 pad4[4];
    A_80418ACC *a;
    B_80418ACC *b;
    s32 f10;
    s32 f14;
};
extern G_80418ACC packet_fragment_pool_state;
s32 TLobby__sub_80418A7C(void) {
    G_80418ACC *g = &packet_fragment_pool_state;
    NetUnregisterTimer((void *)TLobby::update_timeout_entries);
    TLobby__sub_803F89A0(g);
    g->na = 0;
    g->nb = 0;
    return 0;
}

s32 TLobby::init_packet_fragment_pools() {
    s16 i;
    A_80418ACC *a;
    B_80418ACC *b;
    G_80418ACC *g = &packet_fragment_pool_state;

    TLobby__sub_803F89A4((u8 *)&packet_fragment_pool_state);
    g->f14 = 0;
    g->f10 = 0;
    a = g->a;
    for (i = 0; i < g->na; i++) {
        NetMemset(a, 0, sizeof(A_80418ACC));
        a->c0 = 0x46;
        a->c1 = 0x50;
        a->c2 = 0x4B;
        a->c3 = i;
        a->f4 = 0;
        a++;
    }
    b = g->b;
    for (i = 0; i < g->nb; i++) {
        NetMemset(b, 0, sizeof(B_80418ACC));
        b->c0 = 0x46;
        b->c1 = 0x52;
        b->c2 = 0x47;
        b->c3 = i;
        b->f4 = 0;
        b++;
    }
    NetRegisterTimer(1000, (s16)(1), (NetTimerCallback)(TLobby::update_timeout_entries));
    return 0;
}

struct E_80418BD8 { u8 pad[0xC]; };
struct A_80418BD8 { u8 pad[4]; u32 n; u8 pad2[8]; E_80418BD8 e[1]; };
s32 TUdpSocket__sub_80418BD8(A_80418BD8 *a) {
    u32 i;
    A_80418BD8 *b = a;
    for (i = 0; i < b->n; i++) {
        TLobby__sub_80406B6C((O_80406B6C *)&b->e[i]);
    }
    return 0;
}

struct N_80419258 { u8 pad0[4]; s16 f4; u8 pad6[2]; O_80406B6C o; u8 pad10[4]; N_80419258 *next; };
struct E_80419258 { u8 pad0[4]; s16 f4; u8 pad6[0x1C]; u8 f22; u8 pad23; s16 f24; u8 pad26[2]; E_80419258 *next; N_80419258 *list; u8 pad30[4]; };
struct G_80419258 { s16 count; s16 sub; u8 pad4[4]; E_80419258 *ents; u8 padC[4]; E_80419258 *head; E_80419258 *tail; };
void TLobby__sub_80419374(E_80419258 *);

void TLobby::update_timeout_entries() {
    G_80419258 *g;
    E_80419258 **head;
    E_80419258 **tail;
    s16 n;
    s16 m;
    N_80419258 *p;
    N_80419258 *q;
    E_80419258 *e;
    E_80419258 *cur;
    E_80419258 *prev;

    g = (G_80419258 *)&packet_fragment_pool_state;
    head = &g->head;
    tail = &g->tail;

    prev = NULL;
    n = 0;
    cur = *head;
    while (cur != NULL && n < g->count) {
        if (cur->f22 != 0) {
            cur->f22--;
        }
        if (cur->f22 != 0) {
            prev = cur;
            cur = cur->next;
        } else {
            TLobby__sub_80419374(cur);
            p = cur->list;
            m = 0;
            while (p != NULL && m < g->sub) {
                q = p;
                p = p->next;
                TLobby__sub_80406B6C(&q->o);
                q->f4 = 0;
                m++;
                q->next = 0;
            }
            if (prev != NULL) {
                prev->next = cur->next;
            } else {
                *head = cur->next;
            }
            if (*tail == cur) {
                *tail = prev;
            }
            e = cur;
            cur = cur->next;
            e->f4 = 0;
            e->next = 0;
            e->f24 = 0;
        }
        n++;
    }
}

struct N_804196EC { u8 pad0[4]; s16 f4; u8 pad6[2]; O_80406B6C o; u8 pad10[4]; N_804196EC *next; };
struct E_804196EC { u8 pad0[4]; s16 f4; u8 pad6[0x1E]; s16 f24; u8 pad26[2]; s32 f28; N_804196EC *list; u8 pad30[4]; };
struct G_804196EC { s16 count; u8 pad2[6]; E_804196EC *ents; u8 padC[4]; E_804196EC *p10; E_804196EC *p14; };

s32 TLobby__sub_80406B6C(O_80406B6C *o);

s32 TLobby::reset_other_connection_lists() {
    E_804196EC *self = (E_804196EC *)this;
    G_804196EC *g = (G_804196EC *)&packet_fragment_pool_state;
    N_804196EC *p;
    N_804196EC *cur;
    E_804196EC *e;
    s16 n;

    n = g->count;
    e = g->ents;
    for (; n > 0; n--, e++) {
        if (e->f4 == 1 && e != self) {
            p = e->list;
            while (p != NULL) {
                cur = p;
                p = p->next;
                TLobby__sub_80406B6C(&cur->o);
                cur->f4 = 0;
                cur->next = 0;
            }
            e->f4 = 0;
            e->f28 = 0;
            e->f24 = 0;
        }
    }
    self->f28 = 0;
    g->p10 = self;
    g->p14 = self;
    return 0;
}

typedef char NetworkDispatchState_size[sizeof(NetworkDispatchState) == 0xF8 ? 1 : -1];
void TLobby__sub_80419A00(void) {
    NetMemset((void *) (&network_dispatch_state.lock_handle), 0, 0xF4);
    TLobby::cancel_pending_alarms();
}

typedef char RecoveredGlobal_80419A34_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A34_lbl_805C1C50) == 0xF8 ? 1 : -1];
void TLobby__sub_80419A34(void) {
    NetMemset((void *) (&(*(RecoveredGlobal_80419A34_lbl_805C1C50 *)&network_dispatch_state).value), 0, 0xF4);
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A34_lbl_805C1C50 *)&network_dispatch_state).value) + 0x10) = 0x1E;
    TLobby__sub_803F8E9C();
}

#pragma push
#pragma opt_common_subs on
typedef char RecoveredGlobal_80419A7C_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A7C_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80419A7C(void) {
    TLobby::lock_mutex((int)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&network_dispatch_state).value) + 0))));
    ((TLobby *)(*(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&network_dispatch_state).value) + 0xC)))->cancel_thread_if_running();
    ((TLobby *)(*(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&network_dispatch_state).value) + 8)))->cancel_thread_if_running();
    TLobby::deactivate_entry_by_key((u32)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&network_dispatch_state).value) + 0xC))));
    TLobby::deactivate_entry_by_key((u32)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&network_dispatch_state).value) + 8))));
    TLobby::clear_slot_for_handle((u32)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&network_dispatch_state).value) + 4))));
    TUdpSocket::unlock_mutex((int)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&network_dispatch_state).value) + 0))));
    TLobby__sub_803F95E4((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&network_dispatch_state).value) + 0)));
    return 0;
}
#pragma pop

#pragma push
#pragma opt_common_subs on
#pragma push
#pragma pool_data off
typedef char OriginalBss_805C1AF0_size[(sizeof(G_8040A45C) == 0x48) ? 1 : -1];
typedef char OriginalBss_805C1B38_size[(sizeof(RecoveredGlobal_8040DD68_lbl_805C1B38) == 0x28) ? 1 : -1];
typedef char OriginalBss_805C1B60_size[(sizeof(RecoveredGlobal_8040EF00_lbl_805C1B60) == 0x18) ? 1 : -1];
typedef char OriginalBss_805C1B78_size[(sizeof(RecoveredGlobal_8040FF0C_lbl_805C1B78) == 0x40) ? 1 : -1];
typedef char OriginalBss_805C1BB8_size[(sizeof(RecoveredGlobal_8041123C_lbl_805C1BB8) == 0x28) ? 1 : -1];
typedef char OriginalBss_805C1BE0_size[(sizeof(RecoveredGlobal_8041552C_lbl_805C1BE0) == 0x18) ? 1 : -1];
typedef char OriginalBss_805C1BF8_size[(sizeof(RecoveredGlobal_80415650_lbl_805C1BF8) == 0x10) ? 1 : -1];
typedef char OriginalBss_805C1C08_size[(sizeof(G_80415B38) == 0x30) ? 1 : -1];
G_8040A45C dns_resolver_state;
RecoveredGlobal_8040DD68_lbl_805C1B38 ipv4_protocol_state;
RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
RecoveredGlobal_8040FF0C_lbl_805C1B78 ipv6_protocol_state;
RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
RecoveredGlobal_8041552C_lbl_805C1BE0 network_loopback_state;
RecoveredGlobal_80415650_lbl_805C1BF8 network_buffer_pool_state;
G_80415B38 ipv6_neighbor_discovery_state;

typedef char OriginalBss_805C1C38_size[(sizeof(G_80418ACC) == 0x18) ? 1 : -1];
typedef char OriginalBss_805C1C50_size[(sizeof(NetworkDispatchState) == 0xF8) ? 1 : -1];
typedef char OriginalBss_805C1D48_size[(sizeof(RecoveredGlobal_8041E178_lbl_805C1D48) == 0xA8) ? 1 : -1];
G_80418ACC packet_fragment_pool_state;
NetworkDispatchState network_dispatch_state;
RecoveredGlobal_8041E178_lbl_805C1D48 tcp_protocol_state;

#pragma pop
s32 NetRegisterTimer(s32 period, s16 locked, NetTimerCallback fn) {
    u32 now;
    s32 *pint;
    s16 slot;
    s16 i;
    u32 cur;
    s32 iv;
    s16 j;
    u32 nxt;
    if (fn == NULL) {
        return -0x100;
    }
    pint = &network_dispatch_state.interval;
    if (period < network_dispatch_state.interval) {
        period = network_dispatch_state.interval;
    }
    slot = -1;
    i = 0;
    while (i < 10) {
        if (network_dispatch_state.timers[i].active != 0) {
            if (network_dispatch_state.timers[i].fn == fn) {
                return -0x100;
            }
        } else if (slot < 0) {
            slot = i;
        }
        i++;
    }
    if (slot < 0 || slot >= 10) {
        return -0x100;
    }
    TLobby::get_time_ms((s32 *)&now);
    iv = *pint;
    cur = now;
    nxt = cur + period;
    if (period > iv) {
        j = 0;
        while (j < 10) {
            if (network_dispatch_state.timers[j].active != 0 && network_dispatch_state.timers[j].next == nxt && network_dispatch_state.timers[j].period > iv) {
                nxt += iv;
            }
            j++;
        }
    }
    network_dispatch_state.timers[slot].period = period;
    network_dispatch_state.timers[slot].last = cur;
    network_dispatch_state.timers[slot].next = nxt;
    network_dispatch_state.timers[slot].lock_callback = locked;
    network_dispatch_state.timers[slot].fn = fn;
    network_dispatch_state.timers[slot].active = 1;
    return 0;
}
#pragma pop

void NetEnqueueProtocolMessage(s32 arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
    NetProtocolMessage message;
    message.first = arg2;
    message.second = arg3;
    message.protocol = arg4;
    message.detail = arg1;
    message.payload = arg0;
    TLobby__sub_803F9344(network_dispatch_state.queue_handle, &message, 0xC);
}

#pragma push
#pragma opt_common_subs on
s32 NetTCPInit(void) {
    s16 n;
    s16 i;
    E_8041A230 *e;
    ((TLobby *)((u8 *)&tcp_protocol_state))->init_params();
    e = (*(G_8041A230 *)&tcp_protocol_state).ents;
    for (i = 0; i < (n = (*(G_8041A230 *)&tcp_protocol_state).count); i++) {
        e->f8 = -1;
        e->f4 = 0;
        e->c0 = 0x54;
        e->c1 = 0x43;
        e->c2 = 0x42;
        e->c3 = i;
        e++;
    }
    (*(G_8041A230 *)&tcp_protocol_state).avail = n;
    (*(G_8041A230 *)&tcp_protocol_state).h10 = 0;
    NetStoreTick((s32 *)(*(G_8041A230 *)&tcp_protocol_state).tick);
    (*(G_8041A230 *)&tcp_protocol_state).h14 = 0x7FF;
    (*(G_8041A230 *)&tcp_protocol_state).h12 = 0x400;
    (*(G_8041A230 *)&tcp_protocol_state).h22 = 0x3840;
    (*(G_8041A230 *)&tcp_protocol_state).h20 = 0x96;
    (*(G_8041A230 *)&tcp_protocol_state).h1E = 3;
    (*(G_8041A230 *)&tcp_protocol_state).b50 = 0;
    (*(G_8041A230 *)&tcp_protocol_state).b50 |= 1;
    (*(G_8041A230 *)&tcp_protocol_state).bA2 = 2;
    (*(G_8041A230 *)&tcp_protocol_state).b51 = 0x14;
    (*(G_8041A230 *)&tcp_protocol_state).b52 = 0;
    (*(G_8041A230 *)&tcp_protocol_state).b53 = 2;
    (*(G_8041A230 *)&tcp_protocol_state).b54 = 0x12;
    (*(G_8041A230 *)&tcp_protocol_state).b55 = 0x10;
    (*(G_8041A230 *)&tcp_protocol_state).b56 = 0x10;
    (*(G_8041A230 *)&tcp_protocol_state).b57 = 0x11;
    (*(G_8041A230 *)&tcp_protocol_state).b58 = 0x11;
    (*(G_8041A230 *)&tcp_protocol_state).b59 = 0x11;
    (*(G_8041A230 *)&tcp_protocol_state).b5A = 0x10;
    (*(G_8041A230 *)&tcp_protocol_state).b5B = 0x10;
    (*(G_8041A230 *)&tcp_protocol_state).s5C = 1;
    (*(G_8041A230 *)&tcp_protocol_state).s5E = 2;
    (*(G_8041A230 *)&tcp_protocol_state).s60 = 4;
    (*(G_8041A230 *)&tcp_protocol_state).s62 = 8;
    (*(G_8041A230 *)&tcp_protocol_state).s64 = 0x10;
    (*(G_8041A230 *)&tcp_protocol_state).s66 = 0x20;
    (*(G_8041A230 *)&tcp_protocol_state).s68 = 0x40;
    (*(G_8041A230 *)&tcp_protocol_state).s6A = 0x40;
    (*(G_8041A230 *)&tcp_protocol_state).s6C = 0x40;
    (*(G_8041A230 *)&tcp_protocol_state).s6E = 0x40;
    (*(G_8041A230 *)&tcp_protocol_state).s70 = 0x40;
    (*(G_8041A230 *)&tcp_protocol_state).s72 = 0x40;
    (*(G_8041A230 *)&tcp_protocol_state).s74 = 0x40;
    NetRegisterTimer(500, (s16)(1), (NetTimerCallback)(TLobby__sub_8041A5B4));
    NetRegisterTimer(100, (s16)(1), (NetTimerCallback)(TLobby__sub_8041A3CC));
    return 0;
}
#pragma pop

void TLobby::clear_position() {
    u8 *arg0 = (u8 *)this;
    *(s16 *)((s8 *)arg0 + 0x25C) = 0;
    *(s16 *)((s8 *)arg0 + 0x25E) = 0;
    *(s16 *)((s8 *)arg0 + 0x260) = 0;
    *(s16 *)((s8 *)arg0 + 0x262) = 0;
}

struct E_8041A0C0 { u8 pad[0x14]; s16 f14; u16 f16; s32 f18; };
s32 TLobby::release_slot_by_id(u16 a) {
    E_8041A0C0 *g = (E_8041A0C0 *)&network_dispatch_state;
    E_8041A0C0 *p = g;
    s16 i;
    for (i = 0; i < 3; p = (E_8041A0C0 *)((u8 *)p + 8), i++) {
        if (p->f14 != 0 && p->f16 == a) {
            E_8041A0C0 *q = (E_8041A0C0 *)((u8 *)g + i * 8);
            q->f14 = 0;
            q->f16 = 0;
            q->f18 = 0;
            return 0;
        }
    }
    return -0x100;
}

s32 register_protocol_handler__6TLobbyFUsi(u16 type, Handler_8041A130 fn) {
    NetworkDispatchState *g = &network_dispatch_state;
    s16 i;
    s16 freei;

    if (fn == NULL) {
        return -0x100;
    }
    freei = -1;
    for (i = 0; i < 3; i++) {
        if (network_dispatch_state.handlers[i].used != 0) {
            if (network_dispatch_state.handlers[i].type == type) {
                return -0x100;
            }
        } else if (freei < 0) {
            freei = i;
        }
    }
    if (freei < 0 || freei >= 3) {
        return -0x100;
    }
    g->handlers[freei].used = 1;
    g->handlers[freei].type = type;
    g->handlers[freei].fn = fn;
    return 0;
}

struct G_8041A1D8 { u8 pad[4]; s16 n; };
s32 TLobby__sub_8041A1D8(void) {
    NetUnregisterTimer((void *)TLobby__sub_8041A5B4);
    NetUnregisterTimer((void *)TLobby__sub_8041A3CC);
    TLobby__sub_803F8794((void *)&tcp_protocol_state);
    ((G_8041A1D8 *)&tcp_protocol_state)->n = 0;
    return 0;
}

struct E_8041A498 { u8 pad0[6]; s16 f6; u8 pad8[6]; u8 fE; u8 padF[0x1ED]; s32 f1FC; s32 f200; u8 pad204[0xCC]; s32 f2D0; u8 pad2D4[0x270]; };
void set_slot_state_and_resume__6TLobbyFv(s16, s32, s16);
void set_thread_state_and_resume__6TLobbyFv(s16, s32, s16);
void TLobby__sub_80422E30(s32, s32, s32, s16);
void TLobby__sub_8041A498(E_8041A498 *arg0, s16 arg1) {
    s16 idx = arg0 - (E_8041A498 *)tcp_protocol_state.p;

    if (arg0->f6 >= 3) {
        arg0->f6 = 0;
        TLobby__sub_8041A9AC((int)arg0);
    }
    arg0->fE = arg1;
    switch (arg1) {
    case 4:
        set_thread_state_and_resume__6TLobbyFv(idx, arg0->f1FC, -8);
        set_slot_state_and_resume__6TLobbyFv(idx, arg0->f200, -8);
        TLobby__sub_80422E30(idx, arg0->f2D0, 3, 0xB);
        break;
    default:
        set_thread_state_and_resume__6TLobbyFv(idx, arg0->f1FC, -5);
        set_slot_state_and_resume__6TLobbyFv(idx, arg0->f200, -5);
        TLobby__sub_80422E30(idx, arg0->f2D0, 3, 0xA);
        break;
    }
    if (TLobby__sub_8041B5C0(arg0) != 0) {
        arg0->f6 = -1;
    }
}

void TLobby::insert_item_at(s16 idx, s32 a, s32 b) {
    O_8041D2B8 *o = (O_8041D2B8 *)this;
    s16 i;
    if (idx < 0) {
        return;
    }
    s16 n = o->n;
    if (idx > n + 1) {
        return;
    }
    if (idx > 0x1F) {
        return;
    }
    if (n >= 0x1F) {
        o->n = 0x1E;
    }
    for (i = o->n; i >= idx; i--) {
        o->items[i + 1] = o->items[i];
    }
    o->items[idx].a = a;
    o->items[idx].b = b;
    o->items[idx].c = b;
    o->items[idx].d = o->f238;
    o->n++;
}

s32 TLobby__sub_8041D368(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[800]; s16 field_320; };
    if ((s16) ((Fields_arg0*)arg0)->field_320 == -1) {
        return 1;
    }
    return 0;
}

void TLobby::reset_slot_index() {
    u8 *arg0 = (u8 *)this;
    *(s16 *)((s8 *)arg0 + 0x320) = -1;
    *(s32 *)((s8 *)arg0 + 0x328) = (s32) *(s32 *)((s8 *)arg0 + 0x324);
}

struct A_8041D524 { u8 pad[0x320]; s16 n; u8 pad2[0xA]; s32 v0; u8 pad3[0xC]; s32 v1; };
s32 TLobby__sub_8041D524(A_8041D524 *a, s32 x) {
    s16 n = a->n;
    s16 i;
    if (n == -1) { return 0; }
    if (a->v0 - x < 0) { return 1; }
    for (i = 0; i < n; i++) {
        if (a->v1 - x < 0) { return 1; }
        a = (A_8041D524 *)((u8 *)a + 0x10);
    }
    return 0;
}

#pragma push
#pragma pool_data off
s16 TLobby::tcp_get_socket_handle(s16 i) {
    s16 r;
    if (i < 0 || i >= tcp_protocol_state.n) {
        r = -4;
    } else if (tcp_protocol_state.p[i].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) { return -4; }
    return tcp_protocol_state.p[i].f6;
}
#pragma pop

s32 TLobby__sub_8041ED8C(int, void *, void *, void *);

#pragma push
#pragma opt_propagation off
#pragma push
#pragma pool_data off
s32 TLobby__sub_8041DBD4(s16 arg0, s32 arg1, s32 len, s32 arg3) {
    s16 r;
    E_805C1D48 *e;

    if (arg0 < 0 || arg0 >= tcp_protocol_state.n) {
        r = -4;
    } else if (tcp_protocol_state.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = tcp_protocol_state.p;
    e += arg0;
    switch (e->f6) {
    case 0:
    case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        if ((*(u8 *)((s8 *)e + 0xA) & 4) && (*(u8 *)((s8 *)e + 0xCC) == 0 || (u32)((TLobby *)e)->get_field_d8() == 0)) {
            return -4;
        }
        break;
    }
    return TLobby__sub_8041ED8C((int)e, (void *)arg1, (void *)len, (void *)arg3);
}
#pragma pop

#pragma pop

#pragma push
#pragma opt_propagation off
#pragma push
#pragma pool_data off
s32 tcp_start_send(s16 arg0, u8 *arg1, void (*completion)(s16, s16), u8 arg3) {
    s16 r;
    s16 v;
    s32 ret;
    E_805C1D48 *e;
    if (arg0 < 0 || arg0 >= tcp_protocol_state.n) {
        r = -4;
    } else if (tcp_protocol_state.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = tcp_protocol_state.p;
    e += arg0;
    v = e->f6;
    if (v <= 1) {
        return -4;
    }
    if (v < 4) {
        return -4;
    }
    if (v > 5 && (*(u8 *)((s8 *)e + 0xA) & 8)) {
        return -4;
    }
    TLobby__sub_80420BD0(arg1, e, (s32)completion);
    if (arg3 != 0) {
        *(s32 *)((s8 *)e + 0x210) = *(s32 *)((s8 *)e + 0x20C) + *(s32 *)((s8 *)arg1 + 8);
    }
    ret = ((s32)TLobby__sub_8041A9AC((int)e));
    TLobby__sub_8041FFF8(0, (int)e);
    return ret;
}
#pragma pop

#pragma pop

#pragma push
#pragma opt_propagation off
#pragma push
#pragma pool_data off
s32 TLobby::get_tcp_stat(s16 arg0, s16 *arg1, s16 *arg2, s32 *arg3, s32 *arg4) {
    s16 r;
    E_805C1D48 *e;

    if (arg0 < 0 || arg0 >= tcp_protocol_state.n) {
        r = -4;
    } else if (tcp_protocol_state.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = tcp_protocol_state.p;
    e += arg0;
    if (arg1 != NULL) {
        *arg1 = e->f6;
    }
    if (arg2 != NULL) {
        if (e->f6 == 1) {
            *arg2 = *(s16 *)((s8 *)e + 0x2C6);
        } else {
            *arg2 = 0;
        }
    }
    if (arg3 != NULL) {
        *arg3 = get_adjusted_slot_count__6TLobbyFPv((u8 *)e);
    }
    if (arg4 != NULL) {
        *arg4 = ((TLobby *)e)->get_field_d8();
    }
    return 0;
}
#pragma pop

#pragma pop

typedef char RecoveredGlobal_8041E178_lbl_805C1D48_size[sizeof(RecoveredGlobal_8041E178_lbl_805C1D48) == 0xA8 ? 1 : -1];
#pragma push
#pragma pool_data off
s32 TLobby::mark_connection_closed(s16 arg0) {
    struct Fields_var_r4 { u8 pad_0[4]; u16 field_4; };
    struct Fields_var_r3 { u8 pad_0[6]; s16 field_6; u8 pad_8[3]; u8 field_B; };
    s32 *var_r3;
    s32 *var_r4;
    s16 var_r0;
    s16 var_r5;
    if ((arg0 < 0) || (var_r4 = &tcp_protocol_state.value, var_r4 = &tcp_protocol_state.value, var_r5 = arg0, ((var_r5 < (s16) *(s16 *)((s8 *)(&tcp_protocol_state.value) + 4)) == 0))) {
        var_r0 = -4;
    } else {
        var_r4 = (s32 *)(*(s32 **)((s8 *)(&tcp_protocol_state.value) + 0));
        var_r4 = (s32 *)((u8 *)var_r4 + (var_r5 * 0x544));
        if ((u16) ((Fields_var_r4*)var_r4)->field_4 != 1) {
            var_r0 = -4;
        } else {
            var_r0 = 0;
        }
    }
    if (var_r0 < 0) {
        var_r3 = (s32 *)((u8 *)((s32 *)-4));
        return -4;
    }
    var_r3 = (s32 *)(&tcp_protocol_state.value);
    var_r3 = (s32 *)(&tcp_protocol_state.value);
    var_r3 = (s32 *)(*(s32 **)((s8 *)(&tcp_protocol_state.value) + 0));
    var_r3 = (s32 *)((u8 *)var_r3 + (arg0 * 0x544));
    ((Fields_var_r3*)var_r3)->field_6 = 0;
    ((Fields_var_r3*)var_r3)->field_B = (u8) (((Fields_var_r3*)var_r3)->field_B | 0x80);
    TLobby__sub_8041B5C0(var_r3);
    var_r3 = (s32 *)(NULL);
    return 0;
}
#pragma pop

#pragma push
#pragma opt_propagation off
#pragma push
#pragma pool_data off
s32 TLobby::abort_tcp_connection(s16 arg0) {
    s16 r;
    E_805C1D48 *e;

    if (arg0 < 0 || arg0 >= tcp_protocol_state.n) {
        r = -4;
    } else if (tcp_protocol_state.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = tcp_protocol_state.p;
    e += arg0;
    if (e->f6 < 4) {
        e->f6 = 0;
    } else {
        e->f6 = 0;
        TLobby__sub_8041A9AC((int)e);
    }
    ((TLobby *)e)->clear_position();
    return 0;
}
#pragma pop

#pragma pop

s16 TLobby__sub_8041B724(u8 *);
u16 TLobby__sub_8041EA14(void);
#pragma push
#pragma opt_propagation off
#pragma push
#pragma pool_data off
s16 TLobby::tcp_connect_start(s16 arg0, s32 arg1, s16 arg2) {
    s16 r;
    E_805C1D48 *e;
    s16 TLobby__sub_8040DA54(u8 *arg0, u8 *arg1);
    s16 is_addr_unspecified__6TLobbyFPv(u8 *arg0);
    s16 select_source_address__6TLobbyFPvPv(void *, void *);
    s16 TLobby__sub_8041A9AC(void *);
    s16 TLobby__sub_8041EC14(u8 *);
    s16 TLobby__sub_8041ECA4(u8 *arg0);
    u16 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);
    void TLobby__sub_80422E30(s16, s32, s32, s16);

    if (arg0 < 0 || arg0 >= tcp_protocol_state.n) {
        r = -4;
    } else if (tcp_protocol_state.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = tcp_protocol_state.p;
    e += arg0;
    if (TLobby__sub_8040DA54((u8 *)arg1, (u8 *)e + 0x290) == 0) {
        TLobby__sub_80422E30((s16)(e - tcp_protocol_state.p), *(s32 *)((s8 *)e + 0x2D0), 3, 0xC);
        return -6;
    }
    if (is_addr_unspecified__6TLobbyFPv((u8 *)e + 0x290) != 0 && select_source_address__6TLobbyFPvPv((u8 *)e + 0x290, (void *)arg1) < 0) {
        TLobby__sub_80422E30((s16)(e - tcp_protocol_state.p), *(s32 *)((s8 *)e + 0x2D0), 3, 0xC);
        return -6;
    }
    if (*(u16 *)((s8 *)e + 0x268) == 0) {
        *(u16 *)((s8 *)e + 0x268) = TLobby__sub_8041EA14();
    }
    NetMemcpy((u8 *)e + 0x27C, (void *)arg1, 0x14);
    *(s16 *)((s8 *)e + 0x26A) = arg2;
    if (TLobby__sub_8041B724((u8 *)e) < 0) {
        return -6;
    }
    r = TLobby__sub_8041ECA4((u8 *)e);
    if (r < 0) {
        return r;
    }
    r = TLobby__sub_8041EC14((u8 *)e);
    if (r < 0) {
        ((TLobby *)e)->close_if_open();
        return r;
    }
    *(u32 *)((s8 *)e + 0x23C) = get_adjusted_slot_count__6TLobbyFPv((u8 *)e);
    e->f6 = 2;
    *(s16 *)((s8 *)e + 0x260) = 0x96;
    {
        s32 *t = (s32 *)((u8 *)&tcp_protocol_state + 0x18);
        s32 v = *t;
        *(s32 *)((s8 *)e + 0x21C) = v;
        *(s32 *)((s8 *)e + 0x324) = v;
        *(s32 *)((s8 *)e + 0x2F4) = v;
        *(s32 *)((s8 *)e + 0x210) = v;
        *(s32 *)((s8 *)e + 0x238) = v;
        *(s32 *)((s8 *)e + 0x20C) = v;
        *(s32 *)((s8 *)e + 0x208) = v;
        *t += 0xFA00;
    }
    return TLobby__sub_8041A9AC(e);
}
#pragma pop

#pragma pop

s32 TLobby::validate_tcp_handle(s16 i) {
    if (i < 0 || i >= tcp_protocol_state.n) { return -4; }
    if (tcp_protocol_state.p[i].f4 != 1) { return -4; }
    return 0;
}

s32 TLobby__sub_8041EB74(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[204]; u8 field_CC; };
    if ((u8) ((Fields_arg0*)arg0)->field_CC == 0) {
        return -1;
    }
    TLobby__sub_8041579C((void *) (arg0 + 0xD0));
    ((Fields_arg0*)arg0)->field_CC = 0U;
    return 0;
}

s32 TLobby::close_if_open() {
    u8 *arg0 = (u8 *)this;
    if ((u8) *(u8 *)&this->m_down == 0) {
        return -1;
    }
    TLobby__sub_8041579C((void *) (arg0 + 0x18));
    *(u8 *)&this->m_down = 0U;
    return 0;
}

s32 TLobby__sub_8041EC14(u8 *arg0) {
    s32 spC[3];

    if ((u8) *(u8 *)((s8 *)arg0 + 0xCC) == 0) {
        if (TLobby__sub_80415954((void *) (&spC[0]), (int) (*(s32 *)((s8 *)arg0 + 0x534)), 1) < 0) {
            return -0x102;
        }
        ((TLobby *)(arg0 + 0xD0))->init_msg(spC[0]);
        ((TLobby *)(arg0 + 0xC8))->set_value_and_enable(spC[0]);
        goto block_4;
    }
block_4:
    *(s32 *)((s8 *)arg0 + 0xD8) = 0;
    *(s32 *)((s8 *)arg0 + 0xDC) = 0;
    *(s32 *)((s8 *)arg0 + 0xE0) = 0;
    *(s32 *)((s8 *)arg0 + 0xF4) = 0;
    *(s16 *)((s8 *)arg0 + 0xF8) = -1;
    *(s16 *)((s8 *)arg0 + 0xFA) = -1;
    return 0;
}

s32 TLobby__sub_8041ECA4(u8 *arg0) {
  unsigned char new_var;
  s32 spC;
  if (((u8) (*((u8 *) (((s8 *) arg0) + 0x14)))) == 0)
  {
    if (TLobby__sub_80415954((void *) (&spC), (int) (*((s32 *) (((s8 *) arg0) + 0x530))), 1) < 0)
    {
      return -0x102;
    }
    ((TLobby *)(((u8 *) arg0) + 0x18))->init_msg((s32)((int) spC));
    ((TLobby *)(((u8 *) arg0) + 0x10))->set_value_and_enable((s32)((int) spC));
    goto block_4;
  }
  block_4:
  *((s32 *) (((s8 *) arg0) + 0x20)) = 0;
  new_var = 0x24;
  *((s32 *) (((s8 *) arg0) + new_var)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x28)) = 0;
  return 0;
}

s32 TLobby::get_field_534() {
    u8 *arg0 = (u8 *)this;
    return *(s32 *)((s8 *)arg0 + 0x534);
}

s32 TLobby::get_field_d8() {
    u8 *arg0 = (u8 *)this;
    return *(s32 *)((s8 *)arg0 + 0xD8);
}

s32 TLobby::get_score() {
    u8 *arg0 = (u8 *)this;
    if (((u8) *(u8 *)((s8 *)arg0 + 0x204) >> 7U) & 1) {
        return *(s32 *)((s8 *)arg0 + 0x34);
    }
    return *(s32 *)((s8 *)arg0 + 0x20) + *(s32 *)((s8 *)arg0 + 0x34);
}

s32 TLobby::get_queue_diff() {
    u8 *arg0 = (u8 *)this;
    return *(s32 *)((s8 *)arg0 + 0x534) - *(s32 *)((s8 *)arg0 + 0xD8);
}

s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0) {
    if (((u8) *(u8 *)((s8 *)arg0 + 0x204) >> 7U) & 1) {
        return *(s32 *)((s8 *)arg0 + 0x530);
    }
    return *(s32 *)((s8 *)arg0 + 0x530) - *(s32 *)((s8 *)arg0 + 0x20);
}

}
