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

struct R_804253A0 { s32 a; s32 b; };

extern "C" {
M2C_UNK OSInitMessageQueue(void *, void *, int);
M2C_UNK TLobby__sub_803F9B28(void *);
s16 TLobby__sub_803F9B94(void *, void *);
M2C_UNK TUdpSocket__sub_803F9EE4(void *, int, int);
void TUdpSocket__sub_80419E64(int, int, void (*)(void));
s32 TLobby__sub_8042AAA0(void *);
u8 lbl_805CF240[0xA0];
u8 lbl_805CF2E0[0xA0];
u8 lbl_805CF380[0x48];
extern s32 lbl_805D7BB4;
extern u32 lbl_805D7BC4;
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7BA8;
void TLobby__sub_804259F0(void);
extern s16 lbl_805D4828;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
extern u32 lbl_805D7BC0;
void TLobby__sub_80425BD0(void);
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
s32 TAdSinglePlyChrSelectGC__sub_8042E768(u32 arg0);
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
void TAdSinglePlyChrSelectGC__sub_8042D6A4(void *);
extern M2C_UNK lbl_805D4918;
extern s32 lbl_805D7C98;
s32 send_modem_hangup__23TAdSinglePlyChrSelectGCFi(s32 arg0);
extern s16 lbl_805D4828;
s16 TLobby__sub_80426BD8(void);
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
s32 TLobby__sub_804294E8(void);
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
u16 TLobby__sub_804264F4(s32 *arg0, u16 *arg1);
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
s32 TLobby__sub_804277FC(s32 arg0, u8 *arg1, u16 arg2);
u8 TLobby__sub_80424830(u8 *p, u8 tag, u8 **out);
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
s32 TLobby__sub_80426704(s16 arg0, s32 arg1, s16 arg2);
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
extern Names_8042E57C lbl_804801F8;
extern char lbl_805D48AC[2];
extern char lbl_805D495C[7];
s32 send_at_ms_command__23TAdSinglePlyChrSelectGCFi(s32 arg0);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E628 lbl_80480210;
extern char lbl_805D48AC[2];
extern char lbl_805D4970[7];
s32 send_at_error_correction_cmd__23TAdSinglePlyChrSelectGCFi(s32 arg0);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern Names_8042E6C4 lbl_80480220;
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
s32 TLobby__sub_80424910(s32 arg0, void *arg1, void *arg2, void *arg3);
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
u8 *TLobby__sub_80425870(s32 arg0);
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
M2C_UNK unlock_mutex__10TUdpSocketFi(void *);
M2C_UNK lock_mutex__6TLobbyFi(void *);
u8 *TLobby__sub_80425870(s32 arg0);
extern u32 lbl_805D7BA8;
void TLobby__sub_804253A0(s32 a);
void cancel_thread_if_running__6TLobbyFi(void *);
void deactivate_entry_by_key__6TLobbyFUi(void *);
void TLobby__sub_80419DDC(void *);
void TLobby__sub_80425BD0(void);
extern s16 lbl_805D4828;
extern s32 lbl_805D7BB0;
extern s32 lbl_805D7BB4;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
void TLobby__sub_80425B70(void);
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

s32 TLobby__sub_803F91D0(void *);
s32 TLobby__sub_803F9F04(void *, void *, int);
void TLobby__sub_80425288(s32, s32, void *);
extern u32 lbl_805D7B64;
extern u32 lbl_805D7B68;
extern u32 lbl_805D7B6C;
extern u32 lbl_805D7B78;
extern u32 lbl_805D7B7C;

void parse_dhcp_lease_times__6TLobbyFPv(u8 *arg0) {
    s32 TLobby__sub_80424830(u8 *p, u8 tag, u8 **out);
    u8 *p;
    s32 v;
    s32 w;

    if (TLobby__sub_80424830(arg0, 0x33, &p) == 4) {
        TLobby__sub_803F9F04(&v, p, 4);
        w = v;
        TLobby__sub_80425288(7, 4, &w);
        TLobby__sub_803F91D0(&lbl_805D7B78);
        lbl_805D7B7C = lbl_805D7B78 + lbl_805D7B64;
        if (TLobby__sub_80424830(arg0, 0x3A, &p) == 4) {
            TLobby__sub_803F9F04(&v, p, 4);
            w = v;
            TLobby__sub_80425288(8, 4, &w);
        } else {
            TLobby__sub_80425288(8, 0, NULL);
            lbl_805D7B68 = lbl_805D7B64 >> 1;
        }
        if (TLobby__sub_80424830(arg0, 0x3B, &p) == 4) {
            TLobby__sub_803F9F04(&v, p, 4);
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

u8 TLobby__sub_80424830(u8 *p, u8 tag, u8 **out) {
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

s32 TLobby__sub_80424910(s32 arg0, void *arg1, void *arg2, void *arg3) {
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
    s32 TLobby__sub_80424830(u8 *p, u8 tag, u8 **out);
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
    if (TLobby__sub_803F9EC4(pk->f4, lbl_805D7B50, 4) != 0) {
        return 0;
    }
    if (TLobby__sub_803F9EC4(pk->f1C, lbl_805D7B1C, 6) != 0) {
        return 0;
    }
    if (TLobby__sub_803F9EC4(q, lbl_805D7B4C, 4) != 0) {
        return 0;
    }
    if (lbl_805D7B0C != 2) {
        return 0;
    }
    switch (lbl_805D4820) {
    case 3:
        break;
    case 1:
        if (lbl_805D7B10 == 0 && TLobby__sub_80424830(q, 0x35, &p) == 1 && *p == 2 &&
            TLobby__sub_80424830(q, 0x36, &p) == 4) {
            TLobby__sub_80425288(0xE, 4, p);
            lbl_805D7B28 = pk->f10;
            lbl_805D7B10 = 1;
        }
        break;
    case 2:
        if (lbl_805D7B10 == 0 && TLobby__sub_80424830(q, 0x35, &p) == 1 && *p == 5) {
            TLobby__sub_803F9F04(g->buf, pk, arg1->len);
            lbl_805D7B10 = 1;
        }
        break;
    case 4:
        if (lbl_805D7B10 == 0 && TLobby__sub_80424830(q, 0x35, &p) == 1 && *p == 5 &&
            lbl_805D7B28 == pk->f10) {
            TLobby__sub_803F9F04(g->buf, pk, arg1->len);
            lbl_805D7B10 = 1;
        }
        break;
    case 5:
        if (lbl_805D7B10 == 0 && TLobby__sub_80424830(q, 0x35, &p) == 1 && *p == 5 &&
            lbl_805D7B28 == pk->f10) {
            TLobby__sub_803F9F04(g->buf, pk, arg1->len);
            lbl_805D7B10 = 1;
        }
        break;
    }
    return 0;
}
#pragma pop

void TLobby__sub_80424CA8(void) {
    TLobby__sub_80419DDC(TLobby__sub_80423298);
    if (lbl_805D7B18 != -1) {
        TLobby__sub_80421B3C(lbl_805D7B18);
        lbl_805D7B18 = -1;
    }
    lbl_805D7B14 = TLobby__sub_804250A8(0);
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline Ent_804253F8 *find_804253F8(u32 arg0) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (lbl_805C30C0[i].used != 0 && lbl_805C30C0[i].base <= arg0 &&
            arg0 < lbl_805C30C0[i].base + 0x600) {
            break;
        }
    }
    if (i >= 0x20) {
        return NULL;
    }
    return &lbl_805C30C0[i];
}

void TLobby__sub_804253A0(s32 a) {
    R_804253A0 *r;
    u8 unused[8];
    lock_mutex__6TLobbyFi((void *)lbl_805D7BA8);
    r = (R_804253A0 *)TLobby__sub_80425870(a);
    unlock_mutex__10TUdpSocketFi((void *)lbl_805D7BA8);
    if (r != 0) {
        r->a = 0;
        r->b = 0;
    }
}

void TLobby__sub_804253F8(u32 arg0) {
    Ent_804253F8 *e = find_804253F8(arg0);
    if (e != NULL) {
        e->used = 0;
        e->f4 = 0;
    }
}
#pragma pop

u8 *TLobby__sub_80425870(s32 arg0) {
    s32 i;
    for (i = 0; i < 32; i++) {
        if (((Ent_80425870 *)&lbl_805C30C0)[i].used != 0 && ((Ent_80425870 *)&lbl_805C30C0)[i].base <= (u32)arg0 && (u32)arg0 < ((Ent_80425870 *)&lbl_805C30C0)[i].base + 0x600) {
            break;
        }
    }
    if (i >= 32) {
        return NULL;
    }
    return (u8 *)&((Ent_80425870 *)&lbl_805C30C0)[i];
}

void TLobby__sub_804259F0(void) {
    TLobby__sub_803F95E4(lbl_805D7BA8);
}

void TLobby__sub_80425B70(void) {
    if ((u32)lbl_805D7BB4 != 0) {
        cancel_thread_if_running__6TLobbyFi((void *)lbl_805D7BB4);
        deactivate_entry_by_key__6TLobbyFUi((void *)lbl_805D7BB4);
        lbl_805D7BB4 = 0;
    }
    TLobby__sub_80419DDC((void *)TLobby__sub_80425BD0);
    lbl_805D4828 = -1;
    lbl_805D7BB8 = 0;
    lbl_805D7BBC = 0;
    lbl_805D7BB0 = 0;
}

void TLobby__sub_80425BD0(void) {
    s32 sp8;
    if (poll_exi_status__6TLobbyFPv((void *)(&sp8)) == 1) {
        if (sp8 != (s32) lbl_805D7BB8) {
            lbl_805D7BB8 = sp8;
            lbl_805D7BBC = 1U;
        } else if ((u32) lbl_805D7BBC != 0U) {
            lbl_805D7BBC += 1;
        }
        if ((u32) lbl_805D7BBC >= (u32) lbl_805D7BC0) {
            if ((s32) lbl_805D7BB8 == 1) {
                lbl_805D4828 = 1;
            } else {
                lbl_805D4828 = 0;
            }
            lbl_805D7BBC = 0U;
            lbl_805D7BC0 = 0xAU;
        }
    }
}

s32 post_message__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ok;
    u8 *p;
    if (arg3 != 0) {
        p = TLobby__sub_80425870((s32)(arg1));
    } else {
        p = TLobby__sub_804256B8(arg1);
    }
    if (p != NULL) {
        *(s32 *)(p + 4) = arg2;
        ok = OSSendMessage(arg0, p, 0);
    } else {
        ok = 0;
    }
    if (ok == 1) {
        return 0;
    }
    return -1;
}

void message_thread_loop__6TLobbyFv(void) {
    u8 *spC;
    u8 *sp8;
    s32 id;
    s32 n;
    for (;;) {
        OSReceiveMessage(lbl_805CF240, &spC, 1);
        n = *(s32 *)(spC + 4);
        id = *(s32 *)(spC + 8);
        if (n > 0) {
            TLobby__sub_8042B334(id, n, (s32)TLobby__sub_80425D88);
            OSReceiveMessage(lbl_805CF380, &sp8, 1);
            lbl_805D7BCC -= 1;
        }
        TLobby__sub_804253A0((s32)(id));
    }
}

void TLobby__sub_80425D88(u8 v) {
    lbl_805D7BCC++;
    OSSendMessage(lbl_805CF380, (void *)v, 0);
}

s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2) {
    s32 i;
    Rec_80426110 *p = o->recs;
    for (i = 5; i != 0; i--, p++) {
        if (p->a != 0) {
            if (p->b != arg2) {
                continue;
            }
            break;
        } else {
            p->a = arg1;
            p->b = arg2;
            o->count++;
            if (o->count > 0) {
                TLobby__sub_80426190(o);
            }
            return 0;
        }
    }
    return -1;
}

#define arg0 ((s32)argp)
s16 TLobby__sub_804262CC(void *argp) {
    s16 *var_r30;
    s16 var_r0;
    s32 var_r29;

    if ((s32) lbl_805D7BB0 == 1) {
        return 0;
    }
    TUdpSocket__sub_803F9EE4((void *) (arg0), (int) (0), (int) (0x56));
    if (TLobby__sub_8042AAA0((void *) (lbl_805D7BC8)) != 1) {
        var_r0 = -1;
    } else {
        if ((u32) lbl_805D7BC4 != 0U) {
            TLobby__sub_8042B560(lbl_805D7BC4);
        }
        TLobby__sub_8042B538((void *) (arg0));
        var_r29 = 0;
        var_r30 = (s16 *)((u8 *)(arg0 + 6));
        do {
            if ((s16) M2C_FIELD(var_r30, s16 *, 0) > 0) {
                TLobby__sub_8042BC00((void *) ((u8 *)(var_r30) + 2));
            }
            var_r29 += 1;
            var_r30 = (s16 *)((u8 *)((s16 *)((u8 *)(var_r30) + 8)));
        } while (var_r29 < 6);
        TLobby__sub_80426190((Obj_80426110 *) (arg0));
        var_r0 = 0;
    }
    if (var_r0 < 0) {
        return -1;
    }
    OSInitMessageQueue(lbl_805CF240, lbl_805CF240 + 0x20, 0x20);
    OSInitMessageQueue(lbl_805CF2E0, lbl_805CF2E0 + 0x20, 0x20);
    OSInitMessageQueue(lbl_805CF380, lbl_805CF380 + 0x20, 0xA);
    if (TLobby__sub_803F9B94((void *) (&message_thread_loop__6TLobbyFv), (void *) (&lbl_805D7BB4)) < 0) {
        return -1;
    }
    TLobby__sub_803F9B28((void *) (lbl_805D7BB4));
    lbl_805D7BB0 = 1;
    lbl_805D4828 = -1;
    lbl_805D7BB8 = 0;
    lbl_805D7BBC = 1;
    lbl_805D7BC0 = 1;
    TUdpSocket__sub_80419E64(0x64, 0, TLobby__sub_80425BD0);
    return 0;
}
#undef arg0

s32 TLobby__sub_80426440(void) {
    return 0;
}

s32 post_send_message__6TLobbyFiUs(s32 arg0, u16 arg1) {
    s32 temp_r3;
    u8 *temp_r3_2;
    u8 pad[8];
    temp_r3 = TLobby__sub_8042558C((void *) (arg1));
    if (temp_r3 == 0) {
        return -1;
    }
    TLobby__sub_803F9F04((void *) (temp_r3), (void *) (arg0), (int) (void *) (arg1));
    temp_r3_2 = (u8 *)(TLobby__sub_804256B8(temp_r3));
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) arg1;
        OSSendMessage((void *) (((M2C_UNK *)&lbl_805CF240)), temp_r3_2, 0);
    }
    return 0;
}

void TLobby__sub_804264D4(s32 arg0) {
    TLobby__sub_804253A0((s32)(arg0));
}

u16 TLobby__sub_804264F4(s32 *arg0, u16 *arg1) {
    Msg_804264F4 *msg;
    if (OSReceiveMessage(lbl_805CF2E0, &msg, 0) == 1) {
        *arg0 = msg->f8;
        *arg1 = msg->f4;
        return msg->f4;
    }
    return 0;
}

s32 TLobby__sub_80426660(u8 *arg0) {
    Obj_80426110 *g = (Obj_80426110 *)lbl_805CF3C8;
    if (TLobby__sub_804262CC(g) < 0) {
        return -1;
    }
    TLobby__sub_80426110(g, 2, 0x8863);
    TLobby__sub_80426110(g, 2, 0x8864);
    TLobby__sub_803F9F04(arg0, g, 6);
    TLobby__sub_803F9F04(arg0 + 6, lbl_805E1190, 6);
    return 0;
}

s32 TLobby__sub_80426704(s16 arg0, s32 arg1, s16 arg2) {
    s32 v;
    u8 *p;
    u8 pad[8];
    if ((arg2 <= 0) || (arg2 > 0x5EA)) {
        return -0x113;
    }
    if (arg2 < 0x3C) {
        v = 0x3C;
    } else {
        v = arg2;
    }
    if (arg0 != 0) {
        return -0x113;
    }
    p = TLobby__sub_804256B8(arg1);
    if (p != NULL) {
        *(s32 *)(p + 4) = v;
        OSSendMessage(lbl_805CF240, p, 0);
    }
    return 0;
}

s32 TLobby__sub_80426790(s16 arg0, void *arg1) {
    if (arg0 != 0) {
        return -0x113;
    }
    u8 *src = lbl_805CF3C8;
    if (lbl_805D7BB0 == 0) {
        return -0x113;
    }
    TLobby__sub_803F9F04(arg1, src, 6);
    return 6;
}

#pragma push
#pragma dont_inline on
s32 TLobby__sub_804267F0(s16 arg0, void *arg1) {
    s32 i;
    Ent_804267F0 *e;

    if (arg0 != 0) {
        return -0x113;
    }
    e = ((Tbl_804267F0 *)lbl_805CF3C8)->ent;
    for (i = 0; i < 6; i++, e++) {
        if (e->count > 0 && TLobby__sub_803F9EC4(e->id, arg1, 6) == 0) {
            e->count--;
            return 0;
        }
    }
    return -0x113;
}
#pragma pop

s32 add_multicast_address__6TLobbyFsPv(s16 arg0, void *arg1) {
    s32 i;
    Ent_80426894 *found;
    Ent_80426894 *e;
    u8 pad[4];
    if (arg0 != 0) {
        return -0x113;
    }
    e = ((Tbl_80426894 *)lbl_805CF3C8)->ent;
    i = 0;
    found = NULL;
    for (; i < 6; i++, e++) {
        if (e->count < 0) {
            return -0x113;
        }
        if (e->count == 0) {
            if (found == NULL) {
                found = e;
            }
        } else if (TLobby__sub_803F9EC4(e->id, arg1, 6) == 0) {
            e->count++;
            return 0;
        }
    }
    if (found == NULL) {
        return -0x113;
    }
    found->count++;
    TLobby__sub_803F9F04(found->id, arg1, 6);
    TLobby__sub_8042BC00(arg1);
    return 0;
}

s32 TLobby__sub_80426A18(s16 arg0, u16 arg1) {
    if (arg0 != 0) {
        return -0x113;
    }
    Obj_80426110 *g = (Obj_80426110 *)lbl_805CF3C8;
    if (TLobby__sub_80426110(g, 1, arg1) < 0) {
        return -0x113;
    }
    return 0;
}

void TLobby__sub_80426A70(void *a, void *b) {
    if (a != NULL) {
        void *q = lbl_805CF3C8;
        TLobby__sub_80425DC8(q, a, b);
    }
}

s32 TLobby__sub_80426B88(s16 arg0) {
    if (arg0 != 0) {
        return -0x113;
    }
    void *g = lbl_805CF3C8;
    if (TLobby__sub_804262CC(g) < 0) {
        return -0x113;
    }
    return 0;
}

s16 TLobby__sub_80426BD8(void) {
    s32 sp8;
    if ((s16) lbl_805D4828 != -1) {
        return lbl_805D4828;
    }
    if (poll_exi_status__6TLobbyFPv((void *)((void *) (&sp8))) == 1) {
        if (sp8 == 1) {
            return 1;
        }
        return 0;
    }
    return -1;
}

s32 TLobby__sub_80426C34(s32 arg0) {
    switch (arg0) {
    case 1:
        lbl_805D7BC8 = 1;
        break;
    case 2:
        lbl_805D7BC8 = 2;
        break;
    case 3:
        lbl_805D7BC8 = 3;
        break;
    case 4:
        lbl_805D7BC8 = 4;
        break;
    case 0:
        lbl_805D7BC8 = 0;
        break;
    default:
        return -1;
    }
    return 0;
}

s32 TLobby__sub_80427240(u8 **arg0);

s32 write_name_field__6TLobbyFPvPv(s32 *arg0, u8 *arg1);

typedef char RecoveredGlobal_80427D0C_lbl_805CFC20_size[sizeof(RecoveredGlobal_80427D0C_lbl_805CFC20) == 0xE20 ? 1 : -1];

s32 TLobby__sub_804277FC(s32 arg0, u8 *arg1, u16 arg2);

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

s32 TLobby__sub_804294E8(void);

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

void TAdSinglePlyChrSelectGC__sub_8042BF48(void);

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

s32 TAdSinglePlyChrSelectGC__sub_8042E768(u32 arg0);

s32 send_atx_command__23TAdSinglePlyChrSelectGCFi(s32 arg0);

s32 send_modem_hangup__23TAdSinglePlyChrSelectGCFi(s32 arg0);

s32 fn_8042E8B8(void);

}
