#include "types.h"
#include "pso/protocol/NetworkRuntime.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_803FD74C;
struct Tbl_803FD74C {
    u8 pad[0x20];
    void (*f20)(Self_803FD74C *);
};
struct Self_803FD74C {
    u8 f0; u8 f1; u8 f2; u8 f3; u8 f4; u8 f5; u8 f6; u8 f7;
    s16 f8; u8 padA[6];
    u8 f10[0x1C];
    Tbl_803FD74C *tbl;
    void *f30;
};

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

extern "C" {
s32 clear_flag_bit4__6TLobbyFiPv(M2C_UNK arg0, u8 *arg1);
extern RecoveredGlobal_803F8AA0_lbl_805BA5C0 lbl_805BA5C0;
void TLobby__sub_803F8AA0(u8 *arg0);
extern RecoveredGlobal_803F8A0C_lbl_805B9534 lbl_805B9534;
void TLobby__sub_803F8A0C(u8 *arg0);
extern RecoveredGlobal_8041552C_lbl_805C1BE0 lbl_805C1BE0;
s16 get_slot_offset_or_default__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_803FB110_lbl_805BFF68 lbl_805BFF68;
u8 *TLobby__sub_803FB110(void);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
void TLobby__sub_804050DC(s16 arg0);
extern RecoveredGlobal_803FD520_lbl_805C0310 lobby_net_buffer_desc_b;
extern s16 lbl_805D7A7A;
s16 get_checked_status_value__6TLobbyFs(s16 arg0);
void apply_default_params__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_803F895C_lbl_805AEEB0 lobby_net_config_block;
void init_buffer_descriptor_a__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_803F89A4_lbl_805B52D4 lbl_805B52D4;
extern RecoveredGlobal_803F89A4_lbl_805B5454 lbl_805B5454;
void TLobby__sub_803F89A4(u8 *arg0);
extern RecoveredGlobal_803F89DC_lbl_805B54BC lbl_805B54BC;
extern RecoveredGlobal_803F89DC_lbl_805B94BC lbl_805B94BC;
void init_buffer_desc_a__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_803F895C_lbl_805AEEB0 lobby_net_config_block;
void init_net_buffer_config__6TLobbyFPv(u8 *arg0);
void reset_message_thread__6TLobbyFv(void);
void TLobby__sub_803F8AB8(void);
s32 OSGetTick();
void NetStoreTick(s32 *arg0);
extern RecoveredGlobal_803F94A0_lbl_805BF770 lbl_805BF770;
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
void TLobby__sub_803F9B28(void);
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
s32 TLobby__sub_803F9EC4(void *, void *, int);
void TUdpSocket__sub_803F9EE4(void *, int, int);
void TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_803FA17C(u8 *arg0, s32 arg1);
void TLobby__sub_803FA284(s32 arg0);
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
s16 TLobby__sub_80405140(void);
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
s32 TLobby__sub_803F9EC4(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040C9E0(u8 *arg0, u8 *arg1);
u16 calc_pseudo_header_checksum__6TLobbyFiicPvs(s32, s32, s8, void *, s16);
u16 TLobby__sub_80411040(void *, void *);
u16 TLobby__sub_8040D8F0(u8 *arg0, u8 *arg1, s8 arg2, u8 *arg3, s16 arg4);
s32 TLobby__sub_8040DA54(u8 *arg0, u8 *arg1);
s32 TLobby__sub_8040FDA0(u32, s16);
s32 is_multicast_address__6TLobbyFPvs(u8 *arg0, s16 arg1);
s32 is_addr_unspecified__6TLobbyFPv(u8 *arg0);
s32 compare_sockaddr__6TLobbyFPvPv(u8 *arg0, u8 *arg1);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
u8 * TLobby__sub_8040F76C(u32, u32);
s32 is_lookup_found__6TLobbyFUiUi(u32 arg0, u32 arg1);
s32 NetIPv4IsLoopback(s32 arg0);
s32 NetIPv4IsUnspecified(u32 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s32 TLobby__sub_8040FEE4(s32 arg0, s32 arg1);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
u8 * TLobby__sub_80413264(void *, s32);
s32 TLobby__sub_80413230(u8 *arg0, s32 arg1);
s32 is_slot_flag_0x20_set__6TLobbyFs(s16);
void TLobby__sub_804136AC(s16 arg0);
s32 is_socket_flag_set__6TLobbyFs(s16);
void TLobby__sub_804136CC(s16 arg0);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s16 TLobby__sub_804148A8(u8 *arg0);
s32 NetIPv6IsMulticast(u8 *arg0);
s32 is_zero_16_bytes__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803F9EC4(void * _w0, void * _w1, int _w2);
s32 compare_sockaddr_bytes__6TLobbyFii(s32 arg0, s32 arg1);
s16 TLobby__sub_8041510C(void);
void TLobby__sub_804150EC(void);
void TLobby__sub_8041615C(void);
void update_resend_timers__6TLobbyFv(void);
void update_resend_and_retry__6TLobbyFv(void);
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
void release_entry__10TUdpSocketFPv(void *);
u8 *alloc_free_entry__6TLobbyFv();
s16 TLobby__sub_80413D78();
M2C_UNK init_default_packet_header__6TLobbyFPvPv(void *, void *);
s32 TLobby__sub_80417FA8(int, void *, void *, void *, int);
s32 TLobby__sub_80416008(s32 arg0, s32 arg1);
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
void TLobby__sub_80419A00(void);
s32 TLobby__sub_8041D368(u8 *arg0);
u8 * TLobby__sub_8041B5C0(void *);
extern RecoveredGlobal_8041E178_lbl_805C1D48 lbl_805C1D48;
s32 mark_connection_closed__6TLobbyFs(s16 arg0);
void strcat(u8);
void append_string__6TLobbyFUc(u8 arg0);
void strncmp(u8);
void compare_strn__6TLobbyFUc(u8 arg0);
void strcmp(u8);
void compare_str__6TLobbyFUc(u8 arg0);
void strcpy(void *, void *);
void copy_string__6TLobbyFPvPv(void *arg0, void *arg1);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s32 TLobby__sub_804112B8(s32 arg0, s32 arg1, s16 arg2);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s32 TLobby__sub_8041123C(s32 arg0, s32 arg1, s16 arg2);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s16 *get_valid_entry__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s16 *get_active_entry_by_index__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s16 TLobby__sub_8040EF00(s16 arg0);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s16 get_entry_field_26__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s32 TLobby__sub_8040FE40(s16 arg0);
extern RecoveredGlobal_803F8930_lbl_805B4F84 lbl_805B4F84;
void TLobby__sub_803F8930(u8 *arg0);
extern RecoveredGlobal_803F8B7C_lbl_805BD66C lobby_net_recv_desc;
extern M2C_UNK lbl_805D7A58;
void init_net_recv_desc__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803FE6CC(void *, int, int, void *);
s32 TLobby__sub_803FE658(u8 *arg0);
void free_field_98_and_clear__6TLobbyFPv(u8 *arg0);
u8 *alloc_from_buffer__6TLobbyFPvs(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1);
s32 TLobby__sub_803F81C4(u16, s32);
s32 TLobby__sub_804037B0(s32 arg0, u16 arg1);
void TLobby__sub_80405328(u8 *arg0);
s16 TLobby__sub_8040FCEC(u32);
s16 TLobby__sub_804136EC(s32);
s16 TLobby__sub_8040DABC(u8 *arg0);
void TLobby__sub_803F892C(void *);
s32 release_slot_by_id__6TLobbyFUs(u16);
extern RecoveredGlobal_8040DD68_lbl_805C1B38 lbl_805C1B38;
s32 TLobby__sub_8040DD68(void);
void TLobby__sub_803F8958(void *);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s32 TLobby__sub_8040ED28(void);
void init_buffer_descriptor_a__6TLobbyFPv(u8 *arg0);
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s32 TLobby__sub_8040ED70(void);
void TLobby__sub_803F87DC(void *);
s32 release_slot_by_id__6TLobbyFUs(u16);
extern RecoveredGlobal_8040FF0C_lbl_805C1B78 lbl_805C1B78;
s32 shutdown_ipv6__6TLobbyFv(void);
void TLobby__sub_803F89D8(void *);
extern RecoveredGlobal_80415650_lbl_805C1BF8 lbl_805C1BF8;
s32 reset_net_value__6TLobbyFv(void);
M2C_UNK TLobby__sub_803F8E9C();
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
void TLobby__sub_80419A34(void);
void clear_slot_for_handle__6TLobbyFUi(u32 arg0);
void unlock_mutex__10TUdpSocketFi(int);
void lock_mutex__6TLobbyFi(int);
M2C_UNK TLobby__sub_803F95E4(int);
void cancel_thread_if_running__6TLobbyFi(s32 arg0);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
s32 TLobby__sub_80419A7C(void);
s16 TLobby__sub_8041579C(void *);
s32 TLobby__sub_8041EB74(u8 *arg0);
s16 TLobby__sub_8041579C(void *);
s32 close_if_open__6TLobbyFPv(u8 *arg0);
void unlock_mutex__10TUdpSocketFi(int _w0);
void lock_mutex__6TLobbyFi(int _w0);
s16 TLobby__sub_8040A2BC(void *, s16);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
s16 TLobby__sub_80409A3C(u8 *arg0, s16 arg1);
extern RecoveredGlobal_803F895C_lbl_805AEEB0 lobby_net_config_block;
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
u16 TLobby__sub_80402ADC(u8 *p);
extern u16 lbl_805D7A78;
void set_ppp_auth_protocol__6TLobbyFUs(u16 v);
u32 TLobby__sub_80402AFC(u8 *p);
u8 *TLobby__sub_80402B3C(u8 *p, u32 v);
void TLobby__sub_80405000(u32 arg0);
u8 *TLobby__sub_80402B28(u8 *p, u16 v);
extern Tbl_80408718 lbl_805C1AB0;
Ent_80408718 *find_free_peer_entry__6TLobbyFv(void);
s32 TLobby__sub_80405304(void *arg0);
u16 TLobby__sub_80406BD8(void *, s16);
u16 calc_ip_checksum__6TLobbyFPvs(void *, s16);
void update_connection_state__6TLobbyFi(int);
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
extern Cfg_803F87E0 ipv6_interface_config;
extern u8 lbl_805B38A0[];
void init_ipv6_interface_config__6TLobbyFPv(Obj_803F87E0 *arg0);
void queue_timeout_message__6TLobbyFsis(void);
void get_local_address__6TLobbyFsPv(void);
void consume_item_count_by_id__6TLobbyFsPv(void);
void add_multicast_address__6TLobbyFsPv(void);
void remove_rec_by_handle__6TLobbyFsUs(void);
void open_channel_checked__6TLobbyFsUs(void);
void TLobby__sub_80426B88(void);
extern RecoveredGlobal_803F895C_lbl_805AEEB0 lobby_net_config_block;
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
void update_connection_state__6TLobbyFi(int);
void process_expired_timers__6TLobbyFv(void);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
s32 wait_for_connection__6TLobbyFPv(Conn_804004DC *c);
void get_time_ms__6TLobbyFPv(s32 *out);
void save_timer_state__6TLobbyFPv(u8 *arg0);
s32 configure_mode_by_type__6TLobbyFPvs(Cfg_804019A8 *c, s16 type);
u32 str_length__6TLobbyFi(s32 arg0);
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
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
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
extern s16 lobby_handler_table_desc;
s32 clear_table_entry_locked__6TLobbyFs(s16 arg0);
extern s16 lobby_handler_table_desc;
s32 call_handler_by_index__6TLobbyFsiiii(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s16 lobby_handler_table_desc;
s32 dispatch_handler_by_index__6TLobbyFsiii(s16 arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040B838(u8 *dst, u8 *src, s16 len);
s32 build_dns_query_aaaa__6TLobbyFPvPvs(Q_8040B6E4 *q, u8 *name, s16 len);
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
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
u16 TLobby__sub_80402ADC(u8 *p);
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
u16 TLobby__sub_80402ADC(u8 *p);
u8 *TLobby__sub_80402B28(u8 *p, u16 v);
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
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
void MD5Transform(u32 *state, u8 *block);
s16 TLobby__sub_80401BCC(void *, void *, int);
B_803FADA0 *init_net_buffer_entry__6TLobbyFUs(u16);
u8 *TLobby__sub_80402B3C(u8 *p, u32 v);
extern u8 lbl_805D7A74[1];
void TLobby__sub_803FADA0(B_803FADA0 **arg0, A_803FADA0 *arg1, s32 arg2, s32 arg3, void *arg4);
s32 TLobby__sub_803F812C(int, u8 *, u16 *);
s32 TLobby__sub_80403730(u8 *dst, unsigned short n);
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
s32 TLobby__sub_803F9CF4(s32 arg0);
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
s32 TLobby__sub_80414870(u8 *arg0);
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

void TLobby__sub_803F8794(void *);

extern s16 net_param_room_count;
extern s32 lbl_805D4800;
extern s32 lbl_805D7A44;

void init_params__6TLobbyFPv(u8 *arg0);

void TLobby__sub_803F87C4(void);

extern s16 net_param_player_count;
extern s32 lbl_805D7A40;

void TLobby__sub_803F87C8(u8 *arg0);

void TLobby__sub_803F87DC(void * _w0);

void init_ipv6_interface_config__6TLobbyFPv(Obj_803F87E0 *arg0);

void TLobby__sub_803F8864(void *);

void TLobby__sub_803F88E0(void *);

typedef struct RecoveredFields_803F88E4_arg0 RecoveredFields_803F88E4_arg0;
typedef struct RecoveredGlobal_803F88E4_lbl_805AEEB0 RecoveredGlobal_803F88E4_lbl_805AEEB0;
typedef char RecoveredGlobal_803F88E4_lbl_805AEEB0_size[((sizeof(RecoveredGlobal_803F88E4_lbl_805AEEB0)) == 0x49C8) ? (1) : (-1)];
void init_buffer_descriptor_b__6TLobbyFPv(RecoveredFields_803F88E4_arg0 *arg0);

void TLobby__sub_803F892C(void * _w0);

#pragma push
#pragma opt_common_subs on
typedef char RecoveredGlobal_803F8930_lbl_805B4F84_size[sizeof(RecoveredGlobal_803F8930_lbl_805B4F84) == 0x350 ? 1 : -1];
void TLobby__sub_803F8930(u8 *arg0);
#pragma pop

void TLobby__sub_803F8958(void * _w0);

typedef char RecoveredGlobal_803F895C_lbl_805AEEB0_size[sizeof(RecoveredGlobal_803F895C_lbl_805AEEB0) == 0x49C8 ? 1 : -1];
void init_buffer_descriptor_a__6TLobbyFPv(u8 *arg0);

void TLobby__sub_803F89A0(void *);

typedef char RecoveredGlobal_803F89A4_lbl_805B52D4_size[sizeof(RecoveredGlobal_803F89A4_lbl_805B52D4) == 0x180 ? 1 : -1];
typedef char RecoveredGlobal_803F89A4_lbl_805B5454_size[sizeof(RecoveredGlobal_803F89A4_lbl_805B5454) == 0x68 ? 1 : -1];
void TLobby__sub_803F89A4(u8 *arg0);

void TLobby__sub_803F89D8(void * _w0);

typedef char RecoveredGlobal_803F89DC_lbl_805B54BC_size[sizeof(RecoveredGlobal_803F89DC_lbl_805B54BC) == 0x4000 ? 1 : -1];
typedef char RecoveredGlobal_803F89DC_lbl_805B94BC_size[sizeof(RecoveredGlobal_803F89DC_lbl_805B94BC) == 0x78 ? 1 : -1];
void init_buffer_desc_a__6TLobbyFPv(u8 *arg0);

void TLobby__sub_803F8A08(void * _w0);

typedef char RecoveredGlobal_803F8A0C_lbl_805B9534_size[sizeof(RecoveredGlobal_803F8A0C_lbl_805B9534) == 0x108C ? 1 : -1];
void TLobby__sub_803F8A0C(u8 *arg0);

void TLobby__sub_803F8A24(void *);

typedef char RecoveredGlobal_803F8A28_lbl_805AEEB0_size[sizeof(RecoveredGlobal_803F8A28_lbl_805AEEB0) == 0x49C8 ? 1 : -1];
void init_net_buffer_config__6TLobbyFPv(u8 *arg0);

void TLobby__sub_803F8A9C(void * _w0);

typedef char RecoveredGlobal_803F8AA0_lbl_805BA5C0_size[sizeof(RecoveredGlobal_803F8AA0_lbl_805BA5C0) == 0x30AC ? 1 : -1];
void TLobby__sub_803F8AA0(u8 *arg0);

void TLobby__sub_803F8AB8(void);

void init_net_func_table__6TLobbyFPv(Desc_803F8AD8 *arg0);

void TLobby__sub_803F8B78(void);

extern s32 lbl_805D4810;

typedef char RecoveredGlobal_803F8B7C_lbl_805BD66C_size[sizeof(RecoveredGlobal_803F8B7C_lbl_805BD66C) == 0xA04 ? 1 : -1];
void init_net_recv_desc__6TLobbyFPv(u8 *arg0);

u8 *layout_buffers__6TLobbyFPvPvPv(H_803F8BA4 *h, u8 *p, u8 *end);

void TLobby__sub_803F8D84(u32 key);

s32 alloc_buffer_slot__6TLobbyFi(s32 size);

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

void TLobby__sub_803F9B28(void);

void deactivate_entry_by_key__6TLobbyFUi(u32 key);

s32 run_current_thread_callback__6TLobbyFv(void);

s32 TLobby__sub_803F9CF4(s32 arg0);

typedef char RecoveredGlobal_803AA0C0_lbl_80556E88_size[sizeof(RecoveredGlobal_803AA0C0_lbl_80556E88) == 0x100 ? 1 : -1];
void append_string__6TLobbyFUc(u8 arg0);

void compare_strn__6TLobbyFUc(u8 arg0);

void compare_str__6TLobbyFUc(u8 arg0);

void copy_string__6TLobbyFPvPv(void *arg0, void *arg1);

u32 str_length__6TLobbyFi(s32 arg0);

void memmove_wrapper__6TLobbyFv(void);

s32 TLobby__sub_803F9EC4(void * _w0, void * _w1, int _w2);

void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);

void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);

s32 check_connection_status__6TLobbyFPv(u8 *arg0);

s32 clear_flag_bit4__6TLobbyFiPv(M2C_UNK arg0, u8 *arg1);

s32 TLobby__sub_803FA17C(u8 *arg0, s32 arg1);

void TLobby__sub_803FA234(void);

void TLobby__sub_803FA238(u8 *arg0);

void init_net_state_entry__6TLobbyFPv(s8 *arg0);

void TLobby__sub_803FA280(void);

extern u16 lbl_805D7A78;

typedef char RecoveredGlobal_803FB110_lbl_805BFF68_size[sizeof(RecoveredGlobal_803FB110_lbl_805BFF68) == 0xD0 ? 1 : -1];

void TLobby__sub_803FA284(s32 arg0);

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

void init_net_state_a__6TLobbyFv(void) {
    TLobby__sub_803F76F0((void *) (&lbl_805C02D0.value));
}

typedef char RecoveredGlobal_803FC1A0_lbl_805C02D0_size[sizeof(RecoveredGlobal_803FC1A0_lbl_805C02D0) == 0x40 ? 1 : -1];
s32 init_net_state_b__6TLobbyFv(void) {
    init_net_buffer_table__6TLobbyFPv((void *) (&(*(RecoveredGlobal_803FC1A0_lbl_805C02D0 *)&lbl_805C02D0).value));
    return 0;
}

s32 set_active_flag__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA0) = 2;
    M2C_FIELD(arg0, u8 *, 0xA2) = (u8) (M2C_FIELD(arg0, u8 *, 0xA2) | 0x20);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x20);
    return 0;
}

s32 mark_sub_ready__6TLobbyFPv(Obj_803FC480 *self) {
    Sub_803FC480 *s = &self->sub;
    s->f0 = 1;
    s->f2 |= 0x10;
    self->f2 |= 0x10;
    s->f3 = s->f4;
    return 0;
}

s16 TLobby__sub_803FC820(void *, void *, int);
M2C_UNK TLobby__sub_803FCC10(void *, void *, int);
void update_connection_state__6TLobbyFi(int);
s32 TLobby__sub_803FE8BC(u8 *, void *);
typedef struct Hdr_803FC4B4 { u8 type; u8 flag; s16 len; } Hdr_803FC4B4;
struct O_80400ACC;
void TLobby__sub_80400ACC(O_80400ACC *);
struct Outer_80401CAC;
void TLobby__sub_80401CAC(Outer_80401CAC *, u16);
M2C_UNK TLobby__sub_80405304(void *);
extern s16 lbl_805D7A80;
extern s32 lbl_805D7A90;

void dispatch_received_packet__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    Hdr_803FC4B4 hdr;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 *temp_r30;
    u8 *temp_r30_2;
    u8 *temp_r30_3;
    u8 *temp_r30_4;

    if ((s16)TLobby__sub_803FE8BC((u8 *)&hdr, &arg1) != -1) {
        hdr.len -= 4;
        TLobby__sub_80401CAC((Outer_80401CAC *)&arg1, hdr.len);
        switch (hdr.type) {
        case 1:
            TLobby__sub_803FCC10((void *) (arg0), (void *)&hdr, (int) (arg1));
            return;
        case 2:
            if (TLobby__sub_803FC820((void *) (arg0), (void *)&hdr, (int) (arg1)) == 0) {
                if (lbl_805D7A90 & 2) {
                    temp_r30 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC));
                    TLobby__sub_80405304((void *) ((u8 *)(arg0) + 0x10));
                    temp_r0 = M2C_FIELD(arg0, u8 *, 2) & 0xFFFFFFEF;
                    M2C_FIELD(arg0, u8 *, 2) = temp_r0;
                    if (!(temp_r0 & 0x10)) {
                        M2C_FIELD(arg0, s8 *, 0) = 5;
                    }
                    M2C_FIELD(temp_r30, u8 *, 2) = (u8) (M2C_FIELD(temp_r30, u8 *, 2) & 0xFFFFFFEF);
                    M2C_FIELD(temp_r30, u8 *, 2) = (u8) (M2C_FIELD(temp_r30, u8 *, 2) & 0xFFFFFFDF);
                    TLobby__sub_80400ACC((O_80400ACC *) (temp_r30));
                    return;
                }
                temp_r30_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC));
                TLobby__sub_80405304((void *) ((u8 *)(arg0) + 0x10));
                temp_r0_2 = M2C_FIELD(arg0, u8 *, 2) & 0xFFFFFFDF;
                M2C_FIELD(arg0, u8 *, 2) = temp_r0_2;
                if (!(temp_r0_2 & 0x10)) {
                    M2C_FIELD(arg0, s8 *, 0) = 5;
                }
                M2C_FIELD(temp_r30_2, u8 *, 2) = (u8) (M2C_FIELD(temp_r30_2, u8 *, 2) & 0xFFFFFFDF);
                TLobby__sub_80400ACC((O_80400ACC *) (temp_r30_2));
                return;
            }
            break;
        case 3:
            TLobby__sub_80405304((void *) ((u8 *)(arg0) + 0x10));
            temp_r30_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC));
            TLobby__sub_80405304((void *) ((u8 *)(arg0) + 0x10));
            temp_r0_3 = M2C_FIELD(arg0, u8 *, 2) & 0xFFFFFFEF;
            M2C_FIELD(arg0, u8 *, 2) = temp_r0_3;
            if (!(temp_r0_3 & 0x10)) {
                M2C_FIELD(arg0, s8 *, 0) = 5;
            }
            M2C_FIELD(temp_r30_3, u8 *, 2) = (u8) (M2C_FIELD(temp_r30_3, u8 *, 2) & 0xFFFFFFEF);
            M2C_FIELD(temp_r30_3, u8 *, 2) = (u8) (M2C_FIELD(temp_r30_3, u8 *, 2) & 0xFFFFFFDF);
            TLobby__sub_80400ACC((O_80400ACC *) (temp_r30_3));
            return;
        case 4:
            TLobby__sub_80405304((void *) ((u8 *)(arg0) + 0x10));
            temp_r30_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC));
            update_connection_state__6TLobbyFi((int) ((u8 *)(temp_r30_4) + 0xA0));
            update_connection_state__6TLobbyFi((int) ((u8 *)(temp_r30_4) + 4));
            M2C_FIELD(arg0, s16 *, 8) = 1;
            lbl_805D7A80 = 1;
            break;
        }
    }
}

struct Buf_803FC684 { char a[0x80]; char b[0x80]; u8 rest[0x50]; };
Buf_803FC684 lbl_805C0180;
s32 TLobby__sub_803FC684(u8 *arg0, u8 *arg1, u8 *arg2) {
    char **p = *(char ***)(arg2 + 0x30);

    if (str_length__6TLobbyFi((s32)arg0) >= 0x80) {
        arg0[0x7F] = 0;
    }
    if (str_length__6TLobbyFi((s32)arg1) >= 0x80) {
        arg1[0x7F] = 0;
    }
    copy_string__6TLobbyFPvPv(lbl_805C0180.a, arg0);
    copy_string__6TLobbyFPvPv(lbl_805C0180.b, arg1);
    p[0] = lbl_805C0180.a;
    p[1] = lbl_805C0180.b;
    return 0;
}

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & 0xFFFFFFBF);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x80);
    if ((u8) M2C_FIELD(arg0, u8 *, 0) < 1U) {
        M2C_FIELD(arg0, u8 *, 0) = 1U;
    }
    return 0;
}

void TLobby__sub_803F7980(void *);
void TLobby__sub_803FD0C0(void) {
    RecoveredGlobal_803FD520_lbl_805C0310 *g = &lobby_net_buffer_desc_b;
    clear_table_entry_locked__6TLobbyFs((s16)(g->h0));
    g->h0 = -1;
    g->h16 = 0;
    TLobby__sub_803F7980(g);
}

typedef void (*Fn_803FD10C)(void);
void init_buffer_desc_b__6TLobbyFPv(void *);
void TLobby__sub_803FD21C(void);
void TLobby__sub_803FD310(void);
void TLobby__sub_803FD404(void);
void TLobby__sub_803FD5A4(void);
void TLobby__sub_803FD60C(void);
s32 clear_socket_slot__6TLobbyFs(s16 i);

s16 TLobby__sub_803FD10C(void) {
    Fn_803FD10C fns[11];
    s16 r;
    s16 i;
    s16 *p;

    init_buffer_desc_b__6TLobbyFPv(&lobby_net_buffer_desc_b);
    fns[0] = TLobby__sub_803FD60C;
    fns[1] = TLobby__sub_803FD5A4;
    fns[2] = (Fn_803FD10C)clear_socket_slot__6TLobbyFs;
    fns[3] = (Fn_803FD10C)get_checked_status_value__6TLobbyFs;
    fns[4] = (Fn_803FD10C)TLobby__sub_803FD4FC;
    fns[5] = (Fn_803FD10C)TLobby__sub_803FD4D8;
    fns[6] = (Fn_803FD10C)TLobby__sub_803FD4B4;
    fns[7] = (Fn_803FD10C)TLobby__sub_803FD490;
    fns[8] = TLobby__sub_803FD404;
    fns[9] = TLobby__sub_803FD310;
    fns[10] = TLobby__sub_803FD21C;
    r = TLobby__sub_80409A3C((u8 *)fns, 2);
    if (r < 0) {
        return r;
    }
    lobby_net_buffer_desc_b.h0 = r;
    lobby_net_buffer_desc_b.h2 = 0;
    lobby_net_buffer_desc_b.h4 = 0;
    lobby_net_buffer_desc_b.h6 = 0;
    lobby_net_buffer_desc_b.h8 = 0;
    p = lobby_net_buffer_desc_b.buf;
    i = 0;
    while (i < lobby_net_buffer_desc_b.h16) {
        *p = 0;
        i++;
        p++;
    }
    return r;
}

s32 TLobby__sub_803FD490(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4B4(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4D8(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4FC(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

typedef char RecoveredGlobal_803FD520_lbl_805C0310_size[sizeof(RecoveredGlobal_803FD520_lbl_805C0310) == 0x18 ? 1 : -1];
s16 get_checked_status_value__6TLobbyFs(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    if (lbl_805D7A7A != 0) {
        return 0x5AE;
    }
    return M2C_FIELD(&lobby_net_buffer_desc_b.h0, s16 *, 0x14);
}

struct E_803FD560 { s16 a; s16 b; };
struct G_803FD560 { s16 id; E_803FD560 e[2]; };
s32 clear_socket_slot__6TLobbyFs(s16 i) {
    if (i != 0 && i != 1) {
        return -0x112;
    }
    G_803FD560 *g = (G_803FD560 *)&lobby_net_buffer_desc_b;
    g->e[i].a = 0;
    g->e[i].b = 0;
    return 0;
}

struct N_80405298;
void TLobby__sub_80405298(N_80405298 *o, s32 v);
void update_countdown_state__6TLobbyFPv(void *);

void TLobby__sub_803FD694(u8 *arg0) {
    s8 var_r0;
    u8 *temp_r31;
    u8 *temp_r4;

    temp_r31 = (u8 *)(arg0 + 0x10);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2C), u8 *, 9);
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2C), u8 *, 0xA);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2C), u8 *, 0xB);
    if (M2C_FIELD(arg0, u8 *, 2) & 0xC0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0) = var_r0;
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 7);
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2C));
    M2C_FIELD(temp_r4, M2C_UNK (**)(void *, void *), 0x14)(arg0, temp_r4);
    M2C_FIELD(temp_r31, void **, 0x10) = (void *)update_countdown_state__6TLobbyFPv;
    M2C_FIELD(temp_r31, u8 **, 0x14) = arg0;
    TLobby__sub_80405298((N_80405298 *) (temp_r31), (s32) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2C), s32 *, 0xC)));
}

#define self ((Self_803FD74C *)arg0)
void update_connection_state__6TLobbyFi(int arg0) {
    if (self->f30 == 0) {
        return;
    }
    switch (self->f0) {
    case 5:
        self->tbl->f20(self);
    case 4:
        self->f3 = self->f5;
        if (self->f3 != 0) {
            self->f3--;
            TLobby__sub_80405328(self->f10);
            TLobby__sub_803FE6CC(self, 5, 0, 0);
        }
        self->f0 = 6;
        break;
    case 2:
    case 3:
        self->f3 = 0;
        self->f0 = 6;
        break;
    case 1:
        if (lbl_805D7A90 & 2) {
            if (self->f3 != 0) {
            self->f3--;
            TLobby__sub_80405328(self->f10);
            TLobby__sub_803FE6CC(self, 5, 0, 0);
        }
        }
        self->f0 = 0;
        break;
    case 6:
        break;
    }
}
#undef self

#define self ((Self_803FD85C *)arg0)
void TLobby__sub_803FD85C(void *arg0) {
    if (self->f30 != NULL) {
        switch (self->f0) {
        case 2:
        case 3:
        case 4:
            TLobby__sub_80405304(self->f10);
            self->f0 = (self->f2 & 0xC0) ? 1 : 0;
            self->f3 = self->f4;
            self->f6 = self->f7;
            self->tbl->f14(self, self->tbl);
            break;
        case 5:
            self->tbl->f20(self, self->tbl);
        case 6:
            self->f0 = (self->f2 & 0xC0) ? 1 : 0;
            self->f3 = self->f4;
            self->f6 = self->f7;
            self->tbl->f14(self, self->tbl);
            break;
        }
    }
}
#undef self

void TLobby__sub_803FD958(u8 *arg0) {
  u8 temp_r0;
  u8 temp_r3;
  u8 var_r0;
  int new_var;
  u8 *temp_r4;
  u8 *temp_r4_2;
  u8 *temp_r4_3;
  if ((((u32) (*((u32 *) (((s8 *) arg0) + 0x30)))) != 0U) && ((*((u8 *) (((s8 *) arg0) + 2))) & 0xC0))
  {
    temp_r0 = *((u8 *) (((s8 *) arg0) + 0));
    if (((s32) temp_r0) != 6)
    {
      if ((((s32) temp_r0) < 6) && (((s32) temp_r0) < 2))
      {
        if (((s32) temp_r0) < 0)
        {
          return;
          if (((!temp_r0) && (!temp_r0)) && (!temp_r0))
          {
          }
        }
        goto block_7;
      }
    }
    else
    {
      new_var = 0x18;
      block_7:
      temp_r4 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x2C)));
      (*((M2C_UNK (**)(void *, void *)) (((s8 *) temp_r4) + new_var)))(arg0, temp_r4);
      if ((*((u8 *) (((s8 *) arg0) + 2))) & 0xC0)
      {
        var_r0 = 1;
      }
      else
      {
        var_r0 = 0;
      }
      *((u8 *) (((s8 *) arg0) + 0)) = var_r0;
      *((u8 *) (((s8 *) arg0) + 3)) = (u8) (*((u8 *) (((s8 *) arg0) + 4)));
      *((u8 *) (((s8 *) arg0) + 6)) = (u8) (*((u8 *) (((s8 *) arg0) + 7)));
      temp_r4_2 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x2C)));
      (*((M2C_UNK (**)(void *, void *)) (((s8 *) temp_r4_2) + 0x14)))(arg0, temp_r4_2);
      if ((*((u8 *) (((s8 *) arg0) + 2))) & 0x80)
      {
        temp_r3 = *((u8 *) (((s8 *) arg0) + 3));
        if (temp_r3 != 0)
        {
          *((u8 *) (((s8 *) arg0) + 3)) = (u8) (temp_r3 - 1);
          TLobby__sub_80405328((u8 *)((void *) (((u8 *) arg0) + 0x10)));
          temp_r4_3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x2C)));
          TLobby__sub_803FE6CC((void *) arg0, (int) 1, (int) 0, (void *) (*((s32 (**)(void *, void *)) (((s8 *) temp_r4_3) + 0x28)))(arg0, temp_r4_3));
        }
        *((u8 *) (((s8 *) arg0) + 0)) = 2U;
      }
    }
  }
}

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

void update_countdown_state__6TLobbyFPv(void *arg0) {
    Self_803FDA68 *self = (Self_803FDA68 *)arg0;
    switch (self->f0) {
    case 2:
    case 3:
    case 4:
        if (self->f3 != 0) {
            if (self->f3 > 0) {
                self->f3--;
                TLobby__sub_80405328(self->f10);
                TLobby__sub_803FE6CC(self, 1, 0, self->tbl->f28(self, self->tbl));
            }
            if (self->f0 == 3) {
                self->f0 = 2;
            }
        } else {
            self->f0 = (self->f2 & 0xC0) ? 1 : 0;
            self->f3 = self->f4;
            self->f6 = self->f7;
            self->tbl->f14(self, self->tbl);
            self->f8 = 1;
        }
        break;
    case 6:
        if (self->f3 != 0) {
            if (self->f3 > 0) {
                self->f3--;
                TLobby__sub_80405328(self->f10);
                TLobby__sub_803FE6CC(self, 5, 0, 0);
            }
        } else {
            self->tbl->f24(self, self->tbl);
            self->f0 = (self->f2 & 0xC0) ? 1 : 0;
            self->f3 = self->f4;
            self->f6 = self->f7;
            self->tbl->f14(self, self->tbl);
            self->f8 = 1;
        }
        break;
    }
}

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
void TLobby__sub_803FE600(O_803FE600 *o) {
    o->b0 = (o->b2 & 0xC0) ? 1 : 0;
    o->b3 = o->b4;
    o->b6 = o->b7;
    o->p2C->fn(o, o->p2C);
}

s32 TLobby__sub_803FE658(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[3]; u8 field_3; u8 pad_4[40]; u8 * field_2C; };
    u8 temp_r3;
    u8 *temp_r4;
    temp_r3 = ((Fields_arg0*)arg0)->field_3;
    if (temp_r3 == 0) {
        return -1;
    }
    ((Fields_arg0*)arg0)->field_3 = (u8) (temp_r3 - 1);
    TLobby__sub_80405328((u8 *)((void *) (arg0 + 0x10)));
    temp_r4 = (u8 *)(((Fields_arg0*)arg0)->field_2C);
    return TLobby__sub_803FE6CC((void *) (arg0), (int) (1), (int) (0), (void *) (M2C_FIELD(temp_r4, s32 (**)(void *, void *), 0x28)(arg0, temp_r4)));
}

void TLobby__sub_803FE820(s32 arg0) {
    TLobby__sub_80405328((u8 *)((void *) (arg0 + 0x10)));
}

s32 TLobby__sub_803FE844(void) {
    return 0;
}

void TLobby__sub_803FE84C(void) {

}

s16 TLobby__sub_80401BCC(void *, void *, int);
s32 read_2_bytes__6TLobbyFPvPv(u8 *dst, void *src) {
    u8 buf[2];
    if (dst == 0) {
        return -1;
    }
    if (TLobby__sub_80401BCC(src, buf, 2) < 2) {
        return -1;
    }
    dst[0] = buf[0];
    dst[1] = buf[1];
    return 0;
}

s16 TLobby__sub_80401BCC(void *, void *, int);
s32 TLobby__sub_803FE8BC(u8 *dst, void *src) {
    u8 buf[4];
    if (dst == 0) {
        return -1;
    }
    if (TLobby__sub_80401BCC(src, buf, 4) < 4) {
        return -1;
    }
    dst[0] = buf[0];
    dst[1] = buf[1];
    *(u16 *)(dst + 2) = TLobby__sub_80402ADC(buf + 2);
    return 0;
}

s32 set_socket_flags_by_mode__6TLobbyFsPv(s16 arg0, u8 *arg1) {
    struct Fields_arg1 { s16 field_0; u8 pad_2[2]; s16 field_4; u8 pad_6[10]; s16 field_10; s16 field_12; s8 field_14; u8 pad_15[19]; s16 field_28; };
    if (arg0 == 0) {
        ((Fields_arg1*)arg1)->field_10 = 0x2D;
        ((Fields_arg1*)arg1)->field_12 = 0x10;
        ((Fields_arg1*)arg1)->field_14 = 1;
        ((Fields_arg1*)arg1)->field_4 = (s16) (((Fields_arg1*)arg1)->field_4 | 4);
        ((Fields_arg1*)arg1)->field_28 = (s16) (((Fields_arg1*)arg1)->field_28 | 4);
        ((Fields_arg1*)arg1)->field_0 = (s16) (((Fields_arg1*)arg1)->field_0 | 4);
    } else if (arg0 != 0) {
        ((Fields_arg1*)arg1)->field_4 = (s16) (((Fields_arg1*)arg1)->field_4 & 0xFFFFFFFB);
        ((Fields_arg1*)arg1)->field_0 = (s16) (((Fields_arg1*)arg1)->field_0 & 0xFFFFFFFB);
        ((Fields_arg1*)arg1)->field_28 = (s16) (((Fields_arg1*)arg1)->field_28 & 0xFFFFFFFB);
    }
    return 0;
}

s32 set_target_index__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFF7FF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x800);
    }
    return 0;
}

s32 set_filter_index__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFDFF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x200);
    }
    return 0;
}

s32 set_filter_id__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFF7FF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x800);
    }
    return 0;
}

s32 set_target_slot__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFDFF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x200);
    }
    return 0;
}

s32 set_target_id__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFFF7);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 8);
    }
    return 0;
}

s32 TLobby__sub_803FF2CC(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFFF7);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 8);
    }
    return 0;
}

s16 TLobby__sub_803FF304(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[12]; u8 * field_C; };
    set_flags_and_state__6TLobbyFPv((u8 *)(arg0));
    if ((u8) *((Fields_arg0*)arg0)->field_C == 3) {
        TLobby__sub_803FD958((u8 *)(arg0));
    }
    return 0;
}

void free_field_98__6TLobbyFPv(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[48]; u8 * field_30; };
    TLobby__sub_80405000((u32)(M2C_FIELD(((Fields_arg0*)arg0)->field_30, u32 *, 0x98)));
}

void TLobby__sub_803FF374(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

void TLobby__sub_803FF384(u8 *arg0) {
    u8 *p;
    s16 a;
    s16 b;
    a = 0;
    b = 0;
    p = M2C_FIELD(arg0, u8 **, 0x30);
    TLobby__sub_80405000(M2C_FIELD(p, u32 *, 0x98));
    M2C_FIELD(p, s32 *, 0x98) = 0;
    if (M2C_FIELD(p, s16 *, 0x28) & 4) {
        a = M2C_FIELD(p, s16 *, 0x36);
    }
    if (M2C_FIELD(p, s16 *, 0x74) & 4) {
        b = M2C_FIELD(p, s16 *, 0x82);
    }
    if (a != 0 || b != 0) {
        M2C_FIELD(p, s32 *, 0x98) = init_net_list__6TLobbyFss(a, b);
    }
    TLobby__sub_80405304(arg0 + 0x10);
    M2C_FIELD(arg0, s8 *, 0) = 5;
}

void free_field_98_and_clear__6TLobbyFPv(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    TLobby__sub_80405000((u32)((u32)((int) (M2C_FIELD(temp_r31, s32 *, 0x98)))));
    M2C_FIELD(temp_r31, s32 *, 0x98) = 0;
}

void TLobby__sub_803FF468(s32 arg0) {
    TLobby__sub_80405304((void *)((void *) (arg0 + 0x10)));
}

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
void TLobby__sub_803FF48C(P_803FF48C *o) {
    Q_803FF48C *q = o->q;
    q->dst = q->u.src;
    q->dst.w[2] = q->w54;
    q->h0 = q->h0 | q->u.h4;
    q->h74 = 0;
    q->h4C = q->h4C | q->h50;
}

struct Opt_80400338 { u8 pad0[4]; u32 f4; u32 f8; s16 fC; s16 fE; u8 f10; u8 pad11[3]; u32 f14; u32 f18; };
extern u8 lcp_read_byte_buffer;
void TLobby__sub_80400338(B_803FADA0 **pbuf, Opt_80400338 *opt, s32 type, s32 len, void *src) {
    B_803FADA0 *buf;
    s16 n;
    u8 *p;
    u8 *q;
    s16 k;

    n = len - 2;
    if (*pbuf != NULL) {
        buf = *pbuf;
    } else {
        buf = init_net_buffer_entry__6TLobbyFUs(0);
        if (buf == NULL) {
            return;
        }
        *pbuf = buf;
    }
    p = buf->buf + buf->len;
    p[0] = type;
    p[1] = len;
    p += 2;
    switch (type) {
    case 1:
        p = TLobby__sub_80402B3C(TLobby__sub_80402B3C(p, opt->f4), opt->f8);
        n -= 8;
        break;
    case 2:
        k = opt->fC;
        if (k == 0x2D) {
            p = TLobby__sub_80402B28(p, k);
            *p++ = opt->fE - 1;
            n -= 4;
            *p++ = opt->f10;
        }
        break;
    case 3:
        p = TLobby__sub_80402B3C(p, opt->f4);
        n -= 4;
        break;
    case 0x81:
        p = TLobby__sub_80402B3C(p, opt->f14);
        n -= 4;
        break;
    case 0x83:
        p = TLobby__sub_80402B3C(p, opt->f18);
        n -= 4;
        break;
    }
    while (n-- > 0) {
        *p++ = TLobby__sub_80401BCC(src, &lcp_read_byte_buffer, 1) != 1 ? -1 : (s16)lcp_read_byte_buffer;
    }
    buf->len += len;
}

s32 wait_for_connection__6TLobbyFPv(Conn_804004DC *c) {
    RecoveredGlobal_804050DC_lbl_805C18A0 *g;
    u8 *sub;
    sub = c->sub;
    g = &lbl_805C18A0;
    c->abort = 0;
    while (c->state != 5) {
        if (is_timed_out__6TLobbyFv() != 0 || c->abort != 0 || *sub == 4) {
            update_connection_state__6TLobbyFi((int)c);
            c->abort = 0;
            return -1;
        }
        unlock_mutex__10TUdpSocketFi(g->value);
        TLobby__sub_803F97E8(100);
        process_expired_timers__6TLobbyFv();
        lock_mutex__6TLobbyFi(g->value);
    }
    c->abort = 0;
    return 0;
}

void TLobby__sub_80400988(void) {

}

void TLobby__sub_8040098C(Self_8040098C *self) {
    Info_8040098C *info = self->info;
    St_8040098C *st;
    u32 now;

    self->st->f0 = 2;
    self->st->f2 &= ~0x30;
    self->st->f10C = 0;
    if (info->f1C & 8) {
        switch (info->f24) {
        case 0xC023:
            set_active__6TLobbyFPv((u8 *)self->st);
            break;
        case 0xC223:
            mark_sub_ready__6TLobbyFPv((Obj_803FC480 *)self->st);
            set_active_flag__6TLobbyFPv((u8 *)self->st);
            break;
        }
    }
    if (info->f50 & 8) {
        switch (info->f58) {
        case 0xC023:
            mark_ready__6TLobbyFPv((u8 *)self->st);
            break;
        case 0xC223:
            set_active_flag__6TLobbyFPv((u8 *)self->st);
            mark_sub_ready__6TLobbyFPv((Obj_803FC480 *)self->st);
            break;
        }
    }
    st = self->st;
    if (!(st->f2 & 0x30)) {
        st->f0 = 3;
        get_time_ms__6TLobbyFPv((s32 *)&now);
        st->f108 = (s16)(now / 1000);
        TLobby__sub_803FD958(st->f6C);
    }
}

struct O_80400ACC { u8 b0; u8 b1; u8 b2; u8 pad3[0x108 - 3]; s32 f108; };
void TLobby__sub_80400ACC(O_80400ACC *o) {
    u32 t;
    if ((o->b2 & 0x30) == 0) {
        o->b0 = 3;
        get_time_ms__6TLobbyFPv((s32 *)&t);
        o->f108 = (s16)(t / 1000);
        TLobby__sub_803FD958((u8 *)o + 0x6C);
    }
}

void reset_connection_slot__6TLobbyFPv(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[12]; s8 * field_C; };
    s8 *temp_r31;
    temp_r31 = (s8 *)(((Fields_arg0*)arg0)->field_C);
    *temp_r31 = 4;
    TLobby__sub_803FD85C(temp_r31 + 0x6C);
    reset_connection_state__6TLobbyFPv((u8 *)(temp_r31 + 0x38));
}

void queue_command_81__6TLobbyFv(void) {
    TLobby__sub_804062A0(0x81);
}

void TLobby__sub_80400B98(u8 *arg0) {
    *M2C_FIELD(arg0, s8 **, 0xC) = 1;
}

typedef char RecoveredGlobal_80401A68_lbl_805C04A8_size[sizeof(RecoveredGlobal_80401A68_lbl_805C04A8) == 0x30 ? 1 : -1];

void save_timer_state__6TLobbyFPv(u8 *arg0) {
    St_80400BA8 *s;
    s32 t;
    s = *(St_80400BA8 **)(arg0 + 0x30);
    if (s->cur.flags & 0x20) {
        get_time_ms__6TLobbyFPv(&t);
        s->cur.time += t;
    }
    s->saved = s->cur;
    s->flags |= s->cur.flags;
    s->f50 = 0;
    s->f34 |= s->f38;
}

#define rd16_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lcp_read_value_buffer, 2) != 2 ? -1 : TLobby__sub_80402ADC(lcp_read_value_buffer))
#define rd32_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lcp_read_value_buffer, 4) != 4 ? 0 : TLobby__sub_80402AFC(lcp_read_value_buffer))
#define rd8_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lobby_read_byte_buffer, 1) != 1 ? -1 : (s16)lobby_read_byte_buffer[0])
#define F(t, o) M2C_FIELD(arg2, t *, o)
s16 parse_lcp_option__6TLobbyFiPvPvPvs(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, s16 arg4) {
    s16 len;
    s16 res;
    s32 t;
    s16 lim;
    res = 2;
    len = arg3[1] - 2;
    switch (arg3[0]) {
    case 1:
        F(s16, 0x1E) = rd16_804012E0(arg0);
        len -= 2;
        if (F(s16, 0x1E) < 0x80) {
            F(s16, 0x1E) = 0x80;
            res = 3;
        } else if (F(s16, 0x1E) > 0x1000) {
            F(s16, 0x1E) = 0x1000;
            res = 3;
        }
        if (arg4 != 0 && (F(s16, 4) & 2) && F(s16, 0x1E) > (lim = F(s16, 6))) {
            F(s16, 0x1E) = lim;
            res = 3;
        }
        break;
    case 2:
        F(u32, 0x20) = rd32_804012E0(arg0);
        len -= 4;
        if (lbl_805D7A7A != 0) {
            res = 4;
        } else if (arg4 == 0 || (F(s16, 4) & 4)) {
            u32 v = F(u32, 0x20) | F(u32, 8);
            if (F(u32, 0x20) != v) {
                F(u32, 0x20) = v;
                res = 3;
            }
        }
        break;
    case 3:
        F(u16, 0x24) = rd16_804012E0(arg0);
        len -= 2;
        if (F(u16, 0x24) == 0xC223) {
            F(s8, 0x30) = rd8_804012E0(arg0);
            len -= 1;
        }
        if (F(u8, 0x19) != 0) {
            u16 v = F(u16, 0x24);
            if (v == 0xC023 || (v == 0xC223 && (s32)F(u8, 0x30) == 5)) {
                F(u16, 0xC) = v;
                F(u8, 0x18) = F(u8, 0x30);
            } else {
                F(u16, 0x24) = 0xC023;
                F(s8, 0x30) = 0;
                res = 3;
                arg3[1] = 4;
                while (len > 0) {
                    len--;
                    if (rd8_804012E0(arg0) == -1) {
                        return -1;
                    }
                }
            }
        } else {
            u16 a = F(u16, 0x24);
            u16 b = F(u16, 0xC);
            if (a != b || (a == 0xC223 && F(s8, 0x30) != F(s8, 0x18))) {
                F(u16, 0x24) = b;
                res = 3;
                F(u8, 0x30) = F(u8, 0x18);
            }
        }
        if (res == 2) {
            set_ppp_auth_protocol__6TLobbyFUs(F(u16, 0x24));
        }
        break;
    case 5:
        F(u32, 0x28) = rd32_804012E0(arg0);
        len -= 4;
        if (F(u32, 0x28) == 0 || M2C_FIELD(arg1, u32 *, 0x5C) == M2C_FIELD(arg1, u32 *, 0x28)) {
            get_time_ms__6TLobbyFPv(&t);
            res = 3;
            F(u32, 0x28) += t;
        }
        break;
    case 7:
        if (!(F(s16, 0) & 0x80)) {
            res = 4;
        }
        break;
    case 8:
        if (lbl_805D7A7A != 0) {
            res = 4;
        } else if (!(F(s16, 0) & 0x100)) {
            res = 4;
        }
        break;
    case 0:
        res = 4;
        break;
    default:
        res = 4;
        break;
    }
    if (arg3[0] > 8 || !(F(s16, 0) & (1 << arg3[0]))) {
        res = 4;
    }
    if (len < 0) {
        return -1;
    }
    if (arg4 == 0 && len > 0) {
        while (len-- > 0) {
            if (rd8_804012E0(arg0) == -1) {
                return -1;
            }
        }
    }
    return res;
}

s32 configure_mode_by_type__6TLobbyFPvs(Cfg_804019A8 *c, s16 type) {
    if (type == 0) {
        c->flags |= 8;
        c->mode = 0xC023;
    } else if (type == 1) {
        c->flags &= ~8;
        c->b19 = 0;
    } else if (type == 2) {
        c->flags |= 8;
        c->mode = 0xC223;
        c->b18 = 5;
        c->b19 = 0;
    } else if (type == 4) {
        c->flags |= 8;
        c->mode = 0xC223;
        c->b18 = 5;
        c->b19 = 1;
    } else {
        return 1;
    }
    return 0;
}

void init_net_state_c__6TLobbyFv(void) {
    TLobby__sub_803F79BC((void *) (&lbl_805C04A8.value));
}

typedef char RecoveredGlobal_80401A90_lbl_805C04A8_size[sizeof(RecoveredGlobal_80401A90_lbl_805C04A8) == 0x30 ? 1 : -1];
s32 init_net_subsystem_block__6TLobbyFv(void) {
    init_net_buffer_desc__6TLobbyFPv((void *) (&(*(RecoveredGlobal_80401A90_lbl_805C04A8 *)&lbl_805C04A8).value));
    return 0;
}

struct Ent_80401B20 { u8 *p0; u16 h4; };
struct G_80401B20 { s32 f0; s32 f4; s32 f8; Ent_80401B20 *pC; };
#pragma opt_propagation off
Ent_80401B20 *TLobby__sub_80401B20(void *src, u16 n) {
    G_80401B20 *g = (G_80401B20 *)&lbl_805C04A8;
    Ent_80401B20 *t = g->pC;
    Ent_80401B20 *e;
    t->p0 = (u8 *)t + ((g->f0 + 0x83) & ~3);
    e = t;
    TLobby__sub_803F9F04(e->p0, src, n);
    e->h4 = n;
    return e;
}
#pragma opt_propagation reset

u8 *alloc_from_buffer__6TLobbyFPvs(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1) {
    s32 temp_r6;
    if (arg0 != NULL) {
        temp_r6 = arg0->field_0;
        if ((s32) (temp_r6 - (u32)(((u8 *)(arg0) + 8))) >= arg1) {
            arg0->field_0 = temp_r6 - arg1;
            arg0->field_4 += arg1;
            return (unsigned char *) (arg0);
        }
    }
    return NULL;
}

void TLobby__sub_80401CAC(Outer_80401CAC *o, u16 v) {
    if (o == NULL || o->p == NULL) return;
    if (v == 0) return;
    if (o->p->f4 < v) return;
    o->p->f4 = v;
}

u16 get_field_4__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, u16 *, 4);
}

typedef struct B_803FADA0 Ent_80401CE8;
struct G_80401CE8 { s32 f0; u8 *f4; u8 pad8[2]; s16 hA; };
#pragma push
#pragma opt_propagation off
Ent_80401CE8 *init_net_buffer_entry__6TLobbyFUs(u16 idx) {
  G_80401CE8 *g = (G_80401CE8 *)&lbl_805C04A8;
  Ent_80401CE8 *t = (Ent_80401CE8 *) (g->f4 + ((idx * g->hA) * ((((4 & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu)));
  Ent_80401CE8 *e;
  e = (Ent_80401CE8 *) (g->f4 + ((idx * g->hA) * ((((4 & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu)));
  e->buf = ((u8 *) t) + ((g->f0 + 0x83) & (~3));
  e->len = 0xFFFFFFFFu * 0;
  return e;
  e = t;
}
#pragma pop

void init_md5_state__6TLobbyFPv(u8 *arg0) {
    struct Fields_arg0 { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; };
    ((Fields_arg0*)arg0)->field_14 = 0;
    ((Fields_arg0*)arg0)->field_10 = 0;
    ((Fields_arg0*)arg0)->field_0 = 0x67452301;
    ((Fields_arg0*)arg0)->field_4 = 0xEFCDAB89;
    ((Fields_arg0*)arg0)->field_8 = 0x98BADCFE;
    ((Fields_arg0*)arg0)->field_C = 0x10325476;
}

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
inline void Decode_80401FE8(u32 *output, u8 *input, u32 len) {
    u32 i, j;
    for (i = 0, j = 0; j < len; i++, j += 4) {
        output[i] = ((u32)input[j]) | (((u32)input[j + 1]) << 8) | (((u32)input[j + 2]) << 16) | (((u32)input[j + 3]) << 24);
    }
}
void MD5Transform(u32 *state, u8 *block) {
    u32 a = state[0], b = state[1], c = state[2], d = state[3], x[16];
    Decode_80401FE8(x, block, 64);
    FF_80401FE8(a, b, c, d, x[0], S11_80401FE8, 0xd76aa478);
    FF_80401FE8(d, a, b, c, x[1], S12_80401FE8, 0xe8c7b756);
    FF_80401FE8(c, d, a, b, x[2], S13_80401FE8, 0x242070db);
    FF_80401FE8(b, c, d, a, x[3], S14_80401FE8, 0xc1bdceee);
    FF_80401FE8(a, b, c, d, x[4], S11_80401FE8, 0xf57c0faf);
    FF_80401FE8(d, a, b, c, x[5], S12_80401FE8, 0x4787c62a);
    FF_80401FE8(c, d, a, b, x[6], S13_80401FE8, 0xa8304613);
    FF_80401FE8(b, c, d, a, x[7], S14_80401FE8, 0xfd469501);
    FF_80401FE8(a, b, c, d, x[8], S11_80401FE8, 0x698098d8);
    FF_80401FE8(d, a, b, c, x[9], S12_80401FE8, 0x8b44f7af);
    FF_80401FE8(c, d, a, b, x[10], S13_80401FE8, 0xffff5bb1);
    FF_80401FE8(b, c, d, a, x[11], S14_80401FE8, 0x895cd7be);
    FF_80401FE8(a, b, c, d, x[12], S11_80401FE8, 0x6b901122);
    FF_80401FE8(d, a, b, c, x[13], S12_80401FE8, 0xfd987193);
    FF_80401FE8(c, d, a, b, x[14], S13_80401FE8, 0xa679438e);
    FF_80401FE8(b, c, d, a, x[15], S14_80401FE8, 0x49b40821);
    GG_80401FE8(a, b, c, d, x[1], S21_80401FE8, 0xf61e2562);
    GG_80401FE8(d, a, b, c, x[6], S22_80401FE8, 0xc040b340);
    GG_80401FE8(c, d, a, b, x[11], S23_80401FE8, 0x265e5a51);
    GG_80401FE8(b, c, d, a, x[0], S24_80401FE8, 0xe9b6c7aa);
    GG_80401FE8(a, b, c, d, x[5], S21_80401FE8, 0xd62f105d);
    GG_80401FE8(d, a, b, c, x[10], S22_80401FE8, 0x2441453);
    GG_80401FE8(c, d, a, b, x[15], S23_80401FE8, 0xd8a1e681);
    GG_80401FE8(b, c, d, a, x[4], S24_80401FE8, 0xe7d3fbc8);
    GG_80401FE8(a, b, c, d, x[9], S21_80401FE8, 0x21e1cde6);
    GG_80401FE8(d, a, b, c, x[14], S22_80401FE8, 0xc33707d6);
    GG_80401FE8(c, d, a, b, x[3], S23_80401FE8, 0xf4d50d87);
    GG_80401FE8(b, c, d, a, x[8], S24_80401FE8, 0x455a14ed);
    GG_80401FE8(a, b, c, d, x[13], S21_80401FE8, 0xa9e3e905);
    GG_80401FE8(d, a, b, c, x[2], S22_80401FE8, 0xfcefa3f8);
    GG_80401FE8(c, d, a, b, x[7], S23_80401FE8, 0x676f02d9);
    GG_80401FE8(b, c, d, a, x[12], S24_80401FE8, 0x8d2a4c8a);
    HH_80401FE8(a, b, c, d, x[5], S31_80401FE8, 0xfffa3942);
    HH_80401FE8(d, a, b, c, x[8], S32_80401FE8, 0x8771f681);
    HH_80401FE8(c, d, a, b, x[11], S33_80401FE8, 0x6d9d6122);
    HH_80401FE8(b, c, d, a, x[14], S34_80401FE8, 0xfde5380c);
    HH_80401FE8(a, b, c, d, x[1], S31_80401FE8, 0xa4beea44);
    HH_80401FE8(d, a, b, c, x[4], S32_80401FE8, 0x4bdecfa9);
    HH_80401FE8(c, d, a, b, x[7], S33_80401FE8, 0xf6bb4b60);
    HH_80401FE8(b, c, d, a, x[10], S34_80401FE8, 0xbebfbc70);
    HH_80401FE8(a, b, c, d, x[13], S31_80401FE8, 0x289b7ec6);
    HH_80401FE8(d, a, b, c, x[0], S32_80401FE8, 0xeaa127fa);
    HH_80401FE8(c, d, a, b, x[3], S33_80401FE8, 0xd4ef3085);
    HH_80401FE8(b, c, d, a, x[6], S34_80401FE8, 0x4881d05);
    HH_80401FE8(a, b, c, d, x[9], S31_80401FE8, 0xd9d4d039);
    HH_80401FE8(d, a, b, c, x[12], S32_80401FE8, 0xe6db99e5);
    HH_80401FE8(c, d, a, b, x[15], S33_80401FE8, 0x1fa27cf8);
    HH_80401FE8(b, c, d, a, x[2], S34_80401FE8, 0xc4ac5665);
    II_80401FE8(a, b, c, d, x[0], S41_80401FE8, 0xf4292244);
    II_80401FE8(d, a, b, c, x[7], S42_80401FE8, 0x432aff97);
    II_80401FE8(c, d, a, b, x[14], S43_80401FE8, 0xab9423a7);
    II_80401FE8(b, c, d, a, x[5], S44_80401FE8, 0xfc93a039);
    II_80401FE8(a, b, c, d, x[12], S41_80401FE8, 0x655b59c3);
    II_80401FE8(d, a, b, c, x[3], S42_80401FE8, 0x8f0ccc92);
    II_80401FE8(c, d, a, b, x[10], S43_80401FE8, 0xffeff47d);
    II_80401FE8(b, c, d, a, x[1], S44_80401FE8, 0x85845dd1);
    II_80401FE8(a, b, c, d, x[8], S41_80401FE8, 0x6fa87e4f);
    II_80401FE8(d, a, b, c, x[15], S42_80401FE8, 0xfe2ce6e0);
    II_80401FE8(c, d, a, b, x[6], S43_80401FE8, 0xa3014314);
    II_80401FE8(b, c, d, a, x[13], S44_80401FE8, 0x4e0811a1);
    II_80401FE8(a, b, c, d, x[4], S41_80401FE8, 0xf7537e82);
    II_80401FE8(d, a, b, c, x[11], S42_80401FE8, 0xbd3af235);
    II_80401FE8(c, d, a, b, x[2], S43_80401FE8, 0x2ad7d2bb);
    II_80401FE8(b, c, d, a, x[9], S44_80401FE8, 0xeb86d391);
    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
    TUdpSocket__sub_803F9EE4(x, 0, sizeof(x));
}
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

u16 TLobby__sub_80402ADC(u8 *p) {
    u16 v = *p++;
    v <<= 8;
    v |= *p;
    return v;
}

u32 TLobby__sub_80402AFC(u8 *p) {
    u32 v = *p++;
    v <<= 8;
    v |= *p++;
    v <<= 8;
    v |= *p++;
    v <<= 8;
    v |= *p;
    return v;
}

u8 *TLobby__sub_80402B28(u8 *p, u16 v) {
    *p++ = v >> 8;
    *p++ = v;
    return p;
}

u8 *TLobby__sub_80402B3C(u8 *p, u32 v) {
    *p++ = v >> 24;
    *p++ = v >> 16;
    *p++ = v >> 8;
    *p++ = v;
    return p;
}

void init_net_block_620__6TLobbyFv(void) {
    TLobby__sub_803F778C((void *) (&lbl_805C0620.value));
}

typedef char RecoveredGlobal_80402B88_lbl_805C0620_size[sizeof(RecoveredGlobal_80402B88_lbl_805C0620) == 0x18 ? 1 : -1];
s32 init_net_block_620_secondary__6TLobbyFv(void) {
    init_net_block_620_params__6TLobbyFPv((void *) (&(*(RecoveredGlobal_80402B88_lbl_805C0620 *)&lbl_805C0620).value));
    return 0;
}

s32 mark_ready__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x38) = 2;
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 0x20);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x20);
    return 0;
}

void set_active__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x38) = 1;
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 0x10);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x10);
    M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD(arg0, u8 *, 0x3C);
}

typedef char RecoveredGlobal_804050DC_lbl_805C18A0_size[sizeof(RecoveredGlobal_804050DC_lbl_805C18A0) == 0x10 ? 1 : -1];

s32 TLobby__sub_80403168(u8 *arg0, u8 *arg1, u8 *arg2) {
    Names_80403168 *g;
    u8 **p;
    u32 n;
    u32 m;
    p = *(u8 ***)(arg2 + 0x30);
    g = &lbl_805C04D8;
    n = str_length__6TLobbyFi((s32)(arg0));
    if (n >= 0x80) {
        n = 0x7F;
    }
    TLobby__sub_803F9F04(g->a, arg0, n);
    g->a[n] = 0;
    m = str_length__6TLobbyFi((s32)(arg1));
    if (m >= 0x80) {
        m = 0x7F;
    }
    TLobby__sub_803F9F04(g->b, arg1, m);
    g->b[m] = 0;
    p[0] = g->a;
    p[1] = g->b;
    return 0;
}

void reset_connection_state__6TLobbyFPv(u8 *arg0) {
    struct Fields_arg0 { u8 field_0; u8 pad_1[1]; s8 field_2; u8 pad_3[45]; u32 field_30; };
    u8 temp_r0;
    if ((u32) ((Fields_arg0*)arg0)->field_30 != 0U) {
        ((Fields_arg0*)arg0)->field_2 = 0;
        temp_r0 = ((Fields_arg0*)arg0)->field_0;
        if ((s32) temp_r0 != 2) {
            if ((s32) temp_r0 < 2) {
                if ((s32) temp_r0 != 0) {
                    if ((s32) temp_r0 < 0) {
                        return;
                    }
                    goto block_10;
                }
            } else if ((s32) temp_r0 < 7) {
                if ((s32) temp_r0 < 5) {
                    return;
                }
                goto block_10;
            }
        } else {
            TLobby__sub_80405304((void *)((void *) ((u8 *)(arg0) + 0x10)));
block_10:
            ((Fields_arg0*)arg0)->field_0 = 0U;
        }
    }
}

void handle_request_timeout__6TLobbyFPv(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if ((u8) M2C_FIELD(arg0, u8 *, 3) != 0) {
        M2C_FIELD(temp_r4, M2C_UNK **, 8) = lbl_8047FEB8;
        TLobby__sub_803FE658((u8 *)((void *) (arg0)));
        return;
    }
    M2C_FIELD(temp_r4, M2C_UNK **, 8) = lbl_8047FEC8;
    update_connection_state__6TLobbyFi((int) (M2C_FIELD(arg0, s32 *, 0xC) + 4));
    M2C_FIELD(arg0, s16 *, 8) = 1;
}

s32 TLobby__sub_804036FC(u8 *arg0) {
    if (TLobby__sub_803F811C(arg0) != 0) {
        return -1;
    }
    return 0;
}

typedef char RecoveredGlobal_80403D28_lbl_805C0638_size[sizeof(RecoveredGlobal_80403D28_lbl_805C0638) == 0xA0 ? 1 : -1];

s32 TLobby__sub_80403730(u8 *dst, unsigned short n) {
  u8 buf;
  u16 st;
  while (((u16) n) != 0)
  {
    if ((TLobby__sub_803F812C(1, &buf, &st) != 0) && (st != 1))
    {
      return -1;
    }
    *(dst++) = buf;
    n--;
  }
  return 0;
}

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_804037B0(s32 arg0, u16 arg1) {
    if (TLobby__sub_803F81C4(arg1, arg0) != 0) {
        return -1;
    }
    return 0;
}
#pragma pop

extern u8 lbl_805C0038[];
void TLobby__sub_804061FC(int);
s32 TLobby__sub_804037F0(void) {
    TLobby__sub_803FD85C(lbl_805C0038 + 0xD4);
    TLobby__sub_803FD85C(lbl_805C0038 + 0x6C);
    TLobby__sub_803FD85C(lbl_805C0038 + 0x38);
    TLobby__sub_803FD85C(lbl_805C0038 + 0xA0);
    TLobby__sub_803FD85C(lbl_805C0038 + 4);
    lbl_805C0038[0] = 0;
    if (TLobby__sub_80405140() == 0) {
        TLobby__sub_804061FC(0);
    }
    return 0;
}

s16 TLobby__sub_803FED78(u8 *);

s32 TLobby__sub_80403864(void) {
    u8 *g = lbl_805C0038;
    u8 *p = g + 0xD4;
    s16 st = lbl_805D7A7C;
    u8 *q;

    if ((st == 6 || st == 0) && TLobby__sub_803FF304(p) != 0) {
        return -0x11;
    }
    q = g + 0x6C;
    if (TLobby__sub_803FF304(q) != 0) {
        return -0x11;
    }
    if (TLobby__sub_803FED78(q) != 0) {
        return -0x11;
    }
    return 0;
}

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
extern u8 lbl_805C0038[];

s32 TLobby__sub_804038F4(s32 arg0, s32 arg1, s32 arg2) {
    s16 clear_flag_bit4__6TLobbyFiPv(M2C_UNK arg0, u8 *arg1);
    s16 TLobby__sub_803FA17C(u8 *arg0, s32 arg1);
    u8 *temp_r31;
    u8 *temp_r6;

    temp_r6 = lbl_805C0038 + 0xD4;
    temp_r31 = M2C_FIELD(temp_r6, u8 **, 0x30);
    set_flags_and_state__6TLobbyFPv(temp_r6);
    if (clear_flag_bit4__6TLobbyFiPv(arg0, temp_r31) != 0) {
        return -0x11;
    }
    if (clear_flag_bit4__6TLobbyFiPv(arg0, temp_r31 + 0x34) != 0) {
        return -0x11;
    }
    if (TLobby__sub_803FA17C(temp_r31, arg1) != 0) {
        return -0x11;
    }
    if (TLobby__sub_803FA17C(temp_r31 + 0x34, arg2) != 0) {
        return -0x11;
    }
    return 0;
}

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
extern u8 lbl_805C0038[];

s32 TLobby__sub_804039C8(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s16 set_socket_flags_by_mode__6TLobbyFsPv(s16 arg0, u8 *arg1);
    s16 TLobby__sub_803FF2CC(u8 *arg0, s32 arg1);
    s16 set_filter_id__6TLobbyFPvi(u8 *arg0, s32 arg1);
    s16 set_filter_index__6TLobbyFPvi(u8 *arg0, s32 arg1);
    s16 set_target_id__6TLobbyFPvi(u8 *arg0, s32 arg1);
    s16 set_target_index__6TLobbyFPvi(u8 *arg0, s32 arg1);
    s16 set_target_slot__6TLobbyFPvi(u8 *arg0, s32 arg1);
    u8 *temp_r31;
    u8 *temp_r10;
    temp_r10 = lbl_805C0038 + 0x6C;
    temp_r31 = M2C_FIELD(temp_r10, u8 **, 0x30);
    set_flags_and_state__6TLobbyFPv(temp_r10);
    if (set_socket_flags_by_mode__6TLobbyFsPv(arg0, temp_r31) != 0) {
        return -0x11;
    }
    if (set_socket_flags_by_mode__6TLobbyFsPv(arg0, temp_r31 + 0x4C) != 0) {
        return -0x11;
    }
    if (TLobby__sub_803FF2CC(temp_r31, arg1) != 0) {
        return -0x11;
    }
    if (set_target_slot__6TLobbyFPvi(temp_r31, arg3) != 0) {
        return -0x11;
    }
    if (set_filter_id__6TLobbyFPvi(temp_r31, arg4) != 0) {
        return -0x11;
    }
    if (set_target_id__6TLobbyFPvi(temp_r31 + 0x4C, arg2) != 0) {
        return -0x11;
    }
    if (set_filter_index__6TLobbyFPvi(temp_r31 + 0x4C, arg5) != 0) {
        return -0x11;
    }
    if (set_target_index__6TLobbyFPvi(temp_r31 + 0x4C, arg6) != 0) {
        return -0x11;
    }
    return 0;
}

s32 TLobby__sub_80403B04(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *g = lbl_805C0038;
    u8 *c = g + 0xA0;
    s16 r;
    s16 st;
    TLobby__sub_803FC684(arg0, arg1, c);
    r = TLobby__sub_803FC1CC(c, arg2);
    if (r < 0) {
        if (r == -0x12) {
            return -0x12;
        }
        return -0x11;
    }
    set_flags_and_state__6TLobbyFPv(g + 0x6C);
    st = lbl_805D7A7C;
    if (st == 6 || st == 0) {
        set_flags_and_state__6TLobbyFPv(g + 0xD4);
    }
    return 0;
}

s32 TLobby__sub_80403BA8(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *g = lbl_805C0038;
    u8 *c = g + 0x38;
    s16 r;
    s16 st;
    if (lbl_805D7A90 & 1) {
        TLobby__sub_80403168(arg0, arg1, c);
        TLobby__sub_803FE658(c);
    }
    r = TLobby__sub_80402BB4(c, arg2);
    if (r < 0) {
        if (r == -0x12) {
            return -0x12;
        }
        return -0x11;
    }
    set_flags_and_state__6TLobbyFPv(g + 0x6C);
    st = lbl_805D7A7C;
    if (st == 6 || st == 0) {
        set_flags_and_state__6TLobbyFPv(g + 0xD4);
    }
    return 0;
}

M2C_UNK TLobby__sub_803F808C();
s16 TLobby__sub_80400744(int, void *);
extern s32 lbl_805D7A90;

s32 TLobby__sub_80403C60(u8 *arg0) {
    s16 wait_for_connection__6TLobbyFPv(int);
    u8 *temp_r31;
    u8 *var_r3;
    u8 *temp_r3;

    TLobby__sub_803F808C();
    temp_r31 = (u8 *)lbl_805C0038 + 4;
    if (TLobby__sub_80400744((int) (temp_r31), (void *) (arg0)) != 0) {
        return -0x11;
    }
    if (wait_for_connection__6TLobbyFPv((int) (temp_r31)) != 0) {
        return -0x11;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 6) == 4) {
        var_r3 = M2C_FIELD(temp_r31, u8 **, 0x30);
        temp_r3 = var_r3;
        var_r3 += 0x34;
        if (lbl_805D7A90 & 2) {
            var_r3 = temp_r3;
        }
        if (M2C_FIELD(var_r3, u16 *, 0x24) == 0xC023) {
            M2C_FIELD(arg0, u16 *, 6) = 0x80U;
        }
        if (M2C_FIELD(var_r3, u16 *, 0x24) == 0xC223) {
            M2C_FIELD(arg0, u16 *, 6) = 0x82U;
        }
    }
    return 0;
}

s32 TLobby__sub_80403D28(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r31;
    M2C_FIELD(&lbl_805C0638.value, s8 *, 0) = 0;
    M2C_FIELD(&lbl_805C0638.value, s8 *, 0x14) = 0;
    M2C_FIELD(&lbl_805C0638.value, s8 *, 0x28) = 0;
    M2C_FIELD(&lbl_805C0638.value, s8 *, 0x3C) = 0;
    M2C_FIELD(&lbl_805C0638.value, s8 *, 0x50) = 0;
    M2C_FIELD(&lbl_805C0638.value, s8 *, 0x64) = 0;
    M2C_FIELD(&lbl_805C0638.value, s8 *, 0x78) = 0;
    M2C_FIELD(&lbl_805C0638.value, s8 *, 0x8C) = 0;
    temp_r31 = TLobby__sub_80403DA8((void *) (arg1), (void *) (arg2), (void *) (arg3), (void *) (arg4), (void *) (arg5), (void *) (arg6), (void *) (arg7));
    TLobby__sub_804062A0((int) (0x82));
    return temp_r31;
}

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
s16 TLobby__sub_80403F4C(void *ov, Strm_80405A74 **spp) {
    s16 get_field_4__6TLobbyFPv(u8 *arg0);
    A_80403F4C a;
    B_80403F4C b;
    Ent_80403F4C *e;
    u8 c;

    TLobby__sub_803FEA88(&a);
    TLobby__sub_804053B8(&b, pp);
    c = a.count;
    if (c > o->max) {
        o->n30++;
        if (o == NULL) {
            return 0;
        }
        o->flags |= 1;
        return 0;
    }
    e = &o->ents[c];
    o->cur = c;
    o->flags &= ~1;
    a.count = 6;
    e->a = a;
    e->b = b;
    *pp = TLobby__sub_8040555C(&b, *pp, 0);
    *pp = GXLoadTexObjPreLoaded(&a, *pp, 1);
    o->n28++;
    return get_field_4__6TLobbyFPv(*pp);
}
#undef o
#undef pp

void TLobby__sub_80405000(u32 arg0);

void TLobby__sub_804050DC(s16 arg0);

typedef char RecoveredGlobal_804050EC_lbl_805C18A0_size[sizeof(RecoveredGlobal_804050EC_lbl_805C18A0) == 0x10 ? 1 : -1];
void init_net_block_18A0__6TLobbyFv(void);

typedef char RecoveredGlobal_80405114_lbl_805C18A0_size[sizeof(RecoveredGlobal_80405114_lbl_805C18A0) == 0x10 ? 1 : -1];
s32 run_net_init_step__6TLobbyFv(void);

s16 TLobby__sub_80405140(void);

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
    TLobby__sub_80402B28(p, code);                                           \
    u = t;                                                                   \
    if (u == NULL) {                                                         \
        M2C_FIELD(G, s16 *, 0x142)++;                                        \
        return;                                                              \
    }                                                                        \
    if (TLobby__sub_80401BCC(&u, &lobby_ppp_read_buf, 2) == 2) {                   \
        TLobby__sub_80402ADC(&lobby_ppp_read_buf);                                 \
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

void TLobby__sub_80419DDC(void *);
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
s32 TLobby__sub_803F9EC4(void * _w0, void * _w1, int _w2);
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);

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

extern G_8040A45C lbl_805C1AF0;

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
s32 shutdown_ipv6__6TLobbyFv(void);

void TLobby__sub_8040FFF8(void);
s32 init_ipv6_interfaces__6TLobbyFv(void);

#pragma push
#pragma opt_common_subs on
void TLobby__sub_80419DDC(void *);
void TLobby__sub_80411334(void);
void tick_entry_timers__6TLobbyFv(void);
s32 TLobby__sub_8041112C(void);

struct G_8041118C {
    s16 n0; s16 n1; s16 n2; u8 pad6[0xE]; s16 n14; u8 pad16[2];
    void *p18; void *p1C; void *p20; void *p24;
};

void init_udp_socket_config__6TLobbyFPv(void *);
void TUdpSocket__sub_80419E64(int, int, void (*)(void));

#define g ((G_8041118C *)&lbl_805C1BB8)
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
s32 get_ipv6_addr_scope__6TLobbyFPv(u8 *arg0);
#pragma pop

#pragma push
#pragma opt_common_subs on
s16 *get_valid_entry__6TLobbyFs(s16 arg0);
#pragma pop

s32 TLobby__sub_80414870(u8 *arg0);

s16 TLobby__sub_804148A8(u8 *arg0);

s32 NetIPv6IsMulticast(u8 *arg0);

s32 is_zero_16_bytes__6TLobbyFPv(u8 *arg0);

s32 compare_sockaddr_bytes__6TLobbyFii(s32 arg0, s32 arg1);

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
void TLobby__sub_80419DDC(void *);
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
extern G_80415B38 lbl_805C1C08;
void TLobby__sub_80415AEC(void);

struct Arg2_80415B38 { u8 *addr; u8 *val; };
typedef struct Ent_80418670 { u8 pad0[3]; u8 f3; u8 pad4[2]; s16 f6; u8 pad8[0xC]; u8 f14[0x10]; } Ent_80418670;
M2C_UNK TLobby__sub_80411604(int, int, void *);
Ent_80418670 *TLobby__sub_80418670(void *arg0);
void TUdpSocket__sub_80419E64(int, int, void (*)(void));
void update_resend_and_retry__6TLobbyFv(void);

s32 TLobby__sub_80415B38(void);

void update_resend_and_retry__6TLobbyFv(void);

s32 TLobby__sub_80416008(s32 arg0, s32 arg1);

u8 *alloc_free_entry__6TLobbyFv();
s16 TLobby__sub_804145D4(void *, void *);
M2C_UNK TLobby__sub_804147C8(void *, int);
s32 TLobby__sub_80418158(int, void *, void *);

s32 TLobby__sub_804160BC(s32 arg0);

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
s32 TLobby__sub_80417D1C(u8 *arg0);
s32 TLobby__sub_80417E60(u8 *arg0);
Ent_80418670 *TLobby__sub_80418670(void *arg0);

void update_resend_timers__6TLobbyFv(void);

typedef struct Ent_80416678 { u8 pad0[0xC]; u8 fC; } Ent_80416678;
s32 TLobby__sub_80416678(u8 *arg0, s32 n, u8 *arg2, s32 arg3, s16 *arg4, s16 arg5);

void TLobby__sub_80406EB8(void *);
u8 *TLobby__sub_80406F0C(void *);

s32 find_nd_lladdr_option__6TLobbyFPviPvPv(u8 *o, s32 len, u8 **out, s16 *outlen);

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
s32 TLobby__sub_803F9EC4(void *, void *, int);
u8 *alloc_free_entry__6TLobbyFv();
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803F9F04(void *, void *, int);
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

s32 TLobby__sub_80416994(Msg_80416994 *msg, u8 *name, s16 len, s32 arg3, s32 arg4, s32 id);
#pragma pop

void TLobby__sub_80406FD8(void *, void *, s32);
s16 TLobby__sub_80417294(void *, u32, u8 *, void *);
s16 TLobby__sub_80417494(void *, u8 *, void *);
s16 TLobby__sub_804171BC(u8 *arg0, u8 *arg1, s32 arg2, void *arg3);

typedef struct Hdr_804177A0 {
    s16 len;
    u8 pad[2];
    u8 data[8];
} Hdr_804177A0;
void TLobby__sub_80406FD8(void *, void *, s32);
s16 TLobby__sub_80417868(void *, u32, s32, s32);
s16 TLobby__sub_804177A0(u8 *o, s32 arg1, s32 arg2, s32 arg3);

typedef struct Arg_80417D1C { u8 *p; s32 v; } Arg_80417D1C;
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
void release_entry__10TUdpSocketFPv(void *e_);
u8 *alloc_free_entry__6TLobbyFv();
M2C_UNK TLobby__sub_80411604(int, int, void *);
s16 TLobby__sub_804137FC(void *, int);
s32 TLobby__sub_80417FA8(int, void *, void *, void *, int);
M2C_UNK init_default_packet_header__6TLobbyFPvPv(void *, void *);
Ent_80418670 *TLobby__sub_80418670(void *arg0);

s32 TLobby__sub_80417D1C(u8 *arg0);

typedef struct Arg_80417E60 { u8 *p; s32 v; } Arg_80417E60;
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
void release_entry__10TUdpSocketFPv(void *e_);
u8 *alloc_free_entry__6TLobbyFv();
M2C_UNK TLobby__sub_80411604(int, int, void *);
s16 TLobby__sub_804137FC(void *, int);
s32 TLobby__sub_80417FA8(int, void *, void *, void *, int);
Ent_80418670 *TLobby__sub_80418670(void *arg0);

s32 TLobby__sub_80417E60(u8 *arg0);

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

E_804184DC *find_or_alloc_cache_entry__6TLobbyFPvPvs(u8 *addr, u8 *key, s16 klen);

typedef struct G_80418670 { u8 pad0[4]; s16 f4; u8 pad6[0xA]; Ent_80418670 *f10; } G_80418670;
s32 TLobby__sub_803F9EC4(void *, void *, int);

Ent_80418670 *TLobby__sub_80418670(void *arg0);

struct Ent_804188E4 { u8 pad0[3]; u8 f3; s16 f4; u8 pad6[0x32]; };
struct Rec_804188E4 { u8 pad0[3]; u8 f3; u8 pad4[0xC]; Ent_804188E4 *f10; u8 pad14[0x34]; };
struct G_804188E4 { s16 n0; s16 n2; u8 pad4[4]; Ent_804188E4 *e8; Rec_804188E4 *rC; u8 pad10[0x14]; s16 f24; };
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Rec_804188E4 *find_804188E4(G_804188E4 *g, Ent_804188E4 *e);

Ent_804188E4 *alloc_or_evict_entry_slot__6TLobbyFiiiiiPv(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, Ent_804188E4 *best);

#pragma pop

void apply_default_params__6TLobbyFPv(u8 *arg0);

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
void TLobby__sub_80419DDC(void *);
void update_timeout_entries__6TLobbyFv(void);
extern G_80418ACC lbl_805C1C38;
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
void TLobby__sub_80419DDC(void *);
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
extern RecoveredGlobal_8041E178_lbl_805C1D48 lbl_805C1D48;

#pragma push
#pragma opt_propagation off
s32 TLobby__sub_8041DBD4(s16 arg0, s32 arg1, s32 arg2, s32 arg3);
#pragma pop

s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);
s32 get_field_d8__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_8041E178_lbl_805C1D48 lbl_805C1D48;

#pragma push
#pragma opt_propagation off
s32 get_tcp_stat__6TLobbyFsPvPvPvPv(s16 arg0, s16 *arg1, s16 *arg2, s32 *arg3, s32 *arg4);
#pragma pop

typedef char RecoveredGlobal_8041E178_lbl_805C1D48_size[sizeof(RecoveredGlobal_8041E178_lbl_805C1D48) == 0xA8 ? 1 : -1];
s32 mark_connection_closed__6TLobbyFs(s16 arg0);

void clear_position__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_8041A9AC(int);
extern RecoveredGlobal_8041E178_lbl_805C1D48 lbl_805C1D48;

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
