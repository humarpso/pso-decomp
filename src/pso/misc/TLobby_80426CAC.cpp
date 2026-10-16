#include "pso/network/NetworkTransport.h"

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TUdpSocket.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

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
extern u8 lbl_805CF240[0xA0];
extern u8 TLobby__pppoe_message_queue[0xA0];
extern u8 lbl_805CF380[0x48];
RecoveredGlobal_80427D0C_lbl_805CFC20 lobby_pppoe_slot_table;
void TLobby__sub_803F95E4(u32);
extern s16 network_link_status_cache;
s32 NetMemcpy(void *, void *, int);
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
extern s32 exi_receive_callback;
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
s32 TLobby__sub_80428360(void);
extern u32 lobby_buffer_pool_alarm_handle;
void TAdSinglePlyChrSelectGC__sub_8042DDE4(int, int);
extern RecoveredGlobal_8042E768_lbl_805D1D20 modem_connection_info;
extern s32 lbl_805D7C98;
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
s32 memcpy(void *, void *, int);
extern s32 exi_mac_address;
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
s16 TLobby__sub_804262CC(void *);
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
s32 TLobby__sub_80426660(u8 *arg0);
s32 OSSendMessage(void *mq, void *msg, s32 flags);
u8 *TLobby__sub_804256B8(s32);
extern u8 lbl_805CF240[];
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
extern s32 exi_dma_read_length;
extern u32 exi_dma_write_length;
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
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
extern s32 lbl_805D4820;
s32 NetMemcmp(void *, void *, int);
s32 NetMemcpy(void *, void *, int);
s32 EXILock(s32, u32, u32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIDma(s32, void *, s32, u32, void *);
extern s32 lbl_805D7C7C;
extern s32 exi_send_size;

s32 NetMemcpy(void *, void *, int);
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
s32 NetMemcmp(void *, void *, int);
s32 NetMemcpy(void *, void *, int);
s32 TLobby__sub_80427378(Ent_80427D40 *);
s16 TLobby__sub_804275B0(s32, u16);
Ent_80427C6C *TLobby__sub_80427C6C(s32 arg0, u16 arg1);
s32 EXIDeselect(s32);
s32 memcpy(void *, void *, int);
extern s32 exi_receive_callback;
extern s32 exi_dma_read_length;
extern u32 exi_dma_write_length;
void TLobby__sub_80429AC8(void);
s32 NetMemcpy(void *, void *, int);
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

s16 TLobby::build_ethernet_frame_header(void *src, void *mac, u16 type, u8 flag, u16 a, u16 len) {
  u8 *p;
  u8 c;
  u16 t;
  u16 x;
  u8 *new_var;
  u16 l;
  s16 r;
  new_var = ((u8 *)this);
  NetMemcpy(new_var, src, 6);
  NetMemcpy(new_var + 6, mac, 6);
  t = type;
  NetMemcpy(((u8 *)this) + 0xC, &t, 2);
  p = new_var + 0xE;
  c = 0x11;
  NetMemcpy(p, &c, 1);
  NetMemcpy(p + 1, &flag, 1);
  x = a;
  NetMemcpy(p + 2, &x, 2);
  l = len;
  NetMemcpy(p + 4, &l, 2);
  r = ((u32) len) + 0x14;
  if (r < 0x3C)
  {
    r = 0x3C;
  }
  return r;
}

s32 TLobby__sub_80427240(u8 **arg0) {
    s16 a = 0;
    s16 b;
    u8 pad[6];
    NetMemcpy(*arg0, &a, 2);
    *arg0 += 2;
    b = 0;
    NetMemcpy(*arg0, &b, 2);
    *arg0 += 2;
    return 4;
}

s32 TLobby::write_name_field(s32 *arg0, u8 *arg1) {
    struct Fields_arg1 { u8 pad_0[58]; u8 field_3A; };
    s16 sp12;
    s16 sp10;
    s16 temp_r3;
    if ((u8) ((Fields_arg1*)arg1)->field_3A == 0) {
        return 0;
    }
    sp12 = 0x102;
    NetMemcpy((void *) (*arg0), (void *) (&sp12), (int) (2));
    *arg0 += 2;
    temp_r3 = TLobby::str_length((s32)((void *) (arg1 + 0x3A)));
    sp10 = temp_r3;
    NetMemcpy((void *) (*arg0), (void *) (&sp10), (int) (2));
    *arg0 += 2;
    NetMemcpy((void *) (*arg0), (void *) (arg1 + 0x3A), (int) (temp_r3));
    *arg0 += temp_r3;
    return temp_r3 + 4;
}

typedef char RecoveredGlobal_80427D0C_lbl_805CFC20_size[sizeof(RecoveredGlobal_80427D0C_lbl_805CFC20) == 0xE20 ? 1 : -1];

s32 TLobby::parse_tlv_records(s32 arg0, u8 *arg1, u16 arg2) {
    u8 *p = arg1;
    u16 len = arg2;
    u16 a;
    u16 b;
    u8 pad[4];
    s32 t;
    while (len != 0) {
        NetMemcpy(&a, p, 2);
        if (a == 0) {
            break;
        }
        NetMemcpy(&b, p + 2, 2);
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
    NetMemcpy((void *)&id, (void *)(arg0 + 0x10), 2);
    if (id == 0) {
        return NULL;
    }
    i = 0;
    ret = NULL;
    while (i < 1) {
        ret = &((Ent_80427C6C *)&lobby_pppoe_slot_table)[i];
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

s16 TLobby::get_slot_id(s16 arg0) {
    if ((arg0 < 0) || (arg0 >= 1)) {
        return -1;
    }
    return *(s16 *)((s8 *)((u8 *)(&lobby_pppoe_slot_table.value) + (arg0 * 0xE14)) + 0);
}

#define TBL_80427D40 ((Ent_80427D40 *)&lobby_pppoe_slot_table)
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline void check_80427D40(void) {
    s32 now;
    Ent_80427D40 *p;
    s16 i;
    TLobby::get_time_ms(&now);
    for (p = TBL_80427D40, i = 0; i < 1; p++, i++) {
        if (p->state != -1 && p->timeout != 0 && now - p->last > p->timeout) {
            TLobby__sub_80427378(p);
        }
    }
}
s16 TLobby::pppoe_recv_packet(u16 bufLen, u16 *outLen) {
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
    if (TLobby::recv_pppoe_message(&pkt, &id) == 0) {
        if (outLen != NULL) {
            *outLen = 0;
        }
        return 0;
    }
    NetMemcpy(&type, (u8 *)pkt + 0xC, 2);
    if (type != 0x8863 && type != 0x8864) {
        ret = 0;
    } else if (NetMemcmp((void *)pkt, &TBL_80427D40[1], 6) != 0) {
        ret = 0;
    } else if (((u8 *)pkt)[0xE] != 0x11) {
        ret = 0;
    } else if (type == 0x8863) {
        ret = TLobby__sub_804275B0(pkt, id);
    } else {
        ret = 0;
        NetMemcpy(&len, (u8 *)pkt + 0x12, 2);
        src = (u8 *)pkt + 0x14;
        if (((u8 *)this) != NULL && len <= bufLen) {
            e = ((Ent_80427D40 *)TLobby__sub_80427C6C(pkt, id));
            if (e != NULL && e->state == 4) {
                ret = e - TBL_80427D40;
                NetMemcpy(((u8 *)this), src, len);
                if (outLen != NULL) {
                    *outLen = len;
                }
                TLobby::clear_message_entry_wrapper(pkt);
                return ret;
            }
        }
    }
    TLobby::clear_message_entry_wrapper(pkt);
    if (outLen != NULL) {
        *outLen = 0;
    }
    return ret;
}
#pragma pop

s32 TLobby__sub_80428358(void) {
    return 0;
}

typedef char RecoveredGlobal_80428374_lbl_805D0A40_size[sizeof(RecoveredGlobal_80428374_lbl_805D0A40) == 0x60 ? 1 : -1];

typedef char RecoveredGlobal_80428360_lbl_805CFC20_size[sizeof(RecoveredGlobal_80428360_lbl_805CFC20) == 0xE20 ? 1 : -1];
s32 TLobby__sub_80428360(void) {
    (*(RecoveredGlobal_80428360_lbl_805CFC20 *)&lobby_pppoe_slot_table).value = -1;
    return 0;
}

typedef char RecoveredGlobal_8042839C_lbl_805D0A40_size[sizeof(RecoveredGlobal_8042839C_lbl_805D0A40) == 0x60 ? 1 : -1];

void TLobby__sub_80429AC8(void);

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
