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

extern "C" {
s32 TLobby__sub_803FA150(M2C_UNK arg0, u8 *arg1);
extern RecoveredGlobal_803F8AA0_lbl_805BA5C0 lbl_805BA5C0;
void TLobby__sub_803F8AA0(u8 *arg0);
extern RecoveredGlobal_803F8A0C_lbl_805B9534 lbl_805B9534;
void TLobby__sub_803F8A0C(u8 *arg0);
extern RecoveredGlobal_8041552C_lbl_805C1BE0 lbl_805C1BE0;
s16 TLobby__sub_8041552C(s16 arg0);
extern RecoveredGlobal_803FB110_lbl_805BFF68 lbl_805BFF68;
u8 *TLobby__sub_803FB110(void);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
void TLobby__sub_804050DC(s16 arg0);
extern RecoveredGlobal_803FD520_lbl_805C0310 lbl_805C0310;
extern s16 lbl_805D7A7A;
s16 TLobby__sub_803FD520(s16 arg0);
void TLobby__sub_804189AC(u8 *arg0);
extern RecoveredGlobal_803F895C_lbl_805AEEB0 lbl_805AEEB0;
void TLobby__sub_803F895C(u8 *arg0);
extern RecoveredGlobal_803F89A4_lbl_805B52D4 lbl_805B52D4;
extern RecoveredGlobal_803F89A4_lbl_805B5454 lbl_805B5454;
void TLobby__sub_803F89A4(u8 *arg0);
extern RecoveredGlobal_803F89DC_lbl_805B54BC lbl_805B54BC;
extern RecoveredGlobal_803F89DC_lbl_805B94BC lbl_805B94BC;
void TLobby__sub_803F89DC(u8 *arg0);
extern RecoveredGlobal_803F895C_lbl_805AEEB0 lbl_805AEEB0;
void TLobby__sub_803F8A28(u8 *arg0);
void TLobby__sub_80425B70(void);
void TLobby__sub_803F8AB8(void);
s32 OSGetTick();
void NetStoreTick(s32 *arg0);
extern RecoveredGlobal_803F94A0_lbl_805BF770 lbl_805BF770;
void TLobby__sub_803F94A0(u32 arg0);
M2C_UNK OSUnlockMutex();
M2C_UNK OSLockMutex();
s32 OSGetCurrentThread();
void NetStoreCurrentThread(s32 *arg0);
M2C_UNK OSYieldThread();
void NetYieldThread(void);
M2C_UNK OSResumeThread();
void TLobby__sub_803F9AA8(void);
s32 OSGetCurrentThread();
M2C_UNK OSSuspendThread();
void NetSuspendCurrentThread(void);
M2C_UNK OSCancelThread(void *);
s32 OSIsThreadTerminated();
void TLobby__sub_803F9AEC(s32 arg0);
M2C_UNK OSResumeThread();
void TLobby__sub_803F9B28(void);
void TAdSinglePlyChrSelectGC__sub_8039DC70(s32, s32);
s32 TQuestVmDownLoadServer__sub_8039DABC(s32, s32, s32);
s32 TLobby__sub_8039DAFC(void *, void *);
void TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
void strlen(s32);
M2C_UNK memmove();
void TLobby__sub_803F9EA4(void);
M2C_UNK memcmp();
M2C_UNK memset();
M2C_UNK memcpy();
s32 TLobby__sub_803FB634();
s32 TLobby__sub_803F9F24(u8 *arg0);
s32 TLobby__sub_803F9EC4(void *, void *, int);
void TUdpSocket__sub_803F9EE4(void *, int, int);
void TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_803FA17C(u8 *arg0, s32 arg1);
void TLobby__sub_803FA284(s32 arg0);
void TLobby__sub_803F7678(void);
void TLobby__sub_803F7A30(void);
void TLobby__sub_803FD0C0(void);
void TLobby__sub_80428374(void);
s32 TLobby__sub_803FAFDC(void);
s32 TLobby__sub_803FB358(void *);
void TLobby__sub_803FB184(u8 *arg0);
M2C_UNK TLobby__sub_803F76F0(void *);
extern RecoveredGlobal_803FC178_lbl_805C02D0 lbl_805C02D0;
void TLobby__sub_803FC178(void);
M2C_UNK TLobby__sub_803F76F4(void *);
extern RecoveredGlobal_803FC178_lbl_805C02D0 lbl_805C02D0;
s32 TLobby__sub_803FC1A0(void);
void TLobby__sub_803FE820(s32 arg0);
s32 TLobby__sub_803FF138(s16 arg0, u8 *arg1);
s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
s16 TLobby__sub_803FF304(u8 *arg0);
void TLobby__sub_803FF34C(u8 *arg0);
void TLobby__sub_803FF468(s32 arg0);
void TLobby__sub_803FD85C(void *);
void TLobby__sub_80400B34(u8 *arg0);
void TLobby__sub_80400B74(void);
M2C_UNK TLobby__sub_803F79BC(void *);
extern RecoveredGlobal_80401A68_lbl_805C04A8 lbl_805C04A8;
void TLobby__sub_80401A68(void);
M2C_UNK TLobby__sub_803F79C0(void *);
extern RecoveredGlobal_80401A68_lbl_805C04A8 lbl_805C04A8;
s32 TLobby__sub_80401A90(void);
void TLobby__sub_80401FA8(u8 *arg0);
M2C_UNK TLobby__sub_803F778C(void *);
extern RecoveredGlobal_80402B60_lbl_805C0620 lbl_805C0620;
void TLobby__sub_80402B60(void);
M2C_UNK TLobby__sub_803F7790(void *);
extern RecoveredGlobal_80402B60_lbl_805C0620 lbl_805C0620;
s32 TLobby__sub_80402B88(void);
void TLobby__sub_80403218(u8 *arg0);
s32 TLobby__sub_803F811C(void *);
s32 TLobby__sub_804036FC(u8 *arg0);
s32 TLobby__sub_80403DA8(void *, void *, void *, void *, void *, void *, void *);
s32 TLobby__sub_804062A0(s16);
extern RecoveredGlobal_80403D28_lbl_805C0638 lbl_805C0638;
s32 TLobby__sub_80403D28(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
M2C_UNK TLobby__sub_803F79AC(void *);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
void TLobby__sub_804050EC(void);
M2C_UNK TLobby__sub_803F79B0(void *);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
s32 TLobby__sub_80405114(void);
extern s32 lbl_805D7AC8;
s16 TLobby__sub_80405140(void);
void TLobby__sub_803F8A08(void *);
extern s16 lbl_805D7AF0;
s32 TLobby__sub_80406AE4(void);
s32 TUdpSocket__sub_80407508(void);
void TLobby__sub_804073B8(void);
s32 TLobby__sub_80407C60(s16, s32);
s32 TLobby__sub_804073D8(s16 arg0, s32 arg1);
s32 TLobby__sub_80407D98(s16, s32);
s32 TLobby__sub_804073F8(s16 arg0, s32 arg1);
s32 TLobby__sub_8040799C(s16, void *, void *);
void TLobby__sub_804074C8(s16 arg0, u8 *arg1, u8 *arg2);
s16 TLobby__sub_80407F20(s16, s16, s16, s16, s16, s32, s8, s32);
void TLobby__sub_804074E8(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s8 arg6, s32 arg7);
s32 TLobby__sub_8040878C(void);
void TLobby__sub_8040874C(void);
s16 TLobby__sub_8040881C(void);
void TLobby__sub_8040876C(void);
void TLobby__sub_803F8A9C(void *);
extern s16 lbl_805D7AF8;
s32 TLobby__sub_80409AA8(void);
s32 TLobby__sub_803F9EC4(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040C9E0(u8 *arg0, u8 *arg1);
u16 TLobby__sub_8040EC38(s32, s32, s8, void *, s16);
u16 TLobby__sub_80411040(void *, void *);
u16 TLobby__sub_8040D8F0(u8 *arg0, u8 *arg1, s8 arg2, u8 *arg3, s16 arg4);
s32 TLobby__sub_8040DA54(u8 *arg0, u8 *arg1);
s32 TLobby__sub_8040FDA0(u32, s16);
s32 TLobby__sub_8040DB34(u8 *arg0, s16 arg1);
s32 TLobby__sub_8040DB94(u8 *arg0);
s32 TLobby__sub_8040DBFC(u8 *arg0, u8 *arg1);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
u8 * TLobby__sub_8040F76C(u32, u32);
s32 TLobby__sub_8040F738(u32 arg0, u32 arg1);
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
s32 TLobby__sub_8040A19C(s16);
void TLobby__sub_804136AC(s16 arg0);
s32 TLobby__sub_8040A25C(s16);
void TLobby__sub_804136CC(s16 arg0);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s16 TLobby__sub_804148A8(u8 *arg0);
s32 NetIPv6IsMulticast(u8 *arg0);
s32 TLobby__sub_80414A0C(u8 *arg0);
s32 TLobby__sub_803F9EC4(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_80414B54(s32 arg0, s32 arg1);
s16 TLobby__sub_8041510C(void);
void TLobby__sub_804150EC(void);
void TLobby__sub_8041615C(void);
void TLobby__sub_804162A4(void);
void TLobby__sub_80415CE8(void);
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
void TUdpSocket__sub_804072C4(void *);
u8 *TLobby__sub_80407310();
s16 TLobby__sub_80413D78();
M2C_UNK TLobby__sub_80414764(void *, void *);
s32 TLobby__sub_80417FA8(int, void *, void *, void *, int);
s32 TLobby__sub_80416008(s32 arg0, s32 arg1);
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
void TLobby__sub_80419A00(void);
s32 TLobby__sub_8041D368(u8 *arg0);
u8 * TLobby__sub_8041B5C0(void *);
extern RecoveredGlobal_8041E178_lbl_805C1D48 lbl_805C1D48;
s32 TLobby__sub_8041E178(s16 arg0);
void strcat(u8);
void TLobby__sub_803F9D18(u8 arg0);
void strncmp(u8);
void TLobby__sub_803F9E24(u8 arg0);
void strcmp(u8);
void TLobby__sub_803F9E44(u8 arg0);
void strcpy(void *, void *);
void TLobby__sub_803F9E64(void *arg0, void *arg1);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s32 TLobby__sub_804112B8(s32 arg0, s32 arg1, s16 arg2);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s32 TLobby__sub_8041123C(s32 arg0, s32 arg1, s16 arg2);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s16 *TLobby__sub_8041471C(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s16 *TLobby__sub_8040FE9C(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s16 TLobby__sub_8040EF00(s16 arg0);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s16 TLobby__sub_80411ECC(s16 arg0);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s32 TLobby__sub_8040FE40(s16 arg0);
extern RecoveredGlobal_803F8930_lbl_805B4F84 lbl_805B4F84;
void TLobby__sub_803F8930(u8 *arg0);
extern RecoveredGlobal_803F8B7C_lbl_805BD66C lbl_805BD66C;
extern M2C_UNK lbl_805D7A58;
void TLobby__sub_803F8B7C(u8 *arg0);
s32 TLobby__sub_803FE6CC(void *, int, int, void *);
s32 TLobby__sub_803FE658(u8 *arg0);
void TLobby__sub_803FF430(u8 *arg0);
u8 *TLobby__sub_80401B8C(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1);
s32 TLobby__sub_803F81C4(u16, s32);
s32 TLobby__sub_804037B0(s32 arg0, u16 arg1);
void TLobby__sub_80405328(u8 *arg0);
s16 TLobby__sub_8040FCEC(u32);
s16 TLobby__sub_804136EC(s32);
s16 TLobby__sub_8040DABC(u8 *arg0);
void TLobby__sub_803F892C(void *);
s32 TLobby__sub_8041A0C0(u16);
extern RecoveredGlobal_8040DD68_lbl_805C1B38 lbl_805C1B38;
s32 TLobby__sub_8040DD68(void);
void TLobby__sub_803F8958(void *);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s32 TLobby__sub_8040ED28(void);
void TLobby__sub_803F895C(u8 *arg0);
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_8040EF00_lbl_805C1B60 lbl_805C1B60;
s32 TLobby__sub_8040ED70(void);
void TLobby__sub_803F87DC(void *);
s32 TLobby__sub_8041A0C0(u16);
extern RecoveredGlobal_8040FF0C_lbl_805C1B78 lbl_805C1B78;
s32 TLobby__sub_8040FF0C(void);
void TLobby__sub_803F89D8(void *);
extern RecoveredGlobal_80415650_lbl_805C1BF8 lbl_805C1BF8;
s32 TLobby__sub_80415650(void);
M2C_UNK TLobby__sub_803F8E9C();
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
void TLobby__sub_80419A34(void);
void TLobby__sub_803F94A0(u32 arg0);
void TUdpSocket__sub_803F95A4(int);
void TLobby__sub_803F95C4(int);
M2C_UNK TLobby__sub_803F95E4(int);
void TLobby__sub_803F9AEC(s32 arg0);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
s32 TLobby__sub_80419A7C(void);
s16 TLobby__sub_8041579C(void *);
s32 TLobby__sub_8041EB74(u8 *arg0);
s16 TLobby__sub_8041579C(void *);
s32 TLobby__sub_8041EBC4(u8 *arg0);
void TUdpSocket__sub_803F95A4(int _w0);
void TLobby__sub_803F95C4(int _w0);
s16 TLobby__sub_8040A2BC(void *, s16);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
s16 TLobby__sub_80409A3C(u8 *arg0, s16 arg1);
extern RecoveredGlobal_803F895C_lbl_805AEEB0 lbl_805AEEB0;
void TLobby__sub_803F88E4(RecoveredFields_803F88E4_arg0 *arg0);
void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);
s16 TLobby__sub_80415954(void *, int, int);
s32 TLobby__sub_8041ECA4(u8 *arg0);
void TLobby__sub_803FA248(s8 *arg0);
s32 TLobby__sub_803FE6CC(void *, int, int, void *);
void TLobby__sub_80405328(u8 *arg0);
void TLobby__sub_803FD958(u8 *arg0);
extern u16 lbl_805D7A60;
extern Ent_803F8D84 *lbl_805D7A64;
void TLobby__sub_803F8D84(u32 key);
void TLobby__sub_80401CAC(Outer_80401CAC *o, u16 v);
void TLobby__sub_804050DC(s16 arg0);
s32 TLobby__sub_803FAEA0(s32 cmd, s32 arg);
s32 TLobby__sub_803FC480(Obj_803FC480 *self);
u16 TLobby__sub_80402ADC(u8 *p);
extern u16 lbl_805D7A78;
void TLobby__sub_803FC144(u16 v);
u32 TLobby__sub_80402AFC(u8 *p);
u8 *TLobby__sub_80402B3C(u8 *p, u32 v);
void TLobby__sub_80405000(u32 arg0);
u8 *TLobby__sub_80402B28(u8 *p, u16 v);
extern Tbl_80408718 lbl_805C1AB0;
Ent_80408718 *TLobby__sub_80408718(void);
s32 TLobby__sub_80405304(void *arg0);
u16 TLobby__sub_80406BD8(void *, s16);
u16 TLobby__sub_8040ECEC(void *, s16);
M2C_UNK TLobby__sub_803FD74C(int);
s32 TLobby__sub_803FE658(u8 *arg0);
extern M2C_UNK lbl_8047FEB8[];
extern M2C_UNK lbl_8047FEC8[];
void TLobby__sub_80403298(u8 *arg0);
extern u16 lbl_805D7A60;
extern Ent_803F8D84 *lbl_805D7A64;
s32 TLobby__sub_803F8DBC(s32 size);
s64 OSGetTime();
void TLobby__sub_803F91D0(s32 *out);
s64 OSGetTime();
void TLobby__sub_803F9214(s32 *out);
extern u16 lbl_805D7A68;
extern Ent_803F9B48 *lbl_805D7A6C;
void TLobby__sub_803F9B48(u32 key);
extern u16 lbl_805D7A68;
extern Ent_803F9B48 *lbl_805D7A6C;
s32 OSGetCurrentThread();
s32 TLobby__sub_803F9C78(void);
void TLobby__sub_803FA2A8(P_803FA2A8 *o);
extern Cfg_803F87E0 lbl_805B3878;
extern u8 lbl_805B38A0[];
void TLobby__sub_803F87E0(Obj_803F87E0 *arg0);
void TLobby__sub_80426704(void);
void TLobby__sub_80426790(void);
void TLobby__sub_804267F0(void);
void TLobby__sub_80426894(void);
void TLobby__sub_80426998(void);
void TLobby__sub_80426A18(void);
void TLobby__sub_80426B88(void);
extern RecoveredGlobal_803F895C_lbl_805AEEB0 lbl_805AEEB0;
void TLobby__sub_803F8AD8(Desc_803F8AD8 *arg0);
s32 OSDisableInterrupts(void);
s32 OSRestoreInterrupts(s32);
void OSCancelAlarm(void *);
s32 OSSendMessage(void *, void *, s32);
void TLobby__sub_804259F0(void);
void TLobby__sub_80428358(void);
void TLobby__sub_804294C4(void);
extern Slot_803F8E08 lbl_805BE070[0x40];
s32 TLobby__sub_803F8E08(void);
void TLobby__sub_80405000(u32 arg0);
s32 TLobby__sub_80405008(s16, s16);
s32 TLobby__sub_80405304(void *arg0);
void TLobby__sub_803FF384(u8 *arg0);
void TUdpSocket__sub_803F95A4(int _w0);
void TLobby__sub_803F95C4(int _w0);
void TLobby__sub_803F97E8(int);
s32 TLobby__sub_803FB634(void);
M2C_UNK TLobby__sub_803FD74C(int);
void TLobby__sub_804051CC(void);
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
s32 TLobby__sub_804004DC(Conn_804004DC *c);
void TLobby__sub_803F9214(s32 *out);
void TLobby__sub_80400BA8(u8 *arg0);
s32 TLobby__sub_804019A8(Cfg_804019A8 *c, s16 type);
u32 TLobby__sub_803F9E84(s32 arg0);
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
void TUdpSocket__sub_803F95A4(int _w0);
void TLobby__sub_803F95C4(int _w0);
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
extern RecoveredGlobal_80419A00_lbl_805C1C50 lbl_805C1C50;
extern s16 lbl_805D7AF8;
s32 TLobby__sub_804099B4(s16 arg0);
extern s16 lbl_805D7AF8;
s32 TLobby__sub_80409B48(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s16 lbl_805D7AF8;
s32 TLobby__sub_80409BD4(s16 arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040B838(u8 *dst, u8 *src, s16 len);
s32 TLobby__sub_8040B6E4(Q_8040B6E4 *q, u8 *name, s16 len);
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
s32 TLobby__sub_8040B838(u8 *dst, u8 *src, s16 len);
s32 TLobby__sub_8040B790(Q_8040B790 *q, u8 *name, s16 len);
extern u16 lbl_805D7A60;
extern Ent_803F8D84 *lbl_805D7A64;
extern u16 lbl_805D7A68;
extern Ent_803F9B48 *lbl_805D7A6C;
extern u8 *lbl_805D7BE0;
extern u8 *lbl_805D7BE4;
extern u32 lbl_805D7BE8;
extern u8 *lbl_805D7C04;
extern u32 lbl_805D7C08;
u8 *TLobby__sub_803F8BA4(H_803F8BA4 *h, u8 *p, u8 *end);
s16 TLobby__sub_8040EF00(s16 arg0);
u8 * TLobby__sub_8040F76C(u32, u32);
s16 TLobby__sub_80411ECC(s16 arg0);
u8 * TLobby__sub_80413264(void *, s32);
s16 TLobby__sub_8040DC8C(u8 *arg0, u8 *arg1);
void TLobby__sub_803F9AA8(void);
void TLobby__sub_804217E4(void);
void TLobby__sub_80421814(void);
s32 TLobby__sub_80421B3C(s32);
s32 TLobby__sub_8040BF38(u8 *arg0);
void TLobby__sub_8041D2B8(O_8041D2B8 *o, s16 idx, s32 a, s32 b);
void TLobby__sub_803F9214(s32 *out);
void TLobby__sub_803FC144(u16 v);
s16 TLobby__sub_80401BCC(void *, void *, int);
u16 TLobby__sub_80402ADC(u8 *p);
u32 TLobby__sub_80402AFC(u8 *p);
extern s16 lbl_805D7A7A;
extern u8 lbl_805D7AB0[4];
extern u8 lbl_805D7AB4[1];
s16 TLobby__sub_804012E0(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, s16 arg4);
void TLobby__sub_803FC4B4(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803FDBF8(void *, Strm_80405A74 *);
s32 TLobby__sub_803FE6CC(void *, int, int, void *);
void TLobby__sub_8040098C(Self_8040098C *self);
u8 *TLobby__sub_80401B8C(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1);
s16 TLobby__sub_80401BCC(void *, void *, int);
u16 TLobby__sub_80402ADC(u8 *p);
u8 *TLobby__sub_80402B28(u8 *p, u16 v);
M2C_UNK PADRead(void *, Strm_80405A74 *);
s16 TLobby__sub_80403F4C(void *, Strm_80405A74 **);
s16 fn_804040E0(void *, Strm_80405A74 **);
M2C_UNK TLobby__sub_804060B8(u8 *, u16, int);
extern u8 lbl_805C0038[];
extern s16 lbl_805D7A7A;
extern s16 lbl_805D7A7C;
extern u8 lbl_805D7AD0;
extern u8 lbl_805D7AD4;
void TLobby__sub_80405A74(Strm_80405A74 *arg0);
void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2);
void MD5Transform(u32 *state, u8 *block);
s16 TLobby__sub_80401BCC(void *, void *, int);
B_803FADA0 *TLobby__sub_80401CE8(s32);
u8 *TLobby__sub_80402B3C(u8 *p, u32 v);
extern u8 lbl_805D7A74[1];
void TLobby__sub_803FADA0(B_803FADA0 **arg0, A_803FADA0 *arg1, s32 arg2, s32 arg3, void *arg4);
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

void TLobby__sub_803F8794(void *) {

}

extern s16 lbl_805D47FC;
extern s32 lbl_805D4800;
extern s32 lbl_805D7A44;

void init_params__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) lbl_805D47FC;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_805D4800;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) lbl_805D4800;
    M2C_FIELD(arg0, s16 *, 0xA0) = 0x64;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D7A44;
}

void TLobby__sub_803F87C4(void) {

}

extern s16 lbl_805D47FA;
extern s32 lbl_805D7A40;

void TLobby__sub_803F87C8(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) lbl_805D47FA;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_805D7A40;
}

void TLobby__sub_803F87DC(void * _w0) {

}

void TLobby__sub_803F87E0(Obj_803F87E0 *arg0) {
    arg0->x0 = 1;
    arg0->xc = 0;
    arg0->x10 = 0;
    arg0->x14 = 0x40;
    arg0->x4 = lbl_805B38A0;
    arg0->cfg = lbl_805B3878;
}

void TLobby__sub_803F8864(void *) {

}

void TLobby__sub_803F88E0(void *) {

}

typedef struct RecoveredFields_803F88E4_arg0 RecoveredFields_803F88E4_arg0;
typedef struct RecoveredGlobal_803F88E4_lbl_805AEEB0 RecoveredGlobal_803F88E4_lbl_805AEEB0;
typedef char RecoveredGlobal_803F88E4_lbl_805AEEB0_size[((sizeof(RecoveredGlobal_803F88E4_lbl_805AEEB0)) == 0x49C8) ? (1) : (-1)];
void TLobby__sub_803F88E4(RecoveredFields_803F88E4_arg0 *arg0) {
  u8 *new_var;
  arg0->field_0 = 2;
  new_var = (u8 *) (&(*(RecoveredGlobal_803F88E4_lbl_805AEEB0 *)&lbl_805AEEB0).value);
  arg0->field_2 = 8;
  arg0->field_4 = 8;
  arg0->field_14 = 0x5DC;
  arg0->field_8 = new_var + 0x6064;
  arg0->field_C = new_var + 0x5E24;
  arg0->field_10 = new_var + 0x5D04;
  arg0->field_18 = ((u8 *) (&(*(RecoveredGlobal_803F88E4_lbl_805AEEB0 *)&lbl_805AEEB0).value)) + 0x514C;
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
void TLobby__sub_803F895C(u8 *arg0) {
    struct Fields_arg0 { s16 field_0; s16 field_2; s16 field_4; s16 field_6; u8 * field_8; u8 * field_C; u8 * field_10; };
    ((Fields_arg0*)arg0)->field_0 = 0x1A;
    ((Fields_arg0*)arg0)->field_2 = 3;
    ((Fields_arg0*)arg0)->field_4 = 9;
    ((Fields_arg0*)arg0)->field_6 = 0x240;
    ((Fields_arg0*)arg0)->field_8 = (unsigned char *) ((void *) ((u8 *)&lbl_805AEEB0.value + 0x621C));
    ((Fields_arg0*)arg0)->field_C = (unsigned char *) ((void *) ((u8 *)&lbl_805AEEB0.value + 0x61C8));
    ((Fields_arg0*)arg0)->field_10 = (unsigned char *) ((void *) ((u8 *)&lbl_805AEEB0.value + 0x60F0));
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
void TLobby__sub_803F89DC(u8 *arg0) {
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
void TLobby__sub_803F8A28(u8 *arg0) {
    struct Fields_arg0 { s16 field_0; s16 field_2; s16 field_4; s16 field_6; s16 field_8; s16 field_A; s16 field_C; u8 pad_E[2]; u8 * field_10; u8 * field_14; u8 * field_18; u8 * field_1C; u8 * field_20; u8 * field_24; };
    ((Fields_arg0*)arg0)->field_0 = 8;
    ((Fields_arg0*)arg0)->field_2 = 3;
    ((Fields_arg0*)arg0)->field_4 = 2;
    ((Fields_arg0*)arg0)->field_6 = 0x5DC;
    ((Fields_arg0*)arg0)->field_8 = 9;
    ((Fields_arg0*)arg0)->field_A = 0x14;
    ((Fields_arg0*)arg0)->field_C = 3;
    ((Fields_arg0*)arg0)->field_10 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lbl_805AEEB0).value) + 0xB650;
    ((Fields_arg0*)arg0)->field_14 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lbl_805AEEB0).value) + 0xB5F0;
    ((Fields_arg0*)arg0)->field_1C = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lbl_805AEEB0).value) + 0xB5D0;
    ((Fields_arg0*)arg0)->field_18 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lbl_805AEEB0).value) + 0xB564;
    ((Fields_arg0*)arg0)->field_20 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lbl_805AEEB0).value) + 0xA9AC;
    ((Fields_arg0*)arg0)->field_24 = (u8 *)(&(*(RecoveredGlobal_803F8A28_lbl_805AEEB0 *)&lbl_805AEEB0).value) + 0xA990;
}

void TLobby__sub_803F8A9C(void * _w0) {

}

typedef char RecoveredGlobal_803F8AA0_lbl_805BA5C0_size[sizeof(RecoveredGlobal_803F8AA0_lbl_805BA5C0) == 0x30AC ? 1 : -1];
void TLobby__sub_803F8AA0(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = 3;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_805BA5C0.value;
}

void TLobby__sub_803F8AB8(void) {
    TLobby__sub_80425B70();
}

void TLobby__sub_803F8AD8(Desc_803F8AD8 *arg0) {
    Big_803F8AD8 *g = (Big_803F8AD8 *)&lbl_805AEEB0;
    g->funcs[0] = (void *)TLobby__sub_80426B88;
    g->funcs[1] = (void *)TLobby__sub_80426A18;
    g->funcs[2] = (void *)TLobby__sub_80426998;
    g->funcs[3] = (void *)TLobby__sub_80426894;
    g->funcs[4] = (void *)TLobby__sub_804267F0;
    g->funcs[5] = (void *)TLobby__sub_80426790;
    g->funcs[6] = (void *)TLobby__sub_80426704;
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
void TLobby__sub_803F8B7C(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0xA) = 0x500;
    M2C_FIELD(arg0, s16 *, 0xC) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_805D7A58;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &lbl_805BD66C.value;
}

u8 *TLobby__sub_803F8BA4(H_803F8BA4 *h, u8 *p, u8 *end) {
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

s32 TLobby__sub_803F8DBC(s32 size) {
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

s32 TLobby__sub_803F8E08(void) {
    s32 i;
    s32 lvl;
    Slot_803F8E08 *s;
    lvl = OSDisableInterrupts();
    for (i = 0; i < 0x40; i++) {
        s = &lbl_805BE070[i];
        if (s->active != 0) {
            OSCancelAlarm(s->alarm);
            OSSendMessage(s->queue, NULL, 0);
        }
    }
    OSRestoreInterrupts(lvl);
    TLobby__sub_80428358();
    TLobby__sub_804259F0();
    TLobby__sub_804294C4();
    return 0;
}

void TLobby__sub_803F91D0(s32 *out) {
    s64 t = OSGetTime();
    *out = (s32)(t / (s64)(*(u32 *)0x800000F8 >> 2));
}

void TLobby__sub_803F9214(s32 *out) {
    s64 t = OSGetTime();
    *out = (s32)(t / (s64)((*(u32 *)0x800000F8 >> 2) / 1000));
}

void NetStoreTick(s32 *arg0) {
    *arg0 = OSGetTick();
}

typedef char RecoveredGlobal_803F94A0_lbl_805BF770_size[sizeof(RecoveredGlobal_803F94A0_lbl_805BF770) == 0x750 ? 1 : -1];
void TLobby__sub_803F94A0(u32 arg0) {
    s32 var_r5;
    var_r5 = 0;
    if (arg0 != (u32) M2C_FIELD(&lbl_805BF770.value, u32 *, 4)) {
        var_r5 = 1;
        if (arg0 != (u32) M2C_FIELD(&lbl_805BF770.value, u32 *, 0x3AC)) {
            var_r5 = 2;
        }
    }
    if (var_r5 < 2) {
        M2C_FIELD(((u8 *)(&lbl_805BF770.value) + (var_r5 * 0x3A8)), s32 *, 0) = 0;
    }
}

void TUdpSocket__sub_803F95A4(int _w0) {
    OSUnlockMutex();
}

void TLobby__sub_803F95C4(int _w0) {
    OSLockMutex();
}

void NetStoreCurrentThread(s32 *arg0) {
    *arg0 = OSGetCurrentThread();
}

void TLobby__sub_803F9980(void *alarm) {
    s32 i;
    Slot_803F8E08 *s;

    for (i = 0; i < 0x40; i++) {
        if (lbl_805BE070[i].alarm == alarm) {
            break;
        }
    }
    if (i < 0x40) {
        s = &lbl_805BE070[i];
        if (s->active != 0) {
            OSSendMessage(s->queue, NULL, 0);
        }
    }
}

void NetYieldThread(void) {
    OSYieldThread();
}

void TLobby__sub_803F9AA8(void) {
    OSResumeThread();
}

void NetSuspendCurrentThread(void) {
    OSGetCurrentThread();
    OSSuspendThread();
}

void TLobby__sub_803F9AEC(s32 arg0) {
    if (OSIsThreadTerminated() == 0) {
        OSCancelThread((void *) (arg0));
    }
}

void TLobby__sub_803F9B28(void) {
    OSResumeThread();
}

void TLobby__sub_803F9B48(u32 key) {
    Ent_803F9B48 *p;
    u16 n = lbl_805D7A68;
    Ent_803F9B48 *base = lbl_805D7A6C;
    p = base;
    s32 i;
    for (i = 0; i < n; i++) {
        if (key == p->key) break;
        p++;
    }
    if (i < n) {
        base[i].active = 0;
    }
}

s32 TLobby__sub_803F9C78(void) {
    u32 key = OSGetCurrentThread();
    Ent_803F9C78 *p;
    u16 n = lbl_805D7A68;
    Ent_803F9C78 *base = (*(Ent_803F9C78 * *)&lbl_805D7A6C);
    s32 i;
    p = base;
    for (i = 0; i < n; i++) {
        if (key == p->key) break;
        p++;
    }
    if (i >= n) {
        return 0;
    }
    {
        Ent_803F9C78 *e = &base[i];
        e->fn(e);
    }
    return 0;
}

s32 TLobby__sub_803F9CF4(s32 arg0) {
    if ((arg0 < 0) || (arg0 > 0x1F)) {
        return -1;
    }
    lbl_805D4810 = arg0;
    return 0;
}

typedef char RecoveredGlobal_803AA0C0_lbl_80556E88_size[sizeof(RecoveredGlobal_803AA0C0_lbl_80556E88) == 0x100 ? 1 : -1];
void TLobby__sub_803F9D18(u8 arg0) {
    strcat(arg0);
}

void TLobby__sub_803F9E24(u8 arg0) {
    strncmp(arg0);
}

void TLobby__sub_803F9E44(u8 arg0) {
    strcmp(arg0);
}

void TLobby__sub_803F9E64(void *arg0, void *arg1) {
    strcpy(arg0, arg1);
}

u32 TLobby__sub_803F9E84(s32 arg0) {
    strlen(arg0);
}

void TLobby__sub_803F9EA4(void) {
    memmove();
}

s32 TLobby__sub_803F9EC4(void * _w0, void * _w1, int _w2) {
    memcmp();
}

void TUdpSocket__sub_803F9EE4(void * _w0, int _w1, int _w2) {
    memset();
}

void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2) {
    memcpy();
}

s32 TLobby__sub_803F9F24(u8 *arg0) {
    struct Fields_arg0 { u8 field_0; u8 pad_1[7]; s16 field_8; u8 pad_A[2]; u8 * field_C; };
    struct Fields_temp_r31 { u8 field_0; };
    u8 *temp_r31;
    temp_r31 = (u8 *)(((Fields_arg0*)arg0)->field_C);
    if ((TLobby__sub_803FB634() != 0) || (((Fields_temp_r31*)temp_r31)->field_0 == 4)) {
        ((Fields_arg0*)arg0)->field_8 = 0;
        return -1;
    }
    if (((Fields_arg0*)arg0)->field_8 != 0) {
        return -2;
    }
    if (((Fields_arg0*)arg0)->field_0 != 5) {
        return 1;
    }
    return 0;
}

s32 TLobby__sub_803FA150(M2C_UNK arg0, u8 *arg1) {
    M2C_FIELD(arg1, s16 *, 4) = (s16) (M2C_FIELD(arg1, s16 *, 4) & 0xFFFFFFFB);
    M2C_FIELD(arg1, s16 *, 0) = (s16) (M2C_FIELD(arg1, s16 *, 0) & 0xFFFFFFFB);
    M2C_FIELD(arg1, s16 *, 0x1C) = (s16) (M2C_FIELD(arg1, s16 *, 0x1C) & 0xFFFFFFFB);
    return 0;
}

s32 TLobby__sub_803FA17C(u8 *arg0, s32 arg1) {
    struct Fields_arg0 { u8 pad_0[4]; s16 field_4; u8 pad_6[2]; s32 field_8; s32 field_C; };
    M2C_UNK sp18;
    s32 sp14;
    s32 sp10;
    TUdpSocket__sub_803F9EE4((void *)((void *) (&sp18)), (int)((int) (0xFF)), (int)((int) (8)));
    if (TLobby__sub_803F9EC4((void *)((void *) (arg1)), (void *)((void *) (&sp18)), (int)((int) (8))) != 0) {
        TLobby__sub_803F9F04((void *)((void *) (&sp14)), (void *)((void *) (arg1)), (int)((int) (4)));
        TLobby__sub_803F9F04((void *)((void *) (&sp10)), (void *)((void *) (arg1 + 4)), (int)((int) (4)));
        ((Fields_arg0*)arg0)->field_8 = sp14;
        ((Fields_arg0*)arg0)->field_C = sp10;
        ((Fields_arg0*)arg0)->field_4 = (s16) (((Fields_arg0*)arg0)->field_4 | 2);
    } else {
        ((Fields_arg0*)arg0)->field_8 = 0;
        ((Fields_arg0*)arg0)->field_C = 0;
        ((Fields_arg0*)arg0)->field_4 = (s16) (((Fields_arg0*)arg0)->field_4 & 0xFFFFFFFD);
    }
    return 0;
}

void TLobby__sub_803FA234(void) {

}

void TLobby__sub_803FA238(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

void TLobby__sub_803FA248(s8 *arg0) {
  s8 *new_var;
  new_var = (s8 *) (((s8 *) arg0) + ((0, 0)));
  TLobby__sub_80405304((void *)((void *) (((u8 *) arg0) + 0x10)));
  *new_var = 5;
}

void TLobby__sub_803FA280(void) {

}

extern u16 lbl_805D7A78;

typedef char RecoveredGlobal_803FB110_lbl_805BFF68_size[sizeof(RecoveredGlobal_803FB110_lbl_805BFF68) == 0xD0 ? 1 : -1];

void TLobby__sub_803FA284(s32 arg0) {
    TLobby__sub_80405304((void *)((void *) (arg0 + 0x10)));
}

void TLobby__sub_803FA2A8(P_803FA2A8 *o) {
    Q_803FA2A8 *q = o->q;
    q->dst = q->u.src;
    q->dst.w[3] = q->w3C;
    q->dst.w[4] = q->w40;
    q->h0 = q->h0 | q->u.h4;
    q->h50 = 0;
    q->h34 = q->h34 | q->h38;
}

void TLobby__sub_803FADA0(B_803FADA0 **arg0, A_803FADA0 *arg1, s32 arg2, s32 arg3, void *arg4) {
    u8 *p;
    B_803FADA0 *b;
    s16 n;
    n = arg3 - 2;
    if (*arg0 != NULL) {
        b = *arg0;
    } else {
        b = TLobby__sub_80401CE8(0);
        if (b == NULL) {
            return;
        }
        *arg0 = b;
    }
    p = b->buf + b->len;
    p[0] = arg2;
    p[1] = arg3;
    p += 2;
    switch (arg2) {
    case 2:
        break;
    case 1:
        p = TLobby__sub_80402B3C(TLobby__sub_80402B3C(p, arg1->a), arg1->b);
        n -= 8;
        break;
    }
    while (n-- > 0) {
        *p++ = TLobby__sub_80401BCC(arg4, lbl_805D7A74, 1) != 1 ? -1 : (s16)lbl_805D7A74[0];
    }
    b->len += arg3;
}

s32 TLobby__sub_803FAEA0(s32 cmd, s32 arg) {
    switch (cmd) {
    case 1:
        TLobby__sub_804050DC(arg);
        return 0;
    }
    return -1;
}

s32 TLobby__sub_803FAFDC(void) {
    TLobby__sub_803F7A30();
    TLobby__sub_803FC178();
    TLobby__sub_80402B60();
    TLobby__sub_803F7678();
    TLobby__sub_80428374();
    TLobby__sub_803FD0C0();
    TLobby__sub_804050EC();
    TLobby__sub_80401A68();
    return 0;
}

u8 *TLobby__sub_803FB110(void) {
    return (u8 *)&lbl_805BFF68.value + 0x1C;
}

struct G_803FB120 { u8 pad[0x1C]; u8 buf[0x60]; };
struct H_803FB120 { u8 pad[0x4C]; void *v4C; };
extern H_803FB120 lbl_805D0A40;
u8 *TLobby__sub_803FB120(void *src) {
    G_803FB120 *g = (G_803FB120 *)&lbl_805BFF68;
    if (src == 0) {
        TLobby__sub_803F9F04(g->buf, lbl_805D0A40.v4C, 0x60);
    } else {
        TLobby__sub_803F9F04(g->buf, src, 0x60);
    }
    return g->buf;
}

void TLobby__sub_803FB184(u8 *arg0) {
    TLobby__sub_803FB358(arg0);
}

s32 get_remaining__6TLobbyFi(s32 arg0) {
    return lbl_805D7A78 - arg0;
}

typedef char RecoveredGlobal_803FC178_lbl_805C02D0_size[sizeof(RecoveredGlobal_803FC178_lbl_805C02D0) == 0x40 ? 1 : -1];

struct G_803FB634 { u32 pad0; u32 pad4; u32 t8; };
extern s16 lbl_805D7A86;
extern s16 lbl_805D7A8A;
s32 TLobby__sub_803FB634(void) {
    G_803FB634 *g = (G_803FB634 *)&lbl_805BFF68;
    s32 now;
    TLobby__sub_803F9214(&now);
    if (lbl_805D7A8A == 5 || lbl_805D7A86 != 0 || (u32)(now - g->t8) > 60000) {
        return 1;
    }
    return 0;
}

void TLobby__sub_803FC144(u16 v) {
    if (v == 0xC023) {
        lbl_805D7A78 = 0x80;
    } else if (v == 0xC223) {
        lbl_805D7A78 = 0x82;
    } else {
        lbl_805D7A78 = v;
    }
}

void TLobby__sub_803FC178(void) {
    TLobby__sub_803F76F0((void *) (&lbl_805C02D0.value));
}

typedef char RecoveredGlobal_803FC1A0_lbl_805C02D0_size[sizeof(RecoveredGlobal_803FC1A0_lbl_805C02D0) == 0x40 ? 1 : -1];
s32 TLobby__sub_803FC1A0(void) {
    TLobby__sub_803F76F4((void *) (&(*(RecoveredGlobal_803FC1A0_lbl_805C02D0 *)&lbl_805C02D0).value));
    return 0;
}

s32 set_active_flag__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA0) = 2;
    M2C_FIELD(arg0, u8 *, 0xA2) = (u8) (M2C_FIELD(arg0, u8 *, 0xA2) | 0x20);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x20);
    return 0;
}

s32 TLobby__sub_803FC480(Obj_803FC480 *self) {
    Sub_803FC480 *s = &self->sub;
    s->f0 = 1;
    s->f2 |= 0x10;
    self->f2 |= 0x10;
    s->f3 = s->f4;
    return 0;
}

s16 TLobby__sub_803FC820(void *, void *, int);
M2C_UNK TLobby__sub_803FCC10(void *, void *, int);
M2C_UNK TLobby__sub_803FD74C(int);
s32 TLobby__sub_803FE8BC(u8 *, void *);
typedef struct Hdr_803FC4B4 { u8 type; u8 flag; s16 len; } Hdr_803FC4B4;
struct O_80400ACC;
void TLobby__sub_80400ACC(O_80400ACC *);
struct Outer_80401CAC;
void TLobby__sub_80401CAC(Outer_80401CAC *, u16);
M2C_UNK TLobby__sub_80405304(void *);
extern s16 lbl_805D7A80;
extern s32 lbl_805D7A90;

void TLobby__sub_803FC4B4(u8 *arg0, s32 arg1) {
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
            TLobby__sub_803FD74C((int) ((u8 *)(temp_r30_4) + 0xA0));
            TLobby__sub_803FD74C((int) ((u8 *)(temp_r30_4) + 4));
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

    if (TLobby__sub_803F9E84((s32)arg0) >= 0x80) {
        arg0[0x7F] = 0;
    }
    if (TLobby__sub_803F9E84((s32)arg1) >= 0x80) {
        arg1[0x7F] = 0;
    }
    TLobby__sub_803F9E64(lbl_805C0180.a, arg0);
    TLobby__sub_803F9E64(lbl_805C0180.b, arg1);
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
    RecoveredGlobal_803FD520_lbl_805C0310 *g = &lbl_805C0310;
    TLobby__sub_804099B4((s16)(g->h0));
    g->h0 = -1;
    g->h16 = 0;
    TLobby__sub_803F7980(g);
}

typedef void (*Fn_803FD10C)(void);
void TLobby__sub_803F7984(void *);
void TLobby__sub_803FD21C(void);
void TLobby__sub_803FD310(void);
void TLobby__sub_803FD404(void);
void TLobby__sub_803FD5A4(void);
void TLobby__sub_803FD60C(void);
s32 TLobby__sub_803FD560(s16 i);

s16 TLobby__sub_803FD10C(void) {
    Fn_803FD10C fns[11];
    s16 r;
    s16 i;
    s16 *p;

    TLobby__sub_803F7984(&lbl_805C0310);
    fns[0] = TLobby__sub_803FD60C;
    fns[1] = TLobby__sub_803FD5A4;
    fns[2] = (Fn_803FD10C)TLobby__sub_803FD560;
    fns[3] = (Fn_803FD10C)TLobby__sub_803FD520;
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
    lbl_805C0310.h0 = r;
    lbl_805C0310.h2 = 0;
    lbl_805C0310.h4 = 0;
    lbl_805C0310.h6 = 0;
    lbl_805C0310.h8 = 0;
    p = lbl_805C0310.buf;
    i = 0;
    while (i < lbl_805C0310.h16) {
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
s16 TLobby__sub_803FD520(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    if (lbl_805D7A7A != 0) {
        return 0x5AE;
    }
    return M2C_FIELD(&lbl_805C0310.h0, s16 *, 0x14);
}

struct E_803FD560 { s16 a; s16 b; };
struct G_803FD560 { s16 id; E_803FD560 e[2]; };
s32 TLobby__sub_803FD560(s16 i) {
    if (i != 0 && i != 1) {
        return -0x112;
    }
    G_803FD560 *g = (G_803FD560 *)&lbl_805C0310;
    g->e[i].a = 0;
    g->e[i].b = 0;
    return 0;
}

struct N_80405298;
void TLobby__sub_80405298(N_80405298 *o, s32 v);
void TLobby__sub_803FDA68(void *);

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
    M2C_FIELD(temp_r31, void **, 0x10) = (void *)TLobby__sub_803FDA68;
    M2C_FIELD(temp_r31, u8 **, 0x14) = arg0;
    TLobby__sub_80405298((N_80405298 *) (temp_r31), (s32) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2C), s32 *, 0xC)));
}

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

void TLobby__sub_803FDA68(void *arg0) {
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
s32 TLobby__sub_803FE850(u8 *dst, void *src) {
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

s32 TLobby__sub_803FF138(s16 arg0, u8 *arg1) {
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

void TLobby__sub_803FF34C(u8 *arg0) {
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
        M2C_FIELD(p, s32 *, 0x98) = TLobby__sub_80405008(a, b);
    }
    TLobby__sub_80405304(arg0 + 0x10);
    M2C_FIELD(arg0, s8 *, 0) = 5;
}

void TLobby__sub_803FF430(u8 *arg0) {
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
extern u8 lbl_805D7AAC;
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
        buf = TLobby__sub_80401CE8(0);
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
        *p++ = TLobby__sub_80401BCC(src, &lbl_805D7AAC, 1) != 1 ? -1 : (s16)lbl_805D7AAC;
    }
    buf->len += len;
}

s32 TLobby__sub_804004DC(Conn_804004DC *c) {
    RecoveredGlobal_804050DC_lbl_805C18A0 *g;
    u8 *sub;
    sub = c->sub;
    g = &lbl_805C18A0;
    c->abort = 0;
    while (c->state != 5) {
        if (TLobby__sub_803FB634() != 0 || c->abort != 0 || *sub == 4) {
            TLobby__sub_803FD74C((int)c);
            c->abort = 0;
            return -1;
        }
        TUdpSocket__sub_803F95A4(g->value);
        TLobby__sub_803F97E8(100);
        TLobby__sub_804051CC();
        TLobby__sub_803F95C4(g->value);
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
            TLobby__sub_803FC480((Obj_803FC480 *)self->st);
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
            TLobby__sub_803FC480((Obj_803FC480 *)self->st);
            break;
        }
    }
    st = self->st;
    if (!(st->f2 & 0x30)) {
        st->f0 = 3;
        TLobby__sub_803F9214((s32 *)&now);
        st->f108 = (s16)(now / 1000);
        TLobby__sub_803FD958(st->f6C);
    }
}

struct O_80400ACC { u8 b0; u8 b1; u8 b2; u8 pad3[0x108 - 3]; s32 f108; };
void TLobby__sub_80400ACC(O_80400ACC *o) {
    u32 t;
    if ((o->b2 & 0x30) == 0) {
        o->b0 = 3;
        TLobby__sub_803F9214((s32 *)&t);
        o->f108 = (s16)(t / 1000);
        TLobby__sub_803FD958((u8 *)o + 0x6C);
    }
}

void TLobby__sub_80400B34(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[12]; s8 * field_C; };
    s8 *temp_r31;
    temp_r31 = (s8 *)(((Fields_arg0*)arg0)->field_C);
    *temp_r31 = 4;
    TLobby__sub_803FD85C(temp_r31 + 0x6C);
    TLobby__sub_80403218((u8 *)(temp_r31 + 0x38));
}

void TLobby__sub_80400B74(void) {
    TLobby__sub_804062A0(0x81);
}

void TLobby__sub_80400B98(u8 *arg0) {
    *M2C_FIELD(arg0, s8 **, 0xC) = 1;
}

typedef char RecoveredGlobal_80401A68_lbl_805C04A8_size[sizeof(RecoveredGlobal_80401A68_lbl_805C04A8) == 0x30 ? 1 : -1];

void TLobby__sub_80400BA8(u8 *arg0) {
    St_80400BA8 *s;
    s32 t;
    s = *(St_80400BA8 **)(arg0 + 0x30);
    if (s->cur.flags & 0x20) {
        TLobby__sub_803F9214(&t);
        s->cur.time += t;
    }
    s->saved = s->cur;
    s->flags |= s->cur.flags;
    s->f50 = 0;
    s->f34 |= s->f38;
}

#define rd16_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lbl_805D7AB0, 2) != 2 ? -1 : TLobby__sub_80402ADC(lbl_805D7AB0))
#define rd32_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lbl_805D7AB0, 4) != 4 ? 0 : TLobby__sub_80402AFC(lbl_805D7AB0))
#define rd8_804012E0(src) (TLobby__sub_80401BCC((void *)(src), lbl_805D7AB4, 1) != 1 ? -1 : (s16)lbl_805D7AB4[0])
#define F(t, o) M2C_FIELD(arg2, t *, o)
s16 TLobby__sub_804012E0(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, s16 arg4) {
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
            TLobby__sub_803FC144(F(u16, 0x24));
        }
        break;
    case 5:
        F(u32, 0x28) = rd32_804012E0(arg0);
        len -= 4;
        if (F(u32, 0x28) == 0 || M2C_FIELD(arg1, u32 *, 0x5C) == M2C_FIELD(arg1, u32 *, 0x28)) {
            TLobby__sub_803F9214(&t);
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

s32 TLobby__sub_804019A8(Cfg_804019A8 *c, s16 type) {
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

void TLobby__sub_80401A68(void) {
    TLobby__sub_803F79BC((void *) (&lbl_805C04A8.value));
}

typedef char RecoveredGlobal_80401A90_lbl_805C04A8_size[sizeof(RecoveredGlobal_80401A90_lbl_805C04A8) == 0x30 ? 1 : -1];
s32 TLobby__sub_80401A90(void) {
    TLobby__sub_803F79C0((void *) (&(*(RecoveredGlobal_80401A90_lbl_805C04A8 *)&lbl_805C04A8).value));
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

u8 *TLobby__sub_80401B8C(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1) {
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

void TLobby__sub_80401FA8(u8 *arg0) {
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

void TLobby__sub_80402B60(void) {
    TLobby__sub_803F778C((void *) (&lbl_805C0620.value));
}

typedef char RecoveredGlobal_80402B88_lbl_805C0620_size[sizeof(RecoveredGlobal_80402B88_lbl_805C0620) == 0x18 ? 1 : -1];
s32 TLobby__sub_80402B88(void) {
    TLobby__sub_803F7790((void *) (&(*(RecoveredGlobal_80402B88_lbl_805C0620 *)&lbl_805C0620).value));
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
    n = TLobby__sub_803F9E84((s32)(arg0));
    if (n >= 0x80) {
        n = 0x7F;
    }
    TLobby__sub_803F9F04(g->a, arg0, n);
    g->a[n] = 0;
    m = TLobby__sub_803F9E84((s32)(arg1));
    if (m >= 0x80) {
        m = 0x7F;
    }
    TLobby__sub_803F9F04(g->b, arg1, m);
    g->b[m] = 0;
    p[0] = g->a;
    p[1] = g->b;
    return 0;
}

void TLobby__sub_80403218(u8 *arg0) {
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

void TLobby__sub_80403298(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if ((u8) M2C_FIELD(arg0, u8 *, 3) != 0) {
        M2C_FIELD(temp_r4, M2C_UNK **, 8) = lbl_8047FEB8;
        TLobby__sub_803FE658((u8 *)((void *) (arg0)));
        return;
    }
    M2C_FIELD(temp_r4, M2C_UNK **, 8) = lbl_8047FEC8;
    TLobby__sub_803FD74C((int) (M2C_FIELD(arg0, s32 *, 0xC) + 4));
    M2C_FIELD(arg0, s16 *, 8) = 1;
}

s32 TLobby__sub_804036FC(u8 *arg0) {
    if (TLobby__sub_803F811C(arg0) != 0) {
        return -1;
    }
    return 0;
}

typedef char RecoveredGlobal_80403D28_lbl_805C0638_size[sizeof(RecoveredGlobal_80403D28_lbl_805C0638) == 0xA0 ? 1 : -1];

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
    s16 TLobby__sub_803FA150(M2C_UNK arg0, u8 *arg1);
    s16 TLobby__sub_803FA17C(u8 *arg0, s32 arg1);
    u8 *temp_r31;
    u8 *temp_r6;

    temp_r6 = lbl_805C0038 + 0xD4;
    temp_r31 = M2C_FIELD(temp_r6, u8 **, 0x30);
    set_flags_and_state__6TLobbyFPv(temp_r6);
    if (TLobby__sub_803FA150(arg0, temp_r31) != 0) {
        return -0x11;
    }
    if (TLobby__sub_803FA150(arg0, temp_r31 + 0x34) != 0) {
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
    s16 TLobby__sub_803FF138(s16 arg0, u8 *arg1);
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
    if (TLobby__sub_803FF138(arg0, temp_r31) != 0) {
        return -0x11;
    }
    if (TLobby__sub_803FF138(arg0, temp_r31 + 0x4C) != 0) {
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
    s16 TLobby__sub_804004DC(int);
    u8 *temp_r31;
    u8 *var_r3;
    u8 *temp_r3;

    TLobby__sub_803F808C();
    temp_r31 = (u8 *)lbl_805C0038 + 4;
    if (TLobby__sub_80400744((int) (temp_r31), (void *) (arg0)) != 0) {
        return -0x11;
    }
    if (TLobby__sub_804004DC((int) (temp_r31)) != 0) {
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

void TLobby__sub_80405000(u32 arg0) {
    if (arg0 == 0) {
        return;
    }
}

void TLobby__sub_804050DC(s16 arg0) {
    M2C_FIELD(&lbl_805C18A0.value, s16 *, 8) = arg0;
}

typedef char RecoveredGlobal_804050EC_lbl_805C18A0_size[sizeof(RecoveredGlobal_804050EC_lbl_805C18A0) == 0x10 ? 1 : -1];
void TLobby__sub_804050EC(void) {
    TLobby__sub_803F79AC((void *) (&(*(RecoveredGlobal_804050EC_lbl_805C18A0 *)&lbl_805C18A0).value));
}

typedef char RecoveredGlobal_80405114_lbl_805C18A0_size[sizeof(RecoveredGlobal_80405114_lbl_805C18A0) == 0x10 ? 1 : -1];
s32 TLobby__sub_80405114(void) {
    TLobby__sub_803F79B0((void *) (&(*(RecoveredGlobal_80405114_lbl_805C18A0 *)&lbl_805C18A0).value));
    return 0;
}

s16 TLobby__sub_80405140(void) {
    lbl_805D7AC8 = 0;
    return 0;
}

struct G_80405150 { s32 p0; s32 p4; s16 h8; };
extern s16 lbl_805D7A84;
extern s16 lbl_805D7A86;
extern s16 lbl_805D7A88;
void TLobby__sub_803FB6A0(void);
void TLobby__sub_803FB7A4(void);
void TLobby__sub_803F97E8(int);
void TLobby__sub_804051CC(void);
void TLobby__sub_80405150(void) {
    G_80405150 *g = (G_80405150 *)&lbl_805C18A0;
    for (;;) {
        if (lbl_805D7A86 != 0) {
            TLobby__sub_803F95C4(g->p0);
            TLobby__sub_803FB6A0();
            TUdpSocket__sub_803F95A4(g->p0);
            continue;
        }
        if (lbl_805D7A88 != 0) {
            TLobby__sub_803F95C4(g->p0);
            TLobby__sub_803FB7A4();
            TUdpSocket__sub_803F95A4(g->p0);
            continue;
        }
        TLobby__sub_803F97E8(g->h8);
        if (lbl_805D7A84 != 0) {
            TLobby__sub_804051CC();
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

void TLobby__sub_803F9214(s32 *out);
void TUdpSocket__sub_803F95A4(int);
void TLobby__sub_803F95C4(int);
M2C_UNK TLobby__sub_80405700();
extern RecoveredGlobal_804050DC_lbl_805C18A0 lbl_805C18A0;
extern s32 lbl_805D7AC8;

void TLobby__sub_804051CC(void) {
    s32 now;
    Timer_804051CC *t;

    TLobby__sub_803F95C4(lbl_805C18A0.value);
    TLobby__sub_80405700();
    TLobby__sub_803F9214(&now);
    t = (Timer_804051CC *)lbl_805D7AC8;
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
    TUdpSocket__sub_803F95A4(lbl_805C18A0.value);
}

struct N_80405298 { N_80405298 *next; s32 f4; u8 pad8[0x18 - 8]; u8 b18; };
#define HEAD_80405298 (*(N_80405298 **)&lbl_805D7AC8)
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
            TLobby__sub_803F9214((s32 *)((void *) (arg0 + 0xC)));
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
    if (TLobby__sub_80401BCC(s, &lbl_805D7AD4, 1) != 1) {
        return -1;
    }
    return (s16)lbl_805D7AD4;
}
#define FWD_80405A74()                                                       \
    M2C_FIELD(G, s16 *, 0x13A)++;                                            \
    t = (Strm_80405A74 *)TLobby__sub_80401B8C((RecoveredFields_80401B8C_arg0 *)arg0, 4); \
    p = t->p;                                                                \
    *p++ = 0xFF;                                                             \
    *p++ = 3;                                                                \
    TLobby__sub_80402B28(p, code);                                           \
    u = t;                                                                   \
    if (u == NULL) {                                                         \
        M2C_FIELD(G, s16 *, 0x142)++;                                        \
        return;                                                              \
    }                                                                        \
    if (TLobby__sub_80401BCC(&u, &lbl_805D7AD0, 2) == 2) {                   \
        TLobby__sub_80402ADC(&lbl_805D7AD0);                                 \
    }                                                                        \
    TLobby__sub_803FE6CC(G + 4, 8, 0, u);                                    \
    return;
void TLobby__sub_80405A74(Strm_80405A74 *arg0) {
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
        TLobby__sub_80401BCC(&arg0, &lbl_805D7AD0, 2) == 2) {
        TLobby__sub_80402ADC(&lbl_805D7AD0);
    }
    code = (u16)get_80405A74(&arg0);
    if (!(code & 1)) {
        code = (code << 8) | get_80405A74(&arg0);
    }
    switch (code) {
    case 0x21:
        if (M2C_FIELD(G, u8 *, 0x6C) != 5) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        TLobby__sub_804060B8(arg0->p, arg0->len, 0x800);
        return;
    case 0x57:
        if (M2C_FIELD(G, u8 *, 0xD4) != 5) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        TLobby__sub_804060B8(arg0->p, arg0->len, -0x7923);
        return;
    case 0x2D:
        if (M2C_FIELD(G, u8 *, 0x6C) != 5) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        if (!(M2C_FIELD(M2C_FIELD(G, u8 **, 0x9C), s16 *, 0x28) & 4)) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        if (fn_804040E0(M2C_FIELD(M2C_FIELD(G, u8 **, 0x9C), void **, 0x98), &arg0) <= 0) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        TLobby__sub_804060B8(arg0->p, arg0->len, 0x800);
        return;
    case 0x2F:
        if (M2C_FIELD(G, u8 *, 0x6C) != 5) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        if (!(M2C_FIELD(M2C_FIELD(G, u8 **, 0x9C), s16 *, 0x28) & 4)) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        if (TLobby__sub_80403F4C(M2C_FIELD(M2C_FIELD(G, u8 **, 0x9C), void **, 0x98), &arg0) <= 0) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        TLobby__sub_804060B8(arg0->p, arg0->len, 0x800);
        return;
    case 0xC021:
        M2C_FIELD(G, s16 *, 0x130)++;
        TLobby__sub_803FDBF8(G + 4, arg0);
        return;
    case 0xC023:
        if (G[0] != 2 && G[0] != 3) {
            M2C_FIELD(G, s16 *, 0x140)++;
            if (G[0] == 0) {
                TLobby__sub_8040098C((Self_8040098C *)(G + 4));
            }
            return;
        }
        M2C_FIELD(G, s16 *, 0x132)++;
        PADRead(G + 0x38, arg0);
        return;
    case 0xC223:
        if (G[0] != 2 && G[0] != 3) {
            M2C_FIELD(G, s16 *, 0x140)++;
            if (G[0] == 0) {
                TLobby__sub_8040098C((Self_8040098C *)(G + 4));
            }
            return;
        }
        M2C_FIELD(G, s16 *, 0x136)++;
        TLobby__sub_803FC4B4(G + 0xA0, (s32)arg0);
        return;
    case 0x8021:
        if (G[0] != 3) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        M2C_FIELD(G, s16 *, 0x134)++;
        TLobby__sub_803FDBF8(G + 0x6C, arg0);
        return;
    case 0x8057:
        if (G[0] != 3) {
            M2C_FIELD(G, s16 *, 0x140)++;
            return;
        }
        if (lbl_805D7A7C != 6 && (s16)(s32)lbl_805D7A7C) {
            FWD_80405A74()
        }
        M2C_FIELD(G, s16 *, 0x138)++;
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

s32 TLobby__sub_80406AE4(void) {
    TLobby__sub_803F8A08((void *)((void *) (&lbl_805D7AF0)));
    lbl_805D7AF0 = 0;
    return 0;
}

void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 4;
}

void init_packet_header__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 3;
}

void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 1;
}

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
void TUdpSocket__sub_804072C4(void *e_) {
    Ent_804072C4 *e = (Ent_804072C4 *)e_;
    s16 i;
    s16 n = ((Tbl_804072C4 *)&lbl_805D7AF0)->count;
    Ent_804072C4 *p = ((Tbl_804072C4 *)&lbl_805D7AF0)->list;
    for (i = 0; i < n; i++, p++) {
        if (p->st == 1 && p == e) {
            p->st = 0;
            return;
        }
    }
}

struct Ent_80407310 { s16 st; u8 pad[0x9c - 2]; };
struct Tbl_80407310 { s16 count; Ent_80407310 *list; };
u8 *TLobby__sub_80407310() {
    s16 n = ((Tbl_80407310 *)&lbl_805D7AF0)->count;
    Ent_80407310 *p = ((Tbl_80407310 *)&lbl_805D7AF0)->list;
    s16 i;
    for (i = 0; i < n; i++, p++) {
        if (p->st == 0) {
            p->st = 1;
            return (u8 *)p;
        }
    }
    return 0;
}

void TLobby__sub_80419DDC(void *);
void TLobby__sub_804078B4(void);
s32 TLobby__sub_80407358(void) {
    Tbl_80408718 *g = &lbl_805C1AB0;
    s32 tmp[2];
    TLobby__sub_8041A0C0(0x806);
    TLobby__sub_80419DDC((void *)TLobby__sub_804078B4);
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

s32 TLobby__sub_804073D8(s16 arg0, s32 arg1) {
    return TLobby__sub_80407C60(arg0, arg1);
}

s32 TLobby__sub_804073F8(s16 arg0, s32 arg1) {
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
void TLobby__sub_80409FC4(s16, s16);

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
    TLobby__sub_80409FC4(e->a, e->b);
    TLobby__sub_80408388(id);
    return 0;
}

void TLobby__sub_804074C8(s16 arg0, u8 *arg1, u8 *arg2) {
    TLobby__sub_8040799C(arg0, arg1, arg2);
}

void TLobby__sub_804074E8(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s8 arg6, s32 arg7) {
    TLobby__sub_80407F20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

struct Conn_8040799C { s32 a; s16 f4; s16 f6; };
struct Peer_8040799C { s16 st; s16 f2; u8 pad4; u8 f5; u8 pad6[2]; Conn_8040799C *conn; u8 addr[6]; u8 name[6]; };
struct Ent_8040799C { s16 f0; s16 f2; s16 f4; s16 f6; u8 pad8[6]; u8 fE; u8 fF; u8 pad10[2]; u8 a12[6]; u8 a18[8]; };
struct Tbl_8040799C { s16 count; s16 h2; s16 h4; s16 h6; s16 h8; s16 hA; s16 hC; u8 padE[2]; Peer_8040799C *list; Ent_8040799C *ents; };
struct Out_8040799C { Conn_8040799C *a; void *b; void *c; void *d; void *e; };
void TLobby__sub_80408060(void *, void *);
void *TLobby__sub_804081C0(Out_8040799C *, void *);
struct Ent_80408428;
struct Ent_80408428 *TLobby__sub_80408428(s16, s32, u8, void *, u8, void *, s16);

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
        if (p->f5 == k && p->st != 0 && TLobby__sub_803F9EC4(p->name, name, p->f5) == 0) {
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
    void *r = TLobby__sub_804081C0(&o, e);
    if (r != NULL) {
        o.a->f6 = 1;
        TLobby__sub_803F9F04(o.b, e->a12, e->fE);
        TLobby__sub_803F9F04(o.c, e->a18, e->fF);
        TUdpSocket__sub_803F9EE4(o.d, 0, e->fE);
        TLobby__sub_803F9F04(o.e, name, e->fF);
        TLobby__sub_80409B48(e->f2, e->f6, 1, 0, (s32)r);
        if (r != NULL) {
            TUdpSocket__sub_804072C4(r);
        }
    }
}

s32 TLobby__sub_8040799C(s16 arg0, void *arg1, void *arg2) {
    Tbl_8040799C *t = TBL;
    Ent_8040799C *e;
    Peer_8040799C *p;
    s32 ret;
    Peer_8040799C *np;

    e = Lookup_8040799C(t, arg0);
    if (e == NULL) {
        return -2;
    }
    ret = 0;
    p = Find_8040799C(t, e->fF, arg1);
    if (p != NULL) {
        p->f2 = t->hA;
        if (p->st != 1) {
            ret = TLobby__sub_80409B48(e->f2, e->f4, 0, (s32)p->addr, (s32)arg2);
        } else {
            if (p->conn != NULL) {
                Clear_8040799C(p);
                p->conn = NULL;
            }
            TLobby__sub_80408060(p, arg2);
            Send_8040799C(e, arg1);
            p->f2 = t->hC;
        }
    } else {
        u8 buf[6];
        TUdpSocket__sub_803F9EE4(buf, 0, 6);
        np = (Peer_8040799C *)TLobby__sub_80408428(e->f2, e->f4, e->fF, arg1, e->fE, buf, 1);
        TLobby__sub_80408060(np, arg2);
        Send_8040799C(e, arg1);
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
s32 TLobby__sub_803F9EC4(void * _w0, void * _w1, int _w2);
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);

s32 TLobby__sub_804082AC(Ent_804082AC *arg0, Key_804082AC *arg1, void *arg2) {
    s16 i;
    Node_804082AC *p;

    if (TLobby__sub_803F9EC4(arg0->f18, arg1->f10, arg0->fF) == 0) {
        TLobby__sub_803F9F04(arg2, arg0->f12, arg0->fE);
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
            if (TLobby__sub_803F9EC4(p->f6, arg1->f10, arg0->fF) == 0) {
                TLobby__sub_803F9F04(arg2, arg0->f12, arg0->fE);
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
        TUdpSocket__sub_803F9EE4(e, 0, 0x20);
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
Ent_804086B4 *TLobby__sub_804086B4(s16 key);

#pragma push
#pragma inline_depth(4)
#pragma dont_inline off

inline Ent_80408428 *find_80408428(Tbl_80408428 *t, u8 type, void *addr) {
    s16 n = t->count;
    Ent_80408428 *e = t->list;
    while (n > 0) {
        if (e->type5 == type && e->state != 0 && TLobby__sub_803F9EC4(e->addr12, addr, e->type5) == 0) {
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

Ent_80408428 *TLobby__sub_80408428(s16 arg0, s32 arg1, u8 type, void *addr, u8 type2, void *addr2, s16 state) {
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
            if (TLobby__sub_803F9EC4(e->addrC, addr2, n2) != 0) {
                TLobby__sub_803F9F04(e->addrC, addr2, n2);
                e->state = state;
            }
            return e;
        }
        TLobby__sub_803F9F04(e->addrC, addr2, type2);
        e->state = state;
        if (e->sub != NULL) {
            p = (Pkt_80408428 *)TLobby__sub_80407310();
            if (p != NULL) {
                p->f4 = 1;
                p->f8 = e->sub->f6;
                p->fC = e->sub->f6;
                set_value_and_enable__6TLobbyFPvi(p->f10, e->sub->fC);
                TLobby__sub_80409B48(arg0, arg1, 0, (s32)e->addrC, (s32)p);
                TUdpSocket__sub_804072C4(p);
            }
        }
        detach_80408428(e);
        return e;
    }
    if (addr2 == NULL) {
        return NULL;
    }
    e = (Ent_80408428 *)TLobby__sub_80408718();
    if (e == NULL) {
        e = (Ent_80408428 *)TLobby__sub_804086B4(4);
        if (e == NULL) {
            e = (Ent_80408428 *)TLobby__sub_804086B4(0);
        }
        if (e->sub != NULL) {
            detach_80408428(e);
        }
        e->state = 0;
        e->stamp = 0;
        TUdpSocket__sub_803F9EE4(e->addrC, 0, 6);
        TUdpSocket__sub_803F9EE4(e->addr12, 0, 4);
    }
    if (addr2 != NULL) {
        TLobby__sub_803F9F04(e->addrC, addr2, type2);
    }
    TLobby__sub_803F9F04(e->addr12, addr, type);
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
Ent_804086B4 *TLobby__sub_804086B4(s16 key) {
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

Ent_80408718 *TLobby__sub_80408718(void) {
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

void TLobby__sub_8040874C(void) {
    TLobby__sub_8040878C();
}

void TLobby__sub_8040876C(void) {
    TLobby__sub_8040881C();
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
M2C_UNK TLobby__sub_80409908(void *, void *);
M2C_UNK TLobby__sub_804253A0(void *);
u8 *TLobby__sub_8042558C(s32);
struct Tbl_80408F2C;
extern Tbl_80408F2C lbl_805C1AD8;

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

s32 TLobby__sub_80408C24(s16 idx, s16 mode, u8 *addr, void *pkt) {
    void TUdpSocket__sub_803F9EE4(void *, int, int);
    void TLobby__sub_803F9F04(void *, void *, int);
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
        TLobby__sub_803F9F04(hdr.dst, addr, 6);
        break;
    case 1:
        TUdpSocket__sub_803F9EE4(hdr.dst, 0xFF, 6);
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
    TLobby__sub_803F9F04(hdr.src, c->mac, 6);
    hdr.type = e->type;
    TLobby__sub_803F9F04(c->buf, &hdr, 0xE);
    len = TLobby__sub_804098B4(pkt);
    if (len > 0x5DC) {
        TLobby__sub_804253A0(c->buf);
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
        TLobby__sub_804253A0(c->buf);
        return -0x111;
    }
    return 0;
}
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
    e = M2C_FIELD(&lbl_805C1AD8, Sock_80409130 **, 0x10);
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
            return TLobby__sub_804073F8(h, arg2);
        }
        if (arg1 == 2) {
            return TLobby__sub_804073D8(h, arg2);
        }
        return -2;
    default:
        return -2;
    case 0x86DD:
        return 0;
    }
}

#define TBL_804099B4 (*(Tbl_804099B4 *)&lbl_805D7AF8)
s32 TLobby__sub_804099B4(s16 arg0) {
    s32 ret;
    TLobby__sub_803F95C4(lbl_805C1C50.value);
    if (arg0 < 0 || arg0 > TBL_804099B4.count) {
        ret = -0x10F;
    } else {
        Ent_804099B4 *e = TBL_804099B4.ents;
        e += arg0;
        TUdpSocket__sub_803F9EE4(e, 0, 0x30);
        ret = 0;
    }
    TUdpSocket__sub_803F95A4(lbl_805C1C50.value);
    return ret;
}

s16 TLobby__sub_80409A3C(u8 *arg0, s16 arg1) {
    s16 temp_r31;
    TLobby__sub_803F95C4((*(RecoveredGlobal_80409A3C_lbl_805C1C50 *)&lbl_805C1C50).value);
    temp_r31 = TLobby__sub_8040A2BC(arg0, arg1);
    TUdpSocket__sub_803F95A4((*(RecoveredGlobal_80409A3C_lbl_805C1C50 *)&lbl_805C1C50).value);
    return temp_r31;
}

s32 TLobby__sub_80409AA8(void) {
    TLobby__sub_803F8A9C((void *)((void *) (&lbl_805D7AF8)));
    lbl_805D7AF8 = 0;
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

extern G_8040A45C lbl_805C1AF0;

#define TBL_80409B48 (*(Tbl_80409B48 *)&lbl_805D7AF8)
s32 TLobby__sub_80409B48(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
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

#define TBL_80409BD4 (*(Tbl_80409BD4 *)&lbl_805D7AF8)
s32 TLobby__sub_80409BD4(s16 arg0, s32 arg1, s32 arg2, s32 arg3) {
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

#define TBL_80409C5C (*(Tbl_80409C5C *)&lbl_805D7AF8)

s32 TLobby__sub_80409C5C(s16 arg0, s32 arg1, s32 arg2) {
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

#define TBL_80409CE0 (*(Tbl_80409CE0 *)&lbl_805D7AF8)

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

#define TBL_80409D7C (*(Tbl_80409D7C *)&lbl_805D7AF8)

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

#define TBL_80409E18 (*(Tbl_80409E18 *)&lbl_805D7AF8)

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

#define TBL_80409EB0 (*(Tbl_80409EB0 *)&lbl_805D7AF8)

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
s32 TLobby__sub_80421844(void *);
void TLobby__sub_8040AF48(void);

s32 TLobby__sub_8040A3C0(void) {
    s32 ret;
    s16 i;
    Mgr_8040A3C0 *m = (Mgr_8040A3C0 *)&lbl_805C1AF0;
    Ent_8040A3C0 *e;

    ret = TLobby__sub_80421844((void *)TLobby__sub_8040AF48);
    e = m->ents;
    i = 0;
    while (i < m->count) {
        if (e->active != 0) {
            TLobby__sub_8040BF38((u8 *)(e));
        }
        i++;
        e++;
    }
    TLobby__sub_803F86BC(m);
    return ret;
}

void TLobby__sub_803F86C0(void *);
void TLobby__sub_804218AC(void (*)(void), int);

void TLobby__sub_8040A45C(void) {
    G_8040A45C *g = &lbl_805C1AF0;
    s16 i;

    TUdpSocket__sub_803F9EE4(&g->h0, 0, sizeof(G_8040A45C));
    TLobby__sub_803F86C0(&g->h0);
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
    TLobby__sub_804218AC(TLobby__sub_8040AF48, 1000);
}

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

s32 TLobby__sub_8040AD64(void) {
    Mgr_8040AD64 *g = (Mgr_8040AD64 *)&lbl_805C1AF0;
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
void TLobby__sub_8040C00C(Conn_8040AF48 *, s32);

void TLobby__sub_8040AF48(void) {
    Mgr_8040AF48 *g;
    Conn_8040AF48 *c;
    s16 i;

    TLobby__sub_8040B3B4();
    g = (Mgr_8040AF48 *)&lbl_805C1AF0;
    c = g->conns;
    i = 0;
    while (i < g->nconns) {
        if (c->state == 1 && c->timer > 0) {
            if (--c->timer <= 0) {
                TLobby__sub_8040C00C(c, 0);
            }
        }
        i++;
        c++;
    }
    TLobby__sub_8040AFE0();
}

Rec_8040B33C *TLobby__sub_8040B33C(A_8040B33C *a) {
    G_8040A45C *g = &lbl_805C1AF0;
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

#pragma push
#pragma opt_propagation off
s32 TLobby__sub_8040B6E4(Q_8040B6E4 *q, u8 *name, s16 len) {
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
    TLobby__sub_803F9F04(body, &qt, 4);
    q->pkt->len = total + 4;
    return 0;
}
#pragma pop

#pragma push
#pragma opt_propagation off
s32 TLobby__sub_8040B790(Q_8040B790 *q, u8 *name, s16 len) {
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
    TLobby__sub_803F9F04(body, &qt, 4);
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
    M2C_FIELD(p, s16 *, 4) = -1;
    return r;
}
s32 TLobby__sub_8040BF38(u8 *arg0) {
    s16 *temp_r3_2;
    s16 *temp_r3_3;
    s32 temp_r3;
    s32 var_r31;
    var_r31 = close_8040BF38(arg0, M2C_FIELD(arg0, s16 *, 4));
    TLobby__sub_80421814();
    temp_r3_2 = (s16 *)(M2C_FIELD(arg0, s16 **, 0x18));
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s16 *, 0) = 0;
        M2C_FIELD(arg0, s16 **, 0x18) = NULL;
    }
    temp_r3_3 = (s16 *)(M2C_FIELD(arg0, s16 **, 0x1C));
    if (temp_r3_3 != NULL) {
        M2C_FIELD(temp_r3_3, s16 *, 0) = 0;
        M2C_FIELD(arg0, s16 **, 0x1C) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = -0x41;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    if (M2C_FIELD(arg0, u32 *, 0xC) != 0xFFFFFFFFU) {
        TLobby__sub_803F9AA8();
        M2C_FIELD(arg0, s32 *, 0xC) = -1;
    }
    TLobby__sub_804217E4();
    return var_r31;
}

s32 TLobby__sub_8040C4B0(O_8040C4B0 *o, N_8040C4B0 *n) {
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
    for (p = o->head, i = 0; i < ((G_8040C4B0 *)&lbl_805C1AF0)->lim; i++) {
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

void TLobby__sub_8040C540(Conn_8040C540 *arg0, s16 arg1) {
    SubA_8040C540 *a;
    SubB_8040C540 *b;
    s32 err;

    switch (arg0->state) {
    case 1:
        a = (SubA_8040C540 *)arg0->sub;
        if ((u32)a->cb == 0xFFFFFFFFU) {
            return;
        }
        if (a->cb == NULL) {
            if (arg1 != 0) {
                TLobby__sub_80421814();
                if (arg0->thread != 0xFFFFFFFFU) {
                    TLobby__sub_803F9AA8();
                    arg0->thread = -1;
                }
                TLobby__sub_804217E4();
                return;
            }
            if (arg0->thread != 0xFFFFFFFFU) {
                TLobby__sub_803F9AA8();
                arg0->thread = -1;
            }
            return;
        }
        err = arg0->err;
        if ((s16)err < 0) {
            a->cb(arg0->id, a->f4, err, a->fC, 0);
        } else {
            TLobby__sub_8040C74C(a);
            a->cb(arg0->id, a->f4, a->f8, a->fC, a->f10);
        }
        a->cb = NULL;
        break;
    case 12:
        b = (SubB_8040C540 *)arg0->sub;
        if ((u32)b->cb == 0xFFFFFFFFU) {
            return;
        }
        if (b->cb == NULL) {
            if (arg1 != 0) {
                TLobby__sub_80421814();
                if (arg0->thread != 0xFFFFFFFFU) {
                    TLobby__sub_803F9AA8();
                    arg0->thread = -1;
                }
                TLobby__sub_804217E4();
                return;
            }
            if (arg0->thread != 0xFFFFFFFFU) {
                TLobby__sub_803F9AA8();
                arg0->thread = -1;
            }
            return;
        }
        err = arg0->err;
        if ((s16)err < 0) {
            b->cb(arg0->id, b->f0, err);
        } else {
            if (b->fC == NULL) {
                b->f4 = -0x42;
            } else if (b->f0 == 0) {
                b->f4 = TLobby__sub_8040C978(b->fC + 0x1C);
            } else {
                b->f4 = TLobby__sub_8040C8A8(b->f0, b->fC + 0x1C, b->f4);
            }
            b->cb(arg0->id, b->f0, b->f4);
        }
        b->cb = NULL;
        break;
    }
}

s32 TLobby__sub_8040C9E0(u8 *arg0, u8 *arg1) {
    struct Fields_arg0 { u8 pad_0[4]; s32 field_4; u8 pad_8[16]; u16 field_18; };
    struct Fields_arg1 { u8 pad_0[4]; u32 field_4; u8 pad_8[16]; u16 field_18; };
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r5;
    u16 temp_r0;
    u8 *var_r3;
    u8 *var_r4;
    temp_r0 = ((Fields_arg0*)arg0)->field_18;
    switch ((s32) temp_r0) {
    case 1:
        if ((u16) ((Fields_arg1*)arg1)->field_18 != 1) {
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        temp_r0_2 = ((Fields_arg0*)arg0)->field_4;
        switch (temp_r0_2) {
        case 4:
            if ((u32) ((Fields_arg1*)arg1)->field_4 != 4U) {
                var_r3 = (u8 *)((void *)-1);
                return -1;
            }
            var_r3 = (u8 *)(arg0 + 8);
            var_r4 = (u8 *)(arg1 + 8);
            var_r5 = 4;
            return TLobby__sub_803F9EC4((void *)((int) (var_r3)), (void *)((int) (var_r4)), (int)((int) (4)));
        case 6:
            if ((u32) ((Fields_arg1*)arg1)->field_4 != 6U) {
                var_r3 = (u8 *)((void *)-1);
                return -1;
            }
            var_r3 = (u8 *)(arg0 + 8);
            var_r4 = (u8 *)(arg1 + 8);
            var_r5 = 0x10;
            return TLobby__sub_803F9EC4((void *)((int) (var_r3)), (void *)((int) (var_r4)), (int)((int) (0x10)));
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
        temp_r0_3 = ((Fields_arg0*)arg0)->field_4;
        switch (temp_r0_3) {
        case 4:
            if ((u32) ((Fields_arg1*)arg1)->field_4 != 4U) {
                var_r3 = (u8 *)((void *)-1);
                return -1;
            }
            var_r3 = (u8 *)(arg0 + 8);
            var_r4 = (u8 *)(arg1 + 8);
            var_r5 = 4;
            return TLobby__sub_803F9EC4((void *)((int) (var_r3)), (void *)((int) (var_r4)), (int)((int) (4)));
        case 6:
            if ((u32) ((Fields_arg1*)arg1)->field_4 != 6U) {
                var_r3 = (u8 *)((void *)-1);
                return -1;
            }
            var_r3 = (u8 *)(arg0 + 8);
            var_r4 = (u8 *)(arg1 + 8);
            var_r5 = 0x10;
            return TLobby__sub_803F9EC4((void *)((int) (var_r3)), (void *)((int) (var_r4)), (int)((int) (0x10)));
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

s32 TLobby__sub_8040D86C(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, void *arg4, void *arg5) {
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

u16 TLobby__sub_8040D8F0(u8 *arg0, u8 *arg1, s8 arg2, u8 *arg3, s16 arg4) {
    struct Fields_arg0 { s32 field_0; s32 field_4; };
    struct Fields_arg1 { u8 pad_0[4]; s32 field_4; };
    s32 temp_r0;
    temp_r0 = ((Fields_arg0*)arg0)->field_0;
    switch (temp_r0) {
    case 4:
        return TLobby__sub_8040EC38(((Fields_arg0*)arg0)->field_4, ((Fields_arg1*)arg1)->field_4, arg2, arg3, arg4);
    case 6:
        return TLobby__sub_80411040((void *) (arg0 + 4), (void *) (arg1 + 4));
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
s32 TLobby__sub_8040D95C(Out_8040D95C *arg0, In_8040D95C *arg1) {
    Ent_8040D95C *e;
    s16 ok;
    s16 TLobby__sub_80414A0C(u8 *arg0);

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
        ok = TLobby__sub_80414A0C((u8 *)&arg0->f4);
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
    s32 temp_r0;
    s32 var_r4;
    u8 *var_r3;
    temp_r0 = ((Fields_arg0*)arg0)->field_0;
    switch (temp_r0) {
    case 4:
        var_r3 = (u8 *)(((Fields_arg0*)arg0)->field_4);
        var_r4 = ((Fields_arg1*)arg1)->field_4;
        return TLobby__sub_8040F738((u32)((int) (var_r3)), (u32)((int) (var_r4)));
    case 6:
        var_r3 = (u8 *)(arg0 + 4);
        var_r4 = (long) (arg1 + 4);
        return TLobby__sub_80413230((u8 *)((int) (var_r3)), (s32)((int) (var_r4)));
    default:
    case 0:
        var_r3 = (u8 *)((void *)-2);
        return -2;
    }
}

s16 TLobby__sub_8040DABC(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {
    case 0:
        return 0;
    case 4:
        temp_r3 = M2C_FIELD(arg0, u32 *, 4);
        if (temp_r3 != 0) {
            return TLobby__sub_8040FCEC(temp_r3);
        }
        return 0;
    case 6:
        return TLobby__sub_804136EC((s32) ((u8 *)(arg0) + 4));
    default:
        return -2;
    }
}

s32 TLobby__sub_8040DB34(u8 *arg0, s16 arg1) {
    struct Fields_arg0 { s32 field_0; u32 field_4; };
    s32 temp_r0;
    temp_r0 = ((Fields_arg0*)arg0)->field_0;
    switch (temp_r0) {
    case 4:
        return TLobby__sub_8040FDA0(((Fields_arg0*)arg0)->field_4, arg1);
    case 6:
        return NetIPv6IsMulticast((u8 *)(arg0 + 4));
    case 0:
    default:
        return 0;
    }
}

s32 TLobby__sub_8040DB94(u8 *arg0) {
    struct Fields_arg0 { s32 field_0; u32 field_4; };
    s32 temp_r0;
    temp_r0 = ((Fields_arg0*)arg0)->field_0;
    switch (temp_r0) {
    case 0:
        return 1;
    case 4:
        return NetIPv4IsUnspecified((u32)(((Fields_arg0*)arg0)->field_4));
    case 6:
        return TLobby__sub_80414A0C((u8 *)(arg0 + 4));
    default:
        return 0;
    }
}

s32 TLobby__sub_8040DBFC(u8 *arg0, u8 *arg1) {
    struct Fields_arg0 { s32 field_0; u8 * field_4; };
    struct Fields_arg1 { u32 field_0; u8 * field_4; };
    s32 temp_r0;
    u8 *var_r3;
    u8 *var_r4;
    temp_r0 = ((Fields_arg0*)arg0)->field_0;
    switch (temp_r0) {
    case 4:
        if ((u32) ((Fields_arg1*)arg1)->field_0 != 4U) {
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        var_r3 = (u8 *)(((Fields_arg0*)arg0)->field_4);
        var_r4 = (u8 *)(((Fields_arg1*)arg1)->field_4);
        return TLobby__sub_8040FEE4((s32)((int) (var_r3)), (s32)((int) (var_r4)));
    case 6:
        if ((u32) ((Fields_arg1*)arg1)->field_0 != 6U) {
            var_r3 = (u8 *)((void *)-1);
            return -1;
        }
        var_r3 = (u8 *)(arg0 + 4);
        var_r4 = (u8 *)(arg1 + 4);
        return TLobby__sub_80414B54((s32)((int) (var_r3)), (s32)((int) (var_r4)));
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
    s16 temp_r3_2;
    u32 temp_r5;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    temp_r5 = M2C_FIELD(arg0, u32 *, 0);
    if ((u32) M2C_FIELD(arg1, u32 *, 0) != temp_r5) {
        return -2;
    }
    switch ((s32) temp_r5) {
    case 4:
        temp_r3_3 = (u8 *)(TLobby__sub_8040F76C(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4)));
        if (temp_r3_3 == NULL) {
            return -6;
        }
        temp_r3 = TLobby__sub_8040EF00(M2C_FIELD(temp_r3_3, s16 *, 2));
        if (temp_r3 < 0x28) {
            return -6;
        }
        return temp_r3 - 0x28;
    case 6:
        temp_r3_4 = (u8 *)(TLobby__sub_80413264(arg0 + 4, (s32)(arg1 + 4)));
        if (temp_r3_4 == NULL) {
            return -6;
        }
        temp_r3_2 = TLobby__sub_80411ECC(M2C_FIELD(temp_r3_4, s16 *, 6));
        if (temp_r3_2 < 0x3C) {
            return -6;
        }
        return temp_r3_2 - 0x3C;
    case 0:
    default:
        return -2;
    }
}

s32 TLobby__sub_8040DD68(void) {
    TLobby__sub_8041A0C0((int) (0x800));
    TLobby__sub_803F892C((void *)((void *) (&lbl_805C1B38.value)));
    lbl_805C1B38.value = 0;
    return 0;
}

typedef void (*Handler_8041A130)(s32, s16, s16, s16);
s32 TLobby__sub_8041A130(u16 type, Handler_8041A130 fn);
void TUdpSocket__sub_8040DE4C(void);
s32 TLobby__sub_8040DDB0(void) {
    s16 i;
    E_8040DDB0 *e;
    RecoveredGlobal_8040DD68_lbl_805C1B38 *g = &lbl_805C1B38;

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
    TLobby__sub_8041A130(0x800, (Handler_8041A130)TUdpSocket__sub_8040DE4C);
    return 0;
}

typedef char RecoveredGlobal_8040ED28_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040ED28_lbl_805C1B60) == 0x18 ? 1 : -1];

struct PH_8040EC38 { s32 src; s32 dst; u8 zero; s8 proto; u16 len; };
struct P_8040EC38 { u8 pad0[8]; s32 f8; s16 fC; };

u16 TUdpSocket__sub_80419864(void *, s32);

u16 TLobby__sub_8040EC38(s32 src, s32 dst, s8 proto, void *pkt, s16 flag) {
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

u16 TLobby__sub_8040ECEC(void *a, s16 b) {
    u32 s = TLobby__sub_80406BD8(a, b);
    s = (s >> 16) + (s & 0xFFFF);
    s += (s >> 16);
    return ~s;
}

s32 TLobby__sub_8040ED28(void) {
    TLobby__sub_803F8958((void *)((void *) (&(*(RecoveredGlobal_8040ED28_lbl_805C1B60 *)&lbl_805C1B60).value)));
    M2C_FIELD(&(*(RecoveredGlobal_8040ED28_lbl_805C1B60 *)&lbl_805C1B60).value, s16 *, 0) = 0;
    M2C_FIELD(&(*(RecoveredGlobal_8040ED28_lbl_805C1B60 *)&lbl_805C1B60).value, s16 *, 2) = 0;
    M2C_FIELD(&(*(RecoveredGlobal_8040ED28_lbl_805C1B60 *)&lbl_805C1B60).value, s16 *, 4) = 0;
    return 0;
}

typedef char RecoveredGlobal_8040ED70_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040ED70_lbl_805C1B60) == 0x18 ? 1 : -1];
s32 TLobby__sub_8040ED70(void) {
    TLobby__sub_803F895C((u8 *)((void *) (&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&lbl_805C1B60).value)));
    TUdpSocket__sub_803F9EE4((void *)((int) (M2C_FIELD(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&lbl_805C1B60).value, s32 *, 8))), (int)((int) (0)), (int)((int) (M2C_FIELD(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&lbl_805C1B60).value, s16 *, 0) * 0x14)));
    TUdpSocket__sub_803F9EE4((void *)((int) (M2C_FIELD(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&lbl_805C1B60).value, s32 *, 0xC))), (int)((int) (0)), (int)((int) (M2C_FIELD(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&lbl_805C1B60).value, s16 *, 2) * 0x14)));
    TUdpSocket__sub_803F9EE4((void *)((int) (M2C_FIELD(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&lbl_805C1B60).value, s32 *, 0x10))), (int)((int) (0)), (int)((int) (M2C_FIELD(&(*(RecoveredGlobal_8040ED70_lbl_805C1B60 *)&lbl_805C1B60).value, s16 *, 4) * 0x18)));
    return 0;
}

#pragma push
#pragma opt_common_subs on
s16 TLobby__sub_8040EF00(s16 arg0) {
    struct Fields_temp_r3 { s16 field_0; u8 pad_2[2]; s16 field_4; };
    u8 *temp_r3;
    if ((arg0 < 0) || (arg0 >= (s16) M2C_FIELD(&lbl_805C1B60.value, s16 *, 2))) {
        return -0x109;
    }
    temp_r3 = (u8 *)(M2C_FIELD(&lbl_805C1B60.value, s32 *, 0xC) + (arg0 * 0x1C));
    if ((s16) ((Fields_temp_r3*)temp_r3)->field_0 != 1) {
        return -2;
    }
    return ((Fields_temp_r3*)temp_r3)->field_4;
}
#pragma pop

s32 TLobby__sub_8040F738(u32 arg0, u32 arg1) {
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

    g = (G_RT *)&lbl_805C1B60;
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
    if (arg1 < 0 || arg1 >= ((G_8040FDA0 *)&lbl_805C1B60)->count) {
        e = NULL;
    } else {
        e = ((G_8040FDA0 *)&lbl_805C1B60)->ents;
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
    if ((arg0 < 0) || (arg0 >= (s16) M2C_FIELD(&(*(RecoveredGlobal_8040FE40_lbl_805C1B60 *)&lbl_805C1B60).value, s16 *, 2))) {
        var_r3 = (s16 *)((u8 *)(NULL));
    } else {
        var_r3 = (s16 *)(M2C_FIELD(&(*(RecoveredGlobal_8040FE40_lbl_805C1B60 *)&lbl_805C1B60).value, s32 *, 0xC) + (arg0 * 0x1C));
        if ((s16) ((Fields_var_r3*)var_r3)->field_0 != 1) {
            var_r3 = (s16 *)((u8 *)(NULL));
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
s16 *TLobby__sub_8040FE9C(s16 arg0) {
    s16 *temp_r3;
    if ((arg0 < 0) || (arg0 >= (s16) M2C_FIELD(&(*(RecoveredGlobal_8040FE9C_lbl_805C1B60 *)&lbl_805C1B60).value, s16 *, 2))) {
        return NULL;
    }
    temp_r3 = (s16 *)(M2C_FIELD(&(*(RecoveredGlobal_8040FE9C_lbl_805C1B60 *)&lbl_805C1B60).value, s32 *, 0xC) + (arg0 * 0x1C));
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
s32 TLobby__sub_8040FF0C(void) {
    TLobby__sub_8041A0C0((int) (0x86DD));
    TLobby__sub_803F87DC((void *)((void *) (&lbl_805C1B78.value)));
    lbl_805C1B78.value = 0;
    return 0;
}

void TLobby__sub_8040FFF8(void);
s32 TLobby__sub_8040FF58(void) {
    s16 i;
    E_8040FF58 *e;
    RecoveredGlobal_8040FF0C_lbl_805C1B78 *g = &lbl_805C1B78;

    TLobby__sub_803F87E0((Obj_803F87E0 *)&g->value);
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
    TLobby__sub_8041A130(0x86DD, (Handler_8041A130)TLobby__sub_8040FFF8);
    return 0;
}

#pragma push
#pragma opt_common_subs on
void TLobby__sub_80419DDC(void *);
void TLobby__sub_80411334(void);
void TLobby__sub_80411BE8(void);
s32 TLobby__sub_8041112C(void) {
    RecoveredGlobal_8041123C_lbl_805C1BB8 *g = &lbl_805C1BB8;
    TLobby__sub_80419DDC((void *)TLobby__sub_80411334);
    TLobby__sub_80419DDC((void *)TLobby__sub_80411BE8);
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

void TLobby__sub_803F8868(void *);
void TUdpSocket__sub_80419E64(int, int, void (*)(void));

#define g ((G_8041118C *)&lbl_805C1BB8)
s32 TUdpSocket__sub_8041118C(void) {
    TLobby__sub_803F8868(g);
    TUdpSocket__sub_803F9EE4(g->p18, 0, g->n0 * 0x2A);
    TUdpSocket__sub_803F9EE4(g->p1C, 0, g->n1 * 0x2A);
    TUdpSocket__sub_803F9EE4(g->p20, 0, g->n2 * 0x2C);
    TUdpSocket__sub_803F9EE4(g->p24, 0, g->n14 * 0x16);
    TUdpSocket__sub_80419E64(0x3E8, 1, TLobby__sub_80411334);
    TUdpSocket__sub_80419E64(0x3E8, 1, TLobby__sub_80411BE8);
    return 0;
}
#undef g

s32 TLobby__sub_8041123C(s32 arg0, s32 arg1, s16 arg2) {
    struct Fields_temp_r3 { s16 field_0; s16 field_2; };
    u8 *temp_r3;
    if ((arg2 < 0) || (arg2 >= (s16) M2C_FIELD(&lbl_805C1BB8.value, s16 *, 2))) {
        return -0x10A;
    }
    temp_r3 = (u8 *)(M2C_FIELD(&lbl_805C1BB8.value, s32 *, 0x1C) + (arg2 * 0x30));
    if ((s16) ((Fields_temp_r3*)temp_r3)->field_0 != 1) {
        return -6;
    }
    return TLobby__sub_80409B48(arg2, (s32)((s32) ((Fields_temp_r3*)temp_r3)->field_2), (s32)(0), (s32)(arg1), (s32)(arg0));
}
#pragma pop

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_804112B8(s32 arg0, s32 arg1, s16 arg2) {
    struct Fields_temp_r3 { s16 field_0; s16 field_2; };
    u8 *temp_r3;
    if ((arg2 < 0) || (arg2 >= (s16) M2C_FIELD(&(*(RecoveredGlobal_804112B8_lbl_805C1BB8 *)&lbl_805C1BB8).value, s16 *, 2))) {
        return -0x10A;
    }
    temp_r3 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_804112B8_lbl_805C1BB8 *)&lbl_805C1BB8).value, s32 *, 0x1C) + (arg2 * 0x30));
    if ((s16) ((Fields_temp_r3*)temp_r3)->field_0 != 1) {
        return -6;
    }
    return TLobby__sub_80409B48(arg2, (s32)((s32) ((Fields_temp_r3*)temp_r3)->field_2), (s32)(2), (s32)(arg1), (s32)(arg0));
}
#pragma pop

#pragma push
#pragma opt_common_subs on
struct Ent_80411BE8 { s16 f0; u8 pad[0x12]; s16 f14; };
struct G_80411BE8 { u8 pad[0x14]; s16 n; u8 pad2[0xE]; Ent_80411BE8 *p; };

void TLobby__sub_80411BE8(void) {
    G_80411BE8 *G = (G_80411BE8 *)&lbl_805C1BB8;
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

s16 TLobby__sub_80411ECC(s16 arg0) {
    struct Fields_temp_r3 { s16 field_0; u8 pad_2[36]; s16 field_26; };
    u8 *temp_r3;
    if ((arg0 < 0) || (arg0 >= (s16) M2C_FIELD(&(*(RecoveredGlobal_80411ECC_lbl_805C1BB8 *)&lbl_805C1BB8).value, s16 *, 2))) {
        return -0x10A;
    }
    temp_r3 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_80411ECC_lbl_805C1BB8 *)&lbl_805C1BB8).value, s32 *, 0x1C) + (arg0 * 0x30));
    if ((s16) ((Fields_temp_r3*)temp_r3)->field_0 != 1) {
        return -2;
    }
    return ((Fields_temp_r3*)temp_r3)->field_26;
}
#pragma pop

s32 TLobby__sub_80413230(u8 *arg0, s32 arg1) {
    if (TLobby__sub_80413264(arg0, arg1) != NULL) {
        return 1;
    }
    return 0;
}

void TLobby__sub_804136AC(s16 arg0) {
    TLobby__sub_8040A19C(arg0);
}

void TLobby__sub_804136CC(s16 arg0) {
    TLobby__sub_8040A25C(arg0);
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
s32 TLobby__sub_804143BC(u8 *arg0) {
    s16 var_r0;
    s16 var_r0_2;
    s16 var_r0_3;
    s16 var_r0_4;
    s32 temp_r0;
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
        temp_r0 = ((RecoveredFields_804143BC_arg0 *)arg0)->field_1 & 0xF;
        switch (temp_r0) {
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
        if (TLobby__sub_804148A8(arg0) != 0) {
            var_r3 = 1;
            return 1;
        }
        var_r3 = 0;
        return 0;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs on
s16 *TLobby__sub_8041471C(s16 arg0) {
    s16 *temp_r3;
    if ((arg0 < 0) || (arg0 >= (s16) M2C_FIELD(&(*(RecoveredGlobal_8041471C_lbl_805C1BB8 *)&lbl_805C1BB8).value, s16 *, 2))) {
        return NULL;
    }
    temp_r3 = (s16 *)(M2C_FIELD(&(*(RecoveredGlobal_8041471C_lbl_805C1BB8 *)&lbl_805C1BB8).value, s32 *, 0x1C) + (arg0 * 0x30));
    if ((s16) *temp_r3 != 1) {
        return NULL;
    }
    return temp_r3;
}
#pragma pop

s32 TLobby__sub_80414870(u8 *arg0) {
    u8 temp_r3;

    if ((u8) M2C_FIELD(arg0, u8 *, 0) != 0xFE) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, u8 *, 1);
    if (!(temp_r3 & 0x80) || (temp_r3 & 0x40)) {
        return 0;
    }
    return 1;
}

s16 TLobby__sub_804148A8(u8 *arg0) {
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

s32 TLobby__sub_80414A0C(u8 *arg0) {
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

s32 TLobby__sub_80414B54(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = TLobby__sub_803F9EC4((void *) (arg0), (void *) (arg1), (int) (0x10));
    if (temp_r3 < 0) {
        return -1;
    }
    if (temp_r3 > 0) {
        return 1;
    }
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
s16 TLobby__sub_8041552C(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return M2C_FIELD(&lbl_805C1BE0.value, s16 *, 0xA);
}

struct E_80415558 { s16 a; s16 b; };
struct G_80415558 { s16 h; E_80415558 e[2]; };
s32 TLobby__sub_80415558(s16 i) {
    if (i != 0 && i != 1) { return -0x110; }
    G_80415558 *g = (G_80415558 *)&lbl_805C1BE0;
    g->e[i].a = 0;
    g->e[i].b = 0;
    return 0;
}

struct E_8041559C { s16 a; s16 b; };
struct G_8041559C { s16 h; E_8041559C e[2]; };
s16 TLobby__sub_8041559C(s16 h, s16 v) {
    s16 r;
    G_8041559C *g = (G_8041559C *)&lbl_805C1BE0;
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

s32 TLobby__sub_80415604(s16 h, u8 *p) {
    if (h != *(s16 *)&lbl_805C1BE0) { return -0x110; }
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
s32 TLobby__sub_80415650(void) {
    TLobby__sub_803F89D8((void *)((void *) (&lbl_805C1BF8.value)));
    lbl_805C1BF8.value = 0;
    return 0;
}

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
void TLobby__sub_80415AEC(void) {
    G_80415B38 *g = &lbl_805C1C08;
    TLobby__sub_80419DDC((void *)TLobby__sub_80415CE8);
    TLobby__sub_803F88E0(g);
    g->nb = 0;
    g->nc = 0;
}

struct Arg2_80415B38 { u8 *addr; u8 *val; };
typedef struct Ent_80418670 { u8 pad0[3]; u8 f3; u8 pad4[2]; s16 f6; u8 pad8[0xC]; u8 f14[0x10]; } Ent_80418670;
M2C_UNK TLobby__sub_80411604(int, int, void *);
Ent_80418670 *TLobby__sub_80418670(void *arg0);
void TUdpSocket__sub_80419E64(int, int, void (*)(void));
void TLobby__sub_80415CE8(void);

s32 TLobby__sub_80415B38(void) {
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

    g = &lbl_805C1C08;
    TUdpSocket__sub_803F9EE4(g, 0, sizeof(G_80415B38));
    TLobby__sub_803F88E4((RecoveredFields_803F88E4_arg0 *)g);
    TLobby__sub_804189AC((u8 *)g);
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
            r = TLobby__sub_80418670(b->addr);
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
    TUdpSocket__sub_80419E64(1000, 1, TLobby__sub_80415CE8);
    return 0;
}

void TLobby__sub_80415CE8(void) {
    TLobby__sub_804162A4();
    TLobby__sub_8041615C();
}

s32 TLobby__sub_80416008(s32 arg0, s32 arg1) {
    struct Fields_temp_r3 { u8 pad_0[4]; s32 field_4; s32 field_8; };
    typedef char sp10_offset[(offsetof(Stack_80416008, sp10) == 0x0) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80416008, sp20) == 0x10) ? 1 : -1];
    Stack_80416008 stack;
    s32 temp_r31;
    u8 *temp_r3;
    if (TLobby__sub_80413D78() != 0) {
        return -0x10E;
    }
    temp_r3 = (u8 *)(TLobby__sub_80407310());
    if (temp_r3 == NULL) {
        return -0x10E;
    }
    ((Fields_temp_r3*)temp_r3)->field_4 = 0;
    ((Fields_temp_r3*)temp_r3)->field_8 = 0;
    TUdpSocket__sub_803F9EE4((void *) (&stack.sp10), (int) (0), (int) (0x10));
    TLobby__sub_80414764((void *) (&stack.sp20), (void *) (arg0));
    temp_r31 = TLobby__sub_80417FA8((int) (temp_r3), (void *) (arg0), (void *) (&stack.sp10), (void *) (arg1), (int) (0));
    TUdpSocket__sub_804072C4((void *) (temp_r3));
    return temp_r31;
}

u8 *TLobby__sub_80407310();
s16 TLobby__sub_804145D4(void *, void *);
M2C_UNK TLobby__sub_804147C8(void *, int);
s32 TLobby__sub_80418158(int, void *, void *);

s32 TLobby__sub_804160BC(s32 arg0) {
    u8 sp1C[0x1C];
    u8 spC[0x10];
    s32 temp_r31;
    u8 *temp_r3;

    temp_r3 = (u8 *)(TLobby__sub_80407310());
    if (temp_r3 == NULL) {
        return -0x10E;
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = 0;
    TLobby__sub_804147C8((void *) (sp1C), (int) (2));
    if (TLobby__sub_804145D4((void *) (spC), (void *) (arg0)) < 0) {
        TUdpSocket__sub_803F9EE4((void *) (spC), (int) (0), (int) (0x10));
    }
    temp_r31 = TLobby__sub_80418158((int) (temp_r3), (void *) (spC), (void *) (arg0));
    TUdpSocket__sub_804072C4(temp_r3);
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
M2C_UNK TLobby__sub_80411604(int, int, void *);
s32 TLobby__sub_80417D1C(u8 *arg0);
s32 TLobby__sub_80417E60(u8 *arg0);
Ent_80418670 *TLobby__sub_80418670(void *arg0);

void TLobby__sub_804162A4(void) {
    Arg_804162A4 a7;
    Arg_804162A4 a6;
    Arg_804162A4 a7b;
    Arg_804162A4 a6b;
    Glob_804162A4 *g = (Glob_804162A4 *)&lbl_805C1C08;
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
                        TLobby__sub_80417D1C((u8 *)e);
                        e->timer = g->delay;
                    } else {
                        if (e->sub != NULL) {
                            e->sub->state = 0;
                            e->sub = NULL;
                        }
                        if (e->flags & 0x80) {
                            r = TLobby__sub_80418670(e->name);
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
                    TLobby__sub_80417E60((u8 *)e);
                    e->phase = 4;
                    e->timer = g->delay;
                    e->tries = 0;
                    break;
                case 4:
                    if (++e->tries < g->maxTries1) {
                        TLobby__sub_80417E60((u8 *)e);
                        e->timer = g->delay;
                    } else {
                        if (e->sub != NULL) {
                            e->sub->state = 0;
                            e->sub = NULL;
                        }
                        if (e->flags & 0x80) {
                            r = TLobby__sub_80418670(e->name);
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
s32 TLobby__sub_80416678(u8 *arg0, s32 n, u8 *arg2, s32 arg3, s16 *arg4, s16 arg5) {
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
            set_value_and_enable__6TLobbyFPvi(sp20, arg3);
            TLobby__sub_80406FD8(sp20, arg0 + 4, *arg4);
            TLobby__sub_80406EB8(arg0 + 4, len);
            break;
        case 2: {
            u8 *p = h + 2;
            s32 l = len - 2;
            e = TLobby__sub_804182DC(arg2 + 8, p, l, arg5);
            if (e != NULL && TLobby__sub_803F9EC4(arg2 + 8, arg2 + 0x18, 0x10) != 0) {
                e->fC |= 0x80;
            }
            TLobby__sub_80406EB8(arg0 + 4, len);
            break;
        }
        }
    }
    return 0;
}

void TLobby__sub_80406EB8(void *);
u8 *TLobby__sub_80406F0C(void *);

s32 TLobby__sub_804168D4(u8 *o, s32 len, u8 **out, s16 *outlen) {
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

M2C_UNK TLobby__sub_80411604(int, int, void *);
s32 TLobby__sub_803F9EC4(void *, void *, int);
u8 *TLobby__sub_80407310();
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803F9F04(void *, void *, int);
void TUdpSocket__sub_804072C4(void *);
s16 TLobby__sub_80413C0C(void *, s32);
s16 TLobby__sub_80413AA0(void *, s32);
s32 TLobby__sub_80410BA8(void *, void *, s32, void *);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_80416994 *FindEnt_80416994(Glob_80416994 *g, void *name) {
    s16 n = g->count;
    Ent_80416994 *e = g->ents;
    for (; n > 0; n--, e++) {
        if (e->state == 1 && TLobby__sub_803F9EC4(e->name, name, 0x10) == 0) {
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
            if (TLobby__sub_803F9EC4(p->name, name, 0x10) == 0) {
                ClearPeer_80416994(p);
            } else {
                hit = p;
            }
        }
    }
    return hit;
}

s32 TLobby__sub_80416994(Msg_80416994 *msg, u8 *name, s16 len, s32 arg3, s32 arg4, s32 id) {
    Arg_80416994 a;
    Arg_80416994 b;
    Glob_80416994 *g = (Glob_80416994 *)&lbl_805C1C08;
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
        if (len == 0 || name == 0 || (e->len == len && TLobby__sub_803F9EC4(e->data, name, len) == 0) || (msg->flags & 0x20)) {
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
            TLobby__sub_803F9F04(e->data, name, e->len);
            if (msg->flags & 0x40) {
                e->phase = 1;
                e->timer = g->delay1;
            } else {
                e->phase = 2;
                e->timer = g->delay2;
            }
            e->flags = msg->flags;
            if (e->sub != 0) {
                Pkt_80416994 *pkt = (Pkt_80416994 *)TLobby__sub_80407310();
                s32 ret;
                if (pkt == 0) {
                    ret = -0x10E;
                } else {
                    pkt->n = 0;
                    pkt->port = e->sub->port;
                    pkt->items[pkt->n].port = e->sub->port;
                    set_value_and_enable__6TLobbyFPvi(pkt->items[pkt->n].val, e->sub->val);
                    pkt->n++;
                    ret = TLobby__sub_80410BA8(pkt, e->sub->addr, e->f8, e->data);
                    TUdpSocket__sub_804072C4(pkt);
                }
                e->sub->state = 0;
                e->sub = 0;
                return ret;
            }
        }
        break;
    case 1:
        if (len != 0 && name != 0 && (e->len != len || TLobby__sub_803F9EC4(e->data, name, len) != 0)) {
            if (msg->flags & 0x20) {
                e->len = ((u32)len > 0x20) ? 0x20 : len;
                TLobby__sub_803F9F04(e->data, name, e->len);
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
        if (len != 0 && name != 0 && (e->len != len || TLobby__sub_803F9EC4(e->data, name, len) != 0)) {
            if (msg->flags & 0x20) {
                e->len = ((u32)len > 0x20) ? 0x20 : len;
                TLobby__sub_803F9F04(e->data, name, e->len);
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

void TLobby__sub_80406FD8(void *, void *, s32);
s16 TLobby__sub_80417294(void *, u32, u8 *, void *);
s16 TLobby__sub_80417494(void *, u8 *, void *);
s16 TLobby__sub_804171BC(u8 *arg0, u8 *arg1, s32 arg2, void *arg3) {
    u8 sp28[8];
    u8 sp18[16];
    u32 n;
    u8 *p;
    s16 r;
    void TLobby__sub_80406EB8(void *, s32);
    s16 TLobby__sub_80414870(u8 *arg0);

    p = arg0 + 0x18;
    n = *(s16 *)(arg0 + 0x18);
    if (n < 0x10U) {
        return -1;
    }
    r = TLobby__sub_80414870(arg1);
    if (r == 0) {
        return -1;
    }
    set_value_and_enable__6TLobbyFPvi(sp28, (s32)sp18);
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
void TLobby__sub_80406FD8(void *, void *, s32);
s16 TLobby__sub_80417868(void *, u32, s32, s32);
s16 TLobby__sub_804177A0(u8 *o, s32 arg1, s32 arg2, s32 arg3) {
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
    set_value_and_enable__6TLobbyFPvi(b, (s32)a);
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
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
void TUdpSocket__sub_804072C4(void *e_);
u8 *TLobby__sub_80407310();
M2C_UNK TLobby__sub_80411604(int, int, void *);
s16 TLobby__sub_804137FC(void *, int);
s32 TLobby__sub_80417FA8(int, void *, void *, void *, int);
M2C_UNK TLobby__sub_80414764(void *, void *);
Ent_80418670 *TLobby__sub_80418670(void *arg0);

s32 TLobby__sub_80417D1C(u8 *arg0) {
    M2C_UNK TLobby__sub_804145D4(void *, int);
    u8 sp2C[0x18];
    u8 sp1C[0x10];
    Arg_80417D1C a7;
    Arg_80417D1C a6;
    s32 temp_r31;
    Ent_80418670 *temp_r3_3;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;

    temp_r3 = TLobby__sub_80407310();
    if (temp_r3 == NULL) {
        temp_r3_2 = M2C_FIELD(arg0, u8 **, 0x10);
        if (temp_r3_2 != NULL) {
            M2C_FIELD(temp_r3_2, s8 *, 3) = 0;
            M2C_FIELD(arg0, u8 **, 0x10) = NULL;
        }
        if (M2C_FIELD(arg0, u8 *, 0xC) & 0x80) {
            temp_r3_3 = TLobby__sub_80418670(arg0 + 0x16);
            if (temp_r3_3 == NULL) {
                a6.p = arg0 + 0x16;
                TLobby__sub_80411604(M2C_FIELD(arg0, s16 *, 8), 6, &a6);
            } else {
                a7.v = (s32)temp_r3_3->f14;
                a7.p = arg0 + 0x16;
                TLobby__sub_80411604(M2C_FIELD(arg0, s16 *, 8), 7, &a7);
            }
        }
        M2C_FIELD(arg0, s8 *, 3) = 0;
        M2C_FIELD(arg0, s16 *, 0x26) = 0;
        return -0x10E;
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = 0;
    temp_r3_4 = M2C_FIELD(arg0, u8 **, 0x10);
    if (temp_r3_4 != NULL && TLobby__sub_804137FC(temp_r3_4 + 8, M2C_FIELD(arg0, s16 *, 8)) != 0) {
        TLobby__sub_803F9F04(sp1C, M2C_FIELD(arg0, u8 **, 0x10) + 8, 0x10);
    } else {
        TLobby__sub_804145D4(sp1C, M2C_FIELD(arg0, s16 *, 8));
    }
    TLobby__sub_80414764(sp2C, arg0 + 0x16);
    temp_r31 = TLobby__sub_80417FA8((int)temp_r3, arg0 + 0x16, sp1C, (void *)M2C_FIELD(arg0, s16 *, 8), 0);
    TUdpSocket__sub_804072C4(temp_r3);
    return temp_r31;
}

typedef struct Arg_80417E60 { u8 *p; s32 v; } Arg_80417E60;
void TLobby__sub_803F9F04(void * _w0, void * _w1, int _w2);
void TUdpSocket__sub_804072C4(void *e_);
u8 *TLobby__sub_80407310();
M2C_UNK TLobby__sub_80411604(int, int, void *);
s16 TLobby__sub_804137FC(void *, int);
s32 TLobby__sub_80417FA8(int, void *, void *, void *, int);
Ent_80418670 *TLobby__sub_80418670(void *arg0);

s32 TLobby__sub_80417E60(u8 *arg0) {
    M2C_UNK TLobby__sub_804145D4(void *, int);
    u8 sp2C[0x18];
    u8 sp1C[0x10];
    Arg_80417E60 a7;
    Arg_80417E60 a6;
    s32 temp_r31;
    Ent_80418670 *temp_r3_3;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;

    temp_r3 = TLobby__sub_80407310();
    if (temp_r3 == NULL) {
        temp_r3_2 = M2C_FIELD(arg0, u8 **, 0x10);
        if (temp_r3_2 != NULL) {
            M2C_FIELD(temp_r3_2, s8 *, 3) = 0;
            M2C_FIELD(arg0, u8 **, 0x10) = NULL;
        }
        if (M2C_FIELD(arg0, u8 *, 0xC) & 0x80) {
            temp_r3_3 = TLobby__sub_80418670(arg0 + 0x16);
            if (temp_r3_3 == NULL) {
                a6.p = arg0 + 0x16;
                TLobby__sub_80411604(M2C_FIELD(arg0, s16 *, 8), 6, &a6);
            } else {
                a7.v = (s32)temp_r3_3->f14;
                a7.p = arg0 + 0x16;
                TLobby__sub_80411604(M2C_FIELD(arg0, s16 *, 8), 7, &a7);
            }
        }
        M2C_FIELD(arg0, s8 *, 3) = 0;
        M2C_FIELD(arg0, s16 *, 0x26) = 0;
        return -0x10E;
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = 0;
    temp_r3_4 = M2C_FIELD(arg0, u8 **, 0x10);
    if (temp_r3_4 != NULL && TLobby__sub_804137FC(temp_r3_4 + 8, M2C_FIELD(arg0, s16 *, 8)) != 0) {
        TLobby__sub_803F9F04(sp1C, M2C_FIELD(arg0, u8 **, 0x10) + 8, 0x10);
    } else {
        TLobby__sub_804145D4(sp1C, M2C_FIELD(arg0, s16 *, 8));
    }
    TLobby__sub_803F9F04(sp2C, arg0 + 0x16, 0x10);
    temp_r31 = TLobby__sub_80417FA8((int)temp_r3, arg0 + 0x16, sp1C, (void *)M2C_FIELD(arg0, s16 *, 8), (int)(arg0 + 0x28));
    TUdpSocket__sub_804072C4(temp_r3);
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

E_804184DC *TLobby__sub_804184DC(u8 *addr, u8 *key, s16 klen) {
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
        s16 m = lbl_805C1C08.maxage;
        age_b = m;
        age_a = m;
    }
    if (addr == NULL) {
        return NULL;
    }
    n = lbl_805C1C08.nb;
    e = (E_804184DC *)lbl_805C1C08.b;
    while (n > 0) {
        if (e->used != 1) {
            if (empty == NULL) {
                empty = e;
            }
        } else if (TLobby__sub_803F9EC4(e->addr, addr, 0x10) == 0) {
            if (klen == 0) {
                if (e->klen != 0) {
                    e->state = 2;
                } else {
                    e->state = 3;
                }
            } else if (e->klen != klen || TLobby__sub_803F9EC4(e->key, key, klen) != 0) {
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
s32 TLobby__sub_803F9EC4(void *, void *, int);

Ent_80418670 *TLobby__sub_80418670(void *arg0) {
    s16 n;
    Ent_80418670 *e;
    Ent_80418670 *found;
    Ent_80418670 *best;

    found = NULL;
    best = NULL;
    n = (*(G_80418670 *)&lbl_805C1C08).f4;
    e = (*(G_80418670 *)&lbl_805C1C08).f10;
    while (n > 0) {
        if (e->f3 == 1) {
            if (TLobby__sub_803F9EC4(e->f14, arg0, 0x10) == 0) {
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

Ent_804188E4 *TLobby__sub_804188E4(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, Ent_804188E4 *best) {
    Ent_804188E4 *free_;
    G_804188E4 *g = (G_804188E4 *)&lbl_805C1C08;
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

void TLobby__sub_804189AC(u8 *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x14) == 0) {
        M2C_FIELD(arg0, s16 *, 0x14) = 0x5DC;
    }
    if (M2C_FIELD(arg0, s16 *, 0x1C) == 0) {
        M2C_FIELD(arg0, s16 *, 0x1C) = 3;
    }
    if (M2C_FIELD(arg0, s16 *, 0x1E) == 0) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 3;
    }
    if (M2C_FIELD(arg0, s16 *, 0x20) == 0) {
        M2C_FIELD(arg0, s16 *, 0x20) = 1;
    }
    if (M2C_FIELD(arg0, s16 *, 0x22) == 0) {
        M2C_FIELD(arg0, s16 *, 0x22) = 3;
    }
    if (M2C_FIELD(arg0, s16 *, 0x24) == 0) {
        M2C_FIELD(arg0, s16 *, 0x24) = 0x1900;
    }
    if (M2C_FIELD(arg0, s16 *, 0x26) == 0) {
        M2C_FIELD(arg0, s16 *, 0x26) = 0x1E;
    }
    if (M2C_FIELD(arg0, s16 *, 0x28) == 0) {
        M2C_FIELD(arg0, s16 *, 0x28) = 1;
    }
    if (M2C_FIELD(arg0, s16 *, 0x2A) == 0) {
        M2C_FIELD(arg0, s16 *, 0x2A) = M2C_FIELD(arg0, s16 *, 0x28) + 1;
    }
    if (M2C_FIELD(arg0, s16 *, 0x2C) == 0) {
        M2C_FIELD(arg0, s16 *, 0x2C) = 6;
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
void TLobby__sub_80419DDC(void *);
void TLobby__sub_80419258(void);
extern G_80418ACC lbl_805C1C38;
s32 TLobby__sub_80418A7C(void) {
    G_80418ACC *g = &lbl_805C1C38;
    TLobby__sub_80419DDC((void *)TLobby__sub_80419258);
    TLobby__sub_803F89A0(g);
    g->na = 0;
    g->nb = 0;
    return 0;
}

s32 TLobby__sub_80418ACC(void) {
    s16 i;
    A_80418ACC *a;
    B_80418ACC *b;
    G_80418ACC *g = &lbl_805C1C38;

    TLobby__sub_803F89A4((u8 *)&lbl_805C1C38);
    g->f14 = 0;
    g->f10 = 0;
    a = g->a;
    for (i = 0; i < g->na; i++) {
        TUdpSocket__sub_803F9EE4(a, 0, sizeof(A_80418ACC));
        a->c0 = 0x46;
        a->c1 = 0x50;
        a->c2 = 0x4B;
        a->c3 = i;
        a->f4 = 0;
        a++;
    }
    b = g->b;
    for (i = 0; i < g->nb; i++) {
        TUdpSocket__sub_803F9EE4(b, 0, sizeof(B_80418ACC));
        b->c0 = 0x46;
        b->c1 = 0x52;
        b->c2 = 0x47;
        b->c3 = i;
        b->f4 = 0;
        b++;
    }
    TUdpSocket__sub_80419E64(1000, 1, TLobby__sub_80419258);
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

struct N_804196EC { u8 pad0[4]; s16 f4; u8 pad6[2]; O_80406B6C o; u8 pad10[4]; N_804196EC *next; };
struct E_804196EC { u8 pad0[4]; s16 f4; u8 pad6[0x1E]; s16 f24; u8 pad26[2]; s32 f28; N_804196EC *list; u8 pad30[4]; };
struct G_804196EC { s16 count; u8 pad2[6]; E_804196EC *ents; u8 padC[4]; E_804196EC *p10; E_804196EC *p14; };

s32 TLobby__sub_80406B6C(O_80406B6C *o);

s32 TLobby__sub_804196EC(E_804196EC *self) {
    G_804196EC *g = (G_804196EC *)&lbl_805C1C38;
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

typedef char RecoveredGlobal_80419A00_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A00_lbl_805C1C50) == 0xF8 ? 1 : -1];
void TLobby__sub_80419A00(void) {
    TUdpSocket__sub_803F9EE4((void *) (&lbl_805C1C50.value), (int) (0), (int) (0xF4));
    TLobby__sub_803F8E08();
}

typedef char RecoveredGlobal_80419A34_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A34_lbl_805C1C50) == 0xF8 ? 1 : -1];
void TLobby__sub_80419A34(void) {
    TUdpSocket__sub_803F9EE4((void *) (&(*(RecoveredGlobal_80419A34_lbl_805C1C50 *)&lbl_805C1C50).value), (int) (0), (int) (0xF4));
    M2C_FIELD(&(*(RecoveredGlobal_80419A34_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 0x10) = 0x1E;
    TLobby__sub_803F8E9C();
}

#pragma push
#pragma opt_common_subs on
typedef char RecoveredGlobal_80419A7C_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A7C_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80419A7C(void) {
    TLobby__sub_803F95C4((int)((int) (M2C_FIELD(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 0))));
    TLobby__sub_803F9AEC((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 0xC))));
    TLobby__sub_803F9AEC((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 8))));
    TLobby__sub_803F9B48((u32)((int) (M2C_FIELD(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 0xC))));
    TLobby__sub_803F9B48((u32)((int) (M2C_FIELD(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 8))));
    TLobby__sub_803F94A0((u32)((int) (M2C_FIELD(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 4))));
    TUdpSocket__sub_803F95A4((int)((int) (M2C_FIELD(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 0))));
    TLobby__sub_803F95E4((int) (M2C_FIELD(&(*(RecoveredGlobal_80419A7C_lbl_805C1C50 *)&lbl_805C1C50).value, s32 *, 0)));
    return 0;
}
#pragma pop

void clear_position__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x25C) = 0;
    M2C_FIELD(arg0, s16 *, 0x25E) = 0;
    M2C_FIELD(arg0, s16 *, 0x260) = 0;
    M2C_FIELD(arg0, s16 *, 0x262) = 0;
}

struct E_8041A0C0 { u8 pad[0x14]; s16 f14; u16 f16; s32 f18; };
s32 TLobby__sub_8041A0C0(u16 a) {
    E_8041A0C0 *g = (E_8041A0C0 *)&lbl_805C1C50;
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

s32 TLobby__sub_8041A130(u16 type, Handler_8041A130 fn) {
    RecoveredGlobal_80419A00_lbl_805C1C50 *g = &lbl_805C1C50;
    s16 i;
    s16 freei;

    if (fn == NULL) {
        return -0x100;
    }
    freei = -1;
    for (i = 0; i < 3; i++) {
        if (lbl_805C1C50.h[i].used != 0) {
            if (lbl_805C1C50.h[i].type == type) {
                return -0x100;
            }
        } else if (freei < 0) {
            freei = i;
        }
    }
    if (freei < 0 || freei >= 3) {
        return -0x100;
    }
    g->h[freei].used = 1;
    g->h[freei].type = type;
    g->h[freei].fn = fn;
    return 0;
}

struct G_8041A1D8 { u8 pad[4]; s16 n; };
void TLobby__sub_80419DDC(void *);
void TLobby__sub_8041A3CC(void);
void TLobby__sub_8041A5B4(void);
s32 TLobby__sub_8041A1D8(void) {
    TLobby__sub_80419DDC((void *)TLobby__sub_8041A5B4);
    TLobby__sub_80419DDC((void *)TLobby__sub_8041A3CC);
    TLobby__sub_803F8794((void *)&lbl_805C1D48);
    ((G_8041A1D8 *)&lbl_805C1D48)->n = 0;
    return 0;
}

struct E_8041A498 { u8 pad0[6]; s16 f6; u8 pad8[6]; u8 fE; u8 padF[0x1ED]; s32 f1FC; s32 f200; u8 pad204[0xCC]; s32 f2D0; u8 pad2D4[0x270]; };
s32 TLobby__sub_8041A9AC(int);
void TLobby__sub_80422368(s16, s32, s16);
void TLobby__sub_8042276C(s16, s32, s16);
void TLobby__sub_80422E30(s32, s32, s32, s16);
void TLobby__sub_8041A498(E_8041A498 *arg0, s16 arg1) {
    s16 idx = arg0 - (E_8041A498 *)lbl_805C1D48.p;

    if (arg0->f6 >= 3) {
        arg0->f6 = 0;
        TLobby__sub_8041A9AC((int)arg0);
    }
    arg0->fE = arg1;
    switch (arg1) {
    case 4:
        TLobby__sub_8042276C(idx, arg0->f1FC, -8);
        TLobby__sub_80422368(idx, arg0->f200, -8);
        TLobby__sub_80422E30(idx, arg0->f2D0, 3, 0xB);
        break;
    default:
        TLobby__sub_8042276C(idx, arg0->f1FC, -5);
        TLobby__sub_80422368(idx, arg0->f200, -5);
        TLobby__sub_80422E30(idx, arg0->f2D0, 3, 0xA);
        break;
    }
    if (TLobby__sub_8041B5C0(arg0) != 0) {
        arg0->f6 = -1;
    }
}

void TLobby__sub_8041D2B8(O_8041D2B8 *o, s16 idx, s32 a, s32 b) {
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

void reset_slot_index__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x320) = -1;
    M2C_FIELD(arg0, s32 *, 0x328) = (s32) M2C_FIELD(arg0, s32 *, 0x324);
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

s16 TLobby__sub_8041DB58(s16 i) {
    s16 r;
    if (i < 0 || i >= lbl_805C1D48.n) {
        r = -4;
    } else if (lbl_805C1D48.p[i].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) { return -4; }
    return lbl_805C1D48.p[i].f6;
}

s32 get_field_d8__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_8041ED8C(int, void *, void *, void *);
extern RecoveredGlobal_8041E178_lbl_805C1D48 lbl_805C1D48;

#pragma push
#pragma opt_propagation off
s32 TLobby__sub_8041DBD4(s16 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 r;
    E_805C1D48 *e;

    if (arg0 < 0 || arg0 >= lbl_805C1D48.n) {
        r = -4;
    } else if (lbl_805C1D48.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = lbl_805C1D48.p;
    e += arg0;
    switch (e->f6) {
    case 0:
    case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        if ((M2C_FIELD(e, u8 *, 0xA) & 4) && (M2C_FIELD(e, u8 *, 0xCC) == 0 || (u32)get_field_d8__6TLobbyFPv((u8 *)e) == 0)) {
            return -4;
        }
        break;
    }
    return TLobby__sub_8041ED8C((int)e, (void *)arg1, (void *)arg2, (void *)arg3);
}
#pragma pop

s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);
s32 get_field_d8__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_8041E178_lbl_805C1D48 lbl_805C1D48;

#pragma push
#pragma opt_propagation off
s32 TLobby__sub_8041E068(s16 arg0, s16 *arg1, s16 *arg2, s32 *arg3, s32 *arg4) {
    s16 r;
    E_805C1D48 *e;

    if (arg0 < 0 || arg0 >= lbl_805C1D48.n) {
        r = -4;
    } else if (lbl_805C1D48.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = lbl_805C1D48.p;
    e += arg0;
    if (arg1 != NULL) {
        *arg1 = e->f6;
    }
    if (arg2 != NULL) {
        if (e->f6 == 1) {
            *arg2 = M2C_FIELD(e, s16 *, 0x2C6);
        } else {
            *arg2 = 0;
        }
    }
    if (arg3 != NULL) {
        *arg3 = get_adjusted_slot_count__6TLobbyFPv((u8 *)e);
    }
    if (arg4 != NULL) {
        *arg4 = get_field_d8__6TLobbyFPv((u8 *)e);
    }
    return 0;
}
#pragma pop

typedef char RecoveredGlobal_8041E178_lbl_805C1D48_size[sizeof(RecoveredGlobal_8041E178_lbl_805C1D48) == 0xA8 ? 1 : -1];
s32 TLobby__sub_8041E178(s16 arg0) {
    struct Fields_var_r4 { u8 pad_0[4]; u16 field_4; };
    struct Fields_var_r3 { u8 pad_0[6]; s16 field_6; u8 pad_8[3]; u8 field_B; };
    M2C_UNK *var_r3;
    M2C_UNK *var_r4;
    s16 var_r0;
    s16 var_r5;
    if ((arg0 < 0) || (var_r4 = &lbl_805C1D48.value, var_r4 = &lbl_805C1D48.value, var_r5 = arg0, ((var_r5 < (s16) M2C_FIELD(&lbl_805C1D48.value, s16 *, 4)) == 0))) {
        var_r0 = -4;
    } else {
        var_r4 = (M2C_UNK *)(M2C_FIELD(&lbl_805C1D48.value, M2C_UNK **, 0));
        var_r4 = (M2C_UNK *)((u8 *)var_r4 + (var_r5 * 0x544));
        if ((u16) ((Fields_var_r4*)var_r4)->field_4 != 1) {
            var_r0 = -4;
        } else {
            var_r0 = 0;
        }
    }
    if (var_r0 < 0) {
        var_r3 = (M2C_UNK *)((u8 *)((M2C_UNK *)-4));
        return -4;
    }
    var_r3 = (M2C_UNK *)(&lbl_805C1D48.value);
    var_r3 = (M2C_UNK *)(&lbl_805C1D48.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_805C1D48.value, M2C_UNK **, 0));
    var_r3 = (M2C_UNK *)((u8 *)var_r3 + (arg0 * 0x544));
    ((Fields_var_r3*)var_r3)->field_6 = 0;
    ((Fields_var_r3*)var_r3)->field_B = (u8) (((Fields_var_r3*)var_r3)->field_B | 0x80);
    TLobby__sub_8041B5C0(var_r3);
    var_r3 = (M2C_UNK *)((u8 *)(NULL));
    return 0;
}

void clear_position__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_8041A9AC(int);
extern RecoveredGlobal_8041E178_lbl_805C1D48 lbl_805C1D48;

#pragma push
#pragma opt_propagation off
s32 TLobby__sub_8041E224(s16 arg0) {
    s16 r;
    E_805C1D48 *e;

    if (arg0 < 0 || arg0 >= lbl_805C1D48.n) {
        r = -4;
    } else if (lbl_805C1D48.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = lbl_805C1D48.p;
    e += arg0;
    if (e->f6 < 4) {
        e->f6 = 0;
    } else {
        e->f6 = 0;
        TLobby__sub_8041A9AC((int)e);
    }
    clear_position__6TLobbyFPv((u8 *)e);
    return 0;
}
#pragma pop

s16 TLobby__sub_8041B724(u8 *);
u16 TLobby__sub_8041EA14(void);
#pragma push
#pragma opt_propagation off
s16 TLobby__sub_8041E34C(s16 arg0, s32 arg1, s16 arg2) {
    s16 r;
    E_805C1D48 *e;
    s16 TLobby__sub_8040DA54(u8 *arg0, u8 *arg1);
    s16 TLobby__sub_8040DB94(u8 *arg0);
    s16 TLobby__sub_8040D95C(void *, void *);
    s16 TLobby__sub_8041A9AC(void *);
    s16 TLobby__sub_8041EC14(u8 *);
    s16 TLobby__sub_8041ECA4(u8 *arg0);
    u16 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);
    void TLobby__sub_80422E30(s16, s32, s32, s16);

    if (arg0 < 0 || arg0 >= lbl_805C1D48.n) {
        r = -4;
    } else if (lbl_805C1D48.p[arg0].f4 != 1) {
        r = -4;
    } else {
        r = 0;
    }
    if (r < 0) {
        return -4;
    }
    e = lbl_805C1D48.p;
    e += arg0;
    if (TLobby__sub_8040DA54((u8 *)arg1, (u8 *)e + 0x290) == 0) {
        TLobby__sub_80422E30((s16)(e - lbl_805C1D48.p), M2C_FIELD(e, s32 *, 0x2D0), 3, 0xC);
        return -6;
    }
    if (TLobby__sub_8040DB94((u8 *)e + 0x290) != 0 && TLobby__sub_8040D95C((u8 *)e + 0x290, (void *)arg1) < 0) {
        TLobby__sub_80422E30((s16)(e - lbl_805C1D48.p), M2C_FIELD(e, s32 *, 0x2D0), 3, 0xC);
        return -6;
    }
    if (M2C_FIELD(e, u16 *, 0x268) == 0) {
        M2C_FIELD(e, u16 *, 0x268) = TLobby__sub_8041EA14();
    }
    TLobby__sub_803F9F04((u8 *)e + 0x27C, (void *)arg1, 0x14);
    M2C_FIELD(e, s16 *, 0x26A) = arg2;
    if (TLobby__sub_8041B724((u8 *)e) < 0) {
        return -6;
    }
    r = TLobby__sub_8041ECA4((u8 *)e);
    if (r < 0) {
        return r;
    }
    r = TLobby__sub_8041EC14((u8 *)e);
    if (r < 0) {
        TLobby__sub_8041EBC4((u8 *)e);
        return r;
    }
    M2C_FIELD(e, u32 *, 0x23C) = get_adjusted_slot_count__6TLobbyFPv((u8 *)e);
    e->f6 = 2;
    M2C_FIELD(e, s16 *, 0x260) = 0x96;
    {
        s32 *t = (s32 *)((u8 *)&lbl_805C1D48 + 0x18);
        s32 v = *t;
        M2C_FIELD(e, s32 *, 0x21C) = v;
        M2C_FIELD(e, s32 *, 0x324) = v;
        M2C_FIELD(e, s32 *, 0x2F4) = v;
        M2C_FIELD(e, s32 *, 0x210) = v;
        M2C_FIELD(e, s32 *, 0x238) = v;
        M2C_FIELD(e, s32 *, 0x20C) = v;
        M2C_FIELD(e, s32 *, 0x208) = v;
        *t += 0xFA00;
    }
    return TLobby__sub_8041A9AC(e);
}
#pragma pop

s32 TLobby__sub_8041EB24(s16 i) {
    if (i < 0 || i >= lbl_805C1D48.n) { return -4; }
    if (lbl_805C1D48.p[i].f4 != 1) { return -4; }
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

s32 TLobby__sub_8041EBC4(u8 *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x14) == 0) {
        return -1;
    }
    TLobby__sub_8041579C((void *) (arg0 + 0x18));
    M2C_FIELD(arg0, u8 *, 0x14) = 0U;
    return 0;
}

void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);
s16 TLobby__sub_80415954(void *, int, int);

s32 TLobby__sub_8041EC14(u8 *arg0) {
    s32 spC[3];

    if ((u8) M2C_FIELD(arg0, u8 *, 0xCC) == 0) {
        if (TLobby__sub_80415954((void *) (&spC[0]), (int) (M2C_FIELD(arg0, s32 *, 0x534)), (int) (1)) < 0) {
            return -0x102;
        }
        init_msg__6TLobbyFPvi((arg0 + 0xD0), (int) (spC[0]));
        set_value_and_enable__6TLobbyFPvi((arg0 + 0xC8), (int) (spC[0]));
        goto block_4;
    }
block_4:
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s16 *, 0xF8) = -1;
    M2C_FIELD(arg0, s16 *, 0xFA) = -1;
    return 0;
}

s32 TLobby__sub_8041ECA4(u8 *arg0) {
  unsigned char new_var;
  s32 spC;
  if (((u8) (*((u8 *) (((s8 *) arg0) + 0x14)))) == 0)
  {
    if (TLobby__sub_80415954((void *) (&spC), (int) (*((s32 *) (((s8 *) arg0) + 0x530))), (int) 1) < 0)
    {
      return -0x102;
    }
    init_msg__6TLobbyFPvi((u8 *)((void *) (((u8 *) arg0) + 0x18)), (s32)((int) spC));
    set_value_and_enable__6TLobbyFPvi((u8 *)((void *) (((u8 *) arg0) + 0x10)), (s32)((int) spC));
    goto block_4;
  }
  block_4:
  *((s32 *) (((s8 *) arg0) + 0x20)) = 0;
  new_var = 0x24;
  *((s32 *) (((s8 *) arg0) + new_var)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x28)) = 0;
  return 0;
}

s32 get_field_534__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534);
}

s32 get_field_d8__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xD8);
}

s32 get_score__6TLobbyFPv(u8 *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0x204) >> 7U) & 1) {
        return M2C_FIELD(arg0, s32 *, 0x34);
    }
    return M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, s32 *, 0x34);
}

s32 get_queue_diff__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534) - M2C_FIELD(arg0, s32 *, 0xD8);
}

s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0x204) >> 7U) & 1) {
        return M2C_FIELD(arg0, s32 *, 0x530);
    }
    return M2C_FIELD(arg0, s32 *, 0x530) - M2C_FIELD(arg0, s32 *, 0x20);
}

}
