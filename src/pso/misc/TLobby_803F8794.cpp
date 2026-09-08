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
    M2C_UNK value;
    u8 remaining[0x14];
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
    M2C_UNK value;
    u8 remaining[0x24];
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

struct RecoveredGlobal_8041E178_lbl_805C1D48 {
    M2C_UNK value;
    u8 remaining[0xA4];
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
void TUdpSocket__sub_803F95A4(void);
M2C_UNK OSLockMutex();
void TLobby__sub_803F95C4(void);
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
s32 TLobby__sub_80405304(void *);
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
void TLobby__sub_803FD958(void *);
s32 TLobby__sub_803FF304(u8 *arg0);
void TLobby__sub_80405000(u32);
void TLobby__sub_803FF34C(u8 *arg0);
s32 TLobby__sub_80405304(void *);
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
s32 TLobby__sub_80405304(void *);
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
s32 TLobby__sub_80405140(void);
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
M2C_UNK TUdpSocket__sub_804072C4(int);
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
void TLobby__sub_80405000(u32);
void TLobby__sub_803FF430(u8 *arg0);
u8 *TLobby__sub_80401B8C(struct RecoveredFields_80401B8C_arg0 *arg0, s16 arg1);
s32 TLobby__sub_803F81C4(u16, s32);
s32 TLobby__sub_804037B0(s32 arg0, u16 arg1);
M2C_UNK TLobby__sub_803F9214(void *);
void TLobby__sub_80405328(u8 *arg0);
s16 TLobby__sub_8040FCEC(u32);
s16 TLobby__sub_804136EC(s32);
s16 TLobby__sub_8040DABC(u8 *arg0);
void TLobby__sub_803F892C(void *);
M2C_UNK TLobby__sub_8041A0C0(int);
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
M2C_UNK TLobby__sub_8041A0C0(int);
extern RecoveredGlobal_8040FF0C_lbl_805C1B78 lbl_805C1B78;
s32 TLobby__sub_8040FF0C(void);
}

extern "C" {

void TLobby__sub_803F8794(void);
void TLobby__sub_803F87C4(void);
void TLobby__sub_803F87C8(u8 *arg0);
void TLobby__sub_803F8864(void);
void TLobby__sub_803F88E0(void);
void TLobby__sub_803F89A0(void);
void TLobby__sub_803F89D8(void);
void TLobby__sub_803F8A24(void);
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

void TLobby__sub_803F8794(void) {

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

void TLobby__sub_803F8864(void) {

}

void TLobby__sub_803F88E0(void) {

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

void TLobby__sub_803F89A0(void) {

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

void TLobby__sub_803F89D8(void) {

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

void TLobby__sub_803F8A24(void) {

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

void TUdpSocket__sub_803F95A4(void) {
    OSUnlockMutex();
}

void TLobby__sub_803F95C4(void) {
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

void TLobby__sub_803FA280(void) {

}

extern u16 lbl_805D7A78;

typedef char RecoveredGlobal_803FB110_lbl_805BFF68_size[sizeof(RecoveredGlobal_803FB110_lbl_805BFF68) == 0xD0 ? 1 : -1];

void TLobby__sub_803FA284(s32 arg0) {
    TLobby__sub_80405304((void *) (arg0 + 0x10));
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

void TLobby__sub_803FB184(u8 *arg0) {
    TLobby__sub_803FB358(arg0);
}

s32 get_remaining__6TLobbyFi(s32 arg0) {
    return lbl_805D7A78 - arg0;
}

typedef char RecoveredGlobal_803FC178_lbl_805C02D0_size[sizeof(RecoveredGlobal_803FC178_lbl_805C02D0) == 0x40 ? 1 : -1];
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

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & 0xFFFFFFBF);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x80);
    if ((u8) M2C_FIELD(arg0, u8 *, 0) < 1U) {
        M2C_FIELD(arg0, u8 *, 0) = 1U;
    }
    return 0;
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
        TLobby__sub_803FD958(arg0);
    }
    return 0;
}

void TLobby__sub_803FF34C(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[48]; u8 * field_30; };
    TLobby__sub_80405000(M2C_FIELD(((Fields_arg0*)arg0)->field_30, u32 *, 0x98));
}

void TLobby__sub_803FF374(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

void TLobby__sub_803FF430(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    TLobby__sub_80405000((u32)((int) (M2C_FIELD(temp_r31, s32 *, 0x98))));
    M2C_FIELD(temp_r31, s32 *, 0x98) = 0;
}

void TLobby__sub_803FF468(s32 arg0) {
    TLobby__sub_80405304((void *) (arg0 + 0x10));
}

void TLobby__sub_80400988(void) {

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
            TLobby__sub_80405304((void *) ((u8 *)(arg0) + 0x10));
block_10:
            ((Fields_arg0*)arg0)->field_0 = 0U;
        }
    }
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

s32 TLobby__sub_80405140(void) {
    lbl_805D7AC8 = 0;
    return 0;
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
            TLobby__sub_803F9214((void *) (arg0 + 0xC));
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

void TLobby__sub_8040874C(void) {
    TLobby__sub_8040878C();
}

void TLobby__sub_8040876C(void) {
    TLobby__sub_8040881C();
}

s32 TLobby__sub_80409AA8(void) {
    TLobby__sub_803F8A9C((void *)((void *) (&lbl_805D7AF8)));
    lbl_805D7AF8 = 0;
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
    TUdpSocket__sub_804072C4((int) (temp_r3));
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

typedef char RecoveredGlobal_80419A00_lbl_805C1C50_size[sizeof(RecoveredGlobal_80419A00_lbl_805C1C50) == 0xF8 ? 1 : -1];
void TLobby__sub_80419A00(void) {
    TUdpSocket__sub_803F9EE4((void *) (&lbl_805C1C50.value), (int) (0), (int) (0xF4));
    TLobby__sub_803F8E08();
}

void clear_position__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x25C) = 0;
    M2C_FIELD(arg0, s16 *, 0x25E) = 0;
    M2C_FIELD(arg0, s16 *, 0x260) = 0;
    M2C_FIELD(arg0, s16 *, 0x262) = 0;
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
