#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

u8 TWindowSubComCard__sub_8007B6EC(void* p);
int TWindowSubComCard__sub_8007B6F4(void);
void bswap_guild_card__17TWindowSubComCardFPv(void* p);
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p);
s32 get_card_id__17TWindowSubComCardFPv(void* p);
int get_keyboard_mode__17TWindowSubComCardFv(void);
void init_card__17TWindowSubComCardFPvPv(void* p, void* a1);
void *init_guild_card__17TWindowSubComCardFPv(void *arg0);
int is_active__17TWindowSubComCardFPv(void* p);
int TLobby__sub_801E44D8(void*, void*);
int bswap__16TPlyGuildCardTagFv(void*);
void init_guild_card_tag__17TWindowSubComCardFi(void *);
int read_be16_field2__10TObjPlayerFPv(void*);

s32 get_card_id__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x4); }
int is_active__17TWindowSubComCardFPv(void* p) { return *(u8*)((char*)p + 0x8c) & 0x1; }
u8 TWindowSubComCard__sub_8007B6EC(void* p) { return *(u8*)((char*)p + 0x8f); }

int TWindowSubComCard__sub_8007B6F4(void) { return 0; }

void bswap_guild_card__17TWindowSubComCardFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_guild_card_tag__17TWindowSubComCardFPv((void*)((char*)p + 0x4)); }
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p) { return bswap__16TPlyGuildCardTagFv(p); }
void init_card__17TWindowSubComCardFPvPv(void* p, void* a1) { bswap_guild_card__17TWindowSubComCardFPv((void*)(p)); TLobby__sub_801E44D8(p, a1); }

    extern int lbl_805D4E80;
int get_keyboard_mode__17TWindowSubComCardFv(void) {  return lbl_805D4E80; }

void *init_guild_card__17TWindowSubComCardFPv(void *arg0) {
    init_guild_card_tag__17TWindowSubComCardFi((void *)((char *)arg0 + 4));
    M2C_FIELD(arg0, u8 *, 0x0) = 6;
    M2C_FIELD(arg0, u8 *, 0x1) = 37;
    return arg0;
}

}
