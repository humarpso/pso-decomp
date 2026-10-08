#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TWindowSubShortMail__sub_8007B834(void *);
u8 * fn_8007B83C(void *);
u8 *TLobby__sub_80225924(s32);
M2C_UNK strncpy(void *, int, int);
s32 fn_8007B2E0(u8 *arg0, s32 arg1);
}

extern "C" {

void clear_and_init__17TWindowSubComCardFPvPv(void* p, void* a1);
int fill_guild_card_from_char__6TLobbyFPvi(void*, void*);
int clear(void* p);
int memset(void*, int, int);

void clear_and_init__17TWindowSubComCardFPvPv(void* p, void* a1) { clear(p); fill_guild_card_from_char__6TLobbyFPvi(p, a1); }
s32 fn_8007B2E0(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TLobby__sub_80225924(arg1));
    if (temp_r3 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, u8 *, 0x8C) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C) | 3);
    strncpy((void *) (arg0 + 8), (int) (fn_8007B83C(temp_r3)), (int) (0x17));
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(arg0, s8 *, 0x8F) = 0xC;
    M2C_FIELD(arg0, s8 *, 0x8E) = 0xA;
    M2C_FIELD(arg0, s8 *, 0x8D) = 5;
    M2C_FIELD(arg0, s32 *, 4) = TWindowSubShortMail__sub_8007B834(temp_r3);
    return 1;
}

}
