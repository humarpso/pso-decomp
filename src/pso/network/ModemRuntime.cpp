#include "pso/network/NetworkTransport.h"

#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TUdpSocket.h"

struct RecoveredGlobal_80428374_lbl_805D0A40 {
    s32 value;
    u8 remaining[0x5C];
};

struct RecoveredGlobal_8042839C_lbl_805D0A40 {
    s32 value;
    u8 remaining[0x5C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_1C { u8 bytes[0x1c]; };

struct RecoveredGlobal_8042E768_lbl_805D1D20 {
    s32 value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_80427D0C_lbl_805CFC20 {
    s32 value;
    u8 remaining[0xE1C];
};

struct RecoveredGlobal_80428360_lbl_805CFC20 {
    s16 value;
    u8 remaining[0xE1E];
};

struct RecoveredGlobal_8042DD70_lbl_805D1D20 {
    s32 value;
    u8 remaining[0x18];
};

struct Rec_80426110 { u16 a; u16 b; };

struct Obj_80426110 { u8 pad[0x36]; s16 count; Rec_80426110 recs[5]; };

typedef struct Names_8042E57C {
    char *name[6];
} Names_8042E57C;

typedef struct Names_8042E628 {
    char *name[4];
} Names_8042E628;

typedef struct Names_8042E6C4 {
    char *name[5];
} Names_8042E6C4;

typedef struct Names_8042E7B8 {
    char *name[3];
} Names_8042E7B8;

typedef struct Ent_80426894 {
    s16 count;
    u8 id[6];
} Ent_80426894;

typedef struct Tbl_80426894 {
    u8 pad[6];
    Ent_80426894 ent[6];
} Tbl_80426894;

typedef struct Ent_80425870 {
    s32 used;
    u32 f4;
    u32 base;
} Ent_80425870;

typedef struct Ent_80427C6C {
    u16 pad0;
    u16 id;
    u8 rest[0xE10];
} Ent_80427C6C;

extern "C" {
extern u8 lbl_805CF240[0xA0];
extern u8 TLobby__pppoe_message_queue[0xA0];
extern u8 lbl_805CF380[0x48];
void TLobby__sub_803F95E4(u32);
extern s16 network_link_status_cache;
s32 NetMemcpy(void *, void *, int);
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
void TLobby__sub_803F95E4(u32);
extern u32 lobby_buffer_pool_alarm_handle;
s32 OSWakeupThread(void *);
extern s32 network_thread_queue;
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
extern s32 lbl_805D7C7C;
extern s32 exi_send_size;
s32 memcpy(void *, void *, int);
extern s32 exi_mac_address;
s32 OSDisableInterrupts();
s32 OSRestoreInterrupts(s32);
s32 OSSleepThread(void *);
void TLobby__sub_8042B58C(u32 arg0, s32 arg1);
void TLobby__sub_8042BA48(s32 arg0, s32 arg1);
s32 OSWakeupThread(void *);
extern s32 lbl_805D7CA0;
s32 EXILock(s32, u32, u32);
void TAdSinglePlyChrSelectGC__sub_8042DE20(void);
extern RecoveredGlobal_8042E768_lbl_805D1D20 modem_connection_info;
extern s32 lbl_805D7C98;
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
void TAdSinglePlyChrSelectGC__sub_8042D6A4(void *);
extern s32 lbl_805D4918;
extern s32 lbl_805D7C98;
extern s16 network_link_status_cache;
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lobby_pppoe_slot_table;
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lobby_pppoe_slot_table;
s32 TLobby__sub_80428360(void);
extern u32 lobby_buffer_pool_alarm_handle;
void TAdSinglePlyChrSelectGC__sub_8042DDE4(int, int);
extern RecoveredGlobal_8042E768_lbl_805D1D20 modem_connection_info;
extern s32 lbl_805D7C98;
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
s32 memcpy(void *, void *, int);
extern s32 exi_mac_address;
extern u8 lobby_net_channel_table[];
s32 OSSendMessage(void *mq, void *msg, s32 flags);
extern u8 lbl_805CF380[];
extern s32 network_message_pending_count;
void TLobby__sub_80425D88(u8 v);
s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);
s32 OSReceiveMessage(void *, void *, int);
extern u8 TLobby__pppoe_message_queue[];
s32 NetMemcpy(void *, void *, int);
typedef struct Ent_804267F0 {
    s16 count;
    u8 id[6];
} Ent_804267F0;

typedef struct Tbl_804267F0 {
    u8 pad[6];
    Ent_804267F0 ent[6];
} Tbl_804267F0;

s32 NetMemcmp(void *, void *, int);
extern u8 lobby_net_channel_table[];
s16 TLobby__sub_804262CC(void *);
extern u8 lobby_net_channel_table[];
s32 TLobby__sub_80426B88(s16 arg0);
s32 NetMemcpy(void *, void *, int);
s32 TLobby__sub_80427240(u8 **arg0);
s32 NetMemcpy(void *, void *, int);
u8 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);
void TLobby__sub_80424CA8(void);
s32 OSSendMessage(void *mq, void *msg, s32 flags);
u8 *TLobby__sub_804256B8(s32);
s32 OSReceiveMessage(void *, void *, int);
void TLobby__sub_80425D88(u8 v);
extern u8 lbl_805CF240[];
extern u8 lbl_805CF380[];
extern s32 network_message_pending_count;
s32 OSSendMessage(void *mq, void *msg, s32 flags);
s32 NetMemcpy(void *, void *, int);
u8 *TLobby__sub_804256B8(s32);
extern u8 lbl_805CF240[];
s32 post_send_message__6TLobbyFiUs(s32 arg0, u16 arg1);
s32 NetMemcpy(void *, void *, int);
s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);
s16 TLobby__sub_804262CC(void *);
extern u8 lobby_net_channel_table[];
s32 TLobby__sub_80426660(u8 *arg0);
s32 OSSendMessage(void *mq, void *msg, s32 flags);
u8 *TLobby__sub_804256B8(s32);
extern u8 lbl_805CF240[];
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void TLobby__sub_80429AC8(s32, void *);
extern u32 exi_dma_write_length;
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void TLobby__sub_80429AC8(s32, void *);
extern u32 exi_dma_write_length;
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E57C TAdSinglePlyChrSelectGC__modem_type_names;
extern char lbl_805D48AC[2];
extern char lbl_805D495C[7];
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E628 TAdSinglePlyChrSelectGC__modem_error_correction_names;
extern char lbl_805D48AC[2];
extern char modem_error_correction_command_prefix[7];
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E6C4 TAdSinglePlyChrSelectGC__modem_compression_names;
extern char lbl_805D48AC[2];
extern char lbl_805D4980[5];
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E7B8 lbl_80480234;
extern char lbl_805D48AC[2];
extern char lbl_805D4988[4];
extern s32 lbl_805D4820;
s32 NetMemcmp(void *, void *, int);
s32 NetMemcpy(void *, void *, int);
extern u8 lobby_net_channel_table[];
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
s32 EXILock(s32, u32, u32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
extern s32 lbl_805D7C7C;
extern s32 exi_send_size;

s32 NetMemcpy(void *, void *, int);
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lobby_pppoe_slot_table;
Ent_80427C6C *TLobby__sub_80427C6C(s32 arg0, u16 arg1);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
s32 OSDisableInterrupts();
s32 OSRestoreInterrupts(s32);
s32 OSSleepThread(void *);
extern s32 network_thread_queue;
}

extern "C" {

s32 TLobby__sub_80426440(void);
s32 TLobby__sub_80428358(void);
s32 fn_8042E8B8(void);

extern s32 lbl_805D4820;

s32 NetMemcpy(void *, void *, int);

u8 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);

#pragma push
#pragma opt_propagation off
#pragma pop

void TLobby__sub_80424CA8(void);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma pop

void TLobby__sub_80425D88(u8 v);

s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);

#define arg0 ((s32)argp)
s16 TLobby__sub_804262CC(void *argp);
#undef arg0

s32 TLobby__sub_80426440(void);

s32 post_send_message__6TLobbyFiUs(s32 arg0, u16 arg1);

s32 TLobby__sub_80426660(u8 *arg0);

#pragma push
#pragma dont_inline on
#pragma pop

s32 TLobby__sub_80426B88(s16 arg0);

s32 TLobby__sub_80427240(u8 **arg0);

typedef char RecoveredGlobal_80427D0C_lbl_805CFC20_size[sizeof(RecoveredGlobal_80427D0C_lbl_805CFC20) == 0xE20 ? 1 : -1];

Ent_80427C6C *TLobby__sub_80427C6C(s32 arg0, u16 arg1);

s32 TLobby__sub_80428358(void);

typedef char RecoveredGlobal_80428374_lbl_805D0A40_size[sizeof(RecoveredGlobal_80428374_lbl_805D0A40) == 0x60 ? 1 : -1];

typedef char RecoveredGlobal_80428360_lbl_805CFC20_size[sizeof(RecoveredGlobal_80428360_lbl_805CFC20) == 0xE20 ? 1 : -1];
s32 TLobby__sub_80428360(void);

typedef char RecoveredGlobal_8042839C_lbl_805D0A40_size[sizeof(RecoveredGlobal_8042839C_lbl_805D0A40) == 0x60 ? 1 : -1];

void TLobby__sub_8042B58C(u32 arg0, s32 arg1);

void TLobby__sub_8042BA48(s32 arg0, s32 arg1);

void TAdSinglePlyChrSelectGC::wake_load_thread() {
    OSWakeupThread((void *) (&lbl_805D7CA0));
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8042DD70_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042DD70_lbl_805D1D20) == 0x1C ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) *(s32 *)((s8 *)(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&modem_connection_info).value) + 0xB0) != 0) {
        return -4;
    }
    if ((s32) lbl_805D7C98 != 3) {
        return -7;
    }
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&modem_connection_info).value) + 0xB0) = 1;
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&modem_connection_info).value) + 0xB4) = arg0;
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&modem_connection_info).value) + 0xBC) = arg1;
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&modem_connection_info).value) + 0xB8) = arg1;
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&modem_connection_info).value) + 0xD8) = arg2;
    TAdSinglePlyChrSelectGC__sub_8042DDE4((int)((int) (0)), (int)((int) (0)));
    return 1;
}
#pragma pop

void TAdSinglePlyChrSelectGC__sub_8042DDE4(int _w0, int _w1) {
    if (EXILock(0, 2U, (u32) TAdSinglePlyChrSelectGC__sub_8042DDE4) != 0) {
        TAdSinglePlyChrSelectGC__sub_8042DE20();
    }
}

typedef char RecoveredGlobal_8042E768_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042E768_lbl_805D1D20) == 0x1C ? 1 : -1];

s32 TAdSinglePlyChrSelectGC::send_at_ms_command(s32 arg0) {
    char buf[0x80];
    s32 pad;
    Names_8042E57C names = TAdSinglePlyChrSelectGC__modem_type_names;
    if (arg0 <= 0 || arg0 >= 5) {
        return -2;
    }
    strcpy(buf, lbl_805D495C);
    strcat(buf, names.name[arg0]);
    strcat(buf, lbl_805D48AC);
    TAdSinglePlyChrSelectGC__sub_8042D49C(buf);
    return 1;
}

s32 TAdSinglePlyChrSelectGC::send_at_error_correction_cmd(s32 arg0) {
    char buf[0x80];
    s32 pad;
    Names_8042E628 names = TAdSinglePlyChrSelectGC__modem_error_correction_names;
    if (arg0 <= 0 || arg0 > 3) {
        return -2;
    }
    strcpy(buf, modem_error_correction_command_prefix);
    strcat(buf, names.name[arg0]);
    strcat(buf, lbl_805D48AC);
    TAdSinglePlyChrSelectGC__sub_8042D49C(buf);
    return 1;
}

s32 TAdSinglePlyChrSelectGC::send_at_compression_cmd(s32 arg0) {
    char buf[0x80];
    s32 pad;
    Names_8042E6C4 names = TAdSinglePlyChrSelectGC__modem_compression_names;
    if (arg0 <= 0 || arg0 > 4) {
        return -2;
    }
    strcpy(buf, lbl_805D4980);
    strcat(buf, names.name[arg0]);
    strcat(buf, lbl_805D48AC);
    TAdSinglePlyChrSelectGC__sub_8042D49C(buf);
    return 1;
}

s32 TAdSinglePlyChrSelectGC::copy_default_and_get_state() {
    u32 arg0 = (u32)this;
    if (arg0 != 0U) {
        *(ByteBlock_1C *)(arg0) = *(const ByteBlock_1C *)(&modem_connection_info.value);
    }
    return lbl_805D7C98;
}

s32 TAdSinglePlyChrSelectGC::send_atx_command(s32 arg0) {
    char buf[0x80];
    Names_8042E7B8 names = lbl_80480234;
    s32 pad;
    if (arg0 <= 0 || arg0 > 2) {
        return -2;
    }
    strcpy(buf, lbl_805D4988);
    strcat(buf, names.name[arg0]);
    strcat(buf, lbl_805D48AC);
    TAdSinglePlyChrSelectGC__sub_8042D49C(buf);
    return 1;
}

s32 TAdSinglePlyChrSelectGC::send_modem_hangup(s32 arg0) {
    if ((arg0 == 0) && ((s32) lbl_805D7C98 == 3)) {
        lbl_805D7C98 = 1;
        if (EXILock(0, 2U, 0U) == 0) {
            return 1;
        }
        TAdSinglePlyChrSelectGC__sub_8042D6A4(&lbl_805D4918);
        EXIUnlock(0);
        goto block_5;
    }
block_5:
    return 1;
}

s32 fn_8042E8B8(void) {
    return 0x80003100;
}

}

extern "C" {
RecoveredGlobal_8042E768_lbl_805D1D20 modem_connection_info;
u8 modem_command_response_state[0x94];
u8 modem_exi_state[0x70];
}
