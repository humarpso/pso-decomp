#include "types.h"

extern "C" {
int reset_item_id_counters__6TLobbyFv(void);
int alloc_buffer__11TOBoss4RockFPv(void*);
    extern int lbl_805D54E0;
    extern int build_item_id_mode;
extern s32 item_sync_counter_table;
extern s32 item_id_counter_table;
void* init_bosses__6TLobbyFPv(void* a0);
int TLobby__send_and_handle_60(void*);
void send_item_packet__6TLobbyFPv(void* p);
int bswap_item__6TLobbyFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_item_packet__6TLobbyFPv(void* p);
void *init_header_packet__6TLobbyFPv(void *arg0);
void drop_stacked_item_passthrough__6TLobbyFi(void *);
void *init_header__6TLobbyFPv(void *arg0);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);
void bswap_packet__6TLobbyFPv(void* p);
extern s32 TLobby__data_805D6140;
s32 apply_table_entry__6TLobbyFs(s16 arg0, void * _w1);
void copy_short_fields__6TLobbyFPvPv(void *arg0, void *arg1);
}

extern "C" {

s32 free_rock_objects__6TLobbyFis(s32 arg0, s16 arg1);
s32 __dl__FPv(s32);
s32 free__11TOBoss4RockFUi(s32);

extern s32 item_sync_counter_table;
extern s32 item_id_counter_table;

s32 free_rock_objects__6TLobbyFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free__11TOBoss4RockFUi(item_sync_counter_table);
        item_sync_counter_table = 0;
        free__11TOBoss4RockFUi(item_id_counter_table);
        item_id_counter_table = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void* init_bosses__6TLobbyFPv(void* a0) { (*(int *)&item_id_counter_table) = alloc_buffer__11TOBoss4RockFPv((void*)48); (*(int *)&item_sync_counter_table) = alloc_buffer__11TOBoss4RockFPv((void*)48); reset_item_id_counters__6TLobbyFv(); lbl_805D54E0 = 0; build_item_id_mode = 0; return a0; }
void send_item_packet__6TLobbyFPv(void* p) { bswap_item_packet__6TLobbyFPv((void*)((void*)(p))); TLobby__send_and_handle_60(p); }
void bswap_item_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_item__6TLobbyFPv((char*)p + 0x4); }
void *init_header_packet__6TLobbyFPv(void *arg0) {
    init_header__6TLobbyFPv((void *)(arg0));
    *(s8 *)((s8 *)arg0 + 0) = 0x5F;
    *(s8 *)((s8 *)arg0 + 0x28) = 2;
    *(s8 *)((s8 *)arg0 + 0x29) = 0;
    *(s8 *)((s8 *)arg0 + 0x2A) = 0;
    *(s8 *)((s8 *)arg0 + 0x2B) = 0;
    *(s8 *)((s8 *)arg0 + 1) = 0xB;
    return arg0;
}
void *init_header__6TLobbyFPv(void *arg0) {
    drop_stacked_item_passthrough__6TLobbyFi((void *)((char *)arg0 + 4));
    *(u8 *)((s8 *)arg0 + 0x0) = 95;
    *(u8 *)((s8 *)arg0 + 0x1) = 10;
    return arg0;
}
void bswap_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0x4); }
s32 apply_table_entry__6TLobbyFs(s16 arg0, void * _w1) {
    if (arg0 > 0xB9F) {
        return 0;
    }
    copy_short_fields__6TLobbyFPvPv((void *)(TLobby__data_805D6140 + (arg0 * 4)), (void *)(_w1));
    return 1;
}
void copy_short_fields__6TLobbyFPvPv(void *arg0, void *arg1) {
    *(s16 *)((s8 *)arg0 + 0) = (s16) *(s16 *)((s8 *)arg1 + 0);
    *(u16 *)((s8 *)arg0 + 2) = (u16) *(u16 *)((s8 *)arg1 + 2);
}

}
