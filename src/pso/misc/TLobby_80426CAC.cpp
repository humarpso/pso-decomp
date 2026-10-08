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
extern u8 lbl_805CF2E0[0xA0];
extern u8 lbl_805CF380[0x48];
extern u8 lbl_805CF3C8[0x858];
RecoveredGlobal_80427D0C_lbl_805CFC20 lbl_805CFC20;
extern RecoveredGlobal_80428374_lbl_805D0A40 lbl_805D0A40;
extern u8 lbl_805D0AA0[0x80];
extern u8 lbl_805D0B20[0x600];
extern u8 lbl_805D1120[0xC00];
extern s32 lobby_message_thread_handle;
extern u32 lbl_805D7BC4;
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7BA8;
void cancel_alarm_a__6TLobbyFv(void);
extern s16 lbl_805D4828;
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
M2C_UNK __OSBootDol(void *);
s32 boot_dol__6TLobbyFv(void);
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7C00;
void cancel_alarm_b__6TLobbyFv(void);
M2C_UNK OSWakeupThread(void *);
extern M2C_UNK lbl_805D7C38;
void wake_network_thread__6TLobbyFv(void);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIImmEx(s32, s32, s32, s32);
void exi_write__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
extern s32 lbl_805D7C40;
extern s32 lbl_805D7C54;
extern s32 lbl_805D7C7C;
extern s32 lbl_805D7C80;
void start_exi_send__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(void *, void *, int);
extern M2C_UNK lbl_805D7C30;
void copy_mac_address__6TLobbyFi(s32 arg0);
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSSleepThread(void *);
extern u32 lbl_805D7C4C;
extern s32 lbl_805D7C50;
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
extern s16 lbl_805D4828;
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
extern M2C_UNK lbl_805D7C30;
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
extern u8 lbl_805CF2E0[];
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
extern s32 lbl_805D7C64;
extern u32 lbl_805D7C68;
void start_exi_dma_read__6TLobbyFUs(u16 arg0);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
extern u32 lbl_805D7C68;
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
extern char lbl_805D4970[7];
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
extern Ent_804253F8 lbl_805C30C0[0x20];
void release_entry_by_id__6TLobbyFUi(u32 arg0);
extern Ent_804253F8 lbl_805C30C0[0x20];
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
extern M2C_UNK lbl_805D7C38;
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
extern s32 lbl_805D7C50;
extern s32 lbl_805D7C64;
extern u32 lbl_805D7C68;
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

s32 TLobby__sub_80427240(u8 **arg0) {
    s16 a = 0;
    s16 b;
    u8 pad[6];
    TLobby__sub_803F9F04(*arg0, &a, 2);
    *arg0 += 2;
    b = 0;
    TLobby__sub_803F9F04(*arg0, &b, 2);
    *arg0 += 2;
    return 4;
}

s32 write_name_field__6TLobbyFPvPv(s32 *arg0, u8 *arg1) {
    struct Fields_arg1 { u8 pad_0[58]; u8 field_3A; };
    s16 sp12;
    s16 sp10;
    s16 temp_r3;
    if ((u8) ((Fields_arg1*)arg1)->field_3A == 0) {
        return 0;
    }
    sp12 = 0x102;
    TLobby__sub_803F9F04((void *) (*arg0), (void *) (&sp12), (int) (2));
    *arg0 += 2;
    temp_r3 = str_length__6TLobbyFi((void *) (arg1 + 0x3A));
    sp10 = temp_r3;
    TLobby__sub_803F9F04((void *) (*arg0), (void *) (&sp10), (int) (2));
    *arg0 += 2;
    TLobby__sub_803F9F04((void *) (*arg0), (void *) (arg1 + 0x3A), (int) (temp_r3));
    *arg0 += temp_r3;
    return temp_r3 + 4;
}

typedef char RecoveredGlobal_80427D0C_lbl_805CFC20_size[sizeof(RecoveredGlobal_80427D0C_lbl_805CFC20) == 0xE20 ? 1 : -1];

s32 parse_tlv_records__6TLobbyFiPvUs(s32 arg0, u8 *arg1, u16 arg2) {
    u8 *p = arg1;
    u16 len = arg2;
    u16 a;
    u16 b;
    u8 pad[4];
    s32 t;
    while (len != 0) {
        TLobby__sub_803F9F04(&a, p, 2);
        if (a == 0) {
            break;
        }
        TLobby__sub_803F9F04(&b, p + 2, 2);
        t = b + 4;
        p += t;
        len -= t;
    }
    return 0;
}

Ent_80427C6C *TLobby__sub_80427C6C(s32 arg0, u16 arg1) {
    u16 id;
    Ent_80427C6C *ret;
    s16 i;
    if (arg1 < 0x14U) {
        return NULL;
    }
    TLobby__sub_803F9F04((void *)&id, (void *)(arg0 + 0x10), 2);
    if (id == 0) {
        return NULL;
    }
    i = 0;
    ret = NULL;
    while (i < 1) {
        ret = &((Ent_80427C6C *)&lbl_805CFC20)[i];
        if (id == ret->id) {
            break;
        }
        i++;
    }
    if (i >= 1) {
        ret = NULL;
    }
    return ret;
}

s16 get_slot_id__6TLobbyFs(s16 arg0) {
    if ((arg0 < 0) || (arg0 >= 1)) {
        return -1;
    }
    return M2C_FIELD(((u8 *)(&lbl_805CFC20.value) + (arg0 * 0xE14)), s16 *, 0);
}

#define TBL_80427D40 ((Ent_80427D40 *)&lbl_805CFC20)
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline void check_80427D40(void) {
    s32 now;
    Ent_80427D40 *p;
    s16 i;
    get_time_ms__6TLobbyFPv(&now);
    for (p = TBL_80427D40, i = 0; i < 1; p++, i++) {
        if (p->state != -1 && p->timeout != 0 && now - p->last > p->timeout) {
            TLobby__sub_80427378(p);
        }
    }
}
s16 pppoe_recv_packet__6TLobbyFPvUsPv(u8 *buf, u16 bufLen, u16 *outLen) {
    u16 type;
    s32 pkt;
    u16 id;
    s32 padA;
    u16 len;
    s32 padB;
    Ent_80427D40 *e;
    s16 ret;
    u8 *src;
    check_80427D40();
    if (recv_pppoe_message__6TLobbyFPvPv(&pkt, &id) == 0) {
        if (outLen != NULL) {
            *outLen = 0;
        }
        return 0;
    }
    TLobby__sub_803F9F04(&type, (u8 *)pkt + 0xC, 2);
    if (type != 0x8863 && type != 0x8864) {
        ret = 0;
    } else if (TLobby__sub_803F9EC4((void *)pkt, &TBL_80427D40[1], 6) != 0) {
        ret = 0;
    } else if (((u8 *)pkt)[0xE] != 0x11) {
        ret = 0;
    } else if (type == 0x8863) {
        ret = TLobby__sub_804275B0(pkt, id);
    } else {
        ret = 0;
        TLobby__sub_803F9F04(&len, (u8 *)pkt + 0x12, 2);
        src = (u8 *)pkt + 0x14;
        if (buf != NULL && len <= bufLen) {
            e = ((Ent_80427D40 *)TLobby__sub_80427C6C(pkt, id));
            if (e != NULL && e->state == 4) {
                ret = e - TBL_80427D40;
                TLobby__sub_803F9F04(buf, src, len);
                if (outLen != NULL) {
                    *outLen = len;
                }
                clear_message_entry_wrapper__6TLobbyFi(pkt);
                return ret;
            }
        }
    }
    clear_message_entry_wrapper__6TLobbyFi(pkt);
    if (outLen != NULL) {
        *outLen = 0;
    }
    return ret;
}
#pragma pop

s32 TLobby__sub_80428358(void) {
    return 0;
}

extern u32 lbl_805D7C04;
extern s32 lbl_805D7C08;
extern s32 lbl_805D7C0C;
extern u32 lbl_805D7C10;
extern u32 lbl_805D7C14;
extern u32 lbl_805D7C18;
extern s32 lbl_805D7C1C;
extern s32 lbl_805D7C20;
extern s32 lbl_805D7C24;
extern s32 lbl_805D7C28;

typedef char RecoveredGlobal_80428374_lbl_805D0A40_size[sizeof(RecoveredGlobal_80428374_lbl_805D0A40) == 0x60 ? 1 : -1];

typedef char RecoveredGlobal_80428360_lbl_805CFC20_size[sizeof(RecoveredGlobal_80428360_lbl_805CFC20) == 0xE20 ? 1 : -1];
s32 TLobby__sub_80428360(void) {
    (*(RecoveredGlobal_80428360_lbl_805CFC20 *)&lbl_805CFC20).value = -1;
    return 0;
}

void reset_boot_state__6TLobbyFv(void);

typedef char RecoveredGlobal_8042839C_lbl_805D0A40_size[sizeof(RecoveredGlobal_8042839C_lbl_805D0A40) == 0x60 ? 1 : -1];
s32 boot_dol__6TLobbyFv(void);

s32 wait_timeout_loop__6TLobbyFPv(u8 *arg0);

void cancel_alarm_b__6TLobbyFv(void);

s32 init_buffer_pool__6TLobbyFv(void);

void reset_buffer_pool__6TLobbyFv(void);

void wake_network_thread__6TLobbyFv(void);

void exi_write__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);

void start_exi_dma_read__6TLobbyFUs(u16 arg0);

void start_exi_dma_write__6TLobbyFiPv(s32 chan, void *ctx);

void TLobby__sub_80429AC8(void);

void start_exi_send__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);

M2C_UNK exi_start_send_dma__6TLobbyFii(int, int);

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
