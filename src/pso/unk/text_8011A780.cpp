#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8011AED8 {
    s8 sp8;
    u8 pad_9[0x3];
    f32 spC;
    f32 sp10;
    s16 sp14;
    u8 pad_16[0x2];
    M2C_UNK sp18;
    u8 trailing_storage[0x10];
};

struct Msg_8011A9D8 { u8 pad[2]; u16 u2; u32 u4; s16 s8; };

struct Cmd_8011A9D8 { u8 pad[2]; u16 a; u16 b; s16 c; u32 d; };

typedef s32 M2C_UNK;
struct Item_8011AA68 { u8 data[12]; u32 id; u32 meseta; };

struct Source_8011AA68 { u16 group; u16 claim; };

struct Delivery_8011AA68 {
    u32 header; u8 client; u8 kind; s16 source; f32 x; f32 z; s16 room; u16 reserved; u8 item[24];
};

struct Item_8011AB64 { u8 data[12]; u32 id; u32 meseta; };

struct Source_8011AB64 { u32 a; u16 claim; u16 b; u32 c; };

struct Delivery_8011AB64 {
    u32 header; u8 client; u8 kind; s16 source; f32 x; f32 z; s16 room; u16 reserved; u8 item[24];
};

struct Row12_8011ADF4 { u32 a; u16 claim; u16 b; u32 c; };

struct Row4_8011ADF4 { u16 group; u16 claim; };

struct Pkt_8011ADF4 {
    u8 cmd; u8 size; u16 flag;
    u8 client; u8 kind; s16 source; f32 x; f32 z; s16 room; u16 reserved;
    u8 item[20];
};

struct Req_8011AD1C {
    u8 cmd; u8 size; u16 pad2; s8 client; u8 area; s16 source;
    f32 x; f32 z; s16 room; s16 x12; s8 slot;
};

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
extern s32 lbl_805D54E8;
extern s32 lbl_805D54EC;
u32 advance_item_id_counter(s32 arg0);
M2C_UNK remove_item_condition__6TLobbyFii(s32, s32);
void TLobby__sub_8011AA44(s16 arg0, s32 _w1);
M2C_UNK bswap_6xa2_fields__6TLobbyFPv();
M2C_UNK handle_box_drop_directive(void *);
void handle_6xA2_specializable_item_drop_request(void *arg0);
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
s32 drop_stacked_item_passthrough__6TLobbyFi(void *);
s32 TLobby__sub_80103DD8(void *);
void TLobby__sub_8011AED8(s8 arg0, s16 arg1, u8 *arg2, f32 farg0, f32 farg1);
s32 get_global_state__14TOKeyMachine01Fv();
extern s32 lbl_805D54E8;
void set_boss_buf_entry__6TLobbyFii(s32 v, u16 idx);
void observe_item_id__6TLobbyFi(int id);
void bswap_pick_up_item_request__6TLobbyFi(Msg_8011A9D8 *msg);
void *TLobby__sub_80103D10(s16 a, u32 b);
void TLobby__sub_80103044(Cmd_8011A9D8 *cmd);
void send_pick_up_item__6TLobbyFi(Cmd_8011A9D8 *cmd);
void handle_6x5A_pick_up_item_request(Msg_8011A9D8 *msg);
extern s32 lbl_805D54E8;
extern s32 lbl_805D54EC;
void reset_item_id_counters__6TLobbyFv(void);
s32 get_main_phase();
s32 is_quest_active();
extern s32 lbl_805D54E4;
u32 build_item_id(u16 arg0);
u32 build_item_id(u16 arg0);
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
void apply_table_entry__6TLobbyFs(s16, Source_8011AA68 *);
void init__9TItemDataFv(void *);
void drop_item__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 isValidGroundDrop__9TItemDataFv(void *);
void normalize__9TItemDataFv(void *p);
void init_header_packet__6TLobbyFPv(void *);
void send_item_packet__6TLobbyFPv(void *);
extern Source_8011AA68 *TLobby__data_805D6140;
void drop_item_from_source__6TLobbyFsisiff(s16 source, int client, s16 room, int slot, f32 x, f32 z);
u32 build_item_id(u16 arg0);
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
void apply_by_index__9TObjEnemyFs(s16, void *);
void init__9TItemDataFv(void *);
void drop_item_from_slot__10TObjPlayerFiii(s8 arg0, s32 arg1, s32 arg2);
s32 isValidGroundDrop__9TItemDataFv(void *);
void normalize__9TItemDataFv(void *p);
void init_header_packet__6TLobbyFPv(void *);
void send_item_packet__6TLobbyFPv(void *);
extern Source_8011AB64 *TLobby__data_805D6144;
void process_enemy_drop_request(s8 area, s16 source, int client, s16 room, int slot, f32 x, f32 z);
void bswap_item_packet__6TLobbyFPv(void* p);
s32 TItemData__sub_8010C740(void *, int);
s32 TItemData__sub_8010CCB0(void *);
void apply_by_index__9TObjEnemyFs(s16, void *);
void apply_table_entry__6TLobbyFs(s16, Source_8011AA68 *);
s32 spawn_dropped_item_from_msg(void *, int);
extern Source_8011AB64 *TLobby__data_805D6144;
extern Source_8011AA68 *TLobby__data_805D6140;
void handle_6x5F_drop_item(Pkt_8011ADF4 *pkt);
void TLobby__sub_80105A60(void *);
void drop_item_from_source__6TLobbyFsisiff(s16 source, int client, s16 room, int slot, f32 x, f32 z);
void process_enemy_drop_request(s8 area, s16 source, int client, s16 room, int slot, f32 x, f32 z);
s32 get_player_floor__6TLobbyFi(s32);
void handle_6x60_standard_drop_item_request(void *arg0);
}

extern "C" {

void handle_6x5C_destroy_floor_item(void *arg0);
void handle_6x62(void);
M2C_UNK bswap_packet__6TLobbyFPv();

u32 build_item_id(u16 arg0) {
    u32 id;
    if (get_main_phase() == 0xF) {
        if (is_quest_active() != 0) {
            id = arg0 | 0x06030000;
        } else {
            id = arg0 | 0x06010000;
        }
    } else if (lbl_805D54E4 == 1) {
        id = arg0 | 0x06020000;
    } else {
        id = arg0 | 0x06010000;
    }
    return id;
}

void observe_item_id__6TLobbyFi(int id) {
    if (get_global_state__14TOKeyMachine01Fv() != 0xf) {
        s32 lo = 0x10000;
        if (lo < id && id < 0x2010000) {
            s32 idx = id >> 21;
            if (((s32 *)lbl_805D54E8)[(u16)idx] <= id) {
                set_boss_buf_entry__6TLobbyFii(id + 1, idx);
            }
        }
    }
}

void handle_6x5C_destroy_floor_item(void *arg0) {
    bswap_packet__6TLobbyFPv();
    remove_item_condition__6TLobbyFii(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4));
}

void handle_6x5A_pick_up_item_request(Msg_8011A9D8 *msg) {
    bswap_pick_up_item_request__6TLobbyFi(msg);
    if (TLobby__sub_80103D10(msg->s8, msg->u4) != 0) {
        Cmd_8011A9D8 cmd;
        TLobby__sub_80103044(&cmd);
        cmd.a = msg->u2;
        cmd.b = msg->u2;
        cmd.c = msg->s8;
        cmd.d = msg->u4;
        send_pick_up_item__6TLobbyFi(&cmd);
    }
}

void TLobby__sub_8011AA44(s16 arg0, s32 _w1) {
    remove_item_condition__6TLobbyFii((s32)((void *) (arg0)), (s32)(_w1));
}

void drop_item_from_source__6TLobbyFsisiff(s16 source, int client, s16 room, int slot, f32 x, f32 z) {
    Delivery_8011AA68 delivery;
    Item_8011AA68 item;
    u32 id;
    if (source != -1) {
        Source_8011AA68 row = TLobby__data_805D6140[source];
        if (row.claim != 0xFFFF) {
            id = build_item_id(row.claim);
            row.claim = 0xFFFF;
            apply_table_entry__6TLobbyFs(source, &row);
            init__9TItemDataFv(&item);
            drop_item__10TObjPlayerFii(slot, (s32)&item);
            item.id = id;
            if (isValidGroundDrop__9TItemDataFv(&item) != 0) {
                normalize__9TItemDataFv(&item);
                init_header_packet__6TLobbyFPv(&delivery);
                delivery.client = client;
                delivery.kind = 2;
                delivery.source = source;
                delivery.x = x;
                delivery.z = z;
                delivery.room = room;
                copy_item_data__6TLobbyFPvPv(delivery.item, &item);
                send_item_packet__6TLobbyFPv(&delivery);
            }
        }
    }
}

void process_enemy_drop_request(s8 area, s16 source, int client, s16 room, int slot, f32 x, f32 z) {
    u32 id;
    if (source != -1) {
        Delivery_8011AB64 delivery;
        Item_8011AB64 item;
        Source_8011AB64 row = TLobby__data_805D6144[source];
        if (row.claim != 0xFFFF) {
            id = build_item_id(row.claim);
            row.claim = 0xFFFF;
            apply_by_index__9TObjEnemyFs(source, &row);
            init__9TItemDataFv(&item);
            drop_item_from_slot__10TObjPlayerFiii(area, slot, (s32)&item);
            item.id = id;
            if (isValidGroundDrop__9TItemDataFv(&item) != 0) {
                normalize__9TItemDataFv(&item);
                init_header_packet__6TLobbyFPv(&delivery);
                delivery.client = client;
                delivery.kind = 1;
                delivery.source = source;
                delivery.x = x;
                delivery.z = z;
                copy_item_data__6TLobbyFPvPv(delivery.item, &item);
                delivery.room = room;
                send_item_packet__6TLobbyFPv(&delivery);
            }
        }
    }
}

#pragma push
#pragma fp_contract on
void handle_6xA2_specializable_item_drop_request(void *arg0) {
    s8 temp_b;
    bswap_6xa2_fields__6TLobbyFPv();
    temp_b = M2C_FIELD(arg0, u8 *, 5);
    if (temp_b == 0x30) {
        if (M2C_FIELD(arg0, s16 *, 0x12) != 0) {
            drop_item_from_source__6TLobbyFsisiff((s16)(M2C_FIELD(arg0, s16 *, 6)), (int)(M2C_FIELD(arg0, s8 *, 4)), (s16)(M2C_FIELD(arg0, s16 *, 0x10)), (int)(M2C_FIELD(arg0, s8 *, 0x14)), M2C_FIELD(arg0, f32 *, 8), M2C_FIELD(arg0, f32 *, 0xC));
            return;
        }
        handle_box_drop_directive(arg0);
        return;
    }
    process_enemy_drop_request((s8)(temp_b), (s16)(M2C_FIELD(arg0, s16 *, 6)), (int)(M2C_FIELD(arg0, s8 *, 4)), (s16)(M2C_FIELD(arg0, s16 *, 0x10)), (int)(M2C_FIELD(arg0, s8 *, 0x14)), M2C_FIELD(arg0, f32 *, 8), M2C_FIELD(arg0, f32 *, 0xC));
}
#pragma pop

void handle_6x60_standard_drop_item_request(void *arg0) {
    Req_8011AD1C *req = (Req_8011AD1C *)arg0;
    s32 client;
    s32 slot;
    s8 area;
    TLobby__sub_80105A60(arg0);
    if ((u32)(req->size * 4) == 0x14) {
        client = req->client;
        slot = get_player_floor__6TLobbyFi(client);
    } else {
        client = req->client;
        slot = req->slot;
    }
    area = (s8)req->area;
    if (area == 0x30) {
        if (req->x12 != 0) {
            drop_item_from_source__6TLobbyFsisiff(req->source, client, req->room, slot, req->x, req->z);
            return;
        }
        drop_item_from_source__6TLobbyFsisiff(req->source, client, req->room, slot, req->x, req->z);
        return;
    }
    process_enemy_drop_request(area, req->source, client, req->room, slot, req->x, req->z);
}

void handle_6x5F_drop_item(Pkt_8011ADF4 *pkt) {
    bswap_item_packet__6TLobbyFPv(pkt);
    if ((u32)pkt->size * 4 == 0x28) {
        TItemData__sub_8010C740(pkt->item, 0);
    } else {
        TItemData__sub_8010C740(pkt->item, 2);
    }
    TItemData__sub_8010CCB0(pkt->item);
    s32 kind = pkt->kind;
    if (kind == 1) {
        Row12_8011ADF4 row = (*(Row12_8011ADF4 * *)&TLobby__data_805D6144)[pkt->source];
        row.claim = 0xFFFF;
        apply_by_index__9TObjEnemyFs(pkt->source, &row);
    } else {
        Row4_8011ADF4 row = (*(Row4_8011ADF4 * *)&TLobby__data_805D6140)[pkt->source];
        row.claim = 0xFFFF;
        apply_table_entry__6TLobbyFs((s16)(pkt->source), (Source_8011AA68 *)(&row));
    }
    spawn_dropped_item_from_msg(&pkt->client, 0);
}

void TLobby__sub_8011AED8(s8 arg0, s16 arg1, u8 *arg2, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_8011AED8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8011AED8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8011AED8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8011AED8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8011AED8, sp18) == 0x10) ? 1 : -1];
    Stack_8011AED8 stack;
    drop_stacked_item_passthrough__6TLobbyFi((void *) (&stack.sp8));
    stack.sp8 = arg0;
    stack.spC = farg0;
    stack.sp10 = farg1;
    stack.sp14 = arg1;
    copy_item_data__6TLobbyFPvPv((void *) (&stack.sp18), (void *) (arg2));
    observe_item_id__6TLobbyFi((int)((int) (M2C_FIELD(arg2, s32 *, 0xC))));
    TLobby__sub_80103DD8((void *) (&stack.sp8));
}

void handle_6x62(void) {  }
u32 advance_item_id_counter(s32 client) {
    if (get_global_state__14TOKeyMachine01Fv() == 0xF)
        return ((u32*)lbl_805D54EC)[(u16)client]++;
    return ((u32*)lbl_805D54E8)[(u16)client]++;
}
void reset_item_id_counters__6TLobbyFv(void) {
    s32 i;
    if ((s32 *)lbl_805D54E8 == 0 || (s32 *)lbl_805D54EC == 0) {
        return;
    }
    for (i = 0; i < 12; i++) {
        ((s32 *)lbl_805D54E8)[i] = (i << 21) + 0x10000;
        ((s32 *)lbl_805D54EC)[i] = (i << 21) + 0x10010000;
    }
}

}
