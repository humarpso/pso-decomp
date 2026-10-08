#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8007AE8C_TWindowGetComCard__data_80500158 {
    M2C_UNK value;
    u8 remaining[0x23C];
};

extern "C" {
s32 send_guild_card__17TWindowSubComCardFi(int);
s32 TWindowSubComCard__sub_8007B070(int);
s32 TWindowSubComCard__sub_8007B0D0(int, void *, int);
M2C_UNK TWindowSubComCard__sub_8007B1AC(int, void *, int);
M2C_UNK bswap_guild_card__17TWindowSubComCardFPv();
M2C_UNK TWindowSubShortMail__sub_8007B824();
extern RecoveredGlobal_8007AE8C_TWindowGetComCard__data_80500158 TWindowGetComCard__data_80500158;
void handle_6x06_send_guild_card(s32 arg0);
}

extern "C" {

void start_player_data_load__17TWindowSubComCardFi(s32 arg0);
s32 get_card_entry__17TWindowSubComCardFi(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8007ADB4(s32, s32, M2C_UNK);
M2C_UNK load_player_data__23TAdSinglePlyChrSelectGCFv();

void start_player_data_load__17TWindowSubComCardFi(s32 arg0) {
    u32 temp;
    if (TWindowSubComCard__sub_8007B070((int)(arg0)) == 0) {
        temp = (u32) get_card_entry__17TWindowSubComCardFi(0);
        TWindowSubComCard__sub_8007ADB4(arg0, (s32) temp, 0xD2);
        load_player_data__23TAdSinglePlyChrSelectGCFv();
    }
}
typedef char RecoveredGlobal_8007AE8C_TWindowGetComCard__data_80500158_size[sizeof(RecoveredGlobal_8007AE8C_TWindowGetComCard__data_80500158) == 0x240 ? 1 : -1];
void handle_6x06_send_guild_card(s32 arg0) {
    s32 temp_r31;
    bswap_guild_card__17TWindowSubComCardFPv();
    temp_r31 = arg0 + 4;
    if ((TWindowSubComCard__sub_8007B070((int)((int) (temp_r31))) == 0) && (send_guild_card__17TWindowSubComCardFi((int) (temp_r31)) == 0)) {
        TWindowSubShortMail__sub_8007B824();
        if (TWindowSubComCard__sub_8007B0D0((int) (temp_r31), (void *) (&TWindowGetComCard__data_80500158.value), (int) (4)) == 0) {
            TWindowSubComCard__sub_8007B1AC((int) (temp_r31), (void *) (&TWindowGetComCard__data_80500158.value), (int) (4));
        }
    }
}

}
