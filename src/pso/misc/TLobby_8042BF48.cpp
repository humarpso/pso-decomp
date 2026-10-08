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
extern s32 lobby_message_thread_handle;
extern u32 lbl_805D7BC4;
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7BA8;
void TLobby__sub_804259F0(void);
extern s16 lbl_805D4828;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
extern u32 lbl_805D7BC0;
void TLobby__sub_80425BD0(void);
void clear_message_entry__6TLobbyFi(s32);
void TLobby__sub_804264D4(s32 arg0);
s32 str_length__6TLobbyFi(void *);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 write_name_field__6TLobbyFPvPv(s32 *arg0, u8 *arg1);
M2C_UNK TLobby__sub_803F77E0(void *);
extern RecoveredGlobal_80428374_lbl_805D0A40 lbl_805D0A40;
void TLobby__sub_80428374(void);
M2C_UNK __OSBootDol(void *);
extern RecoveredGlobal_80428374_lbl_805D0A40 lbl_805D0A40;
s32 TLobby__sub_8042839C(void);
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7C00;
void TLobby__sub_804294C4(void);
M2C_UNK OSWakeupThread(void *);
extern M2C_UNK lbl_805D7C38;
void TLobby__sub_80429598(void);
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
void TLobby__sub_8042B334(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(void *, void *, int);
extern M2C_UNK lbl_805D7C30;
void TLobby__sub_8042B560(s32 arg0);
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
void TAdSinglePlyChrSelectGC__sub_8042BF48(void);
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
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lbl_805CFC20;
s16 TLobby__sub_80427D0C(s16 arg0);
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lbl_805CFC20;
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
void TLobby__sub_8042B538(void *dst);
void TLobby__sub_80425DC8(void *q, void *a, void *b);
extern u8 lbl_805CF3C8[];
void TLobby__sub_80426A70(void *a, void *b);
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
extern u8 lbl_805CF3C8[];
extern s32 lbl_805D7BB0;
s32 TLobby__sub_80426790(s16 arg0, void *arg1);
s16 TLobby__sub_804262CC(void *);
extern u8 lbl_805CF3C8[];
s32 TLobby__sub_80426B88(s16 arg0);
extern s32 lbl_805D7BC8;
s32 TLobby__sub_80426C34(s32 arg0);
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
void TLobby__sub_8042B334(s32 arg0, s32 arg1, s32 arg2);
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
extern u8 lbl_805CF3C8[];
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
extern u8 lbl_805D0B20[];
extern s32 lbl_805D7C64;
extern u32 lbl_805D7C68;
void start_exi_dma_read__6TLobbyFUs(u16 arg0);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
void TLobby__sub_80429AC8(s32, void *);
extern u8 lbl_805D1120[];
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
extern u8 lbl_805CF3C8[];
s32 add_multicast_address__6TLobbyFsPv(s16 arg0, void *arg1);
M2C_UNK get_time_ms__6TLobbyFPv(void *);
M2C_UNK unlock_mutex__10TUdpSocketFi(void *);
M2C_UNK lock_mutex__6TLobbyFi(void *);
M2C_UNK TLobby__sub_803F97E8(int);
extern void *lbl_805C18A0[];
extern RecoveredGlobal_80428374_lbl_805D0A40 lbl_805D0A40;
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
void TLobby__sub_804253F8(u32 arg0);
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
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lbl_805CFC20;
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
void TLobby__sub_80429598(void);
extern M2C_UNK lbl_805D7C38;
u8 exi_read_status_byte__6TLobbyFv(void);
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
void TLobby__sub_804253F8(u32 arg0);
#pragma pop

u8 *find_entry_by_address__6TLobbyFi(s32 arg0);

void TLobby__sub_804259F0(void);

void TLobby__sub_80425BD0(void);

s32 post_message__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void message_thread_loop__6TLobbyFv(void);

void TLobby__sub_80425D88(u8 v);

s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);

#define arg0 ((s32)argp)
s16 TLobby__sub_804262CC(void *argp);
#undef arg0

s32 TLobby__sub_80426440(void);

s32 post_send_message__6TLobbyFiUs(s32 arg0, u16 arg1);

void TLobby__sub_804264D4(s32 arg0);

u16 recv_pppoe_message__6TLobbyFPvPv(s32 *arg0, u16 *arg1);

s32 TLobby__sub_80426660(u8 *arg0);

s32 queue_timeout_message__6TLobbyFsis(s16 arg0, s32 arg1, s16 arg2);

s32 TLobby__sub_80426790(s16 arg0, void *arg1);

#pragma push
#pragma dont_inline on
s32 TLobby__sub_804267F0(s16 arg0, void *arg1);
#pragma pop

s32 add_multicast_address__6TLobbyFsPv(s16 arg0, void *arg1);

s32 TLobby__sub_80426A18(s16 arg0, u16 arg1);

void TLobby__sub_80426A70(void *a, void *b);

s32 TLobby__sub_80426B88(s16 arg0);

s16 query_link_status__6TLobbyFv(void);

s32 TLobby__sub_80426C34(s32 arg0);

s32 TLobby__sub_80427240(u8 **arg0);

s32 write_name_field__6TLobbyFPvPv(s32 *arg0, u8 *arg1);

typedef char RecoveredGlobal_80427D0C_lbl_805CFC20_size[sizeof(RecoveredGlobal_80427D0C_lbl_805CFC20) == 0xE20 ? 1 : -1];

s32 parse_tlv_records__6TLobbyFiPvUs(s32 arg0, u8 *arg1, u16 arg2);

Ent_80427C6C *TLobby__sub_80427C6C(s32 arg0, u16 arg1);

s16 TLobby__sub_80427D0C(s16 arg0);

s32 TLobby__sub_80428358(void);

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
s32 TLobby__sub_80428360(void);

void TLobby__sub_80428374(void);

typedef char RecoveredGlobal_8042839C_lbl_805D0A40_size[sizeof(RecoveredGlobal_8042839C_lbl_805D0A40) == 0x60 ? 1 : -1];
s32 TLobby__sub_8042839C(void);

s32 wait_timeout_loop__6TLobbyFPv(u8 *arg0);

void TLobby__sub_804294C4(void);

s32 init_buffer_pool__6TLobbyFv(void);

void reset_buffer_pool__6TLobbyFv(void);

void TLobby__sub_80429598(void);

void exi_write__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);

void start_exi_dma_read__6TLobbyFUs(u16 arg0);

void start_exi_dma_write__6TLobbyFiPv(s32 chan, void *ctx);

void TLobby__sub_8042B334(s32 arg0, s32 arg1, s32 arg2);

M2C_UNK exi_start_send_dma__6TLobbyFii(int, int);

void TLobby__sub_8042B538(void *dst);

void TLobby__sub_8042B560(s32 arg0);

void TLobby__sub_8042B58C(u32 arg0, s32 arg1);

s32 poll_exi_status__6TLobbyFPv(void *p);

void TLobby__sub_8042BA48(s32 arg0, s32 arg1);

u8 exi_read_status_byte__6TLobbyFv(void);

void TAdSinglePlyChrSelectGC__sub_8042BF48(void) {
    OSWakeupThread((void *) (&lbl_805D7CA0));
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8042DD70_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042DD70_lbl_805D1D20) == 0x1C ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xB0) != 0) {
        return -4;
    }
    if ((s32) lbl_805D7C98 != 3) {
        return -7;
    }
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xB0) = 1;
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xB4) = arg0;
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xBC) = arg1;
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xB8) = arg1;
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xD8) = arg2;
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

s32 send_at_ms_command__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
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

s32 send_at_error_correction_cmd__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    char buf[0x80];
    s32 pad;
    Names_8042E628 names = TAdSinglePlyChrSelectGC__modem_error_correction_names;
    if (arg0 <= 0 || arg0 > 3) {
        return -2;
    }
    strcpy(buf, lbl_805D4970);
    strcat(buf, names.name[arg0]);
    strcat(buf, lbl_805D48AC);
    TAdSinglePlyChrSelectGC__sub_8042D49C(buf);
    return 1;
}

s32 send_at_compression_cmd__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
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

s32 copy_default_and_get_state__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    if (arg0 != 0U) {
        *(M2CCopy_1C *)(arg0) = *(const M2CCopy_1C *)(&lbl_805D1D20.value);
    }
    return lbl_805D7C98;
}

s32 send_atx_command__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
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

s32 send_modem_hangup__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
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
