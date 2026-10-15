#include "types.h"

struct O_8007B6F4 { u8 pad[0x8c]; u8 flags; };

extern "C" {
s32 TWindowSubComCard__sub_8007B6F4(O_8007B6F4 *self);
}

extern "C" {

u8 TWindowSubComCard__sub_8007B6EC(void* p);
void bswap_guild_card__17TWindowSubComCardFPv(void* p);
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p);
s32 get_card_id__17TWindowSubComCardFPv(void* p);
int get_keyboard_mode__17TWindowSubComCardFv(void);
void init_card__17TWindowSubComCardFPvPv(void* p, void* a1);
void *init_guild_card__17TWindowSubComCardFPv(void *arg0);
int is_active__17TWindowSubComCardFPv(void* p);
int send_subcommand_to_client__6TLobbyFPvUi(void*, void*);
int bswap__16TPlyGuildCardTagFv(void*);
void init_guild_card_tag__17TWindowSubComCardFi(void *);
int read_be16_field2__10TObjPlayerFPv(void*);

s32 get_card_id__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x4); }
int is_active__17TWindowSubComCardFPv(void* p) { return *(u8*)((char*)p + 0x8c) & 0x1; }
u8 TWindowSubComCard__sub_8007B6EC(void* p) { return *(u8*)((char*)p + 0x8f); }

s32 TWindowSubComCard__sub_8007B6F4(O_8007B6F4 *self) {
    if (self->flags & 2) {
        return 0;
    }
    return 1;
}

void bswap_guild_card__17TWindowSubComCardFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_guild_card_tag__17TWindowSubComCardFPv((void*)((char*)p + 0x4)); }
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p) { return bswap__16TPlyGuildCardTagFv(p); }
void init_card__17TWindowSubComCardFPvPv(void* p, void* a1) { bswap_guild_card__17TWindowSubComCardFPv((void*)(p)); send_subcommand_to_client__6TLobbyFPvUi(p, a1); }

    extern int com_card_keyboard_mode;
int get_keyboard_mode__17TWindowSubComCardFv(void) {  return com_card_keyboard_mode; }

void *init_guild_card__17TWindowSubComCardFPv(void *arg0) {
    init_guild_card_tag__17TWindowSubComCardFi((void *)((char *)arg0 + 4));
    *(u8 *)((s8 *)arg0 + 0x0) = 6;
    *(u8 *)((s8 *)arg0 + 0x1) = 37;
    return arg0;
}

}
