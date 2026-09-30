#include "types.h"
#include "pso/protocol/NetworkRuntime.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    union { M2C_UNK value; s16 h0; };
    u8 remaining[0x12];
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

struct RecoveredGlobal_80419A00_lbl_805C1C50 {
    M2C_UNK value;
    u8 remaining[0xF4];
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

struct RecoveredGlobal_8040DD68_lbl_805C1B38 {
    s16 value;
    u8 remaining[0x26];
};

struct RecoveredGlobal_8040ED28_lbl_805C1B60 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8040ED70_lbl_805C1B60 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8040FF0C_lbl_805C1B78 {
    s16 value;
    u8 remaining[0x3E];
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
void TLobby__sub_803F9E84(s32 arg0);
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
s32 TLobby__sub_803FF304(u8 *arg0);
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
s32 TLobby__sub_804062A0(int);
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
void TLobby__sub_804073D8(s16 arg0, s32 arg1);
s32 TLobby__sub_80407D98(s16, s32);
void TLobby__sub_804073F8(s16 arg0, s32 arg1);
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
s32 TLobby__sub_80409B48(s16, s32, s32, s32, s32);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s32 TLobby__sub_80409B48(s16, s32, s32, s32, s32);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
u8 * TLobby__sub_80413264(void *, s32);
s32 TLobby__sub_80413230(u8 *arg0, s32 arg1);
s32 TLobby__sub_8040A19C(s16);
void TLobby__sub_804136AC(s16 arg0);
s32 TLobby__sub_8040A25C(s16);
void TLobby__sub_804136CC(s16 arg0);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s32 TLobby__sub_804148A8(u8 *arg0);
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
M2C_UNK TLobby__sub_803F8E08();
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
void strcpy(u8);
void TLobby__sub_803F9E64(u8 arg0);
s32 TLobby__sub_80409B48(s16, s32, s32, s32, s32);
extern RecoveredGlobal_8041123C_lbl_805C1BB8 lbl_805C1BB8;
s32 TLobby__sub_804112B8(s32 arg0, s32 arg1, s16 arg2);
s32 TLobby__sub_80409B48(s16, s32, s32, s32, s32);
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
u16 TLobby__sub_80406BD8(void);
u16 TLobby__sub_8040ECEC(void);
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

void TLobby__sub_803F9E64(u8 arg0) {
    strcpy(arg0);
}

void TLobby__sub_803F9E84(s32 arg0) {
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

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & 0xFFFFFFBF);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x80);
    if ((u8) M2C_FIELD(arg0, u8 *, 0) < 1U) {
        M2C_FIELD(arg0, u8 *, 0) = 1U;
    }
    return 0;
}

void TLobby__sub_804099B4(int);
void TLobby__sub_803F7980(void *);
void TLobby__sub_803FD0C0(void) {
    RecoveredGlobal_803FD520_lbl_805C0310 *g = &lbl_805C0310;
    TLobby__sub_804099B4(g->h0);
    g->h0 = -1;
    g->h16 = 0;
    TLobby__sub_803F7980(g);
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
    return M2C_FIELD(&lbl_805C0310.value, s16 *, 0x14);
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

s32 TLobby__sub_803FF304(u8 *arg0) {
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

void TLobby__sub_80400988(void) {

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

void TLobby__sub_804073D8(s16 arg0, s32 arg1) {
    TLobby__sub_80407C60(arg0, arg1);
}

void TLobby__sub_804073F8(s16 arg0, s32 arg1) {
    TLobby__sub_80407D98(arg0, arg1);
}

void TLobby__sub_804074C8(s16 arg0, u8 *arg1, u8 *arg2) {
    TLobby__sub_8040799C(arg0, arg1, arg2);
}

void TLobby__sub_804074E8(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s8 arg6, s32 arg7) {
    TLobby__sub_80407F20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

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

typedef char RecoveredGlobal_80409A3C_lbl_805C1C50_size[sizeof(RecoveredGlobal_80409A3C_lbl_805C1C50) == 0xF8 ? 1 : -1];
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
struct G_8040B33C { u8 pad[0x10]; s16 n; u8 pad2[2]; Rec_8040B33C *recs; u8 pad3[2]; s16 lim; };
struct A_8040B33C { u8 pad[0x10]; s16 idx; u8 pad2[2]; s16 off; };
extern G_8040B33C lbl_805C1AF0[];
Rec_8040B33C *TLobby__sub_8040B33C(A_8040B33C *a) {
    G_8040B33C *g = lbl_805C1AF0;
    s16 n, t, i;
    for (i = 0; i < (n = g->n); i++) {
        Rec_8040B33C *r = &g->recs[(a->off + (t = a->idx)) % n];
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
s32 TLobby__sub_8040DD68(void) {
    TLobby__sub_8041A0C0((int) (0x800));
    TLobby__sub_803F892C((void *)((void *) (&lbl_805C1B38.value)));
    lbl_805C1B38.value = 0;
    return 0;
}

typedef char RecoveredGlobal_8040ED28_lbl_805C1B60_size[sizeof(RecoveredGlobal_8040ED28_lbl_805C1B60) == 0x18 ? 1 : -1];

u16 TLobby__sub_8040ECEC(void) {
    u32 s = TLobby__sub_80406BD8();
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

s32 NetIPv4IsLoopback(s32 arg0) {
    if ((u32) ((arg0 & 0xFF000000) + 0x81000000) == 0U) {
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
    return TLobby__sub_80409B48(arg2, (s32) ((Fields_temp_r3*)temp_r3)->field_2, 0, arg1, arg0);
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
    return TLobby__sub_80409B48(arg2, (s32) ((Fields_temp_r3*)temp_r3)->field_2, 2, arg1, arg0);
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

s32 TLobby__sub_804148A8(u8 *arg0) {
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
extern G_80415AEC lbl_805C1C08[];
void TLobby__sub_80415AEC(void) {
    G_80415AEC *g = lbl_805C1C08;
    TLobby__sub_80419DDC((void *)TLobby__sub_80415CE8);
    TLobby__sub_803F88E0(g);
    g->b = 0;
    g->c = 0;
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

struct G_80418A7C { s16 a; s16 b; };
void TLobby__sub_80419DDC(void *);
void TLobby__sub_80419258(void);
extern G_80418A7C lbl_805C1C38[];
s32 TLobby__sub_80418A7C(void) {
    G_80418A7C *g = lbl_805C1C38;
    TLobby__sub_80419DDC((void *)TLobby__sub_80419258);
    TLobby__sub_803F89A0(g);
    g->a = 0;
    g->b = 0;
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
