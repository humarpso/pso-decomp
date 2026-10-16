#include "pso/network/NetworkPacketPool.h"
#include <stddef.h>
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

typedef struct Ent_80427C6C {
    u16 pad0;
    u16 id;
    u8 rest[0xE10];
} Ent_80427C6C;

struct R_804253A0 { s32 a; s32 b; };

struct Rec_80426998 { u16 a; u16 b; };

struct Obj_80426998 { u8 pad[0x36]; s16 count; Rec_80426998 recs[5]; };

extern "C" {
NetworkPacketBufferDescriptor network_packet_buffer_descriptors[NETWORK_PACKET_BUFFER_COUNT];
u8 network_packet_buffers[NETWORK_PACKET_BUFFER_COUNT][NETWORK_PACKET_BUFFER_BYTES];
extern u8 lbl_805CF240[0xA0];
extern u8 TLobby__pppoe_message_queue[0xA0];
extern u8 lbl_805CF380[0x48];
extern s32 lobby_message_thread_handle;
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7BA8;
extern s16 network_link_status_cache;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
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
s32 EXILock(s32, u32, u32);
extern RecoveredGlobal_8042E768_lbl_805D1D20 modem_connection_info;
extern s32 lbl_805D7C98;
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
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
extern s32 lbl_805D7BB0;
s16 TLobby__sub_804262CC(void *);
extern u8 lobby_net_channel_table[];
s32 TLobby__sub_80426B88(s16 arg0);
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
extern char lbl_805D48AC[2];
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern char lbl_805D48AC[2];
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern char lbl_805D48AC[2];
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void TAdSinglePlyChrSelectGC__sub_8042D49C(char *);
extern char lbl_805D48AC[2];
s32 TLobby__sub_804251C0(s32, void *);
extern s32 lbl_805D4820;
extern volatile s32 lbl_805D7BA0;
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
extern u32 lbl_805D7BA8;
void clear_message_entry__6TLobbyFi(s32 a);
void NetUnregisterTimer(void *);
extern s16 network_link_status_cache;
extern s32 lbl_805D7BB0;
extern s32 lobby_message_thread_handle;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
extern u8 lobby_net_channel_table[];
s16 TLobby__sub_803F96AC(u32*);
extern u32 lbl_805D7BA8;

}

extern "C" {

s32 TLobby__sub_80426440(void);
s32 TLobby__sub_80428358(void);
s32 fn_8042E8B8(void);

extern s32 lbl_805D4820;

s32 TLobby::get_task_count() {
    return lbl_805D4820;
}

s32 NetMemcpy(void *, void *, int);
void TLobby__sub_80425288(s32, s32, void *);
extern u32 lbl_805D7B64;
extern u32 lbl_805D7B68;
extern u32 lbl_805D7B6C;
extern u32 lbl_805D7B78;
extern u32 lbl_805D7B7C;

void TLobby::parse_dhcp_lease_times() {
    u8 *arg0 = (u8 *)this;
    s32 find_dhcp_option__6TLobbyFPvUcPv(u8 *p, u8 tag, u8 **out);
    u8 *p;
    s32 v;
    s32 w;

    if (find_dhcp_option__6TLobbyFPvUcPv(arg0, 0x33, &p) == 4) {
        NetMemcpy(&v, p, 4);
        w = v;
        TLobby__sub_80425288(7, 4, &w);
        TLobby::get_time_seconds((s32 *)(&lbl_805D7B78));
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

s32 TLobby::validate_slot_buffers(s32 arg0, void *arg1, void *arg2, void *arg3) {
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
    TLobby::lock_mutex((int)((void *)lbl_805D7BA8));
    r = (R_804253A0 *)TLobby::find_entry_by_address(a);
    TUdpSocket::unlock_mutex((int)((void *)lbl_805D7BA8));
    if (r != 0) {
        r->a = 0;
        r->b = 0;
    }
}

void TLobby::release_entry_by_id(u32 arg0) {
    NetworkPacketBufferDescriptor *e = find_804253F8(arg0);
    if (e != NULL) {
        e->in_use = 0;
        e->queued_length = 0;
    }
}
#pragma pop

u8 *TLobby::find_entry_by_address(s32 arg0) {
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

void TLobby::cancel_alarm_a() {
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

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8042DD70_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042DD70_lbl_805D1D20) == 0x1C ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
#pragma pop

void TAdSinglePlyChrSelectGC__sub_8042DDE4(int _w0, int _w1);

typedef char RecoveredGlobal_8042E768_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042E768_lbl_805D1D20) == 0x1C ? 1 : -1];

s32 fn_8042E8B8(void);

}

typedef char NetworkPacketDescriptorSize[sizeof(NetworkPacketBufferDescriptor)==12 ? 1 : -1];
typedef char NetworkPacketInUseOffset[offsetof(NetworkPacketBufferDescriptor,in_use)==0 ? 1 : -1];
typedef char NetworkPacketLengthOffset[offsetof(NetworkPacketBufferDescriptor,queued_length)==4 ? 1 : -1];
typedef char NetworkPacketDataOffset[offsetof(NetworkPacketBufferDescriptor,data)==8 ? 1 : -1];
