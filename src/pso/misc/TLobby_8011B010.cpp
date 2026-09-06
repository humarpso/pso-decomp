#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TLobby__sub_8011AFB8(void);
int alloc_buffer__11TOBoss4RockFPv(void*);
    extern int lbl_805D54E0;
    extern int lbl_805D54E4;
extern s32 lbl_805D54E8;
extern s32 lbl_805D54EC;
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
M2C_UNK __dl__FPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);

extern s32 lbl_805D54E8;
extern s32 lbl_805D54EC;

s32 free_rock_objects__6TLobbyFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free__11TOBoss4RockFUi(lbl_805D54E8);
        lbl_805D54E8 = 0;
        free__11TOBoss4RockFUi(lbl_805D54EC);
        lbl_805D54EC = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void* init_bosses__6TLobbyFPv(void* a0) { (*(int *)&lbl_805D54EC) = alloc_buffer__11TOBoss4RockFPv((void*)48); (*(int *)&lbl_805D54E8) = alloc_buffer__11TOBoss4RockFPv((void*)48); TLobby__sub_8011AFB8(); lbl_805D54E0 = 0; lbl_805D54E4 = 0; return a0; }
void send_item_packet__6TLobbyFPv(void* p) { bswap_item_packet__6TLobbyFPv((void*)((void*)(p))); TLobby__send_and_handle_60(p); }
void bswap_item_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_item__6TLobbyFPv((char*)p + 0x4); }
void *init_header_packet__6TLobbyFPv(void *arg0) {
    init_header__6TLobbyFPv((void *)(arg0));
    M2C_FIELD(arg0, s8 *, 0) = 0x5F;
    M2C_FIELD(arg0, s8 *, 0x28) = 2;
    M2C_FIELD(arg0, s8 *, 0x29) = 0;
    M2C_FIELD(arg0, s8 *, 0x2A) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0xB;
    return arg0;
}
void *init_header__6TLobbyFPv(void *arg0) {
    drop_stacked_item_passthrough__6TLobbyFi((void *)((char *)arg0 + 4));
    M2C_FIELD(arg0, u8 *, 0x0) = 95;
    M2C_FIELD(arg0, u8 *, 0x1) = 10;
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
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
}

}
