#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 *alloc_buffer__11TOBoss4RockFPv(u32 size);
void clamp_difficulty__6TLobbyFi(s32 arg0);
M2C_UNK get_instance__6TLobbyFv();
M2C_UNK set_difficulty__6TLobbyFi();
M2C_UNK load_battle_param_entry();
extern u32 TLobby__data_805D4AA0;
extern s32 TLobby__data_805D4AA4;
extern s32 TLobby__data_805D4AA8;
extern s32 TLobby__data_805D4AAC;
extern s32 TLobby__data_805D4AB0;
extern s32 TLobby__data_805D4ABC;
extern s32 lbl_805D5550;
void alloc_battle_param_tables(void);
}

extern "C" {

void bswap__12player_statsFv(void *arg0);
void byteswap_packet__6TLobbyFPv(void* p);
void clamp_difficulty__6TLobbyFi(s32 arg0);
void free_boss4_rock__6TLobbyFv(void);
void swap_endian__6TLobbyFPv(void* p);
void update_difficulty__6TLobbyFv(void);
M2C_UNK load_battle_param_entry();
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void free__11TOBoss4RockFUi(void*);
M2C_UNK get_instance__6TLobbyFv();
M2C_UNK set_difficulty__6TLobbyFi();

extern s32 enable_v2_features;
extern s32 TLobby__data_805D4AB4;

void clamp_difficulty__6TLobbyFi(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    } else if ((s32) enable_v2_features != 0) {
        if (var_r3 >= 4) {
            var_r3 = 3;
        }
    } else if (var_r3 >= 3) {
        var_r3 = 2;
    }
    TLobby__data_805D4AB4 = var_r3;
}

extern s32 TLobby__data_805D4AB4;
extern s32 TLobby__data_805D4AB8;
extern s32 lbl_805D5550;

void update_difficulty__6TLobbyFv(void) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = TLobby__data_805D4AB4;
    temp_r30 = TLobby__data_805D4AB8;
    clamp_difficulty__6TLobbyFi((s32)(lbl_805D5550));
    get_instance__6TLobbyFv();
    set_difficulty__6TLobbyFi();
    if (((s32) TLobby__data_805D4AB4 != temp_r31) || ((s32) TLobby__data_805D4AB8 != temp_r30)) {
        load_battle_param_entry();
    }
}

extern u32 TLobby__data_805D4AA0;
extern s32 TLobby__data_805D4AA4;
extern s32 TLobby__data_805D4AA8;
extern s32 TLobby__data_805D4AAC;
extern s32 TLobby__data_805D4AB0;

void free_boss4_rock__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D4AA0 != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D4AA0);
        TLobby__data_805D4AA0 = 0U;
    }
    TLobby__data_805D4AA4 = 0;
    TLobby__data_805D4AA8 = 0;
    TLobby__data_805D4AAC = 0;
    TLobby__data_805D4AB0 = 0;
}

void alloc_battle_param_tables(void) {
    u8 *buf = alloc_buffer__11TOBoss4RockFPv(0x3d80);
    s32 i;
    for (i = 0; i < 0x3d80; i++) {
        buf[i] = 0;
    }
    TLobby__data_805D4AA0 = (u32)buf;
    TLobby__data_805D4AA4 = (s32)buf;
    TLobby__data_805D4AA8 = (s32)(buf + 0xd80);
    TLobby__data_805D4AAC = (s32)(buf + 0x1f80);
    TLobby__data_805D4AB0 = (s32)(buf + 0x2b80);
    clamp_difficulty__6TLobbyFi(lbl_805D5550);
    get_instance__6TLobbyFv();
    set_difficulty__6TLobbyFi();
    load_battle_param_entry();
    TLobby__data_805D4ABC = 0;
}

void swap_endian__6TLobbyFPv(void* p) { bswap_16__FPUs((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x2)); bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); bswap_16__FPUs((void*)((char*)p + 0x8)); bswap_16__FPUs((void*)((char*)p + 0xa)); bswap_32__FPUl((void*)((char*)p + 0xc)); bswap_32__FPUl((void*)((char*)p + 0x10)); bswap_32__FPUl((void*)((char*)p + 0x14)); bswap_32__FPUl((void*)((char*)p + 0x18)); bswap_32__FPUl((void*)((char*)p + 0x1c)); }

void byteswap_packet__6TLobbyFPv(void* p) { bswap_16__FPUs((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x2)); bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); bswap_32__FPUl((void*)((char*)p + 0x8)); bswap_32__FPUl((void*)((char*)p + 0xc)); bswap_32__FPUl((void*)((char*)p + 0x10)); bswap_16__FPUs((void*)((char*)p + 0x14)); bswap_16__FPUs((void*)((char*)p + 0x16)); bswap_16__FPUs((void*)((char*)p + 0x18)); bswap_16__FPUs((void*)((char*)p + 0x1a)); bswap_32__FPUl((void*)((char*)p + 0x1c)); bswap_32__FPUl((void*)((char*)p + 0x20)); bswap_32__FPUl((void*)((char*)p + 0x24)); bswap_32__FPUl((void*)((char*)p + 0x28)); bswap_32__FPUl((void*)((char*)p + 0x2c)); }

void bswap__12player_statsFv(void *arg0) {
    bswap_16__FPUs((void*)(arg0));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 2)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 6)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 8)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 10)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 12)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 14)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 16)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 20)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 24)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 28)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 32)));
}

}
