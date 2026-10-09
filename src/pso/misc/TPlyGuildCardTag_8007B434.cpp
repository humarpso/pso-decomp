#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1);
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(void *);
M2C_UNK strncpy(void *, int, int);
extern s32 current_language;
extern u8 *TLobby__protocol_instance;
void fill_guild_card_from_char__6TLobbyFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1);

void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}
void fill_guild_card_from_char__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi((void *) (arg1));
    if (temp_r3 != 0U) {
        temp_r31 = (unsigned char *) (temp_r3 + 0x370);
        if (temp_r31 != NULL) {
            M2C_FIELD(arg0, u8 *, 0x8C) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C) | 1);
            strncpy((void *) (arg0 + 8), (int) (temp_r31), (int) (0x17));
            M2C_FIELD(arg0, s8 *, 0x1F) = 0;
            M2C_FIELD(arg0, u8 *, 0x8F) = (u8) M2C_FIELD(temp_r31, u8 *, 0x31);
            M2C_FIELD(arg0, u8 *, 0x8E) = (u8) M2C_FIELD(temp_r31, u8 *, 0x30);
            M2C_FIELD(arg0, s8 *, 0x8D) = (s8) current_language;
            if ((void *) TLobby__protocol_instance != NULL) {
                u8 *src = TLobby__protocol_instance + 0x1900;
                if ((u32) M2C_FIELD(src, u32 *, 4) != 0U) {
                    __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag((void *) (arg0), (void *) src);
                }
            }
        }
    }
}

}
