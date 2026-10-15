#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {
int reset_item_id_counters__6TLobbyFv(void);
int mem_alloc(void*);
    extern int lbl_805D54E0;
    extern int build_item_id_mode;
extern s32 item_sync_counter_table;
extern s32 item_id_counter_table;
int TLobby__send_and_handle_60(void*);
int bswap_item__6TLobbyFv(void*);
int read_be16_field2__10TObjPlayerFv(void*);
void drop_stacked_item_passthrough__6TLobbyFv(void *);
int read_be16_field2__10TObjPlayerFv(void*);
int bswap_32__FPUl(void*);
extern s32 TLobby__data_805D6140;
}

extern "C" {

s32 free_rock_objects__6TLobbyFis(s32 arg0, s16 arg1);
s32 __dl__FPv(s32);
s32 mem_free(s32);

extern s32 item_sync_counter_table;
extern s32 item_id_counter_table;

s32 free_rock_objects__6TLobbyFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        mem_free(item_sync_counter_table);
        item_sync_counter_table = 0;
        mem_free(item_id_counter_table);
        item_id_counter_table = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void*TLobby::init_bosses(void* a0) { (*(int *)&item_id_counter_table) = mem_alloc((void*)48); (*(int *)&item_sync_counter_table) = mem_alloc((void*)48); reset_item_id_counters__6TLobbyFv(); lbl_805D54E0 = 0; build_item_id_mode = 0; return a0; }
void TLobby::send_item_packet() { bswap_item_packet(); TLobby__send_and_handle_60(this); }
void TLobby::bswap_item_packet() { read_be16_field2__10TObjPlayerFv(this); bswap_item__6TLobbyFv((char*)this + 0x4); }
void *TLobby::init_header_packet() {
    init_header();
    *(s8 *)((s8 *)this + 0) = 0x5F;
    *(s8 *)((s8 *)this + 0x28) = 2;
    *(s8 *)((s8 *)this + 0x29) = 0;
    *(s8 *)((s8 *)this + 0x2A) = 0;
    *(s8 *)((s8 *)this + 0x2B) = 0;
    *(s8 *)((s8 *)this + 1) = 0xB;
    return this;
}
void *TLobby::init_header() {
    drop_stacked_item_passthrough__6TLobbyFv((void *)((char *)this + 4));
    *(u8 *)((s8 *)this + 0x0) = 95;
    *(u8 *)((s8 *)this + 0x1) = 10;
    return this;
}
void TLobby::bswap_packet() { read_be16_field2__10TObjPlayerFv(this); bswap_32__FPUl((char*)this + 0x8); bswap_32__FPUl((char*)this + 0x4); }
s32 TLobby::apply_table_entry(s16 arg0, void * _w1) {
    if (arg0 > 0xB9F) {
        return 0;
    }
    ((TLobby *)(TLobby__data_805D6140 + (arg0 * 4)))->copy_short_fields((void *)(_w1));
    return 1;
}
void TLobby::copy_short_fields(void *arg1) {
    *(s16 *)((s8 *)this + 0) = (s16) *(s16 *)((s8 *)arg1 + 0);
    *(u16 *)((s8 *)this + 2) = (u16) *(u16 *)((s8 *)arg1 + 2);
}

}
