#include "types.h"
#include "pso/protocol/NetworkRuntime.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct Ch_8040098C { s16 flags; u8 pad[6]; u16 code; };
struct Info_8040098C { u8 pad[0x1C]; s16 f1C; u8 pad1E[6]; u16 f24; u8 pad26[0x2A]; s16 f50; u8 pad52[6]; u16 f58; };
struct St_8040098C { s8 f0; u8 f1; u8 f2; u8 pad3[0x69]; u8 f6C[0x9C]; s32 f108; s32 f10C; };
struct Self_8040098C { u8 pad[0xC]; St_8040098C *st; u8 pad10[0x20]; Info_8040098C *info; };

struct RecoveredGlobal_803F8AA0_lbl_805BA5C0 {
    M2C_UNK value;
    u8 remaining[0x30A8];
};

struct RecoveredGlobal_803F8A0C_lbl_805B9534 {
    M2C_UNK value;
    u8 remaining[0x1088];
};

struct RecoveredGlobal_8041552C_lbl_805C1BE0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_803FB110_lbl_805BFF68 {
    M2C_UNK value;
    u8 remaining[0xCC];
};

struct RecoveredGlobal_804050DC_lbl_805C18A0 {
    M2C_UNK value;
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
    M2C_UNK value;
    u8 remaining[0x49C4];
};

struct RecoveredGlobal_803F89A4_lbl_805B52D4 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_803F89A4_lbl_805B5454 {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_803F89DC_lbl_805B54BC {
    M2C_UNK value;
    u8 remaining[0x3FFC];
};

struct RecoveredGlobal_803F89DC_lbl_805B94BC {
    M2C_UNK value;
    u8 remaining[0x74];
};

struct RecoveredGlobal_803F8A28_lbl_805AEEB0 {
    M2C_UNK value;
    u8 remaining[0x49C4];
};

struct RecoveredGlobal_803F94A0_lbl_805BF770 {
    M2C_UNK value;
    u8 remaining[0x74C];
};

struct RecoveredGlobal_803FC178_lbl_805C02D0 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_803FC1A0_lbl_805C02D0 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_80401A68_lbl_805C04A8 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80401A90_lbl_805C04A8 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80402B60_lbl_805C0620 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80402B88_lbl_805C0620 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80403D28_lbl_805C0638 {
    M2C_UNK value;
    u8 remaining[0x9C];
};

struct RecoveredGlobal_804050EC_lbl_805C18A0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80405114_lbl_805C18A0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8040EF00_lbl_805C1B60 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8040FE40_lbl_805C1B60 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8040FE9C_lbl_805C1B60 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8041123C_lbl_805C1BB8 {
    union { M2C_UNK value; struct { s16 a; s16 b; } ab; };
    s16 c;
    u8 remaining[0x22];
};

struct RecoveredGlobal_804112B8_lbl_805C1BB8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80411ECC_lbl_805C1BB8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8041471C_lbl_805C1BB8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

#include <stddef.h>
struct Stack_80416008 {
    M2C_UNK sp10;
    u8 pad_14[0xC];
    M2C_UNK sp20;
    u8 trailing_storage[0x14];
};

struct H_8041A130 { s16 used; u16 type; void (*fn)(s32, s16, s16, s16); };
struct RecoveredGlobal_80419A00_lbl_805C1C50 {
    M2C_UNK value;
    s32 queue;
    u8 pad8[0xC];
    H_8041A130 h[3];
    u8 rest[0xCC];
};

struct E_805C1D48 { u8 pad[4]; u16 f4; s16 f6; u8 pad2[0x53C]; };
struct RecoveredGlobal_8041E178_lbl_805C1D48 {
    union { M2C_UNK value; E_805C1D48 *p; };
    s16 n;
    u8 remaining[0xA2];
};

struct RecoveredGlobal_803AA0C0_lbl_80556E88 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803F8930_lbl_805B4F84 {
    M2C_UNK value;
    u8 remaining[0x34C];
};

struct RecoveredGlobal_803F8B7C_lbl_805BD66C {
    M2C_UNK value;
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
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8040ED70_lbl_805C1B60 {
    M2C_UNK value;
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
    M2C_UNK value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80419A7C_lbl_805C1C50 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80409A3C_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_803F88E4_lbl_805AEEB0
{
  M2C_UNK value;
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

struct Ent_803F8D84 { s32 active; s32 unk4; u32 key; };

struct Inner_80401CAC { u8 pad[4]; u16 f4; };

struct Outer_80401CAC { Inner_80401CAC *p; };

struct Sub_803FC480 { u8 f0; u8 f1; u8 f2; u8 f3; u8 f4; };

struct Obj_803FC480 { u8 f0; u8 f1; u8 f2; u8 pad3[0x9D]; Sub_803FC480 sub; };

struct Ent_80408718 { s16 f0; u8 pad[0x16]; };

struct Tbl_80408718 { s16 count; s16 h2; s16 h4; s16 h6; s16 h8; u8 pad[4]; Ent_80408718 *list; };

struct Obj_80405304 { u8 pad[0x18]; u8 f18; };

struct Ent_803F8DBC { s32 active; s32 size; s32 val; };

struct Ent_803F9B48 { s32 active; u32 key; u8 pad[0x328 - 8]; };

struct Ent_803F9C78 { s32 active; u32 key; u8 pad[0x318 - 8]; void (*fn)(Ent_803F9C78 *); u8 pad2[0x328 - 0x31C]; };

struct Blk_803FA2A8 { s32 w[6]; };

union U_803FA2A8 { s16 h4; Blk_803FA2A8 src; };

struct Q_803FA2A8 {
    s16 h0; s16 h2;
    U_803FA2A8 u;
    Blk_803FA2A8 dst;
    s16 h34; s16 h36; s16 h38; s16 h3A;
    s32 w3C; s32 w40;
    u8 pad44[0x50 - 0x44];
    s16 h50;
};

struct P_803FA2A8 { u8 pad[0x30]; Q_803FA2A8 *q; };

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

struct Big_803F8AD8 {
    u8 pad0[0xB7A0];
    u8 bufB7A0[0x2FC0];
    u8 bufE760[0x30];
    u8 bufE790[0x10];
    void *funcs[7];
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

struct Slot_803F8E08 {
    s32 active;
    u8 pad4[4];
    u8 alarm[0x28];
    u8 queue[0x28];
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

struct Ent_803F8BA4 { u8 pad[0x31C]; s32 size; u8 *buf; u8 pad2[4]; };

struct H_803F8BA4 {
    s16 a;
    s16 b;
    u16 n1;
    u16 n2;
    s32 c;
    s32 d;
    s32 e;
    u32 f;
    u32 g;
};

struct P_8041D2B8 { s32 a; s32 b; s32 c; s32 d; };

struct O_8041D2B8 { u8 pad0[0x238]; s32 f238; u8 pad23C[0x320 - 0x23C]; s16 n; u8 pad322[0xE]; P_8041D2B8 items[32]; };

struct Strm_80405A74 { u8 *p; u16 len; };

typedef struct B_803FADA0 { u8 *buf; u16 len; } B_803FADA0;

typedef struct A_803FADA0 { u8 pad0[4]; u32 a; u32 b; } A_803FADA0;

struct Cfg_803F8868 {
    s16 a0, a2, a4, a6, a8, aA, aC, aE, a10, a12, a14, a16;
    u8 *p18;
    u8 *p1C;
    u8 *p20;
    u8 *p24;
};

extern "C" {
s32 clear_flag_bit4__6TLobbyFiPv(M2C_UNK arg0, u8 *arg1);
void TLobby__sub_803F8AA0(u8 *arg0);
void TLobby__sub_803F8A0C(u8 *arg0);
extern RecoveredGlobal_8041552C_lbl_805C1BE0 network_loopback_state;
s16 get_slot_offset_or_default__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_803FB110_lbl_805BFF68 lbl_805BFF68;
u8 *TLobby__sub_803FB110(void);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
void TLobby__sub_804050DC(s16 arg0);
extern RecoveredGlobal_803FD520_lbl_805C0310 lobby_net_buffer_desc_b;
extern s16 lbl_805D7A7A;
s16 get_checked_status_value__6TLobbyFs(s16 arg0);
void NetIPv6ApplyNeighborDiscoveryDefaults(u8 *arg0);
void init_buffer_descriptor_a__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803F89A4(u8 *arg0);
void init_buffer_desc_a__6TLobbyFPv(u8 *arg0);
void init_net_buffer_config__6TLobbyFPv(u8 *arg0);
void reset_message_thread__6TLobbyFv(void);
void TLobby__sub_803F8AB8(void);
s32 OSGetTick();
void NetStoreTick(s32 *arg0);
extern RecoveredGlobal_803F94A0_lbl_805BF770 network_message_queue_slot_table;
void clear_slot_for_handle__6TLobbyFUi(u32 arg0);
M2C_UNK OSUnlockMutex();
M2C_UNK OSLockMutex();
s32 OSGetCurrentThread();
void NetStoreCurrentThread(s32 *arg0);
M2C_UNK OSYieldThread();
void NetYieldThread(void);
M2C_UNK OSResumeThread();
void resume_thread__6TLobbyFv(void);
s32 OSGetCurrentThread();
M2C_UNK OSSuspendThread();
void NetSuspendCurrentThread(void);
M2C_UNK OSCancelThread(void *);
s32 OSIsThreadTerminated();
void cancel_thread_if_running__6TLobbyFi(s32 arg0);
M2C_UNK OSResumeThread();
void NetResumeThread(void);
void TAdSinglePlyChrSelectGC__sub_8039DC70(s32, s32);
s32 TQuestVmDownLoadServer__sub_8039DABC(s32, s32, s32);
s32 TLobby__sub_8039DAFC(void *, void *);
void TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
void strlen(s32);
M2C_UNK memmove();
void memmove_wrapper__6TLobbyFv(void);
M2C_UNK memcmp();
M2C_UNK memset();
M2C_UNK memcpy();
s32 is_timed_out__6TLobbyFv();
s32 check_connection_status__6TLobbyFPv(u8 *arg0);
s32 NetMemcmp(void *, void *, int);
void NetMemset(void *, int, int);
void NetMemcpy(void *, void *, int);
s32 NetIPv6CPSetInterfaceIdentifier(u8 *arg0, s32 arg1);
void NetIPv6CPCancelTimer(s32 arg0);
void TLobby__sub_803F7678(void);
void stop_network_thread__6TLobbyFv(void);
void TLobby__sub_803FD0C0(void);
void reset_boot_state__6TLobbyFv(void);
s32 TLobby__sub_803FAFDC(void);
s32 TLobby__sub_803FB358(void *);
void TLobby__sub_803FB184(u8 *arg0);
M2C_UNK TLobby__sub_803F76F0(void *);
extern RecoveredGlobal_803FC178_lbl_805C02D0 lbl_805C02D0;
void init_net_state_a__6TLobbyFv(void);
M2C_UNK init_net_buffer_table__6TLobbyFPv(void *);
extern RecoveredGlobal_803FC178_lbl_805C02D0 lbl_805C02D0;
s32 init_net_state_b__6TLobbyFv(void);
void TLobby__sub_803FE820(s32 arg0);
s32 set_socket_flags_by_mode__6TLobbyFsPv(s16 arg0, u8 *arg1);
s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
s16 TLobby__sub_803FF304(u8 *arg0);
void free_field_98__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803FF468(s32 arg0);
void TLobby__sub_803FD85C(void *);
void reset_connection_slot__6TLobbyFPv(u8 *arg0);
void queue_command_81__6TLobbyFv(void);
M2C_UNK TLobby__sub_803F79BC(void *);
extern RecoveredGlobal_80401A68_lbl_805C04A8 lbl_805C04A8;
void init_net_state_c__6TLobbyFv(void);
M2C_UNK init_net_buffer_desc__6TLobbyFPv(void *);
extern RecoveredGlobal_80401A68_lbl_805C04A8 lbl_805C04A8;
s32 init_net_subsystem_block__6TLobbyFv(void);
void init_md5_state__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803F778C(void *);
extern RecoveredGlobal_80402B60_lbl_805C0620 lbl_805C0620;
void init_net_block_620__6TLobbyFv(void);
M2C_UNK init_net_block_620_params__6TLobbyFPv(void *);
extern RecoveredGlobal_80402B60_lbl_805C0620 lbl_805C0620;
s32 init_net_block_620_secondary__6TLobbyFv(void);
void reset_connection_state__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803F811C(void *);
s32 TLobby__sub_804036FC(u8 *arg0);
s32 TLobby__sub_80403DA8(void *, void *, void *, void *, void *, void *, void *);
s32 TLobby__sub_804062A0(s16);
extern RecoveredGlobal_80403D28_lbl_805C0638 lbl_805C0638;
s32 TLobby__sub_80403D28(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
M2C_UNK TLobby__sub_803F79AC(void *);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
void init_net_block_18A0__6TLobbyFv(void);
M2C_UNK TLobby__sub_803F79B0(void *);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
s32 run_net_init_step__6TLobbyFv(void);
extern s32 lobby_timer_list_head;
s16 reset_network_timer_list(void);
void TLobby__sub_803F8A08(void *);
extern s16 lobby_udp_socket_table;
s32 shutdown_network_handle__6TLobbyFv(void);
s32 TUdpSocket__sub_80407508(void);
void TLobby__sub_804073B8(void);
s32 TLobby__sub_80407C60(s16, s32);
s32 dispatch_slot_a__6TLobbyFsi(s16 arg0, s32 arg1);
s32 TLobby__sub_80407D98(s16, s32);
s32 dispatch_slot_b__6TLobbyFsi(s16 arg0, s32 arg1);
s32 TLobby__sub_8040799C(s16, void *, void *);
void forward_net_op__6TLobbyFsPvPv(s16 arg0, u8 *arg1, u8 *arg2);
s16 TLobby__sub_80407F20(s16, s16, s16, s16, s16, s32, s8, s32);
void forward_net_op_5args__6TLobbyFsssssici(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s8 arg6, s32 arg7);
s32 TLobby__sub_8040878C(void);
void flush_flags_step__6TLobbyFv(void);
s16 init_net_sockets__6TLobbyFv(void);
void run_connect_step__6TLobbyFv(void);
void TLobby__sub_803F8A9C(void *);
extern s16 lobby_handler_table_desc;
s32 TLobby__sub_80409AA8(void);
s32 NetMemcmp(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040C9E0(u8 *arg0, u8 *arg1);
u16 calc_pseudo_header_checksum__6TLobbyFiicPvs(s32, s32, s8, void *, s16);
u16 TLobby__sub_80411040(void *, void *);
u16 TLobby__sub_8040D8F0(u8 *arg0, u8 *arg1, s8 arg2, u8 *arg3, s16 arg4);
s32 TLobby__sub_8040DA54(u8 *arg0, u8 *arg1);
s32 TLobby__sub_8040FDA0(u32, s16);
s32 is_multicast_address__6TLobbyFPvs(u8 *arg0, s16 arg1);
s32 is_addr_unspecified__6TLobbyFPv(u8 *arg0);
s32 compare_sockaddr__6TLobbyFPvPv(u8 *arg0, u8 *arg1);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
u8 * TLobby__sub_8040F76C(u32, u32);
s32 is_lookup_found__6TLobbyFUiUi(u32 arg0, u32 arg1);
s32 NetIPv4IsLoopback(s32 arg0);
s32 NetIPv4IsUnspecified(u32 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
s32 TLobby__sub_8040FEE4(s32 arg0, s32 arg1);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
u8 * TLobby__sub_80413264(void *, s32);
s32 TLobby__sub_80413230(u8 *arg0, s32 arg1);
s32 is_slot_flag_0x20_set__6TLobbyFs(s16);
void TLobby__sub_804136AC(s16 arg0);
s32 is_socket_flag_set__6TLobbyFs(s16);
void TLobby__sub_804136CC(s16 arg0);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
s16 NetIPv6IsLoopback(u8 *arg0);
s32 NetIPv6IsMulticast(u8 *arg0);
s32 NetIPv6IsUnspecified(u8 *arg0);
s32 NetMemcmp(void * _w0, void * _w1, int _w2);
s32 NetIPv6CompareAddresses(s32 arg0, s32 arg1);
s16 TLobby__sub_8041510C(void);
void TLobby__sub_804150EC(void);
void TLobby__sub_8041615C(void);
void NetIPv6TickNeighborCache(void);
void NetIPv6TickNeighborDiscovery(void);
void NetMemset(void * _w0, int _w1, int _w2);
void release_entry__10TUdpSocketFPv(void *);
u8 *alloc_free_entry__6TLobbyFv();
s16 TLobby__sub_80413D78();
M2C_UNK NetIPv6MakeSolicitedNodeMulticastAddress(void *, void *);
s32 NetIPv6EmitNeighborSolicitation(int, void *, void *, void *, int);
s32 NetIPv6SendUnspecifiedSourceNeighborSolicitation(s32 arg0, s32 arg1);
void NetMemset(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 network_dispatch_state;
void TLobby__sub_80419A00(void);
s32 TLobby__sub_8041D368(u8 *arg0);
u8 * TLobby__sub_8041B5C0(void *);
extern RecoveredGlobal_8041E178_lbl_805C1D48 tcp_protocol_state;
s32 mark_connection_closed__6TLobbyFs(s16 arg0);
void strcat(u8);
void append_string__6TLobbyFUc(u8 arg0);
void strncmp(u8);
void compare_strn__6TLobbyFUc(u8 arg0);
void strcmp(u8);
void compare_str__6TLobbyFUc(u8 arg0);
void strcpy(void *, void *);
void copy_string__6TLobbyFPvPv(void *arg0, void *arg1);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
s32 TLobby__sub_804112B8(s32 arg0, s32 arg1, s16 arg2);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
s32 TLobby__sub_8041123C(s32 arg0, s32 arg1, s16 arg2);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
s16 *get_valid_entry__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
s16 *get_active_entry_by_index__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
s16 TLobby__sub_8040EF00(s16 arg0);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 ipv6_address_routing_state;
s16 get_entry_field_26__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
s32 TLobby__sub_8040FE40(s16 arg0);
void TLobby__sub_803F8930(u8 *arg0);
extern M2C_UNK lbl_805D7A58;
void init_net_recv_desc__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803FE6CC(void *, int, int, void *);
s32 TLobby__sub_803FE658(u8 *arg0);
void free_field_98_and_clear__6TLobbyFPv(u8 *arg0);
u8 *alloc_from_buffer__6TLobbyFPvs(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1);
s32 send_network_frame(u16, u8 *);
s32 TLobby__sub_804037B0(s32 arg0, u16 arg1);
void TLobby__sub_80405328(u8 *arg0);
s16 TLobby__sub_8040FCEC(u32);
s16 TLobby__sub_804136EC(s32);
s16 TLobby__sub_8040DABC(u8 *arg0);
void TLobby__sub_803F892C(void *);
s32 release_slot_by_id__6TLobbyFUs(u16);
extern RecoveredGlobal_8040DD68_lbl_805C1B38 ipv4_protocol_state;
s32 TLobby__sub_8040DD68(void);
void TLobby__sub_803F8958(void *);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
s32 TLobby__sub_8040ED28(void);
void init_buffer_descriptor_a__6TLobbyFPv(u8 *arg0);
void NetMemset(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 ipv4_address_routing_state;
s32 TLobby__sub_8040ED70(void);
void TLobby__sub_803F87DC(void *);
s32 release_slot_by_id__6TLobbyFUs(u16);
extern RecoveredGlobal_8040FF0C_lbl_805C1B78 ipv6_protocol_state;
s32 NetIPv6Shutdown(void);
void TLobby__sub_803F89D8(void *);
extern RecoveredGlobal_80415650_lbl_805C1BF8 network_buffer_pool_state;
s32 reset_net_value__6TLobbyFv(void);
M2C_UNK TLobby__sub_803F8E9C();
void NetMemset(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 network_dispatch_state;
void TLobby__sub_80419A34(void);
void clear_slot_for_handle__6TLobbyFUi(u32 arg0);
void unlock_mutex__10TUdpSocketFi(int);
void lock_mutex__6TLobbyFi(int);
M2C_UNK TLobby__sub_803F95E4(int);
void cancel_thread_if_running__6TLobbyFi(s32 arg0);
extern RecoveredGlobal_80419A00_lbl_805C1C50 network_dispatch_state;
s32 TLobby__sub_80419A7C(void);
s16 TLobby__sub_8041579C(void *);
s32 TLobby__sub_8041EB74(u8 *arg0);
s16 TLobby__sub_8041579C(void *);
s32 close_if_open__6TLobbyFPv(u8 *arg0);
void unlock_mutex__10TUdpSocketFi(int _w0);
void lock_mutex__6TLobbyFi(int _w0);
s16 TLobby__sub_8040A2BC(void *, s16);
extern RecoveredGlobal_80419A00_lbl_805C1C50 network_dispatch_state;
s16 TLobby__sub_80409A3C(u8 *arg0, s16 arg1);
void init_buffer_descriptor_b__6TLobbyFPv(RecoveredFields_803F88E4_arg0 *arg0);
void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);
s16 TLobby__sub_80415954(void *, int, int);
s32 TLobby__sub_8041ECA4(u8 *arg0);
void init_net_state_entry__6TLobbyFPv(s8 *arg0);
s32 TLobby__sub_803FE6CC(void *, int, int, void *);
void TLobby__sub_80405328(u8 *arg0);
void TLobby__sub_803FD958(u8 *arg0);
extern u16 lbl_805D7A60;
extern Ent_803F8D84 *lbl_805D7A64;
void TLobby__sub_803F8D84(u32 key);
void TLobby__sub_80401CAC(Outer_80401CAC *o, u16 v);
void TLobby__sub_804050DC(s16 arg0);
s32 TLobby__sub_803FAEA0(s32 cmd, s32 arg);
s32 mark_sub_ready__6TLobbyFPv(Obj_803FC480 *self);
u16 read_network_u16_be(u8 *p);
extern u16 lbl_805D7A78;
void set_ppp_auth_protocol__6TLobbyFUs(u16 v);
u32 TLobby__sub_80402AFC(u8 *p);
u8 *write_network_u32_be(u8 *p, u32 v);
void TLobby__sub_80405000(u32 arg0);
u8 *write_network_u16_be(u8 *p, u16 v);
extern Tbl_80408718 lbl_805C1AB0;
Ent_80408718 *find_free_peer_entry__6TLobbyFv(void);
s32 TLobby__sub_80405304(void *arg0);
u16 TLobby__sub_80406BD8(void *, s16);
u16 calc_ip_checksum__6TLobbyFPvs(void *, s16);
M2C_UNK update_connection_state__6TLobbyFi(int);
s32 TLobby__sub_803FE658(u8 *arg0);
extern M2C_UNK lbl_8047FEB8[];
extern M2C_UNK lbl_8047FEC8[];
void handle_request_timeout__6TLobbyFPv(u8 *arg0);
extern u16 lbl_805D7A60;
extern Ent_803F8D84 *lbl_805D7A64;
s32 alloc_buffer_slot__6TLobbyFi(s32 size);
s64 OSGetTime();
void get_time_seconds__6TLobbyFPv(s32 *out);
s64 OSGetTime();
void get_time_ms__6TLobbyFPv(s32 *out);
extern u16 lbl_805D7A68;
extern Ent_803F9B48 *lbl_805D7A6C;
void deactivate_entry_by_key__6TLobbyFUi(u32 key);
extern u16 lbl_805D7A68;
extern Ent_803F9B48 *lbl_805D7A6C;
s32 OSGetCurrentThread();
s32 run_current_thread_callback__6TLobbyFv(void);
void TLobby__sub_803FA2A8(P_803FA2A8 *o);
void init_ipv6_interface_config__6TLobbyFPv(Obj_803F87E0 *arg0);
void queue_timeout_message__6TLobbyFsis(void);
void get_local_address__6TLobbyFsPv(void);
void consume_item_count_by_id__6TLobbyFsPv(void);
void add_multicast_address__6TLobbyFsPv(void);
void remove_rec_by_handle__6TLobbyFsUs(void);
void open_channel_checked__6TLobbyFsUs(void);
void TLobby__sub_80426B88(void);
void init_net_func_table__6TLobbyFPv(Desc_803F8AD8 *arg0);
s32 OSDisableInterrupts(void);
s32 OSRestoreInterrupts(s32);
void OSCancelAlarm(void *);
s32 OSSendMessage(void *, void *, s32);
void cancel_alarm_a__6TLobbyFv(void);
void TLobby__sub_80428358(void);
void cancel_alarm_b__6TLobbyFv(void);
extern Slot_803F8E08 lobby_alarm_slot_table[0x40];
s32 cancel_pending_alarms__6TLobbyFv(void);
void TLobby__sub_80405000(u32 arg0);
s32 init_net_list__6TLobbyFss(s16, s16);
s32 TLobby__sub_80405304(void *arg0);
void TLobby__sub_803FF384(u8 *arg0);
void unlock_mutex__10TUdpSocketFi(int _w0);
void lock_mutex__6TLobbyFi(int _w0);
void TLobby__sub_803F97E8(int);
s32 is_timed_out__6TLobbyFv(void);
M2C_UNK update_connection_state__6TLobbyFi(int);
void process_expired_timers__6TLobbyFv(void);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
s32 wait_for_connection__6TLobbyFPv(Conn_804004DC *c);
void get_time_ms__6TLobbyFPv(s32 *out);
void save_timer_state__6TLobbyFPv(u8 *arg0);
s32 configure_mode_by_type__6TLobbyFPvs(Cfg_804019A8 *c, s16 type);
u32 str_length__6TLobbyFi(s32 arg0);
void NetMemcpy(void * _w0, void * _w1, int _w2);
extern Names_80403168 lbl_805C04D8;
s32 TLobby__sub_80403168(u8 *arg0, u8 *arg1, u8 *arg2);
s16 TLobby__sub_803FC1CC(u8 *, s32);
s32 TLobby__sub_803FC684(u8 *, u8 *, u8 *);
s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
extern u8 lbl_805C0038[];
extern s16 lbl_805D7A7C;
s32 TLobby__sub_80403B04(u8 *arg0, u8 *arg1, s32 arg2);
s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803FE658(u8 *arg0);
s16 TLobby__sub_80402BB4(u8 *, s32);
s32 TLobby__sub_80403168(u8 *arg0, u8 *arg1, u8 *arg2);
extern u8 lbl_805C0038[];
extern s16 lbl_805D7A7C;
extern s32 lbl_805D7A90;
s32 TLobby__sub_80403BA8(u8 *arg0, u8 *arg1, s32 arg2);
void unlock_mutex__10TUdpSocketFi(int _w0);
void lock_mutex__6TLobbyFi(int _w0);
void NetMemset(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 network_dispatch_state;
extern s16 lobby_handler_table_desc;
s32 clear_table_entry_locked__6TLobbyFs(s16 arg0);
extern s16 lobby_handler_table_desc;
s32 call_handler_by_index__6TLobbyFsiiii(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s16 lobby_handler_table_desc;
s32 dispatch_handler_by_index__6TLobbyFsiii(s16 arg0, s32 arg1, s32 arg2, s32 arg3);
void NetMemcpy(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040B838(u8 *dst, u8 *src, s16 len);
s32 build_dns_query_aaaa__6TLobbyFPvPvs(Q_8040B6E4 *q, u8 *name, s16 len);
void NetMemcpy(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040B838(u8 *dst, u8 *src, s16 len);
s32 build_dns_query_a__6TLobbyFPvPvs(Q_8040B790 *q, u8 *name, s16 len);
extern u16 lbl_805D7A60;
extern Ent_803F8D84 *lbl_805D7A64;
extern u16 lbl_805D7A68;
extern Ent_803F9B48 *lbl_805D7A6C;
extern u8 *lbl_805D7BE0;
extern u8 *lbl_805D7BE4;
extern u32 lbl_805D7BE8;
extern u8 *lbl_805D7C04;
extern u32 lbl_805D7C08;
u8 *layout_buffers__6TLobbyFPvPvPv(H_803F8BA4 *h, u8 *p, u8 *end);
s16 TLobby__sub_8040EF00(s16 arg0);
u8 * TLobby__sub_8040F76C(u32, u32);
s16 get_entry_field_26__6TLobbyFs(s16 arg0);
u8 * TLobby__sub_80413264(void *, s32);
s16 TLobby__sub_8040DC8C(u8 *arg0, u8 *arg1);
void resume_thread__6TLobbyFv(void);
void TLobby__sub_804217E4(void);
void TLobby__sub_80421814(void);
s32 TLobby__sub_80421B3C(s32);
s32 close_and_reset_connection__6TLobbyFPv(u8 *arg0);
void insert_item_at__6TLobbyFPvsii(O_8041D2B8 *o, s16 idx, s32 a, s32 b);
void get_time_ms__6TLobbyFPv(s32 *out);
void set_ppp_auth_protocol__6TLobbyFUs(u16 v);
s16 TLobby__sub_80401BCC(void *, void *, int);
u16 read_network_u16_be(u8 *p);
u32 TLobby__sub_80402AFC(u8 *p);
extern s16 lbl_805D7A7A;
extern u8 lcp_read_value_buffer[4];
extern u8 lobby_read_byte_buffer[1];
s16 parse_lcp_option__6TLobbyFiPvPvPvs(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, s16 arg4);
void dispatch_received_packet__6TLobbyFPvi(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803FDBF8(void *, Strm_80405A74 *);
s32 TLobby__sub_803FE6CC(void *, int, int, void *);
void TLobby__sub_8040098C(Self_8040098C *self);
u8 *alloc_from_buffer__6TLobbyFPvs(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1);
s16 TLobby__sub_80401BCC(void *, void *, int);
u16 read_network_u16_be(u8 *p);
u8 *write_network_u16_be(u8 *p, u16 v);
M2C_UNK PADRead(void *, Strm_80405A74 *);
s16 TLobby__sub_80403F4C(void *, Strm_80405A74 **);
s16 TLobby__sub_804040E0(void *, Strm_80405A74 **);
M2C_UNK TLobby__sub_804060B8(u8 *, u16, int);
extern u8 lbl_805C0038[];
extern s16 lbl_805D7A7A;
extern s16 lbl_805D7A7C;
extern u8 lobby_ppp_read_buf;
extern u8 ppp_input_byte;
void ppp_input_packet__6TLobbyFPv(Strm_80405A74 *arg0);
void NetMemset(void * _w0, int _w1, int _w2);
void MD5Transform(u32 *state, u8 *block);
s16 TLobby__sub_80401BCC(void *, void *, int);
B_803FADA0 *init_net_buffer_entry__6TLobbyFUs(s32);
u8 *write_network_u32_be(u8 *p, u32 v);
extern u8 lbl_805D7A74[1];
void TLobby__sub_803FADA0(B_803FADA0 **arg0, A_803FADA0 *arg1, s32 arg2, s32 arg3, void *arg4);
void init_udp_socket_config__6TLobbyFPv(Cfg_803F8868 *o);
}

extern "C" {

void TLobby__sub_803F8794(void *);
void TLobby__sub_803F87C4(void);
void TLobby__sub_803F87C8(u8 *arg0);
void TLobby__sub_803F8864(void *);
void TLobby__sub_803F88E0(void *);
void TLobby__sub_803F89A0(void *);
void TLobby__sub_803F8A24(void *);
void TLobby__sub_803F8B78(void);
s32 NetSetDefaultThreadPriority(s32 arg0);
void TLobby__sub_803FA234(void);
void TLobby__sub_803FA238(u8 *arg0);
void TLobby__sub_803FA280(void);
s32 TLobby__sub_803FD490(s16 arg0);
s32 TLobby__sub_803FD4B4(s16 arg0);
s32 TLobby__sub_803FD4D8(s16 arg0);
s32 TLobby__sub_803FD4FC(s16 arg0);
s32 TLobby__sub_803FE844(void);
void TLobby__sub_803FE84C(void);
s32 TLobby__sub_803FF2CC(u8 *arg0, s32 arg1);
void TLobby__sub_803FF374(u8 *arg0);
void TLobby__sub_80400988(void);
void TLobby__sub_80400B98(u8 *arg0);
s32 NetIPv6IsLinkLocal(u8 *arg0);
s32 TLobby__sub_8041549C(s16 arg0);
s32 TLobby__sub_804154C0(s16 arg0);
s32 TLobby__sub_804154E4(s16 arg0);
s32 TLobby__sub_80415508(s16 arg0);
void clear_position__6TLobbyFPv(u8 *arg0);
s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);
u16 get_field_4__6TLobbyFPv(u8 *arg0);
s32 get_field_534__6TLobbyFPv(u8 *arg0);
s32 get_field_d8__6TLobbyFPv(u8 *arg0);
s32 get_queue_diff__6TLobbyFPv(u8 *arg0);
s32 get_remaining__6TLobbyFi(s32 arg0);
s32 get_score__6TLobbyFPv(u8 *arg0);
void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1);
void init_packet_header__6TLobbyFPvi(u8 *arg0, s32 arg1);
void init_params__6TLobbyFPv(u8 *arg0);
s32 mark_ready__6TLobbyFPv(u8 *arg0);
void reset_slot_index__6TLobbyFPv(u8 *arg0);
void set_active__6TLobbyFPv(u8 *arg0);
s32 set_active_flag__6TLobbyFPv(u8 *arg0);
s32 set_filter_id__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_filter_index__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
s32 set_target_id__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_target_index__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_target_slot__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);

u32 lobby_net_config_block[4722];
u32 ipv6_interface_config[10];
u32 lbl_805B38A0[13];
u32 lbl_805B38D4[50];
u32 lbl_805B399C[99];
u32 lbl_805B3B28[36];
u32 lbl_805B3BB8[1267];
u32 lbl_805B4F84[212];
u32 lbl_805B52D4[96];
u32 lbl_805B5454[26];
u32 lbl_805B54BC[4096];
u32 lbl_805B94BC[30];
u32 lbl_805B9534[1059];
u32 lbl_805BA5C0[3115];
u32 lobby_net_recv_desc[641];
#define lobby_net_config_block (*(RecoveredGlobal_803F895C_lbl_805AEEB0 *)lobby_net_config_block)
#define ipv6_interface_config (*(Cfg_803F87E0 *)ipv6_interface_config)
#define lbl_805B38A0 ((u8 *)lbl_805B38A0)
#define lbl_805B4F84 (*(RecoveredGlobal_803F8930_lbl_805B4F84 *)lbl_805B4F84)
#define lbl_805B52D4 (*(RecoveredGlobal_803F89A4_lbl_805B52D4 *)lbl_805B52D4)
#define lbl_805B5454 (*(RecoveredGlobal_803F89A4_lbl_805B5454 *)lbl_805B5454)
#define lbl_805B54BC (*(RecoveredGlobal_803F89DC_lbl_805B54BC *)lbl_805B54BC)
#define lbl_805B94BC (*(RecoveredGlobal_803F89DC_lbl_805B94BC *)lbl_805B94BC)
#define lbl_805B9534 (*(RecoveredGlobal_803F8A0C_lbl_805B9534 *)lbl_805B9534)
#define lbl_805BA5C0 (*(RecoveredGlobal_803F8AA0_lbl_805BA5C0 *)lbl_805BA5C0)
#define lobby_net_recv_desc (*(RecoveredGlobal_803F8B7C_lbl_805BD66C *)lobby_net_recv_desc)

void TLobby__sub_803F8794(void *) {

}

extern s16 net_param_room_count;
extern s32 lbl_805D4800;
extern s32 lbl_805D7A44;

void init_params__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) net_param_room_count;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_805D4800;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) lbl_805D4800;
    M2C_FIELD(arg0, s16 *, 0xA0) = 0x64;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D7A44;
}

void TLobby__sub_803F87C4(void) {

}

extern s16 net_param_player_count;
extern s32 lbl_805D7A40;

void TLobby__sub_803F87C8(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) net_param_player_count;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_805D7A40;
}

void TLobby__sub_803F87DC(void * _w0) {

}

void init_ipv6_interface_config__6TLobbyFPv(Obj_803F87E0 *arg0) {
    arg0->x0 = 1;
    arg0->xc = 0;
    arg0->x10 = 0;
    arg0->x14 = 0x40;
    arg0->x4 = lbl_805B38A0;
    arg0->cfg = ipv6_interface_config;
}

void TLobby__sub_803F8864(void *) {

}

void init_udp_socket_config__6TLobbyFPv(Cfg_803F8868 *o) {
    o->a0 = 0x1A;
    o->a2 = 3;
    o->a4 = 9;
    o->a14 = 9;
    o->a6 = 1;
    o->aA = 1;
    o->a8 = 1;
    o->aC = 1;
    o->a10 = 1;
    o->aE = 2;
    o->a16 = 0x1E;
    o->a12 = 0x500;
    o->p18 = (u8 *)lbl_805B3BB8;
    o->p1C = (u8 *)lbl_805B3B28;
    o->p20 = (u8 *)lbl_805B399C;
    o->p24 = (u8 *)lbl_805B38D4;
}

void TLobby__sub_803F88E0(void *) {

}

typedef struct RecoveredFields_803F88E4_arg0 RecoveredFields_803F88E4_arg0;
typedef struct RecoveredGlobal_803F88E4_lbl_805AEEB0 RecoveredGlobal_803F88E4_lbl_805AEEB0;
typedef char RecoveredGlobal_803F88E4_lbl_805AEEB0_size[((sizeof(RecoveredGlobal_803F88E4_lbl_805AEEB0)) == 0x49C8) ? (1) : (-1)];
void init_buffer_descriptor_b__6TLobbyFPv(RecoveredFields_803F88E4_arg0 *arg0) {
  u8 *new_var;
  arg0->field_0 = 2;
  new_var = (u8 *) (&(*(RecoveredGlobal_803F88E4_lbl_805AEEB0 *)&lobby_net_config_block).value);
  arg0->field_2 = 8;
  arg0->field_4 = 8;
  arg0->field_14 = 0x5DC;
  arg0->field_8 = new_var + 0x6064;
  arg0->field_C = new_var + 0x5E24;
  arg0->field_10 = new_var + 0x5D04;
  arg0->field_18 = ((u8 *) (&(*(RecoveredGlobal_803F88E4_lbl_805AEEB0 *)&lobby_net_config_block).value)) + 0x514C;
}

void TLobby__sub_803F892C(void * _w0) {

}

#pragma push
#pragma opt_common_subs on
typedef char RecoveredGlobal_803F8930_lbl_805B4F84_size[sizeof(RecoveredGlobal_803F8930_lbl_805B4F84) == 0x350 ? 1 : -1];
void TLobby__sub_803F8930(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = 1;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0x78;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_805B4F84.value;
}
#pragma pop

void TLobby__sub_803F8958(void * _w0) {

}

typedef char RecoveredGlobal_803F895C_lbl_805AEEB0_size[sizeof(RecoveredGlobal_803F895C_lbl_805AEEB0) == 0x49C8 ? 1 : -1];
void init_buffer_descriptor_a__6TLobbyFPv(u8 *arg0) {
    struct Fields_arg0 { s16 field_0; s16 field_2; s16 field_4; s16 field_6; u8 * field_8; u8 * field_C; u8 * field_10; };
    ((Fields_arg0*)arg0)->field_0 = 0x1A;
    ((Fields_arg0*)arg0)->field_2 = 3;
    ((Fields_arg0*)arg0)->field_4 = 9;
    ((Fields_arg0*)arg0)->field_6 = 0x240;
    ((Fields_arg0*)arg0)->field_8 = (unsigned char *) ((void *) ((u8 *)&lobby_net_config_block.value + 0x621C));
    ((Fields_arg0*)arg0)->field_C = (unsigned char *) ((void *) ((u8 *)&lobby_net_config_block.value + 0x61C8));
    ((Fields_arg0*)arg0)->field_10 = (unsigned char *) ((void *) ((u8 *)&lobby_net_config_block.value + 0x60F0));
}

void TLobby__sub_803F89A0(void *) {

}

typedef char RecoveredGlobal_803F89A4_lbl_805B52D4_size[sizeof(RecoveredGlobal_803F89A4_lbl_805B52D4) == 0x180 ? 1 : -1];
typedef char RecoveredGlobal_803F89A4_lbl_805B5454_size[sizeof(RecoveredGlobal_803F89A4_lbl_805B5454) == 0x68 ? 1 : -1];
void TLobby__sub_803F89A4(u8 *arg0) {
    struct Fields_arg0 { s16 field_0; s16 field_2; s16 field_4; u8 pad_6[2]; M2C_UNK * field_8; M2C_UNK * field_C; };
    ((Fields_arg0*)arg0)->field_0 = 2;
    ((Fields_arg0*)arg0)->field_2 = 0x10;
    ((Fields_arg0*)arg0)->field_4 = 8;
    ((Fields_arg0*)arg0)->field_8 = &lbl_805B5454.value;
    ((Fields_arg0*)arg0)->field_C = &lbl_805B52D4.value;
}

void TLobby__sub_803F89D8(void * _w0) {

}

typedef char RecoveredGlobal_803F89DC_lbl_805B54BC_size[sizeof(RecoveredGlobal_803F89DC_lbl_805B54BC) == 0x4000 ? 1 : -1];
typedef char RecoveredGlobal_803F89DC_lbl_805B94BC_size[sizeof(RecoveredGlobal_803F89DC_lbl_805B94BC) == 0x78 ? 1 : -1];
void init_buffer_desc_a__6TLobbyFPv(u8 *arg0) {
    struct Fields_arg0 { s16 field_0; s16 field_2; M2C_UNK * field_4; M2C_UNK * field_8; };
    ((Fields_arg0*)arg0)->field_0 = 2;
    ((Fields_arg0*)arg0)->field_2 = 0x2000;
    ((Fields_arg0*)arg0)->field_4 = &lbl_805B94BC.value;
    ((Fields_arg0*)arg0)->field_8 = &lbl_805B54BC.value;
}

void TLobby__sub_803F8A08(void * _w0) {

}

typedef char RecoveredGlobal_803F8A0C_lbl_805B9534_size[sizeof(RecoveredGlobal_803F8A0C_lbl_805B9534) == 0x108C ? 1 : -1];
void TLobby__sub_803F8A0C(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = 5;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_805B9534.value;
}

void TLobby__sub_803F8A24(void *) {

}

typedef char RecoveredGlobal_803F8A28_lbl_805AEEB0_size[sizeof(RecoveredGlobal_803F8A28_lbl_805AEEB0) == 0x49C8 ? 1 : -1];
void init_net_buffer_config__6TLobbyFPv(u8 *arg0) {
    struct Fields_arg0 { s16 field_0; s16 field_2; s16 field_4; s16 field_6; s16 field_8; s16 field_A; s16 field_C; u8 pad_E[2]; u8 * field_10; u8 * field_14; u8 * field_18; u8 * field_1C; u8 * field_20; u8 * field_24; };
    ((Fields_arg0*)arg0)->field_0 = 8;
    ((Fields_arg0*)arg0)->field_2 = 3;
    ((Fields_arg0*)arg0)->field_4 = 2;
    ((Fields_arg0*)arg0)->field_6 = 0x5DC;
    ((Fields_arg0*)arg0)->field_8 = 9;
    ((Fields_arg0*)arg0)->field_A = 0x14;
    ((Fields_arg0*)arg0)->field_C = 3;
    ((Fields_arg0*)arg0)->field_10 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lobby_net_config_block).value) + 0xB650;
    ((Fields_arg0*)arg0)->field_14 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lobby_net_config_block).value) + 0xB5F0;
    ((Fields_arg0*)arg0)->field_1C = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lobby_net_config_block).value) + 0xB5D0;
    ((Fields_arg0*)arg0)->field_18 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lobby_net_config_block).value) + 0xB564;
    ((Fields_arg0*)arg0)->field_20 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lobby_net_config_block).value) + 0xA9AC;
    ((Fields_arg0*)arg0)->field_24 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lobby_net_config_block).value) + 0xA990;
}

void TLobby__sub_803F8A9C(void * _w0) {

}

typedef char RecoveredGlobal_803F8AA0_lbl_805BA5C0_size[sizeof(RecoveredGlobal_803F8AA0_lbl_805BA5C0) == 0x30AC ? 1 : -1];
void TLobby__sub_803F8AA0(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = 3;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_805BA5C0.value;
}

void TLobby__sub_803F8AB8(void) {
    reset_message_thread__6TLobbyFv();
}

void init_net_func_table__6TLobbyFPv(Desc_803F8AD8 *arg0) {
    Big_803F8AD8 *g = (Big_803F8AD8 *)&lobby_net_config_block;
    g->funcs[0] = (void *)TLobby__sub_80426B88;
    g->funcs[1] = (void *)open_channel_checked__6TLobbyFsUs;
    g->funcs[2] = (void *)remove_rec_by_handle__6TLobbyFsUs;
    g->funcs[3] = (void *)add_multicast_address__6TLobbyFsPv;
    g->funcs[4] = (void *)consume_item_count_by_id__6TLobbyFsPv;
    g->funcs[5] = (void *)get_local_address__6TLobbyFsPv;
    g->funcs[6] = (void *)queue_timeout_message__6TLobbyFsis;
    arg0->a = 1;
    arg0->b = 1;
    arg0->c = 3;
    arg0->d = 8;
    arg0->funcs = g->funcs;
    arg0->x = g->bufE790;
    arg0->y = g->bufE760;
    arg0->z = g->bufB7A0;
}

void TLobby__sub_803F8B78(void) {

}

extern s32 lbl_805D4810;

typedef char RecoveredGlobal_803F8B7C_lbl_805BD66C_size[sizeof(RecoveredGlobal_803F8B7C_lbl_805BD66C) == 0xA04 ? 1 : -1];
void init_net_recv_desc__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0xA) = 0x500;
    M2C_FIELD(arg0, s16 *, 0xC) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_805D7A58;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &lobby_net_recv_desc.value;
}

u8 *layout_buffers__6TLobbyFPvPvPv(H_803F8BA4 *h, u8 *p, u8 *end) {
    Ent_803F8DBC *e;
    Ent_803F8BA4 *f;
    s32 i;
    u16 n = h->n2;
    lbl_805D7A68 = 2;
    lbl_805D7A60 = n * 2;
    if (h->a != 0) {
        lbl_805D7A68 += 1;
    }
    if (h->b != 0) {
        lbl_805D7A68 += 2;
    }
    *(u8 **)&lbl_805D7A64 = p;
    p += lbl_805D7A60 * 12;
    if (p > end) {
        return NULL;
    }
    e = *(Ent_803F8DBC **)&lbl_805D7A64;
    for (i = 0; i < lbl_805D7A60; i++, e++) {
        e->active = 0;
        e->size = h->c;
        e->val = (s32)p;
        p += h->c;
        if (p > end) {
            return NULL;
        }
    }
    *(u8 **)&lbl_805D7A6C = p;
    p += lbl_805D7A68 * 0x328;
    if (p > end) {
        return NULL;
    }
    f = *(Ent_803F8BA4 **)&lbl_805D7A6C;
    for (i = 0; i < lbl_805D7A68; i++, f++) {
        f->size = h->d;
        f->buf = p;
        p += h->d;
        if (p > end) {
            return NULL;
        }
    }
    if (h->f != 0) {
        lbl_805D7BE0 = p;
        p += h->f;
        if (p > end) {
            return NULL;
        }
        lbl_805D7BE4 = p;
        p += h->f;
        if (p > end) {
            return NULL;
        }
        lbl_805D7BE8 = h->f;
    }
    if (h->g != 0) {
        lbl_805D7C04 = p;
        p += h->g;
        if (p > end) {
            return NULL;
        }
        lbl_805D7C08 = h->g;
    }
    return p;
}

void TLobby__sub_803F8D84(u32 key) {
    Ent_803F8D84 *e = lbl_805D7A64;
    s32 i;
    for (i = 0; i < lbl_805D7A60; i++) {
        if (e->key == key) {
            e->active = 0;
            return;
        }
        e++;
    }
}

s32 alloc_buffer_slot__6TLobbyFi(s32 size) {
    Ent_803F8DBC *e = (*(Ent_803F8DBC * *)&lbl_805D7A64);
    s32 i;
    s32 r = 0;
    for (i = 0; i < lbl_805D7A60; i++) {
        if (e->active == 0 && e->size >= size) {
            e->active = size;
            r = e->val;
            break;
        }
        e++;
    }
    return r;
}

s32 cancel_pending_alarms__6TLobbyFv(void);

void get_time_seconds__6TLobbyFPv(s32 *out);

void get_time_ms__6TLobbyFPv(s32 *out);

void NetStoreTick(s32 *arg0);

typedef char RecoveredGlobal_803F94A0_lbl_805BF770_size[sizeof(RecoveredGlobal_803F94A0_lbl_805BF770) == 0x750 ? 1 : -1];
void clear_slot_for_handle__6TLobbyFUi(u32 arg0);

void unlock_mutex__10TUdpSocketFi(int _w0);

void lock_mutex__6TLobbyFi(int _w0);

void NetStoreCurrentThread(s32 *arg0);

void signal_alarm_queue__6TLobbyFPv(void *alarm);

void NetYieldThread(void);

void resume_thread__6TLobbyFv(void);

void NetSuspendCurrentThread(void);

void cancel_thread_if_running__6TLobbyFi(s32 arg0);

void NetResumeThread(void);

void deactivate_entry_by_key__6TLobbyFUi(u32 key);

s32 run_current_thread_callback__6TLobbyFv(void);

s32 NetSetDefaultThreadPriority(s32 arg0);

typedef char RecoveredGlobal_803AA0C0_lbl_80556E88_size[sizeof(RecoveredGlobal_803AA0C0_lbl_80556E88) == 0x100 ? 1 : -1];
void append_string__6TLobbyFUc(u8 arg0);

void compare_strn__6TLobbyFUc(u8 arg0);

void compare_str__6TLobbyFUc(u8 arg0);

void copy_string__6TLobbyFPvPv(void *arg0, void *arg1);

u32 str_length__6TLobbyFi(s32 arg0);

void memmove_wrapper__6TLobbyFv(void);

s32 NetMemcmp(void * _w0, void * _w1, int _w2);

void NetMemset(void * _w0, int _w1, int _w2);

void NetMemcpy(void * _w0, void * _w1, int _w2);

s32 check_connection_status__6TLobbyFPv(u8 *arg0);

s32 clear_flag_bit4__6TLobbyFiPv(M2C_UNK arg0, u8 *arg1);

s32 NetIPv6CPSetInterfaceIdentifier(u8 *arg0, s32 arg1);

void TLobby__sub_803FA234(void);

void TLobby__sub_803FA238(u8 *arg0);

void init_net_state_entry__6TLobbyFPv(s8 *arg0);

void TLobby__sub_803FA280(void);

extern u16 lbl_805D7A78;

typedef char RecoveredGlobal_803FB110_lbl_805BFF68_size[sizeof(RecoveredGlobal_803FB110_lbl_805BFF68) == 0xD0 ? 1 : -1];

void NetIPv6CPCancelTimer(s32 arg0);

void TLobby__sub_803FA2A8(P_803FA2A8 *o);

void TLobby__sub_803FADA0(B_803FADA0 **arg0, A_803FADA0 *arg1, s32 arg2, s32 arg3, void *arg4);

s32 TLobby__sub_803FAEA0(s32 cmd, s32 arg);

s32 TLobby__sub_803FAFDC(void);

u8 *TLobby__sub_803FB110(void);

struct G_803FB120 { u8 pad[0x1C]; u8 buf[0x60]; };
struct H_803FB120 { u8 pad[0x4C]; void *v4C; };
extern H_803FB120 lobby_net_session_state;
u8 *copy_name_buffer__6TLobbyFPv(void *src);

void TLobby__sub_803FB184(u8 *arg0);

s32 get_remaining__6TLobbyFi(s32 arg0);

typedef char RecoveredGlobal_803FC178_lbl_805C02D0_size[sizeof(RecoveredGlobal_803FC178_lbl_805C02D0) == 0x40 ? 1 : -1];

struct G_803FB634 { u32 pad0; u32 pad4; u32 t8; };
extern s16 lbl_805D7A86;
extern s16 lbl_805D7A8A;
s32 is_timed_out__6TLobbyFv(void);

void set_ppp_auth_protocol__6TLobbyFUs(u16 v);

void init_net_state_a__6TLobbyFv(void);

typedef char RecoveredGlobal_803FC1A0_lbl_805C02D0_size[sizeof(RecoveredGlobal_803FC1A0_lbl_805C02D0) == 0x40 ? 1 : -1];
s32 init_net_state_b__6TLobbyFv(void);

s32 set_active_flag__6TLobbyFPv(u8 *arg0);

s32 mark_sub_ready__6TLobbyFPv(Obj_803FC480 *self);

s16 TLobby__sub_803FC820(void *, void *, int);
M2C_UNK TLobby__sub_803FCC10(void *, void *, int);
M2C_UNK update_connection_state__6TLobbyFi(int);
s32 TLobby__sub_803FE8BC(u8 *, void *);
typedef struct Hdr_803FC4B4 { u8 type; u8 flag; s16 len; } Hdr_803FC4B4;
struct O_80400ACC;
void TLobby__sub_80400ACC(O_80400ACC *);
struct Outer_80401CAC;
void TLobby__sub_80401CAC(Outer_80401CAC *, u16);
M2C_UNK TLobby__sub_80405304(void *);
extern s16 lbl_805D7A80;
extern s32 lbl_805D7A90;

void dispatch_received_packet__6TLobbyFPvi(u8 *arg0, s32 arg1);

struct Buf_803FC684 { char a[0x80]; char b[0x80]; u8 rest[0x50]; };
extern Buf_803FC684 lbl_805C0180;
s32 TLobby__sub_803FC684(u8 *arg0, u8 *arg1, u8 *arg2);

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);

void TLobby__sub_803F7980(void *);
void TLobby__sub_803FD0C0(void);

typedef void (*Fn_803FD10C)(void);
void init_buffer_desc_b__6TLobbyFPv(void *);
void TLobby__sub_803FD21C(void);
void TLobby__sub_803FD310(void);
void TLobby__sub_803FD404(void);
void TLobby__sub_803FD5A4(void);
void TLobby__sub_803FD60C(void);
s32 clear_socket_slot__6TLobbyFs(s16 i);

s16 TLobby__sub_803FD10C(void);

s32 TLobby__sub_803FD490(s16 arg0);

s32 TLobby__sub_803FD4B4(s16 arg0);

s32 TLobby__sub_803FD4D8(s16 arg0);

s32 TLobby__sub_803FD4FC(s16 arg0);

typedef char RecoveredGlobal_803FD520_lbl_805C0310_size[sizeof(RecoveredGlobal_803FD520_lbl_805C0310) == 0x18 ? 1 : -1];
s16 get_checked_status_value__6TLobbyFs(s16 arg0);

struct E_803FD560 { s16 a; s16 b; };
struct G_803FD560 { s16 id; E_803FD560 e[2]; };
s32 clear_socket_slot__6TLobbyFs(s16 i);

struct N_80405298;
void TLobby__sub_80405298(N_80405298 *o, s32 v);
void update_countdown_state__6TLobbyFPv(void *);

void TLobby__sub_803FD694(u8 *arg0);

#define self ((Self_803FD85C *)arg0)
void TLobby__sub_803FD85C(void *arg0);
#undef self

void TLobby__sub_803FD958(u8 *arg0);

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

void update_countdown_state__6TLobbyFPv(void *arg0);

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
void TLobby__sub_803FE600(O_803FE600 *o);

s32 TLobby__sub_803FE658(u8 *arg0);

void TLobby__sub_803FE820(s32 arg0);

s32 TLobby__sub_803FE844(void);

void TLobby__sub_803FE84C(void);

s16 TLobby__sub_80401BCC(void *, void *, int);
s32 read_2_bytes__6TLobbyFPvPv(u8 *dst, void *src);

s16 TLobby__sub_80401BCC(void *, void *, int);
s32 TLobby__sub_803FE8BC(u8 *dst, void *src);

s32 set_socket_flags_by_mode__6TLobbyFsPv(s16 arg0, u8 *arg1);

s32 set_target_index__6TLobbyFPvi(u8 *arg0, s32 arg1);

s32 set_filter_index__6TLobbyFPvi(u8 *arg0, s32 arg1);

s32 set_filter_id__6TLobbyFPvi(u8 *arg0, s32 arg1);

s32 set_target_slot__6TLobbyFPvi(u8 *arg0, s32 arg1);

s32 set_target_id__6TLobbyFPvi(u8 *arg0, s32 arg1);

s32 TLobby__sub_803FF2CC(u8 *arg0, s32 arg1);

s16 TLobby__sub_803FF304(u8 *arg0);

void free_field_98__6TLobbyFPv(u8 *arg0);

void TLobby__sub_803FF374(u8 *arg0);

void TLobby__sub_803FF384(u8 *arg0);

void free_field_98_and_clear__6TLobbyFPv(u8 *arg0);

void TLobby__sub_803FF468(s32 arg0);

struct Blk_803FF48C { s32 w[9]; };
union U_803FF48C { s16 h4; Blk_803FF48C src; };
struct Q_803FF48C {
    s16 h0; s16 h2;
    U_803FF48C u;
    Blk_803FF48C dst;
    s16 h4C; s16 h4E; s16 h50; s16 h52;
    s32 w54;
    u8 pad58[0x74 - 0x58];
    s16 h74;
};
struct P_803FF48C { u8 pad[0x30]; Q_803FF48C *q; };
void TLobby__sub_803FF48C(P_803FF48C *o);

struct Opt_80400338 { u8 pad0[4]; u32 f4; u32 f8; s16 fC; s16 fE; u8 f10; u8 pad11[3]; u32 f14; u32 f18; };
extern u8 lcp_read_byte_buffer;
void TLobby__sub_80400338(B_803FADA0 **pbuf, Opt_80400338 *opt, s32 type, s32 len, void *src);

s32 wait_for_connection__6TLobbyFPv(Conn_804004DC *c);

void TLobby__sub_80400988(void);

void TLobby__sub_8040098C(Self_8040098C *self);

struct O_80400ACC { u8 b0; u8 b1; u8 b2; u8 pad3[0x108 - 3]; s32 f108; };
void TLobby__sub_80400ACC(O_80400ACC *o);

void reset_connection_slot__6TLobbyFPv(u8 *arg0);

void queue_command_81__6TLobbyFv(void);

void TLobby__sub_80400B98(u8 *arg0);

typedef char RecoveredGlobal_80401A68_lbl_805C04A8_size[sizeof(RecoveredGlobal_80401A68_lbl_805C04A8) == 0x30 ? 1 : -1];

void save_timer_state__6TLobbyFPv(u8 *arg0);

#define rd16_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lcp_read_value_buffer, 2) != 2 ? -1 : read_network_u16_be(lcp_read_value_buffer))
#define rd32_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lcp_read_value_buffer, 4) != 4 ? 0 : TLobby__sub_80402AFC(lcp_read_value_buffer))
#define rd8_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lobby_read_byte_buffer, 1) != 1 ? -1 : (s16)lobby_read_byte_buffer[0])
#define F(t, o) M2C_FIELD(arg2, t *, o)
s16 parse_lcp_option__6TLobbyFiPvPvPvs(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, s16 arg4);

s32 configure_mode_by_type__6TLobbyFPvs(Cfg_804019A8 *c, s16 type);

void init_net_state_c__6TLobbyFv(void);

typedef char RecoveredGlobal_80401A90_lbl_805C04A8_size[sizeof(RecoveredGlobal_80401A90_lbl_805C04A8) == 0x30 ? 1 : -1];
s32 init_net_subsystem_block__6TLobbyFv(void);

struct Ent_80401B20 { u8 *p0; u16 h4; };
struct G_80401B20 { s32 f0; s32 f4; s32 f8; Ent_80401B20 *pC; };
#pragma opt_propagation off
Ent_80401B20 *TLobby__sub_80401B20(void *src, u16 n);
#pragma opt_propagation reset

u8 *alloc_from_buffer__6TLobbyFPvs(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1);

void TLobby__sub_80401CAC(Outer_80401CAC *o, u16 v);

u16 get_field_4__6TLobbyFPv(u8 *arg0);

void init_md5_state__6TLobbyFPv(u8 *arg0);

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
#define FF_80401FE8(a, b, c, d, x, s, ac) { (a) += F_80401FE8((b), (c), (d)) + (x) + (u32)(ac); (a) = ROTATE_LEFT_80401FE8((a), (s)); (a) += (b); }
#define GG_80401FE8(a, b, c, d, x, s, ac) { (a) += G_80401FE8((b), (c), (d)) + (x) + (u32)(ac); (a) = ROTATE_LEFT_80401FE8((a), (s)); (a) += (b); }
#define HH_80401FE8(a, b, c, d, x, s, ac) { (a) += H_80401FE8((b), (c), (d)) + (x) + (u32)(ac); (a) = ROTATE_LEFT_80401FE8((a), (s)); (a) += (b); }
#define II_80401FE8(a, b, c, d, x, s, ac) { (a) += I_80401FE8((b), (c), (d)) + (x) + (u32)(ac); (a) = ROTATE_LEFT_80401FE8((a), (s)); (a) += (b); }
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
inline void Decode_80401FE8(u32 *output, u8 *input, u32 len);
void MD5Transform(u32 *state, u8 *block);
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

u16 read_network_u16_be(u8 *p);

u32 TLobby__sub_80402AFC(u8 *p);

u8 *write_network_u16_be(u8 *p, u16 v);

u8 *write_network_u32_be(u8 *p, u32 v);

void init_net_block_620__6TLobbyFv(void);

typedef char RecoveredGlobal_80402B88_lbl_805C0620_size[sizeof(RecoveredGlobal_80402B88_lbl_805C0620) == 0x18 ? 1 : -1];
s32 init_net_block_620_secondary__6TLobbyFv(void);

s32 mark_ready__6TLobbyFPv(u8 *arg0);

void set_active__6TLobbyFPv(u8 *arg0);

typedef char RecoveredGlobal_804050DC_lbl_805C18A0_size[sizeof(RecoveredGlobal_804050DC_lbl_805C18A0) == 0x10 ? 1 : -1];

s32 TLobby__sub_80403168(u8 *arg0, u8 *arg1, u8 *arg2);

void reset_connection_state__6TLobbyFPv(u8 *arg0);

void handle_request_timeout__6TLobbyFPv(u8 *arg0);

s32 TLobby__sub_804036FC(u8 *arg0);

typedef char RecoveredGlobal_80403D28_lbl_805C0638_size[sizeof(RecoveredGlobal_80403D28_lbl_805C0638) == 0xA0 ? 1 : -1];

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_804037B0(s32 arg0, u16 arg1);
#pragma pop

extern u8 lbl_805C0038[];
void TLobby__sub_804061FC(int);
s32 TLobby__sub_804037F0(void);

s16 TLobby__sub_803FED78(u8 *);

s32 TLobby__sub_80403864(void);

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
extern u8 lbl_805C0038[];

s32 TLobby__sub_804038F4(s32 arg0, s32 arg1, s32 arg2);

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
extern u8 lbl_805C0038[];

s32 TLobby__sub_804039C8(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

s32 TLobby__sub_80403B04(u8 *arg0, u8 *arg1, s32 arg2);

s32 TLobby__sub_80403BA8(u8 *arg0, u8 *arg1, s32 arg2);

M2C_UNK TLobby__sub_803F808C();
s16 TLobby__sub_80400744(int, void *);
extern s32 lbl_805D7A90;

s32 TLobby__sub_80403C60(u8 *arg0);

s32 TLobby__sub_80403D28(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

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

void TLobby__sub_803FEA88(A_80403F4C *);
void TLobby__sub_804053B8(B_80403F4C *, u8 **);
u8 *TLobby__sub_8040555C(B_80403F4C *, u8 *, s32);
u8 *GXLoadTexObjPreLoaded(A_80403F4C *, u8 *, s32);
#define o ((Obj_80403F4C *)ov)
#define pp ((u8 **)spp)
s16 TLobby__sub_80403F4C(void *ov, Strm_80405A74 **spp);
#undef o
#undef pp

void TLobby__sub_80405000(u32 arg0);

void TLobby__sub_804050DC(s16 arg0);

typedef char RecoveredGlobal_804050EC_lbl_805C18A0_size[sizeof(RecoveredGlobal_804050EC_lbl_805C18A0) == 0x10 ? 1 : -1];
void init_net_block_18A0__6TLobbyFv(void);

typedef char RecoveredGlobal_80405114_lbl_805C18A0_size[sizeof(RecoveredGlobal_80405114_lbl_805C18A0) == 0x10 ? 1 : -1];
s32 run_net_init_step__6TLobbyFv(void);

s16 reset_network_timer_list(void);

struct G_80405150 { s32 p0; s32 p4; s16 h8; };
extern s16 lbl_805D7A84;
extern s16 lbl_805D7A86;
extern s16 lbl_805D7A88;
void TLobby__sub_803FB6A0(void);
void TLobby__sub_803FB7A4(void);
void TLobby__sub_803F97E8(int);
void process_expired_timers__6TLobbyFv(void);
void run_net_thread_loop__6TLobbyFv(void);

typedef struct Timer_804051CC {
    struct Timer_804051CC *next;
    u8 pad4[4];
    u32 f8;
    s32 fC;
    void (*f10)(s32);
    s32 f14;
    u8 f18;
} Timer_804051CC;

void get_time_ms__6TLobbyFPv(s32 *out);
void unlock_mutex__10TUdpSocketFi(int);
void lock_mutex__6TLobbyFi(int);
M2C_UNK TLobby__sub_80405700();
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
extern s32 lobby_timer_list_head;

void process_expired_timers__6TLobbyFv(void);

struct N_80405298 { N_80405298 *next; s32 f4; u8 pad8[0x18 - 8]; u8 b18; };
#define HEAD_80405298 (*(N_80405298 **)&lobby_timer_list_head)
void TLobby__sub_80405298(N_80405298 *o, s32 v);

s32 TLobby__sub_80405304(void *arg0);

void TLobby__sub_80405328(u8 *arg0);

typedef struct Lobby_804062A0 {
    u8 state;
    u8 pad[3];
    u8 sub[0x140];
} Lobby_804062A0;

struct RecoveredFields_80401B8C_arg0;
struct Self_8040098C;
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 valid_80405A74(Strm_80405A74 **s);
inline s32 avail_80405A74(Strm_80405A74 **s);
inline s32 get_80405A74(Strm_80405A74 **s);
#define FWD_80405A74()                                                       \
    M2C_FIELD(G, s16 *, 0x13A)++;                                            \
    t = (Strm_80405A74 *)alloc_from_buffer__6TLobbyFPvs((RecoveredFields_80401B8C_arg0 *)arg0, 4); \
    p = t->p;                                                                \
    *p++ = 0xFF;                                                             \
    *p++ = 3;                                                                \
    write_network_u16_be(p, code);                                           \
    u = t;                                                                   \
    if (u == NULL) {                                                         \
        M2C_FIELD(G, s16 *, 0x142)++;                                        \
        return;                                                              \
    }                                                                        \
    if (TLobby__sub_80401BCC(&u, &lobby_ppp_read_buf, 2) == 2) {                   \
        read_network_u16_be(&lobby_ppp_read_buf);                                 \
    }                                                                        \
    TLobby__sub_803FE6CC(G + 4, 8, 0, u);                                    \
    return;
void ppp_input_packet__6TLobbyFPv(Strm_80405A74 *arg0);

s32 TLobby__sub_804062A0(s16 arg0);

s32 shutdown_network_handle__6TLobbyFv(void);

void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1);

void init_packet_header__6TLobbyFPvi(u8 *arg0, s32 arg1);

void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);

struct O_80406B6C { u32 w0; u8 b4; };
s32 TLobby__sub_80406B6C(O_80406B6C *o);

struct Ent_804072C4 { s16 st; u8 pad[0x9c - 2]; };
struct Tbl_804072C4 { s16 count; Ent_804072C4 *list; };
void release_entry__10TUdpSocketFPv(void *e_);

struct Ent_80407310 { s16 st; u8 pad[0x9c - 2]; };
struct Tbl_80407310 { s16 count; Ent_80407310 *list; };
u8 *alloc_free_entry__6TLobbyFv();

void NetUnregisterTimer(void *);
void TLobby__sub_804078B4(void);
s32 TLobby__sub_80407358(void);

void TLobby__sub_804073B8(void);

s32 dispatch_slot_a__6TLobbyFsi(s16 arg0, s32 arg1);

s32 dispatch_slot_b__6TLobbyFsi(s16 arg0, s32 arg1);

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
void call_entry_callback__6TLobbyFsi(s16, s16);

s32 TLobby__sub_80407418(s16 id);

void forward_net_op__6TLobbyFsPvPv(s16 arg0, u8 *arg1, u8 *arg2);

void forward_net_op_5args__6TLobbyFsssssici(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s8 arg6, s32 arg7);

struct Conn_8040799C { s32 a; s16 f4; s16 f6; };
struct Peer_8040799C { s16 st; s16 f2; u8 pad4; u8 f5; u8 pad6[2]; Conn_8040799C *conn; u8 addr[6]; u8 name[6]; };
struct Ent_8040799C { s16 f0; s16 f2; s16 f4; s16 f6; u8 pad8[6]; u8 fE; u8 fF; u8 pad10[2]; u8 a12[6]; u8 a18[8]; };
struct Tbl_8040799C { s16 count; s16 h2; s16 h4; s16 h6; s16 h8; s16 hA; s16 hC; u8 padE[2]; Peer_8040799C *list; Ent_8040799C *ents; };
struct Out_8040799C { Conn_8040799C *a; void *b; void *c; void *d; void *e; };
void TLobby__sub_80408060(void *, void *);
void *alloc_packet_with_header__6TLobbyFPvPv(Out_8040799C *, void *);
struct Ent_80408428;
struct Ent_80408428 *find_or_add_peer_entry__6TLobbyFsiUcPvUcPvs(s16, s32, u8, void *, u8, void *, s16);

#define TBL ((Tbl_8040799C *)&lbl_805C1AB0)

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_8040799C *Lookup_8040799C(Tbl_8040799C *t, s16 idx);

inline Peer_8040799C *Find_8040799C(Tbl_8040799C *t, u8 k, void *name);

inline void Clear_8040799C(Peer_8040799C *p);

inline void Send_8040799C(Ent_8040799C *e, void *name);

s32 TLobby__sub_8040799C(s16 arg0, void *arg1, void *arg2);
#pragma pop
#undef TBL

typedef struct Node_804082AC { struct Node_804082AC *next; u8 pad4[2]; u8 f6[0x10]; } Node_804082AC;
typedef struct Ent_804082AC { u8 pad0[0xE]; u8 fE; u8 fF; u8 pad10[2]; u8 f12[6]; u8 f18[4]; Node_804082AC *f1C; } Ent_804082AC;
typedef struct Key_804082AC { u8 pad0[0x10]; void *f10; } Key_804082AC;
typedef struct Pool_804082AC { u8 pad0[8]; s16 f8; } Pool_804082AC;
s32 NetMemcmp(void * _w0, void * _w1, int _w2);
void NetMemcpy(void * _w0, void * _w1, int _w2);

s32 TLobby__sub_804082AC(Ent_804082AC *arg0, Key_804082AC *arg1, void *arg2);

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

s32 TLobby__sub_80408388(s16 id);

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

inline Ent_80408428 *find_80408428(Tbl_80408428 *t, u8 type, void *addr);

inline void detach_80408428(Ent_80408428 *e);

Ent_80408428 *find_or_add_peer_entry__6TLobbyFsiUcPvUcPvs(s16 arg0, s32 arg1, u8 type, void *addr, u8 type2, void *addr2, s16 state);

#pragma pop
struct Ent_804086B4 { s16 f0; s16 f2; u8 pad[0x14]; };
struct Tbl_804086B4 { s16 count; u8 pad[0xE]; Ent_804086B4 *list; };
Ent_804086B4 *find_oldest_peer_entry__6TLobbyFs(s16 key);

Ent_80408718 *find_free_peer_entry__6TLobbyFv(void);

void flush_flags_step__6TLobbyFv(void);

void run_connect_step__6TLobbyFv(void);

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
M2C_UNK TLobby__sub_80409908(void *, void *);
M2C_UNK clear_message_entry__6TLobbyFi(void *);
u8 *TLobby__sub_8042558C(s32);
struct Tbl_80408F2C;
extern Tbl_80408F2C lbl_805C1AD8;

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Conn_80408C24 *find_conn_80408C24(Glob_80408C24 *g, s16 id);

s32 send_ethernet_frame__6TLobbyFssPvPv(s16 idx, s16 mode, u8 *addr, void *pkt);
#pragma pop

typedef char RecoveredGlobal_80409A3C_lbl_805C1C50_size[sizeof(RecoveredGlobal_80409A3C_lbl_805C1C50) == 0xF8 ? 1 : -1];

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

extern Tbl_80408F2C lbl_805C1AD8;

s32 TLobby__sub_80408F2C(s16 id, u8 *pkt);

typedef struct Sock_80409130 { s16 f0; u8 pad2[4]; u16 f6; s16 f8; u8 padA[6]; } Sock_80409130;

s32 TLobby__sub_80409130(s16 arg0, s16 arg1, s32 arg2);

#define TBL_804099B4 (*(Tbl_804099B4 *)&lobby_handler_table_desc)
s32 clear_table_entry_locked__6TLobbyFs(s16 arg0);

s16 TLobby__sub_80409A3C(u8 *arg0, s16 arg1);

s32 TLobby__sub_80409AA8(void);

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
s32 call_handler_by_index__6TLobbyFsiiii(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

#define TBL_80409BD4 (*(Tbl_80409BD4 *)&lobby_handler_table_desc)
s32 dispatch_handler_by_index__6TLobbyFsiii(s16 arg0, s32 arg1, s32 arg2, s32 arg3);

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

s32 dispatch_handler_by_id__6TLobbyFsii(s16 arg0, s32 arg1, s32 arg2);

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

s32 TLobby__sub_80409CE0(s16 arg0, s32 arg1, s32 arg2, s32 arg3);

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

s32 TLobby__sub_80409D7C(s16 arg0, s32 arg1, s32 arg2, s32 arg3);

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

s32 TLobby__sub_80409E18(s16 arg0, s32 arg1, s32 arg2);

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

s32 TLobby__sub_80409EB0(s16 arg0, s32 arg1);

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
s32 TLobby__sub_80421844(void *);
void tick_connection_timeouts__6TLobbyFv(void);

s32 TLobby__sub_8040A3C0(void);

void init_net_config__6TLobbyFPv(void *);
void TLobby__sub_804218AC(void (*)(void), int);

void init_net_tables__6TLobbyFv(void);

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

void TLobby__sub_804217E4(void);
void TLobby__sub_80421814(void);

s32 clear_all_used_records__6TLobbyFv(void);

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
void reset_connection_requests__6TLobbyFPvs(Conn_8040AF48 *, s32);

void tick_connection_timeouts__6TLobbyFv(void);

Rec_8040B33C *find_next_active_record__6TLobbyFPv(A_8040B33C *a);

#pragma push
#pragma opt_propagation off
s32 build_dns_query_aaaa__6TLobbyFPvPvs(Q_8040B6E4 *q, u8 *name, s16 len);
#pragma pop

#pragma push
#pragma opt_propagation off
s32 build_dns_query_a__6TLobbyFPvPvs(Q_8040B790 *q, u8 *name, s16 len);
#pragma pop

struct N_8040C4B0 { u8 pad0[0x20]; N_8040C4B0 *next; };
struct O_8040C4B0 { u8 pad0[0x204]; s16 count; u8 pad206[2]; N_8040C4B0 *head; };
struct G_8040C4B0 { u8 pad0[0x2C]; s16 lim; };

#pragma dont_inline off
#pragma inline_depth(4)
inline s32 close_8040BF38(u8 *p, s32 id);
s32 close_and_reset_connection__6TLobbyFPv(u8 *arg0);

s32 append_to_list__6TLobbyFPvPv(O_8040C4B0 *o, N_8040C4B0 *n);

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

void dispatch_request_callback__6TLobbyFPvs(Conn_8040C540 *arg0, s16 arg1);

s32 TLobby__sub_8040C9E0(u8 *arg0, u8 *arg1);

s32 TLobby__sub_8040E780(s32, s32, s32, s32, s32, s32, void *);
s32 TLobby__sub_80410A98(s32, void *, void *, void *, void *);

s32 dispatch_by_addr_family__6TLobbyFiPvPvPvPvPv(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, void *arg4, void *arg5);

u16 TLobby__sub_8040D8F0(u8 *arg0, u8 *arg1, s8 arg2, u8 *arg3, s16 arg4);

struct Ent_8040D95C { u8 pad0[2]; s16 f2; u8 pad4[2]; s16 f6; u8 pad8[4]; s32 fC; };
struct In_8040D95C { s32 type; s32 f4; };
struct Out_8040D95C { s32 type; u32 f4; };
s32 TLobby__sub_8040EF50(void *, s32, s32);
s32 TLobby__sub_80411F1C(void *, void *, s32);
s32 select_source_address__6TLobbyFPvPv(Out_8040D95C *arg0, In_8040D95C *arg1);

s32 TLobby__sub_8040DA54(u8 *arg0, u8 *arg1);

s16 TLobby__sub_8040DABC(u8 *arg0);

s32 is_multicast_address__6TLobbyFPvs(u8 *arg0, s16 arg1);

s32 is_addr_unspecified__6TLobbyFPv(u8 *arg0);

s32 compare_sockaddr__6TLobbyFPvPv(u8 *arg0, u8 *arg1);

typedef char RecoveredGlobal_8040EF00_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040EF00_lbl_805C1B60) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8040DD68_lbl_805C1B38_size[sizeof(RecoveredGlobal_8040DD68_lbl_805C1B38) == 0x28 ? 1 : -1];

s16 TLobby__sub_8040DC8C(u8 *arg0, u8 *arg1);

s32 TLobby__sub_8040DD68(void);

typedef void (*Handler_8041A130)(s32, s16, s16, s16);
s32 register_protocol_handler__6TLobbyFUsi(u16 type, Handler_8041A130 fn);
void TUdpSocket__sub_8040DE4C(void);
s32 init_ipv4_interfaces__6TLobbyFv(void);

typedef char RecoveredGlobal_8040ED28_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040ED28_lbl_805C1B60) == 0x18 ? 1 : -1];

struct PH_8040EC38 { s32 src; s32 dst; u8 zero; s8 proto; u16 len; };
struct P_8040EC38 { u8 pad0[8]; s32 f8; s16 fC; };

u16 TUdpSocket__sub_80419864(void *, s32);

u16 calc_pseudo_header_checksum__6TLobbyFiicPvs(s32 src, s32 dst, s8 proto, void *pkt, s16 flag);

u16 calc_ip_checksum__6TLobbyFPvs(void *a, s16 b);

s32 TLobby__sub_8040ED28(void);

typedef char RecoveredGlobal_8040ED70_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040ED70_lbl_805C1B60) == 0x18 ? 1 : -1];
s32 TLobby__sub_8040ED70(void);

#pragma push
#pragma opt_common_subs on
s16 TLobby__sub_8040EF00(s16 arg0);
#pragma pop

s32 is_lookup_found__6TLobbyFUiUi(u32 arg0, u32 arg1);

struct A_RT { u8 pad0[4]; u32 addr; u8 pad8[8]; u32 mask; A_RT *next; };
struct E_RT { s16 state; u8 pad2[6]; u32 addr; u8 padC[8]; u32 mask; A_RT *alias; };
struct G_RT { s16 f0; s16 count; s16 maxalias; u8 pad6[6]; E_RT *ents; };

s16 TLobby__sub_8040FCEC(u32 ip);

s32 NetIPv4IsLoopback(s32 arg0);

struct Ent_8040FDA0 { s16 state; u8 pad2[6]; u32 f8; u32 fC; u8 pad10[0xC]; };
struct G_8040FDA0 { s16 f0; s16 count; u8 pad4[8]; Ent_8040FDA0 *ents; };

s32 TLobby__sub_8040FDA0(u32 arg0, s16 arg1);

s32 NetIPv4IsUnspecified(u32 arg0);

typedef char RecoveredGlobal_8040FE40_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040FE40_lbl_805C1B60) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8040FE9C_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040FE9C_lbl_805C1B60) == 0x18 ? 1 : -1];

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_8040FE40(s16 arg0);
#pragma pop

#pragma push
#pragma opt_common_subs on
s16 *get_active_entry_by_index__6TLobbyFs(s16 arg0);
#pragma pop

s32 TLobby__sub_8040FEE4(s32 arg0, s32 arg1);

typedef char RecoveredGlobal_8041123C_lbl_805C1BB8_size[sizeof(RecoveredGlobal_8041123C_lbl_805C1BB8) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_804112B8_lbl_805C1BB8_size[sizeof(RecoveredGlobal_804112B8_lbl_805C1BB8) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_80411ECC_lbl_805C1BB8_size[sizeof(RecoveredGlobal_80411ECC_lbl_805C1BB8) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_8040FF0C_lbl_805C1B78_size[sizeof(RecoveredGlobal_8040FF0C_lbl_805C1B78) == 0x40 ? 1 : -1];
s32 NetIPv6Shutdown(void);

void TLobby__sub_8040FFF8(void);
s32 NetIPv6Init(void);

#pragma push
#pragma opt_common_subs on
void NetUnregisterTimer(void *);
void TLobby__sub_80411334(void);
void tick_entry_timers__6TLobbyFv(void);
s32 TLobby__sub_8041112C(void);

struct G_8041118C {
    s16 n0; s16 n1; s16 n2; u8 pad6[0xE]; s16 n14; u8 pad16[2];
    void *p18; void *p1C; void *p20; void *p24;
};

void NetRegisterTimer(int, int, void (*)(void));

#define g ((G_8041118C *)&ipv6_address_routing_state)
s32 TUdpSocket__sub_8041118C(void);
#undef g

s32 TLobby__sub_8041123C(s32 arg0, s32 arg1, s16 arg2);
#pragma pop

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_804112B8(s32 arg0, s32 arg1, s16 arg2);
#pragma pop

#pragma push
#pragma opt_common_subs on
struct Ent_80411BE8 { s16 f0; u8 pad[0x12]; s16 f14; };
struct G_80411BE8 { u8 pad[0x14]; s16 n; u8 pad2[0xE]; Ent_80411BE8 *p; };

void tick_entry_timers__6TLobbyFv(void);

s16 get_entry_field_26__6TLobbyFs(s16 arg0);
#pragma pop

s32 TLobby__sub_80413230(u8 *arg0, s32 arg1);

void TLobby__sub_804136AC(s16 arg0);

void TLobby__sub_804136CC(s16 arg0);

typedef char RecoveredGlobal_8041471C_lbl_805C1BB8_size[sizeof(RecoveredGlobal_8041471C_lbl_805C1BB8) == 0x28 ? 1 : -1];

struct RecoveredFields_804143BC_arg0 {
    u8 field_0;
    u8 field_1;
};
typedef char RecoveredFields_804143BC_arg0_0_offset[offsetof(RecoveredFields_804143BC_arg0, field_0) == 0x0 ? 1 : -1];
typedef char RecoveredFields_804143BC_arg0_1_offset[offsetof(RecoveredFields_804143BC_arg0, field_1) == 0x1 ? 1 : -1];
#pragma push
#pragma scheduling off
s32 NetIPv6GetAddressScopeClass(u8 *arg0);
#pragma pop

#pragma push
#pragma opt_common_subs on
s16 *get_valid_entry__6TLobbyFs(s16 arg0);
#pragma pop

s32 NetIPv6IsLinkLocal(u8 *arg0);

s16 NetIPv6IsLoopback(u8 *arg0);

s32 NetIPv6IsMulticast(u8 *arg0);

s32 NetIPv6IsUnspecified(u8 *arg0);

s32 NetIPv6CompareAddresses(s32 arg0, s32 arg1);

void TLobby__sub_804150EC(void);

s32 TLobby__sub_8041549C(s16 arg0);

s32 TLobby__sub_804154C0(s16 arg0);

s32 TLobby__sub_804154E4(s16 arg0);

s32 TLobby__sub_80415508(s16 arg0);

typedef char RecoveredGlobal_8041552C_lbl_805C1BE0_size[sizeof(RecoveredGlobal_8041552C_lbl_805C1BE0) == 0x18 ? 1 : -1];
s16 get_slot_offset_or_default__6TLobbyFs(s16 arg0);

struct E_80415558 { s16 a; s16 b; };
struct G_80415558 { s16 h; E_80415558 e[2]; };
s32 clear_conn_slot__6TLobbyFs(s16 i);

struct E_8041559C { s16 a; s16 b; };
struct G_8041559C { s16 h; E_8041559C e[2]; };
s16 alloc_conn_slot__6TLobbyFss(s16 h, s16 v);

s32 fill_reply_buffer__6TLobbyFsPv(s16 h, u8 *p);

typedef char RecoveredGlobal_80415650_lbl_805C1BF8_size[sizeof(RecoveredGlobal_80415650_lbl_805C1BF8) == 0x10 ? 1 : -1];
s32 reset_net_value__6TLobbyFv(void);

struct G_80415AEC { s16 a; s16 b; s16 c; };
void NetUnregisterTimer(void *);
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
void NetIPv6ShutdownNeighborDiscovery(void);

struct Arg2_80415B38 { u8 *addr; u8 *val; };
typedef struct Ent_80418670 { u8 pad0[3]; u8 f3; u8 pad4[2]; s16 f6; u8 pad8[0xC]; u8 f14[0x10]; } Ent_80418670;
M2C_UNK TLobby__sub_80411604(int, int, void *);
Ent_80418670 *NetIPv6SelectDefaultRouter(void *arg0);
void NetRegisterTimer(int, int, void (*)(void));
void NetIPv6TickNeighborDiscovery(void);

s32 NetIPv6InitNeighborDiscovery(void);

void NetIPv6TickNeighborDiscovery(void);

s32 NetIPv6SendUnspecifiedSourceNeighborSolicitation(s32 arg0, s32 arg1);

u8 *alloc_free_entry__6TLobbyFv();
s16 TLobby__sub_804145D4(void *, void *);
M2C_UNK init_ipv6_all_routers_multicast_address(void *, int);
s32 NetIPv6EmitRouterSolicitation(int, void *, void *);

s32 NetIPv6SendRouterSolicitation(s32 arg0);

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
M2C_UNK TLobby__sub_80411604(int, int, void *);
s32 NetIPv6SendMulticastNeighborProbe(u8 *arg0);
s32 NetIPv6SendUnicastNeighborProbe(u8 *arg0);
Ent_80418670 *NetIPv6SelectDefaultRouter(void *arg0);

void NetIPv6TickNeighborCache(void);

typedef struct Ent_80416678 { u8 pad0[0xC]; u8 fC; } Ent_80416678;
s32 NetIPv6ParseRedirectOptions(u8 *arg0, s32 n, u8 *arg2, s32 arg3, s16 *arg4, s16 arg5);

void TLobby__sub_80406EB8(void *);
u8 *TLobby__sub_80406F0C(void *);

s32 NetIPv6FindTargetLinkLayerAddressOption(u8 *o, s32 len, u8 **out, s16 *outlen);

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

M2C_UNK TLobby__sub_80411604(int, int, void *);
s32 NetMemcmp(void *, void *, int);
u8 *alloc_free_entry__6TLobbyFv();
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);
void NetMemcpy(void *, void *, int);
void release_entry__10TUdpSocketFPv(void *);
s16 TLobby__sub_80413C0C(void *, s32);
s16 TLobby__sub_80413AA0(void *, s32);
s32 TLobby__sub_80410BA8(void *, void *, s32, void *);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_80416994 *FindEnt_80416994(Glob_80416994 *g, void *name);

inline void ClearPeer_80416994(Peer_80416994 *p);

inline Peer_80416994 *ScanPeers_80416994(Glob_80416994 *g, void *name);

s32 NetIPv6ApplyNeighborAdvertisement(Msg_80416994 *msg, u8 *name, s16 len, s32 arg3, s32 arg4, s32 id);
#pragma pop

void TLobby__sub_80406FD8(void *, void *, s32);
s16 TLobby__sub_80417294(void *, u32, u8 *, void *);
s16 TLobby__sub_80417494(void *, u8 *, void *);
s16 NetIPv6HandleRouterAdvertisement(u8 *arg0, u8 *arg1, s32 arg2, void *arg3);

typedef struct Hdr_804177A0 {
    s16 len;
    u8 pad[2];
    u8 data[8];
} Hdr_804177A0;
void TLobby__sub_80406FD8(void *, void *, s32);
s16 TLobby__sub_80417868(void *, u32, s32, s32);
s16 NetIPv6HandleRouterSolicitation(u8 *o, s32 arg1, s32 arg2, s32 arg3);

typedef struct Arg_80417D1C { u8 *p; s32 v; } Arg_80417D1C;
void NetMemcpy(void * _w0, void * _w1, int _w2);
void release_entry__10TUdpSocketFPv(void *e_);
u8 *alloc_free_entry__6TLobbyFv();
M2C_UNK TLobby__sub_80411604(int, int, void *);
s16 TLobby__sub_804137FC(void *, int);
s32 NetIPv6EmitNeighborSolicitation(int, void *, void *, void *, int);
M2C_UNK NetIPv6MakeSolicitedNodeMulticastAddress(void *, void *);
Ent_80418670 *NetIPv6SelectDefaultRouter(void *arg0);

s32 NetIPv6SendMulticastNeighborProbe(u8 *arg0);

typedef struct Arg_80417E60 { u8 *p; s32 v; } Arg_80417E60;
void NetMemcpy(void * _w0, void * _w1, int _w2);
void release_entry__10TUdpSocketFPv(void *e_);
u8 *alloc_free_entry__6TLobbyFv();
M2C_UNK TLobby__sub_80411604(int, int, void *);
s16 TLobby__sub_804137FC(void *, int);
s32 NetIPv6EmitNeighborSolicitation(int, void *, void *, void *, int);
Ent_80418670 *NetIPv6SelectDefaultRouter(void *arg0);

s32 NetIPv6SendUnicastNeighborProbe(u8 *arg0);

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

E_804184DC *NetIPv6FindOrSelectNeighborCacheEntry(u8 *addr, u8 *key, s16 klen);

typedef struct G_80418670 { u8 pad0[4]; s16 f4; u8 pad6[0xA]; Ent_80418670 *f10; } G_80418670;
s32 NetMemcmp(void *, void *, int);

Ent_80418670 *NetIPv6SelectDefaultRouter(void *arg0);

struct Ent_804188E4 { u8 pad0[3]; u8 f3; s16 f4; u8 pad6[0x32]; };
struct Rec_804188E4 { u8 pad0[3]; u8 f3; u8 pad4[0xC]; Ent_804188E4 *f10; u8 pad14[0x34]; };
struct G_804188E4 { s16 n0; s16 n2; u8 pad4[4]; Ent_804188E4 *e8; Rec_804188E4 *rC; u8 pad10[0x14]; s16 f24; };
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Rec_804188E4 *find_804188E4(G_804188E4 *g, Ent_804188E4 *e);

Ent_804188E4 *NetIPv6SelectPendingPacketSlot(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, Ent_804188E4 *best);

#pragma pop

void NetIPv6ApplyNeighborDiscoveryDefaults(u8 *arg0);

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
void NetUnregisterTimer(void *);
void update_timeout_entries__6TLobbyFv(void);
extern G_80418ACC packet_fragment_pool_state;
s32 TLobby__sub_80418A7C(void);

s32 init_packet_fragment_pools__6TLobbyFv(void);

struct E_80418BD8 { u8 pad[0xC]; };
struct A_80418BD8 { u8 pad[4]; u32 n; u8 pad2[8]; E_80418BD8 e[1]; };
s32 TUdpSocket__sub_80418BD8(A_80418BD8 *a);

struct N_804196EC { u8 pad0[4]; s16 f4; u8 pad6[2]; O_80406B6C o; u8 pad10[4]; N_804196EC *next; };
struct E_804196EC { u8 pad0[4]; s16 f4; u8 pad6[0x1E]; s16 f24; u8 pad26[2]; s32 f28; N_804196EC *list; u8 pad30[4]; };
struct G_804196EC { s16 count; u8 pad2[6]; E_804196EC *ents; u8 padC[4]; E_804196EC *p10; E_804196EC *p14; };

s32 TLobby__sub_80406B6C(O_80406B6C *o);

s32 reset_other_connection_lists__6TLobbyFPv(E_804196EC *self);

typedef char RecoveredGlobal_80419A00_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A00_lbl_805C1C50) == 0xF8 ? 1 : -1];
void TLobby__sub_80419A00(void);

typedef char RecoveredGlobal_80419A34_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A34_lbl_805C1C50) == 0xF8 ? 1 : -1];
void TLobby__sub_80419A34(void);

#pragma push
#pragma opt_common_subs on
typedef char RecoveredGlobal_80419A7C_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A7C_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80419A7C(void);
#pragma pop

void clear_position__6TLobbyFPv(u8 *arg0);

struct E_8041A0C0 { u8 pad[0x14]; s16 f14; u16 f16; s32 f18; };
s32 release_slot_by_id__6TLobbyFUs(u16 a);

s32 register_protocol_handler__6TLobbyFUsi(u16 type, Handler_8041A130 fn);

struct G_8041A1D8 { u8 pad[4]; s16 n; };
void NetUnregisterTimer(void *);
void TLobby__sub_8041A3CC(void);
void TLobby__sub_8041A5B4(void);
s32 TLobby__sub_8041A1D8(void);

struct E_8041A498 { u8 pad0[6]; s16 f6; u8 pad8[6]; u8 fE; u8 padF[0x1ED]; s32 f1FC; s32 f200; u8 pad204[0xCC]; s32 f2D0; u8 pad2D4[0x270]; };
s32 TLobby__sub_8041A9AC(int);
void set_slot_state_and_resume__6TLobbyFv(s16, s32, s16);
void set_thread_state_and_resume__6TLobbyFv(s16, s32, s16);
void TLobby__sub_80422E30(s32, s32, s32, s16);
void TLobby__sub_8041A498(E_8041A498 *arg0, s16 arg1);

void insert_item_at__6TLobbyFPvsii(O_8041D2B8 *o, s16 idx, s32 a, s32 b);

s32 TLobby__sub_8041D368(u8 *arg0);

void reset_slot_index__6TLobbyFPv(u8 *arg0);

struct A_8041D524 { u8 pad[0x320]; s16 n; u8 pad2[0xA]; s32 v0; u8 pad3[0xC]; s32 v1; };
s32 TLobby__sub_8041D524(A_8041D524 *a, s32 x);

s16 tcp_get_socket_handle__6TLobbyFs(s16 i);

s32 get_field_d8__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_8041ED8C(int, void *, void *, void *);
extern RecoveredGlobal_8041E178_lbl_805C1D48 tcp_protocol_state;

#pragma push
#pragma opt_propagation off
s32 TLobby__sub_8041DBD4(s16 arg0, s32 arg1, s32 arg2, s32 arg3);
#pragma pop

s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);
s32 get_field_d8__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_8041E178_lbl_805C1D48 tcp_protocol_state;

#pragma push
#pragma opt_propagation off
s32 get_tcp_stat__6TLobbyFsPvPvPvPv(s16 arg0, s16 *arg1, s16 *arg2, s32 *arg3, s32 *arg4);
#pragma pop

typedef char RecoveredGlobal_8041E178_lbl_805C1D48_size[sizeof(RecoveredGlobal_8041E178_lbl_805C1D48) == 0xA8 ? 1 : -1];
s32 mark_connection_closed__6TLobbyFs(s16 arg0);

void clear_position__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_8041A9AC(int);
extern RecoveredGlobal_8041E178_lbl_805C1D48 tcp_protocol_state;

#pragma push
#pragma opt_propagation off
s32 abort_tcp_connection__6TLobbyFs(s16 arg0);
#pragma pop

s16 TLobby__sub_8041B724(u8 *);
u16 TLobby__sub_8041EA14(void);
#pragma push
#pragma opt_propagation off
s16 tcp_connect_start__6TLobbyFsis(s16 arg0, s32 arg1, s16 arg2);
#pragma pop

s32 validate_tcp_handle__6TLobbyFs(s16 i);

s32 TLobby__sub_8041EB74(u8 *arg0);

s32 close_if_open__6TLobbyFPv(u8 *arg0);

void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);
s16 TLobby__sub_80415954(void *, int, int);

s32 TLobby__sub_8041EC14(u8 *arg0);

s32 TLobby__sub_8041ECA4(u8 *arg0);

s32 get_field_534__6TLobbyFPv(u8 *arg0);

s32 get_field_d8__6TLobbyFPv(u8 *arg0);

s32 get_score__6TLobbyFPv(u8 *arg0);

s32 get_queue_diff__6TLobbyFPv(u8 *arg0);

s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);

}
