#include "pso/network/NetworkTransport.h"

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TUdpSocket.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Pkt_804249F0 {
    u8 f0;
    u8 f1;
    u8 f2;
    u8 pad3;
    u8 f4[4];
    u8 pad8[0x10 - 0x8];
    u32 f10;
    u8 pad14[0x1C - 0x14];
    u8 f1C[6];
    u8 pad22[0xEC - 0x22];
    u8 opts[4];
};

struct G_804249F0 {
    u8 pad0[0x5DC];
    u8 buf[0xBB8 - 0x5DC];
    Pkt_804249F0 pkt;
};

struct Arg_804249F0 {
    u8 pad0[2];
    s16 len;
    void *p;
};

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

struct Msg_804264F4 { u32 f0; u32 f4; s32 f8; };

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

struct Ent_804253F8 {
    s32 used;
    s32 f4;
    u32 base;
};

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
s32 OSInitMessageQueue(void *, void *, int);
s32 NetResumeThread(void *);
s16 TLobby__sub_803F9B94(void *, void *);
s32 NetMemset(void *, int, int);
void NetRegisterTimer(int, int, void (*)(void));
s32 TLobby__sub_8042AAA0(void *);
extern u8 lbl_805CF240[0xA0];
extern u8 TLobby__pppoe_message_queue[0xA0];
extern u8 lbl_805CF380[0x48];
extern s32 lobby_message_thread_handle;
extern u32 lbl_805D7BC4;
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7BA8;
extern s16 network_link_status_cache;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
extern u32 lbl_805D7BC0;
void clear_message_entry__6TLobbyFi(s32);
s32 NetMemcpy(void *, void *, int);
s32 TLobby__sub_803F77E0(void *);
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
s32 EXIImmEx(s32, s32, s32, s32);
extern s32 exi_send_started_flag;
extern s32 lbl_805D7C54;
extern s32 lbl_805D7C7C;
extern s32 exi_send_size;
s32 memcpy(void *, void *, int);
extern s32 exi_mac_address;
s32 OSDisableInterrupts();
s32 OSRestoreInterrupts(s32);
s32 OSSleepThread(void *);
extern u32 lbl_805D7C4C;
extern s32 exi_receive_callback;
void TLobby__sub_8042B58C(u32 arg0, s32 arg1);
extern s32 lbl_805D7C44;
extern s32 lbl_805D7C48;
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
s16 TLobby__sub_803F96AC(void *, void *, void *);
extern s32 lobby_buffer_pool_base;
extern s32 lobby_buffer_pool_size;
extern s32 lbl_805D7BEC;
extern s32 lbl_805D7BF0;
extern s32 lbl_805D7BF4;
extern s32 lbl_805D7BF8;
extern s32 lbl_805D7BFC;
extern u32 lobby_buffer_pool_alarm_handle;
void TAdSinglePlyChrSelectGC__sub_8042DDE4(int, int);
extern RecoveredGlobal_8042E768_lbl_805D1D20 modem_connection_info;
extern s32 lbl_805D7C98;
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
s32 memcpy(void *, void *, int);
extern s32 exi_mac_address;
void dispatch_received_ethernet_frame(void *q, void *a, void *b);
extern u8 lobby_net_channel_table[];
s32 OSSendMessage(void *mq, void *msg, s32 flags);
extern u8 lbl_805CF380[];
extern s32 network_message_pending_count;
void TLobby__sub_80425D88(u8 v);
void TLobby__sub_80426190(Obj_80426110 *);
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
extern s32 lbl_805D7BB0;
s16 TLobby__sub_804262CC(void *);
extern u8 lobby_net_channel_table[];
s32 TLobby__sub_80426B88(s16 arg0);
extern s32 lbl_805D7BC8;
s32 NetMemcpy(void *, void *, int);
s32 TLobby__sub_80427240(u8 **arg0);
s32 NetMemcpy(void *, void *, int);
u8 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);
void NetUnregisterTimer(void *);
s32 TLobby__sub_80421B3C(s32);
s32 TLobby__sub_804250A8(s32);
extern u8 TLobby__sub_80423298[];
extern s32 lbl_805D7B14;
extern s16 lbl_805D7B18;
void TLobby__sub_80424CA8(void);
s32 OSSendMessage(void *mq, void *msg, s32 flags);
u8 *TLobby__sub_804256B8(s32);
s32 OSReceiveMessage(void *, void *, int);
void clear_message_entry__6TLobbyFi(s32);
void TLobby__sub_80425D88(u8 v);
extern u8 lbl_805CF240[];
extern u8 lbl_805CF380[];
extern s32 network_message_pending_count;
s32 OSSendMessage(void *mq, void *msg, s32 flags);
s32 NetMemcpy(void *, void *, int);
s32 TLobby__sub_8042558C(void *);
u8 *TLobby__sub_804256B8(s32);
extern u8 lbl_805CF240[];
s32 post_send_message__6TLobbyFiUs(s32 arg0, u16 arg1);
s32 NetMemcpy(void *, void *, int);
s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);
s16 TLobby__sub_804262CC(void *);
extern u8 lobby_net_channel_table[];
extern u8 lbl_805E1190[6];
s32 TLobby__sub_80426660(u8 *arg0);
s32 OSSendMessage(void *mq, void *msg, s32 flags);
u8 *TLobby__sub_804256B8(s32);
extern u8 lbl_805CF240[];
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void TLobby__sub_80429AC8(s32, void *);
extern u8 exi_dma_buffer[];
extern s32 exi_dma_read_length;
extern u32 exi_dma_write_length;
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void TLobby__sub_80429AC8(s32, void *);
extern u8 exi_dma_write_buffer[];
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
s32 TLobby__sub_804251C0(s32, void *);
extern s32 lbl_805D4820;
extern volatile s32 lbl_805D7BA0;
s32 NetMemcmp(void *, void *, int);
s32 NetMemcpy(void *, void *, int);
s32 enable_network_multicast_address(void *);
extern u8 lobby_net_channel_table[];
s32 TLobby__sub_803F97E8(int);
extern void *lbl_805C18A0[];
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
extern s16 lbl_805D7A86;
s32 EXILock(s32, u32, u32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void DCStoreRange(void *, u32);
void TLobby__sub_8042B434(s32, void *);
extern s32 lbl_805D7C7C;
extern s32 exi_send_size;
extern s32 lbl_805D7C84;
extern s32 lbl_805D7C88;

extern G_804249F0 lbl_805C1E00;
extern s32 lbl_805D7B0C;
extern s32 lbl_805D7B10;
extern u8 lbl_805D7B1C[6];
extern u32 lbl_805D7B28;
extern u8 lbl_805D7B4C[4];
extern u8 lbl_805D7B50[4];
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
void TLobby__sub_80425288(s32, s32, void *);
extern u32 lbl_805D7B64;
extern u32 lbl_805D7B68;
extern u32 lbl_805D7B6C;
extern u32 lbl_805D7B78;
extern u32 lbl_805D7B7C;

u8 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);

#pragma push
#pragma opt_propagation off
s32 dhcp_handle_reply__6TLobbyFsPv(s16 arg0, Arg_804249F0 *arg1);
#pragma pop

void TLobby__sub_80424CA8(void);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline Ent_804253F8 *find_804253F8(u32 arg0);
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

extern u32 lbl_805D7C04;
extern s32 lbl_805D7C08;
extern s32 lbl_805D7C0C;
extern u32 lbl_805D7C10;
extern u32 lbl_805D7C14;
extern u32 TLobby__buffer_pool_start;
extern s32 TLobby__buffer_pool_limit;
extern s32 lbl_805D7C20;
extern s32 lbl_805D7C24;
extern s32 lobby_buffer_pool_state;

typedef char RecoveredGlobal_80428374_lbl_805D0A40_size[sizeof(RecoveredGlobal_80428374_lbl_805D0A40) == 0x60 ? 1 : -1];

typedef char RecoveredGlobal_80428360_lbl_805CFC20_size[sizeof(RecoveredGlobal_80428360_lbl_805CFC20) == 0xE20 ? 1 : -1];
s32 TLobby__sub_80428360(void);

void TLobby::reset_boot_state() {
    TLobby__sub_803F77E0((void *) (&lobby_net_session_state.value));
}

typedef char RecoveredGlobal_8042839C_lbl_805D0A40_size[sizeof(RecoveredGlobal_8042839C_lbl_805D0A40) == 0x60 ? 1 : -1];
s32 init_modem_session_config(void) {
    init_modem_buffer_config((void *) (&(*(RecoveredGlobal_8042839C_lbl_805D0A40 *)&lobby_net_session_state).value));
    return 0;
}

s32 TLobby::wait_timeout_loop() {
    u8 *arg0 = (u8 *)this;
    s32 start;
    s32 now;
    s16 *p;
    u32 limit;
    s32 ret;
    ret = 0;
    TLobby::get_time_ms(&start);
    p = **(s16 ***)((s8 *)(&lobby_net_session_state.value) + 0x10);
    if (p == NULL) {
        limit = *(s16 *)(arg0 + 4) * 1000;
    } else {
        limit = *p * 1000;
    }
    for (;;) {
        if (lbl_805D7A86 != 0) {
            ret = 4;
            break;
        }
        TLobby::get_time_ms(&now);
        if ((u32)(now - start) > limit) {
            break;
        }
        TUdpSocket::unlock_mutex((int)(lbl_805C18A0[0]));
        TLobby__sub_803F97E8(100);
        TLobby::lock_mutex((int)(lbl_805C18A0[0]));
    }
    return ret;
}

void TLobby::cancel_alarm_b() {
    TLobby__sub_803F95E4(lobby_buffer_pool_alarm_handle);
}

s32 TLobby::init_buffer_pool() {
    lbl_805D7BEC = lobby_buffer_pool_base;
    lbl_805D7BF0 = lobby_buffer_pool_base;
    lbl_805D7BF4 = lobby_buffer_pool_base;
    lbl_805D7BF8 = lobby_buffer_pool_base + lobby_buffer_pool_size;
    lbl_805D7BFC = lobby_buffer_pool_size;
    if (TLobby__sub_803F96AC((void *) (&lobby_buffer_pool_alarm_handle), (void *) (lobby_buffer_pool_base), (void *) (lobby_buffer_pool_size)) < 0) {
        return -1;
    }
    TLobby::reset_buffer_pool();
    return 0;
}

void TLobby::reset_buffer_pool() {
    lbl_805D7C0C = 0;
    lbl_805D7C24 = 0;
    lobby_buffer_pool_state = 0;
    if ((u32) lbl_805D7C04 != 0U) {
        lbl_805D7C10 = lbl_805D7C04;
        lbl_805D7C14 = lbl_805D7C04;
        TLobby__buffer_pool_start = lbl_805D7C04;
        TLobby__buffer_pool_limit = lbl_805D7C04 + lbl_805D7C08;
        lbl_805D7C20 = lbl_805D7C08;
        return;
    }
    lbl_805D7C10 = 0U;
    lbl_805D7C14 = 0U;
    TLobby__buffer_pool_start = 0U;
    TLobby__buffer_pool_limit = 0;
    lbl_805D7C20 = 0;
}

void TLobby__sub_8042B58C(u32 arg0, s32 arg1);

void TLobby__sub_8042BA48(s32 arg0, s32 arg1);

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8042DD70_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042DD70_lbl_805D1D20) == 0x1C ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
#pragma pop

void TAdSinglePlyChrSelectGC__sub_8042DDE4(int _w0, int _w1);

typedef char RecoveredGlobal_8042E768_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042E768_lbl_805D1D20) == 0x1C ? 1 : -1];

s32 fn_8042E8B8(void);

}
