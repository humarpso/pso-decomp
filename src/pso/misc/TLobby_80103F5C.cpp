#include "types.h"
#include "pso/protocol/subcmd_6x.h"
#include <stddef.h>

struct In_8010440C { u8 pad0; u8 idx; };

struct In_80104438 { u8 pad0; u8 idx; };

struct Ent_80103F68 { u8 pad[0x24]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_40 { u8 bytes[0x40]; };

struct ByteBlock_44 { u8 bytes[0x44]; };

struct Tbl_801044B8 { s32 v[17]; };

extern "C" {
s32 clear_id__10TObjPlayerFPv(s32 *);
s32 free__11TOBoss4RockFUi(s32);
extern u32 TLobby__floor_item_entry_pool;
extern s32 floor_item_row_table;
extern s32 floor_item_counts_by_floor;
extern s32 floor_item_free_id_stack;
extern int floor_item_free_id_count;
extern s32 floor_item_next_sort_keys;
extern s32 lbl_805D5430;
void free_boss_rocks__6TLobbyFv(void);
s32 __construct_new_array(s32, s32 *, s32, s32, s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 clear_id__10TObjPlayerFPv(s32 *);
extern s32 drop_stacked_item_passthrough__6TLobbyFi[];
extern u32 TLobby__floor_item_entry_pool;
extern s32 floor_item_row_table;
extern s32 floor_item_counts_by_floor;
extern s32 floor_item_free_id_stack;
extern int floor_item_free_id_count;
extern s32 floor_item_next_sort_keys;
extern s32 lbl_805D5430;
void alloc_objects__6TLobbyFv(void);
    extern int lbl_805D5868;
int get_lobby_flag__6TLobbyFv(void);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_player_packet__6TLobbyFPv(void* p);
void bswap_player_packet__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
void update_and_send__6TLobbyFPv(void* p);
void TLobby__sub_801041BC(void *arg0);
s32 set_flags__10TObjPlayerFPvUi(s32 *, s32);
extern s32 lbl_805D5430;
void TLobby__sub_801041D8(void);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__9TItemDataFv(void*);
void bswap_item__6TLobbyFPv(void* p);
s32 init_forward__10TObjPlayerFPv(s32 *);
extern s32 lbl_805D5430;
void TLobby__sub_80104350(void);
    extern int* item_sync_counter_table;
void set_boss_buf_entry__6TLobbyFii(int a0, int a1);
extern int* item_sync_counter_table;
int get_sync_counter__6TLobbyFi(int a0);
s32 get_item_icon_index();
s32 get_item_data__6TLobbyFUi(u32 arg0);
s32 format_item_name__9TItemDataFv(u32, s32);
void forward_message__6TLobbyFiUi(s32 arg0, u32 arg1);
    extern int lobby_drop_flag;
void mark_selected__6TLobbyFv(void);
extern int lobby_drop_flag;
int get_drop_flag__6TLobbyFv(void);
void TLobby__sub_80104464(void);
s32 fn_80077788();
s32 fn_80077790();
s32 fn_801058E8();
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
void mark_selected__6TLobbyFv(void);
void handle_select_confirm__6TLobbyFv(void);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 send_6x25_equip_item(s32, s32, s32);
s32 get_player_by_client_id(u16);
s32 is_script_controlled__10TObjPlayerFPv(s32);
s32 request_inventory_item__10TObjPlayerFP9TItemData(s32, void *);
s32 obj_isState3_324(s32);
extern s32 local_client_id;
extern s32 TLobby__designated_client_id;
void forward_to_player__6TLobbyFiPv(int arg0, void *arg1);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 send_6x26_unequip_item__10TObjPlayerFPvPv(s32, s32);
s32 get_player_by_client_id(u16);
s32 is_script_controlled__10TObjPlayerFPv(s32);
u32 activate_d04_slot__10TObjPlayerFPv(s32);
u32 get_equip_field_d04__10TObjPlayerFPv(s32, s32);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_item_field_2__9TItemDataFPv(s32);
u32 get_item_field_6__10TObjPlayerFPv(s32);
s32 obj_isState3_324(s32);
u32 test_flag3__9TItemDataFPv(s32);
extern s32 local_client_id;
extern s32 TLobby__designated_client_id;
void handle_player_event__6TLobbyFii(s32 arg0, s32 arg1);
extern void *item_tool_factory_table[];
void create__11TItemObjectFPv();
void *TLobby__sub_8010440C(In_8010440C *arg0);
extern void *weapon_factory_table[];
void create_common_weapon();
void *get_weapon_factory_for_item(In_80104438 *arg0);
void init_floor_item_entry__6TLobbyFPv(Ent_80103F68 *);
void clear_object_count__6TLobbyFv(void);
extern u32 TLobby__floor_item_entry_pool;
extern s32 floor_item_row_table;
extern s32 floor_item_counts_by_floor;
extern s32 floor_item_next_sort_keys;
void reset_floor_items__6TLobbyFv(void);
s32 get_instance__6TLobbyFv();
s32 is_quest_active();
s32 TItemDropSub__sub_80107B74();
extern Tbl_801044B8 item_drop_area_remap_table;
void normalize_drop_area(s32 *p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void bswap_sync_item_state_header(G_SyncItemState_6x6D_Decompressed *header);
}

extern "C" {

void clear_object_count__6TLobbyFv(void);

    extern int floor_item_free_id_count;
void clear_object_count__6TLobbyFv(void) { floor_item_free_id_count = 0; }

void reset_floor_items__6TLobbyFv(void) {
    s32 i;
    s32 j;
    s32 k;
    for (i = 0; i != 0xD80; i++) {
        if (*(Ent_80103F68 **)&TLobby__floor_item_entry_pool != NULL) {
            init_floor_item_entry__6TLobbyFPv(&(*(Ent_80103F68 **)&TLobby__floor_item_entry_pool)[i]);
        }
    }
    for (j = 0; j < 0x12; j++) {
        if (*(u16 **)&floor_item_next_sort_keys != NULL) {
            (*(u16 **)&floor_item_next_sort_keys)[j] = 0;
        }
    }
    for (k = 0; k < 0x12; k++) {
        if (*(Ent_80103F68 ***)&floor_item_row_table != NULL && *(Ent_80103F68 **)&TLobby__floor_item_entry_pool != NULL && *(s32 **)&floor_item_counts_by_floor != NULL) {
            (*(Ent_80103F68 ***)&floor_item_row_table)[k] = &(*(Ent_80103F68 **)&TLobby__floor_item_entry_pool)[k * 0xC0];
            (*(s32 **)&floor_item_counts_by_floor)[k] = 0;
        }
    }
    clear_object_count__6TLobbyFv();
}

void free_boss_rocks__6TLobbyFv(void) {
    free__11TOBoss4RockFUi(floor_item_next_sort_keys);
    floor_item_next_sort_keys = 0;
    free__11TOBoss4RockFUi(floor_item_free_id_stack);
    floor_item_free_id_stack = 0;
    (*(s32 *)&floor_item_free_id_count) = 0;
    free__11TOBoss4RockFUi(floor_item_counts_by_floor);
    floor_item_counts_by_floor = 0;
    free__11TOBoss4RockFUi(floor_item_row_table);
    floor_item_row_table = 0;
    if ((u32) TLobby__floor_item_entry_pool != 0U) {
        free__11TOBoss4RockFUi(TLobby__floor_item_entry_pool - 0x10);
    }
    TLobby__floor_item_entry_pool = 0U;
    clear_id__10TObjPlayerFPv(&lbl_805D5430);
}
void alloc_objects__6TLobbyFv(void) {
    (*(s32 *)&TLobby__floor_item_entry_pool) = __construct_new_array(alloc_buffer__11TOBoss4RockFPv(0x1E610), drop_stacked_item_passthrough__6TLobbyFi, 0, 0x24, 0xD80);
    floor_item_row_table = alloc_buffer__11TOBoss4RockFPv(0x48);
    floor_item_counts_by_floor = alloc_buffer__11TOBoss4RockFPv(0x48);
    floor_item_free_id_stack = alloc_buffer__11TOBoss4RockFPv(0x40);
    (*(s32 *)&floor_item_free_id_count) = 0;
    floor_item_next_sort_keys = alloc_buffer__11TOBoss4RockFPv(0x24);
    clear_id__10TObjPlayerFPv(&lbl_805D5430);
    reset_floor_items__6TLobbyFv();
}
int get_lobby_flag__6TLobbyFv(void) {  return lbl_805D5868; }
void bswap_player_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void update_and_send__6TLobbyFPv(void* p) { bswap_player_packet__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TLobby__sub_801041BC(void *arg0) {
    *(s32 *)((s8 *)arg0 + 4) = -1;
    *(s8 *)((s8 *)arg0 + 0) = 0x63;
    *(s8 *)((s8 *)arg0 + 1) = 3;
}
void TLobby__sub_801041D8(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D5430, 1);
}
void bswap_item__6TLobbyFPv(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap__9TItemDataFv((char*)p + 0x10); }

typedef char SyncItemHeaderPlayerIds[offsetof(G_SyncItemState_6x6D_Decompressed, next_item_id_per_player) == 0x20 ? 1 : -1];
typedef char SyncItemHeaderFloorCounts[offsetof(G_SyncItemState_6x6D_Decompressed, floor_item_count_per_floor) == 0x50 ? 1 : -1];
typedef char SyncItemHeaderSize[sizeof(G_SyncItemState_6x6D_Decompressed) == 0x8C ? 1 : -1];
void bswap_sync_item_state_header(G_SyncItemState_6x6D_Decompressed *header) {
    for (s32 i = 0; i < 16; ++i) {
        bswap_16__FPUs((void*)(&header->next_drop_number_per_floor[i]));
    }
    for (s32 i = 0; i < 12; ++i) {
        bswap_32__FPUl((void*)(&header->next_item_id_per_player[i]));
    }
    for (s32 i = 0; i < 15; ++i) {
        bswap_32__FPUl((void*)(&header->floor_item_count_per_floor[i]));
    }
}

void TLobby__sub_80104350(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D5430);
}
void set_boss_buf_entry__6TLobbyFii(int a0, int a1) { item_sync_counter_table[(unsigned short)(a1)] = a0; }
int get_sync_counter__6TLobbyFi(int a0) {  return item_sync_counter_table[(unsigned short)(a0)]; }
s32 get_item_data__6TLobbyFUi(u32 arg0) {
    if (arg0 != 0U) {
        return get_item_icon_index();
    }
    return 0;
}
void forward_message__6TLobbyFiUi(s32 arg0, u32 arg1) {
    if (arg1 != 0U) {
        format_item_name__9TItemDataFv(arg1, arg0);
    }
}
void mark_selected__6TLobbyFv(void) { lobby_drop_flag = 1; }
int get_drop_flag__6TLobbyFv(void) {  return lobby_drop_flag; }

void *TLobby__sub_8010440C(In_8010440C *arg0) {
    u8 i = arg0->idx;
    if (i < 0x18) {
        return item_tool_factory_table[i];
    }
    return (void *)create__11TItemObjectFPv;
}

void *get_weapon_factory_for_item(In_80104438 *arg0) {
    u8 i = arg0->idx;
    if (i < 0xAA) {
        return weapon_factory_table[i];
    }
    return (void *)create_common_weapon;
}

void TLobby__sub_80104464(void) {  }
void handle_select_confirm__6TLobbyFv(void) {
    if ((fn_80077790() == 1) || (fn_80077788() == 1)) {
        mark_selected__6TLobbyFv();
        if (get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) != 0U) {
            fn_801058E8();
        }
    }
}

void normalize_drop_area(s32 *p) {
    s32 v;
    if (is_quest_active() != 0 && p != NULL) {
        switch (*p) {
        case 0x10:
        case 0x11:
            *p = TItemDropSub__sub_80107B74();
            return;
        }
    }
    if (get_instance__6TLobbyFv() == 0) {
        if (p != NULL) {
            v = *p;
            if (v > 10) {
                switch (v) {
                case 11:
                    *p = 3;
                    break;
                case 12:
                    *p = 6;
                    break;
                case 13:
                    *p = 8;
                    break;
                default:
                    *p = 10;
                    break;
                }
            } else if (v < 1) {
                *p = 1;
            }
        }
    } else if (p != NULL) {
        v = *p;
        if (v >= 0x13 && v < 0x24) {
            Tbl_801044B8 t = item_drop_area_remap_table;
            *p = t.v[(u32)(v - 0x13)];
        }
    }
}

void forward_to_player__6TLobbyFiPv(int arg0, void *arg1) {
    s32 temp_r3;
    if (arg1 != NULL) {
        temp_r3 = get_player_by_client_id(arg0);
        if ((temp_r3 != 0) && ((is_locally_controlled__10TObjPlayerFPv() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) local_client_id == (s32) TLobby__designated_client_id)) || ((is_script_controlled__10TObjPlayerFPv(temp_r3) == 1) && ((s32) local_client_id == (s32) TLobby__designated_client_id)))) {
            request_inventory_item__10TObjPlayerFP9TItemData(temp_r3, arg1);
            send_6x25_equip_item(temp_r3, *(s32 *)((s8 *)arg1 + 0xC), 0);
        }
    }
}
void handle_player_event__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    u32 var_r3;
    temp_r3 = get_player_by_client_id((u16)arg0);
    if ((temp_r3 != 0) && ((is_locally_controlled__10TObjPlayerFPv() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) local_client_id == (s32) TLobby__designated_client_id)) || ((is_script_controlled__10TObjPlayerFPv(temp_r3) == 1) && ((s32) local_client_id == (s32) TLobby__designated_client_id)))) {
        var_r3 = 0U;
        switch (arg1) {
        case 0:
            var_r3 = get_item_field_6__10TObjPlayerFPv(temp_r3);
            break;
        case 1:
            var_r3 = get_item_field_2__9TItemDataFPv(temp_r3);
            break;
        case 2:
            var_r3 = test_flag3__9TItemDataFPv(temp_r3);
            break;
        case 3:
            var_r3 = activate_d04_slot__10TObjPlayerFPv(temp_r3);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            var_r3 = get_equip_field_d04__10TObjPlayerFPv(temp_r3, arg1 + 5);
            break;
        default:
            break;
        }
        if (var_r3 != 0U) {
            send_6x26_unequip_item__10TObjPlayerFPvPv(temp_r3, get_field_d8__10TObjPlayerFPv());
        }
    }
}

}
