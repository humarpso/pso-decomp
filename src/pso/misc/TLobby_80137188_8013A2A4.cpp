#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct H_8013A348 { u8 b[12]; };

struct S_8013A348 { u8 pad[0x28]; struct H_8013A348 h[5]; };

extern "C" {
void bswap__12player_statsFv(void *);
void bswap_inventory__6TLobbyFPv(void* p);
void bswap_fields__6TLobbyFPv(void *);
void bswap_header_3words__6TLobbyFPv(void *);
void bswap__15disp_data_part2Fv(void *);
void TLobby__sub_8013A95C(void *);
void TLobby__sub_8013A9C0(void *);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void bswap_player_data__6TLobbyFi(s32 arg0);
}

extern "C" {

void TLobby__sub_8013A2DC(void);
void bswap_6x6E_sync_game_state__6TLobbyFPv(void* p);
void bswap_inventory__6TLobbyFPv(void* p);
void* init_char_data__6TLobbyFPv(void* p);
void open_hard_keyboard__6TLobbyFPv(void* p);
void set_player_count__6TLobbyFi(int a0);
int __ct__12TPlyCharDataFv(void*);
int __ct__16TPlyGuildCardTagFv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__17TPlyInventoryItemFv(void*);
int test_card_flag__19TWindowKeyBoardHardFii(void*, void*);

void* init_char_data__6TLobbyFPv(void* p) { __ct__16TPlyGuildCardTagFv(p); __ct__12TPlyCharDataFv((char*)p + 0x20); return p; }
void TLobby__sub_8013A2DC(void) {  }
void bswap_6x6E_sync_game_state__6TLobbyFPv(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void open_hard_keyboard__6TLobbyFPv(void* p) { test_card_flag__19TWindowKeyBoardHardFii(p, (void*)262144); }

void bswap_player_data__6TLobbyFi(s32 arg0) {
    s32 i;
    bswap_16__FPUs((void*)((void *) (arg0)));
    bswap_16__FPUs((void*)((void *) (arg0 + 2)));
    bswap_32__FPUl((void*)((void *) (arg0 + 4)));
    bswap_32__FPUl((void*)((void *) (arg0 + 8)));
    bswap_32__FPUl((void*)((void *) (arg0 + 0xC)));
    bswap_32__FPUl((void*)((void *) (arg0 + 0x10)));
    bswap_32__FPUl((void*)((void *) (arg0 + 0x14)));
    bswap_32__FPUl((void*)((void *) (arg0 + 0x18)));
    bswap_32__FPUl((void*)((void *) (arg0 + 0x1C)));
    bswap_16__FPUs((void*)((void *) (arg0 + 0x20)));
    bswap_16__FPUs((void*)((void *) (arg0 + 0x22)));
    bswap_16__FPUs((void*)((void *) (arg0 + 0x24)));
    bswap_16__FPUs((void*)((void *) (arg0 + 0x26)));
    for (i = 0; i < 5; i++) {
        bswap_header_3words__6TLobbyFPv(&((struct S_8013A348 *)arg0)->h[i]);
    }
    bswap_32__FPUl((void*)((void *) (arg0 + 0x64)));
    bswap_fields__6TLobbyFPv((void *) (arg0 + 0x68));
    TLobby__sub_8013A9C0((void *) (arg0 + 0x70));
    TLobby__sub_8013A95C((void *) (arg0 + 0x78));
    bswap_32__FPUl((void*)((void *) (arg0 + 0x94)));
    bswap_32__FPUl((void*)((void *) (arg0 + 0xAC)));
    bswap_32__FPUl((void*)((void *) (arg0 + 0x488)));
    bswap_32__FPUl((void*)((void *) (arg0 + 0xB0)));
    bswap__15disp_data_part2Fv((void *) (arg0 + 0xC8));
    bswap__12player_statsFv((void *) (arg0 + 0x118));
    bswap_inventory__6TLobbyFPv((void*)((void *) (arg0 + 0x13C)));
}

void bswap_inventory__6TLobbyFPv(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 30; i++) { bswap__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

    extern int lobby_player_count;
void set_player_count__6TLobbyFi(int a0) { lobby_player_count = a0; }

}
