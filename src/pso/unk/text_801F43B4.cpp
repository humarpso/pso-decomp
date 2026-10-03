#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
s32 is_quest_active();
u32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);
M2C_UNK notify_quest_thread__22THunterGuildSeqOfflineFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK memcpy(s32, M2C_UNK *, M2C_UNK);
extern u8 lbl_805127F8[4][128];
extern s32 lbl_805D5550;

void copy_card_window_data(void) {
    u32 temp_r3;

    if ((get_main_phase() != 0xF) && (is_not_split_screen__13TRaderMapCoreFv() != 1)) {
        if (is_quest_active() != 0) {
            notify_quest_thread__22THunterGuildSeqOfflineFv();
        }
        temp_r3 = get_card_window__17TWindowSubComCardFUi(0);
        if (temp_r3 != 0U) {
            memcpy(temp_r3 + 0x44, (M2C_UNK *)lbl_805127F8, 0x200);
        }
    }
}

s32 TLevelSelect__sub_801F441C(s32 n, s32 flag) {
    s32 v;
    s32 bit;
    s32 byteIdx;
    s32 shift;

    if (flag < 0 || flag > 0x3FF) return -1;
    if (n < 0 || n >= 4) return -1;
    v = flag + 1;
    byteIdx = v / 8;
    bit = v % 8;
    if (bit > 0) {
        shift = 8 - bit;
        return (lbl_805127F8[n][byteIdx] & (1 << shift)) >> shift;
    }
    return lbl_805127F8[n][byteIdx - 1] & 1;
}

s32 get_story_flag(s32 flag) {
    s32 v;
    s32 n;
    s32 byteIdx;
    s32 bit;
    s32 shift;

    if (flag < 0 || flag > 0x3FF) return -1;
    n = lbl_805D5550;
    if (n < 0 || n >= 4) return -1;
    v = flag + 1;
    byteIdx = v / 8;
    bit = v % 8;
    if (bit > 0) {
        shift = 8 - bit;
        return (lbl_805127F8[n][byteIdx] & (1 << shift)) >> shift;
    }
    return lbl_805127F8[n][byteIdx - 1] & 1;
}

}
