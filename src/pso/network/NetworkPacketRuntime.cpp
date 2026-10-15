#include "pso/network/NetworkPacketPool.h"
#include <stddef.h>
#include "pso/network/NetworkTransport.h"

#include "types.h"

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

typedef struct Ent_80427C6C {
    u16 pad0;
    u16 id;
    u8 rest[0xE10];
} Ent_80427C6C;

struct R_804253A0 { s32 a; s32 b; };

struct Rec_80426998 { u16 a; u16 b; };

struct Obj_80426998 { u8 pad[0x36]; s16 count; Rec_80426998 recs[5]; };

extern "C" {
s32 OSInitMessageQueue(void *, void *, int);
s32 NetResumeThread(void *);
s16 TLobby__sub_803F9B94(void *, void *);
s32 NetMemset(void *, int, int);
void NetRegisterTimer(int, int, void (*)(void));
s32 TLobby__sub_8042AAA0(void *);
NetworkPacketBufferDescriptor network_packet_buffer_descriptors[NETWORK_PACKET_BUFFER_COUNT];
u8 network_packet_buffers[NETWORK_PACKET_BUFFER_COUNT][NETWORK_PACKET_BUFFER_BYTES];
extern u8 lbl_805CF240[0xA0];
extern u8 TLobby__pppoe_message_queue[0xA0];
extern u8 lbl_805CF380[0x48];
extern s32 lobby_message_thread_handle;
extern u32 lbl_805D7BC4;
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7BA8;
void cancel_alarm_a__6TLobbyFv(void);
extern s16 network_link_status_cache;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
extern u32 lbl_805D7BC0;
void update_exi_status__6TLobbyFv(void);
void clear_message_entry_wrapper__6TLobbyFi(s32 arg0);
s32 str_length__6TLobbyFi(void *);
s32 NetMemcpy(void *, void *, int);
s32 write_name_field__6TLobbyFPvPv(s32 *arg0, u8 *arg1);
s32 TLobby__sub_803F77E0(void *);
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
void reset_boot_state__6TLobbyFv(void);
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7C00;
void cancel_alarm_b__6TLobbyFv(void);
s32 OSWakeupThread(void *);
extern s32 network_thread_queue;
void wake_network_thread__6TLobbyFv(void);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIImmEx(s32, s32, s32, s32);
void exi_write__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
extern s32 exi_send_started_flag;
extern s32 lbl_805D7C54;
extern s32 lbl_805D7C7C;
extern s32 lbl_805D7C80;
void start_exi_send__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
s32 memcpy(void *, void *, int);
extern s32 exi_mac_address;
void copy_mac_address__6TLobbyFi(s32 arg0);
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
void wake_load_thread__23TAdSinglePlyChrSelectGCFv(void);
s32 EXILock(s32, u32, u32);
void TAdSinglePlyChrSelectGC__sub_8042DE20(void);
extern RecoveredGlobal_8042E768_lbl_805D1D20 modem_connection_info;
extern s32 lbl_805D7C98;
s32 copy_default_and_get_state__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
void TAdSinglePlyChrSelectGC__sub_8042D6A4(void *);
extern s32 lbl_805D4918;
extern s32 lbl_805D7C98;
s32 send_modem_hangup__23TAdSinglePlyChrSelectGCFi(s32 arg0);
extern s16 network_link_status_cache;
s16 query_link_status__6TLobbyFv(void);
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lobby_pppoe_slot_table;
s16 get_slot_id__6TLobbyFs(s16 arg0);
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lobby_pppoe_slot_table;
s32 TLobby__sub_80428360(void);
void reset_buffer_pool__6TLobbyFv(void);
extern s32 lbl_805D7BE0;
extern s32 lbl_805D7BE8;
extern s32 lbl_805D7BEC;
extern s32 lbl_805D7BF0;
extern s32 lbl_805D7BF4;
extern s32 lbl_805D7BF8;
extern s32 lbl_805D7BFC;
extern u32 lbl_805D7C00;
s32 init_buffer_pool__6TLobbyFv(void);
void TAdSinglePlyChrSelectGC__sub_8042DDE4(int, int);
extern RecoveredGlobal_8042E768_lbl_805D1D20 modem_connection_info;
extern s32 lbl_805D7C98;
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
s32 memcpy(void *, void *, int);
extern s32 exi_mac_address;
void copy_6_byte_config__6TLobbyFPv(void *dst);
void dispatch_received_ethernet_frame(void *q, void *a, void *b);
extern u8 lobby_net_channel_table[];
void forward_to_channel__6TLobbyFPvPv(void *a, void *b);
s32 OSSendMessage(void *mq, void *msg, s32 flags);
extern u8 lbl_805CF380[];
extern s32 lbl_805D7BCC;
void TLobby__sub_80425D88(u8 v);
void TLobby__sub_80426190(Obj_80426110 *);
s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);
s32 OSReceiveMessage(void *, void *, int);
extern u8 TLobby__pppoe_message_queue[];
u16 recv_pppoe_message__6TLobbyFPvPv(s32 *arg0, u16 *arg1);
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
s32 get_local_address__6TLobbyFsPv(s16 arg0, void *arg1);
s16 TLobby__sub_804262CC(void *);
extern u8 lobby_net_channel_table[];
s32 TLobby__sub_80426B88(s16 arg0);
extern s32 lbl_805D7BC8;
s32 set_connect_mode__6TLobbyFi(s32 arg0);
s32 NetMemcpy(void *, void *, int);
s32 TLobby__sub_80427240(u8 **arg0);
s32 NetMemcpy(void *, void *, int);
s32 parse_tlv_records__6TLobbyFiPvUs(s32 arg0, u8 *arg1, u16 arg2);
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
s32 post_message__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 OSReceiveMessage(void *, void *, int);
void TLobby__sub_80425D88(u8 v);
void start_exi_send__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
extern u8 lbl_805CF240[];
extern u8 lbl_805CF380[];
extern s32 lbl_805D7BCC;
void message_thread_loop__6TLobbyFv(void);
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
s32 queue_timeout_message__6TLobbyFsis(s16 arg0, s32 arg1, s16 arg2);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void TLobby__sub_80429AC8(s32, void *);
extern u8 exi_dma_buffer[];
extern s32 exi_dma_read_length;
extern u32 exi_dma_write_length;
void start_exi_dma_read__6TLobbyFUs(u16 arg0);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void TLobby__sub_80429AC8(s32, void *);
extern u8 exi_dma_write_buffer[];
extern u32 exi_dma_write_length;
void start_exi_dma_write__6TLobbyFiPv(s32 chan, void *ctx);
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
void exi_write__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
s32 poll_exi_status__6TLobbyFPv(void *p);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E57C TAdSinglePlyChrSelectGC__modem_type_names;
extern char lbl_805D48AC[2];
extern char lbl_805D495C[7];
s32 send_at_ms_command__23TAdSinglePlyChrSelectGCFi(s32 arg0);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E628 TAdSinglePlyChrSelectGC__modem_error_correction_names;
extern char lbl_805D48AC[2];
extern char modem_error_correction_command_prefix[7];
s32 send_at_error_correction_cmd__23TAdSinglePlyChrSelectGCFi(s32 arg0);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E6C4 TAdSinglePlyChrSelectGC__modem_compression_names;
extern char lbl_805D48AC[2];
extern char lbl_805D4980[5];
s32 send_at_compression_cmd__23TAdSinglePlyChrSelectGCFi(s32 arg0);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E7B8 lbl_80480234;
extern char lbl_805D48AC[2];
extern char lbl_805D4988[4];
s32 send_atx_command__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TLobby__sub_804251C0(s32, void *);
extern s32 lbl_805D4820;
extern volatile s32 lbl_805D7BA0;
s32 validate_slot_buffers__6TLobbyFiPvPvPv(s32 arg0, void *arg1, void *arg2, void *arg3);
s32 NetMemcmp(void *, void *, int);
s32 NetMemcpy(void *, void *, int);
s32 enable_network_multicast_address(void *);
extern u8 lobby_net_channel_table[];
s32 add_multicast_address__6TLobbyFsPv(s16 arg0, void *arg1);
s32 get_time_ms__6TLobbyFPv(void *);
s32 unlock_mutex__10TUdpSocketFi(void *);
s32 lock_mutex__6TLobbyFi(void *);
s32 TLobby__sub_803F97E8(int);
extern void *lbl_805C18A0[];
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
extern s16 lbl_805D7A86;
s32 wait_timeout_loop__6TLobbyFPv(u8 *arg0);
s32 EXILock(s32, u32, u32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void DCStoreRange(void *, u32);
void TLobby__sub_8042B434(s32, void *);
extern s32 lbl_805D7C7C;
extern s32 lbl_805D7C80;
extern s32 lbl_805D7C84;
extern s32 lbl_805D7C88;
s32 exi_start_send_dma__6TLobbyFii(int, int);

void release_entry_by_id__6TLobbyFUi(u32 arg0);

u8 *find_entry_by_address__6TLobbyFi(s32 arg0);
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
void wake_network_thread__6TLobbyFv(void);
extern s32 network_thread_queue;
u8 exi_read_status_byte__6TLobbyFv(void);
s32 unlock_mutex__10TUdpSocketFi(void *);
s32 lock_mutex__6TLobbyFi(void *);
u8 *find_entry_by_address__6TLobbyFi(s32 arg0);
extern u32 lbl_805D7BA8;
void clear_message_entry__6TLobbyFi(s32 a);
void cancel_thread_if_running__6TLobbyFi(void *);
void deactivate_entry_by_key__6TLobbyFUi(void *);
void NetUnregisterTimer(void *);
void update_exi_status__6TLobbyFv(void);
extern s16 network_link_status_cache;
extern s32 lbl_805D7BB0;
extern s32 lobby_message_thread_handle;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
void reset_message_thread__6TLobbyFv(void);
extern u8 lobby_net_channel_table[];
s32 remove_rec_by_handle__6TLobbyFsUs(s16 arg0, u16 arg1);
s16 TLobby__sub_803F96AC(u32*);
extern u32 lbl_805D7BA8;

}

extern "C" {

s32 TLobby__sub_80426440(void);
s32 TLobby__sub_80428358(void);
s32 fn_8042E8B8(void);
s32 get_task_count__6TLobbyFv(void);
void reset_buffer_pool__6TLobbyFv(void);

extern s32 lbl_805D4820;

s32 get_task_count__6TLobbyFv(void) {
    return lbl_805D4820;
}

s32 get_time_seconds__6TLobbyFPv(void *);
s32 NetMemcpy(void *, void *, int);
void TLobby__sub_80425288(s32, s32, void *);
extern u32 lbl_805D7B64;
extern u32 lbl_805D7B68;
extern u32 lbl_805D7B6C;
extern u32 lbl_805D7B78;
extern u32 lbl_805D7B7C;

void parse_dhcp_lease_times__6TLobbyFPv(u8 *arg0) {
    s32 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);
    u8 *p;
    s32 v;
    s32 w;

    if (find_dhcp_option__6TLobbyFPvUcPv(arg0, 0x33, &p) == 4) {
        NetMemcpy(&v, p, 4);
        w = v;
        TLobby__sub_80425288(7, 4, &w);
        get_time_seconds__6TLobbyFPv(&lbl_805D7B78);
        lbl_805D7B7C = lbl_805D7B78 + lbl_805D7B64;
        if (find_dhcp_option__6TLobbyFPvUcPv(arg0, 0x3A, &p) == 4) {
            NetMemcpy(&v, p, 4);
            w = v;
            TLobby__sub_80425288(8, 4, &w);
        } else {
            TLobby__sub_80425288(8, 0, NULL);
            lbl_805D7B68 = lbl_805D7B64 >> 1;
        }
        if (find_dhcp_option__6TLobbyFPvUcPv(arg0, 0x3B, &p) == 4) {
            NetMemcpy(&v, p, 4);
            w = v;
            TLobby__sub_80425288(9, 4, &w);
        } else {
            TLobby__sub_80425288(9, 0, NULL);
            lbl_805D7B6C = (lbl_805D7B64 >> 1) + (lbl_805D7B64 >> 2) + (lbl_805D7B64 >> 3);
        }
    } else {
        TLobby__sub_80425288(7, 0, NULL);
        lbl_805D7B64 = -1;
    }
}

u8 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out) {
    u8 *base = p;
    u8 t;
    u8 len;
    p += 4;
    while ((s32)((u32)base - (u32)p) < 0x4D4) {
        t = *p++;
        if (t == 0) {
            continue;
        }
        if (t == 0xFF) {
            return 0;
        }
        if (t == tag) {
            len = *p++;
            *out = p;
            return len;
        }
        len = *p++;
        p += len;
    }
    return 0;
}

s32 validate_slot_buffers__6TLobbyFiPvPvPv(s32 arg0, void *arg1, void *arg2, void *arg3) {
    lbl_805D7BA0 = 0;
    if ((*(volatile s32 *)&lbl_805D4820) != 3 && (*(volatile s32 *)&lbl_805D4820) != 4 && (*(volatile s32 *)&lbl_805D4820) != 5) {
        lbl_805D7BA0 = 2;
        return -1;
    }
    if (TLobby__sub_804251C0(4, arg2) != 0) {
        lbl_805D7BA0 = 0xE;
    }
    if (TLobby__sub_804251C0(5, arg3) != 0 && lbl_805D7BA0 == 0) {
        lbl_805D7BA0 = 0xF;
    }
    if (TLobby__sub_804251C0(3, arg1) != 0 && lbl_805D7BA0 == 0) {
        lbl_805D7BA0 = 0xD;
    }
    return 0;
}

#pragma push
#pragma opt_propagation off
s32 dhcp_handle_reply__6TLobbyFsPv(s16 arg0, Arg_804249F0 *arg1) {
    s32 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);
    G_804249F0 *g = &lbl_805C1E00;
    Pkt_804249F0 *pk;
    u8 *q;
    u8 *p;

    if (arg0 == 0) {
        arg1->p = &g->pkt;
        return 0;
    }
    pk = &g->pkt;
    q = pk->opts;
    if (pk->f0 != 2 || pk->f1 != 1 || pk->f2 != 6) {
        return 0;
    }
    if (NetMemcmp(pk->f4, lbl_805D7B50, 4) != 0) {
        return 0;
    }
    if (NetMemcmp(pk->f1C, lbl_805D7B1C, 6) != 0) {
        return 0;
    }
    if (NetMemcmp(q, lbl_805D7B4C, 4) != 0) {
        return 0;
    }
    if (lbl_805D7B0C != 2) {
        return 0;
    }
    switch (lbl_805D4820) {
    case 3:
        break;
    case 1:
        if (lbl_805D7B10 == 0 && find_dhcp_option__6TLobbyFPvUcPv(q, 0x35, &p) == 1 && *p == 2 &&
            find_dhcp_option__6TLobbyFPvUcPv(q, 0x36, &p) == 4) {
            TLobby__sub_80425288(0xE, 4, p);
            lbl_805D7B28 = pk->f10;
            lbl_805D7B10 = 1;
        }
        break;
    case 2:
        if (lbl_805D7B10 == 0 && find_dhcp_option__6TLobbyFPvUcPv(q, 0x35, &p) == 1 && *p == 5) {
            NetMemcpy(g->buf, pk, arg1->len);
            lbl_805D7B10 = 1;
        }
        break;
    case 4:
        if (lbl_805D7B10 == 0 && find_dhcp_option__6TLobbyFPvUcPv(q, 0x35, &p) == 1 && *p == 5 &&
            lbl_805D7B28 == pk->f10) {
            NetMemcpy(g->buf, pk, arg1->len);
            lbl_805D7B10 = 1;
        }
        break;
    case 5:
        if (lbl_805D7B10 == 0 && find_dhcp_option__6TLobbyFPvUcPv(q, 0x35, &p) == 1 && *p == 5 &&
            lbl_805D7B28 == pk->f10) {
            NetMemcpy(g->buf, pk, arg1->len);
            lbl_805D7B10 = 1;
        }
        break;
    }
    return 0;
}
#pragma pop

void TLobby__sub_80424CA8(void) {
    NetUnregisterTimer(TLobby__sub_80423298);
    if (lbl_805D7B18 != -1) {
        TLobby__sub_80421B3C(lbl_805D7B18);
        lbl_805D7B18 = -1;
    }
    lbl_805D7B14 = TLobby__sub_804250A8(0);
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline NetworkPacketBufferDescriptor *find_804253F8(u32 arg0) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (network_packet_buffer_descriptors[i].in_use != 0 && (u32)network_packet_buffer_descriptors[i].data <= arg0 &&
            arg0 < (u32)network_packet_buffer_descriptors[i].data + 0x600) {
            break;
        }
    }
    if (i >= 0x20) {
        return NULL;
    }
    return &network_packet_buffer_descriptors[i];
}

void clear_message_entry__6TLobbyFi(s32 a) {
    R_804253A0 *r;
    u8 unused[8];
    lock_mutex__6TLobbyFi((void *)lbl_805D7BA8);
    r = (R_804253A0 *)find_entry_by_address__6TLobbyFi(a);
    unlock_mutex__10TUdpSocketFi((void *)lbl_805D7BA8);
    if (r != 0) {
        r->a = 0;
        r->b = 0;
    }
}

void release_entry_by_id__6TLobbyFUi(u32 arg0) {
    NetworkPacketBufferDescriptor *e = find_804253F8(arg0);
    if (e != NULL) {
        e->in_use = 0;
        e->queued_length = 0;
    }
}
#pragma pop

u8 *find_entry_by_address__6TLobbyFi(s32 arg0) {
    s32 i;
    for (i = 0; i < 32; i++) {
        if (((NetworkPacketBufferDescriptor *)&network_packet_buffer_descriptors)[i].in_use != 0 && (u32)((NetworkPacketBufferDescriptor *)&network_packet_buffer_descriptors)[i].data <= (u32)arg0 && (u32)arg0 < (u32)((NetworkPacketBufferDescriptor *)&network_packet_buffer_descriptors)[i].data + 0x600) {
            break;
        }
    }
    if (i >= 32) {
        return NULL;
    }
    return (u8 *)&((NetworkPacketBufferDescriptor *)&network_packet_buffer_descriptors)[i];
}

void cancel_alarm_a__6TLobbyFv(void) {
    TLobby__sub_803F95E4(lbl_805D7BA8);
}
s32 initialize_network_packet_pool(void) {
    s32 i;
    if (TLobby__sub_803F96AC(&lbl_805D7BA8) < 0) {
        return -1;
    } else {
    for (i = 0; (0x20) > (i); i++) {
        network_packet_buffer_descriptors[i].in_use = 0;
        network_packet_buffer_descriptors[i].queued_length = 0;
        network_packet_buffer_descriptors[i].data = network_packet_buffers[i];
    }
    }
    return 0;
}

void reset_message_thread__6TLobbyFv(void);

void update_exi_status__6TLobbyFv(void);

s32 post_message__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void message_thread_loop__6TLobbyFv(void);

void TLobby__sub_80425D88(u8 v);

s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);

#define arg0 ((s32)argp)
s16 TLobby__sub_804262CC(void *argp);
#undef arg0

s32 TLobby__sub_80426440(void);

s32 post_send_message__6TLobbyFiUs(s32 arg0, u16 arg1);

void clear_message_entry_wrapper__6TLobbyFi(s32 arg0);

u16 recv_pppoe_message__6TLobbyFPvPv(s32 *arg0, u16 *arg1);

s32 TLobby__sub_80426660(u8 *arg0);

s32 queue_timeout_message__6TLobbyFsis(s16 arg0, s32 arg1, s16 arg2);

s32 get_local_address__6TLobbyFsPv(s16 arg0, void *arg1);

#pragma push
#pragma dont_inline on
s32 consume_item_count_by_id__6TLobbyFsPv(s16 arg0, void *arg1);
#pragma pop

s32 add_multicast_address__6TLobbyFsPv(s16 arg0, void *arg1);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline s16 remove_rec_80426998(u16 key) {
    s32 i;
    Obj_80426998 *o = ((Obj_80426998 *)&lobby_net_channel_table);
    Rec_80426998 *p = o->recs;
    for (i = 5; i != 0; i--, p++) {
        if (p->a != 0 && p->b == key) {
            p->a = 0;
            p->b = 0;
            o->count--;
            return 0;
        }
    }
    return -1;
}
s32 remove_rec_by_handle__6TLobbyFsUs(s16 arg0, u16 arg1);
#pragma pop

s32 open_channel_checked__6TLobbyFsUs(s16 arg0, u16 arg1);

void forward_to_channel__6TLobbyFPvPv(void *a, void *b);

s32 TLobby__sub_80426B88(s16 arg0);

s16 query_link_status__6TLobbyFv(void);

s32 set_connect_mode__6TLobbyFi(s32 arg0);

s32 TLobby__sub_80427240(u8 **arg0);

s32 write_name_field__6TLobbyFPvPv(s32 *arg0, u8 *arg1);

typedef char RecoveredGlobal_80427D0C_lbl_805CFC20_size[sizeof(RecoveredGlobal_80427D0C_lbl_805CFC20) == 0xE20 ? 1 : -1];

s32 parse_tlv_records__6TLobbyFiPvUs(s32 arg0, u8 *arg1, u16 arg2);

Ent_80427C6C *TLobby__sub_80427C6C(s32 arg0, u16 arg1);

s16 get_slot_id__6TLobbyFs(s16 arg0);

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

void reset_boot_state__6TLobbyFv(void);

typedef char RecoveredGlobal_8042839C_lbl_805D0A40_size[sizeof(RecoveredGlobal_8042839C_lbl_805D0A40) == 0x60 ? 1 : -1];

s32 wait_timeout_loop__6TLobbyFPv(u8 *arg0);

void cancel_alarm_b__6TLobbyFv(void);

s32 init_buffer_pool__6TLobbyFv(void);

void reset_buffer_pool__6TLobbyFv(void);

void wake_network_thread__6TLobbyFv(void);

void exi_write__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);

void start_exi_dma_read__6TLobbyFUs(u16 arg0);

void start_exi_dma_write__6TLobbyFiPv(s32 chan, void *ctx);

void start_exi_send__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);

s32 exi_start_send_dma__6TLobbyFii(int, int);

void copy_6_byte_config__6TLobbyFPv(void *dst);

void copy_mac_address__6TLobbyFi(s32 arg0);

void TLobby__sub_8042B58C(u32 arg0, s32 arg1);

s32 poll_exi_status__6TLobbyFPv(void *p);

void TLobby__sub_8042BA48(s32 arg0, s32 arg1);

u8 exi_read_status_byte__6TLobbyFv(void);

void wake_load_thread__23TAdSinglePlyChrSelectGCFv(void);

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8042DD70_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042DD70_lbl_805D1D20) == 0x1C ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
#pragma pop

void TAdSinglePlyChrSelectGC__sub_8042DDE4(int _w0, int _w1);

typedef char RecoveredGlobal_8042E768_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042E768_lbl_805D1D20) == 0x1C ? 1 : -1];

s32 send_at_ms_command__23TAdSinglePlyChrSelectGCFi(s32 arg0);

s32 send_at_error_correction_cmd__23TAdSinglePlyChrSelectGCFi(s32 arg0);

s32 send_at_compression_cmd__23TAdSinglePlyChrSelectGCFi(s32 arg0);

s32 copy_default_and_get_state__23TAdSinglePlyChrSelectGCFUi(u32 arg0);

s32 send_atx_command__23TAdSinglePlyChrSelectGCFi(s32 arg0);

s32 send_modem_hangup__23TAdSinglePlyChrSelectGCFi(s32 arg0);

s32 fn_8042E8B8(void);

}

typedef char NetworkPacketDescriptorSize[sizeof(NetworkPacketBufferDescriptor)==12 ? 1 : -1];
typedef char NetworkPacketInUseOffset[offsetof(NetworkPacketBufferDescriptor,in_use)==0 ? 1 : -1];
typedef char NetworkPacketLengthOffset[offsetof(NetworkPacketBufferDescriptor,queued_length)==4 ? 1 : -1];
typedef char NetworkPacketDataOffset[offsetof(NetworkPacketBufferDescriptor,data)==8 ? 1 : -1];
