#include "pso/network/NetworkTransport.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    M2C_UNK value;
    u8 remaining[0x5C];
};

struct RecoveredGlobal_8042839C_lbl_805D0A40 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_1C { u8 bytes[0x1c]; };

struct RecoveredGlobal_8042E768_lbl_805D1D20 {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_80427D0C_lbl_805CFC20 {
    M2C_UNK value;
    u8 remaining[0xE1C];
};

struct RecoveredGlobal_80428360_lbl_805CFC20 {
    s16 value;
    u8 remaining[0xE1E];
};

struct RecoveredGlobal_8042DD70_lbl_805D1D20 {
    M2C_UNK value;
    u8 remaining[0x18];
};

typedef s32 M2C_UNK;

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

typedef struct Ent_80427D40 {
    s16 state;
    u16 id;
    u8 pad4[4];
    s32 timeout;
    s32 last;
    u8 rest[0xE14 - 0x10];
} Ent_80427D40;

extern "C" {
M2C_UNK OSInitMessageQueue(void *, void *, int);
M2C_UNK TLobby__sub_803F9B28(void *);
s16 TLobby__sub_803F9B94(void *, void *);
M2C_UNK TUdpSocket__sub_803F9EE4(void *, int, int);
void TUdpSocket__sub_80419E64(int, int, void (*)(void));
s32 TLobby__sub_8042AAA0(void *);
extern u8 lbl_805CF240[0xA0];
extern u8 TLobby__pppoe_message_queue[0xA0];
extern u8 lbl_805CF380[0x48];
extern u8 lobby_net_channel_table[0x858];
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lobby_pppoe_slot_table;
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
u8 lbl_805D0AA0[0x80];
u8 exi_dma_buffer[0x600];
u8 exi_dma_write_buffer[0xC00];
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
void clear_message_entry__6TLobbyFi(s32);
void clear_message_entry_wrapper__6TLobbyFi(s32 arg0);
s32 str_length__6TLobbyFi(void *);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 write_name_field__6TLobbyFPvPv(s32 *arg0, u8 *arg1);
M2C_UNK TLobby__sub_803F77E0(void *);
void reset_boot_state__6TLobbyFv(void);
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7C00;
void cancel_alarm_b__6TLobbyFv(void);
M2C_UNK OSWakeupThread(void *);
extern M2C_UNK network_thread_queue;
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
M2C_UNK memcpy(void *, void *, int);
extern M2C_UNK exi_mac_address;
void copy_mac_address__6TLobbyFi(s32 arg0);
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSSleepThread(void *);
extern u32 lbl_805D7C4C;
extern s32 exi_receive_callback;
void TLobby__sub_8042B58C(u32 arg0, s32 arg1);
extern s32 lbl_805D7C44;
extern s32 lbl_805D7C48;
void TLobby__sub_8042BA48(s32 arg0, s32 arg1);
M2C_UNK OSWakeupThread(void *);
extern M2C_UNK lbl_805D7CA0;
void wake_load_thread__23TAdSinglePlyChrSelectGCFv(void);
s32 EXILock(s32, u32, u32);
void TAdSinglePlyChrSelectGC__sub_8042DE20(void);
extern RecoveredGlobal_8042E768_lbl_805D1D20 lbl_805D1D20;
extern s32 lbl_805D7C98;
s32 copy_default_and_get_state__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
void TAdSinglePlyChrSelectGC__sub_8042D6A4(void *);
extern M2C_UNK lbl_805D4918;
extern s32 lbl_805D7C98;
s32 send_modem_hangup__23TAdSinglePlyChrSelectGCFi(s32 arg0);
extern s16 network_link_status_cache;
s16 query_link_status__6TLobbyFv(void);
s16 get_slot_id__6TLobbyFs(s16 arg0);
s32 TLobby__sub_80428360(void);
s16 TLobby__sub_803F96AC(void *, void *, void *);
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
extern RecoveredGlobal_8042E768_lbl_805D1D20 lbl_805D1D20;
extern s32 lbl_805D7C98;
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(void *, void *, int);
extern M2C_UNK exi_mac_address;
void copy_6_byte_config__6TLobbyFPv(void *dst);
void TLobby__sub_80425DC8(void *q, void *a, void *b);
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
s32 TLobby__sub_803F9F04(void *, void *, int);
typedef struct Ent_804267F0 {
    s16 count;
    u8 id[6];
} Ent_804267F0;

typedef struct Tbl_804267F0 {
    u8 pad[6];
    Ent_804267F0 ent[6];
} Tbl_804267F0;

s32 TLobby__sub_803F9EC4(void *, void *, int);
extern s32 lbl_805D7BB0;
s32 get_local_address__6TLobbyFsPv(s16 arg0, void *arg1);
s16 TLobby__sub_804262CC(void *);
s32 TLobby__sub_80426B88(s16 arg0);
extern s32 lbl_805D7BC8;
s32 set_connect_mode__6TLobbyFi(s32 arg0);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_80427240(u8 **arg0);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 parse_tlv_records__6TLobbyFiPvUs(s32 arg0, u8 *arg1, u16 arg2);
u8 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);
void TLobby__sub_80419DDC(void *);
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
void clear_message_entry__6TLobbyFi(s32);
void TLobby__sub_80425D88(u8 v);
void start_exi_send__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
extern u8 lbl_805CF240[];
extern u8 lbl_805CF380[];
extern s32 lbl_805D7BCC;
void message_thread_loop__6TLobbyFv(void);
s32 OSSendMessage(void *mq, void *msg, s32 flags);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_8042558C(void *);
u8 *TLobby__sub_804256B8(s32);
extern u8 lbl_805CF240[];
s32 post_send_message__6TLobbyFiUs(s32 arg0, u16 arg1);
s32 TLobby__sub_803F9F04(void *, void *, int);
s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);
s16 TLobby__sub_804262CC(void *);
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
extern s32 exi_dma_read_length;
extern u32 exi_dma_write_length;
void start_exi_dma_read__6TLobbyFUs(u16 arg0);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
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
s32 TLobby__sub_803F9EC4(void *, void *, int);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_8042BC00(void *);
s32 add_multicast_address__6TLobbyFsPv(s16 arg0, void *arg1);
M2C_UNK get_time_ms__6TLobbyFPv(void *);
M2C_UNK unlock_mutex__10TUdpSocketFi(void *);
M2C_UNK lock_mutex__6TLobbyFi(void *);
M2C_UNK TLobby__sub_803F97E8(int);
extern void *lbl_805C18A0[];
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
M2C_UNK exi_start_send_dma__6TLobbyFii(int, int);

void release_entry_by_id__6TLobbyFUi(u32 arg0);

u8 *find_entry_by_address__6TLobbyFi(s32 arg0);
extern G_804249F0 lbl_805C1E00;
extern s32 lbl_805D7B0C;
extern s32 lbl_805D7B10;
extern u8 lbl_805D7B1C[6];
extern u32 lbl_805D7B28;
extern u8 lbl_805D7B4C[4];
extern u8 lbl_805D7B50[4];
s32 TLobby__sub_803F9F04(void *, void *, int);
Ent_80427C6C *TLobby__sub_80427C6C(s32 arg0, u16 arg1);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSSleepThread(void *);
void wake_network_thread__6TLobbyFv(void);
extern M2C_UNK network_thread_queue;
u8 exi_read_status_byte__6TLobbyFv(void);
M2C_UNK get_time_ms__6TLobbyFPv(void *);
s32 TLobby__sub_803F9EC4(void *, void *, int);
s32 TLobby__sub_803F9F04(void *, void *, int);
void clear_message_entry_wrapper__6TLobbyFi(s32 arg0);
u16 recv_pppoe_message__6TLobbyFPvPv(s32 *arg0, u16 *arg1);
M2C_UNK TLobby__sub_80427378(Ent_80427D40 *);
s16 TLobby__sub_804275B0(s32, u16);
Ent_80427C6C *TLobby__sub_80427C6C(s32 arg0, u16 arg1);
s16 pppoe_recv_packet__6TLobbyFPvUsPv(u8 *buf, u16 bufLen, u16 *outLen);
void DCInvalidateRange(void *, u32);
s32 EXIDeselect(s32);
void TLobby__sub_80429648(void);
M2C_UNK memcpy(void *, void *, int);
extern s32 exi_receive_callback;
extern s32 exi_dma_read_length;
extern u32 exi_dma_write_length;
extern u16 lbl_805D7C6C[2];
extern u8 *lbl_805D7C74;
extern u16 lbl_805D7C7A;
void TLobby__sub_80429AC8(void);
}

extern "C" {

s32 TLobby__sub_80426440(void);
s32 TLobby__sub_80428358(void);
s32 fn_8042E8B8(void);
s32 get_task_count__6TLobbyFv(void);
void reset_buffer_pool__6TLobbyFv(void);

extern s32 lbl_805D4820;

s32 get_task_count__6TLobbyFv(void);

s32 get_time_seconds__6TLobbyFPv(void *);
s32 TLobby__sub_803F9F04(void *, void *, int);
void TLobby__sub_80425288(s32, s32, void *);
extern u32 lbl_805D7B64;
extern u32 lbl_805D7B68;
extern u32 lbl_805D7B6C;
extern u32 lbl_805D7B78;
extern u32 lbl_805D7B7C;

void parse_dhcp_lease_times__6TLobbyFPv(u8 *arg0);

u8 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);

s32 validate_slot_buffers__6TLobbyFiPvPvPv(s32 arg0, void *arg1, void *arg2, void *arg3);

#pragma push
#pragma opt_propagation off
s32 dhcp_handle_reply__6TLobbyFsPv(s16 arg0, Arg_804249F0 *arg1);
#pragma pop

void TLobby__sub_80424CA8(void);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline Ent_804253F8 *find_804253F8(u32 arg0);
void release_entry_by_id__6TLobbyFUi(u32 arg0);
#pragma pop

u8 *find_entry_by_address__6TLobbyFi(s32 arg0);

void cancel_alarm_a__6TLobbyFv(void);

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

#define TBL_80427D40 ((Ent_80427D40 *)&lobby_pppoe_slot_table)
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline void check_80427D40(void);
s16 pppoe_recv_packet__6TLobbyFPvUsPv(u8 *buf, u16 bufLen, u16 *outLen);
#pragma pop

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

void wake_network_thread__6TLobbyFv(void) {
    OSWakeupThread((void *) (&network_thread_queue));
}

void exi_write__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp14;
    sp14 = ((arg0 << 8) & 0xFFFF00) | 0x80000000;
    EXISelect(0, 2U, 5);
    EXIImm(0, &sp14, 4, 1U, 0U);
    EXISync(0);
    EXIImmEx(0, arg1, arg2, 0);
    EXIDeselect(0);
}

void start_exi_dma_read__6TLobbyFUs(u16 arg0) {
    u32 len;
    s32 cmd;
    len = (exi_dma_read_length + 0x1F) & ~0x1F;
    cmd = ((arg0 << 8) & 0xFFFF00) | 0x80000000;
    EXISelect(0, 2, 5);
    EXIImm(0, &cmd, 4, 1, 0);
    EXISync(0);
    EXIDma(0, exi_dma_buffer, len, 0, exi_dma_write_length != 0 ? (void *)start_exi_dma_write__6TLobbyFiPv : (void *)TLobby__sub_80429AC8);
}

void start_exi_dma_write__6TLobbyFiPv(s32 chan, void *ctx) {
    u32 len;
    s32 cmd;
    len = (exi_dma_write_length + 0x1F) & ~0x1F;
    EXIDeselect(0);
    cmd = 0x80010000;
    EXISelect(0, 2, 5);
    EXIImm(0, &cmd, 4, 1, 0);
    EXISync(0);
    EXIDma(0, exi_dma_write_buffer, len, 0, (void *)TLobby__sub_80429AC8);
}

void TLobby__sub_80429AC8(void) {
    u8 pad[8];
    EXIDeselect(0);
    DCInvalidateRange(exi_dma_buffer, (exi_dma_read_length + 0x1F) & ~0x1F);
    if (exi_dma_write_length != 0) {
        DCInvalidateRange(exi_dma_write_buffer, (exi_dma_write_length + 0x1F) & ~0x1F);
    }
    if ((u32)exi_receive_callback != 0) {
        memcpy(lbl_805D7C74, exi_dma_buffer, exi_dma_read_length);
        if (exi_dma_write_length != 0) {
            memcpy(lbl_805D7C74 + exi_dma_read_length, exi_dma_write_buffer, exi_dma_write_length);
        }
        ((void (*)(u8 *, u16))exi_receive_callback)(lbl_805D7C74, lbl_805D7C6C[1]);
    }
    lbl_805D7C7A = lbl_805D7C6C[0];
    TLobby__sub_80429648();
}

void start_exi_send__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r3;
    s32 var_r4;
    lbl_805D7C7C = arg0;
    var_r3 = 0;
    lbl_805D7C80 = arg1;
    var_r4 = 0;
    exi_send_started_flag = 1;
    lbl_805D7C54 = arg2;
    exi_start_send_dma__6TLobbyFii((int)((int) (0)), (int)((int) (0)));
}

M2C_UNK exi_start_send_dma__6TLobbyFii(int, int) {
    u8 pad[4];
    s32 cmd;
    if (EXILock(0, 2, (u32)exi_start_send_dma__6TLobbyFii) != 0) {
        if (lbl_805D7C80 < 0x3C) {
            lbl_805D7C80 = 0x3C;
        }
        lbl_805D7C84 = lbl_805D7C80 & ~0x1F;
        lbl_805D7C88 = lbl_805D7C80 - lbl_805D7C84;
        DCStoreRange((void *)lbl_805D7C7C, lbl_805D7C84);
        cmd = 0xC0004800;
        EXISelect(0, 2, 5);
        EXIImm(0, &cmd, 4, 1, 0);
        EXISync(0);
        EXIDma(0, (void *)lbl_805D7C7C, lbl_805D7C84, 1, (void *)TLobby__sub_8042B434);
    }
}

void copy_6_byte_config__6TLobbyFPv(void *dst) {
    memcpy(dst, &exi_mac_address, 6);
}

void copy_mac_address__6TLobbyFi(s32 arg0) {
    memcpy((void *) (&exi_mac_address), (void *) (arg0), (int) (6));
}

void TLobby__sub_8042B58C(u32 arg0, s32 arg1) {
    u8 sp43;
    u8 sp42;
    s16 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    u8 sp27;
    u8 sp26;
    u8 sp25;
    u8 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 e;
    s32 pad;

    e = OSDisableInterrupts();
    for (;;) {
        if (EXILock(0, 2, (u32)wake_network_thread__6TLobbyFv) == 1) {
            OSRestoreInterrupts(e);
            break;
        }
        OSSleepThread(&network_thread_queue);
        OSRestoreInterrupts(e);
    }
    lbl_805D7C4C = arg0;
    exi_receive_callback = arg1;
    if (arg0 == 0U) {
        sp43 = 0;
        sp3C = 0xC0000800;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp3C, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp43, 1, 1);
        EXIDeselect(0);
    } else {
        sp42 = 0xFF;
        sp38 = 0xC0000800;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp38, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp42, 1, 1);
        EXIDeselect(0);
        sp40 = 0x100;
        sp34 = 0xC0000A00;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp34, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp40, 2, 1);
        EXIDeselect(0);
        sp30 = 0xC0001600;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp30, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp40, 2, 1);
        EXIDeselect(0);
        sp2C = 0xC0001800;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp2C, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp40, 2, 1);
        EXIDeselect(0);
        sp40 = 0xF00;
        sp28 = 0xC0001A00;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp28, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp40, 2, 1);
        EXIDeselect(0);
        sp20 = 0x80000100;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp20, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp27, 1, 0);
        EXIDeselect(0);
        e = sp27;
        e &= ~1;
        e |= 0x12;
        sp26 = e;
        sp1C = 0xC0000100;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp1C, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp26, 1, 1);
        EXIDeselect(0);
        sp18 = 0xC0000000;
        sp25 = 8;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp18, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp25, 1, 1);
        EXIDeselect(0);
        sp24 = 8;
        sp14 = 0xC0003200;
        EXISelect(0, 2, 5);
        EXIImm(0, &sp14, 4, 1, 0);
        EXISync(0);
        EXIImmEx(0, (s32)&sp24, 1, 1);
        EXIDeselect(0);
    }
    EXIUnlock(0);
}

s32 poll_exi_status__6TLobbyFPv(void *p) {
    s32 *arg0 = (s32 *)p;
    u8 buf[2];
    s32 v;
    if (EXILock(0, 2, 0) != 0) {
        exi_write__6TLobbyFiii(0x31, (s32)&buf[1], 1);
        if ((buf[1] & 1) || (buf[1] & 2)) {
            v = 1;
        } else {
            v = 0;
        }
        *arg0 = v;
        EXIUnlock(0);
        return 1;
    }
    return 0;
}

void TLobby__sub_8042BA48(s32 arg0, s32 arg1) {
    s32 e = OSDisableInterrupts();
    lbl_805D7C44 = arg0;
    lbl_805D7C48 = arg1;
    OSRestoreInterrupts(e);
}

u8 exi_read_status_byte__6TLobbyFv(void) {
    u8 val;
    u16 cmd;
    s16 pad;
    s32 enabled;
    u8 ret;
    enabled = OSDisableInterrupts();
    while (1) {
        if (EXILock(0, 2, (u32)wake_network_thread__6TLobbyFv) == 1) {
            OSRestoreInterrupts(enabled);
            break;
        }
        OSSleepThread(&network_thread_queue);
        OSRestoreInterrupts(enabled);
    }
    cmd = 0x100;
    EXISelect(0, 2, 5);
    EXIImm(0, &cmd, 2, 1, 0);
    EXISync(0);
    EXIImm(0, &val, 1, 0, 0);
    EXISync(0);
    EXIDeselect(0);
    ret = val;
    EXIUnlock(0);
    return ret;
}

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
