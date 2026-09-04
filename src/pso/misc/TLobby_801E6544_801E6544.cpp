#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void append_card_window_text__6TLobbyFv(void);
void capture_chat_sensor__6TLobbyFi(s32 arg0);
s32 parse_f_index(s32 a0);
int TAdEnterSerialAccessGC__sub_8039C8A0(M2C_UNK, M2C_UNK *, ...);
M2C_UNK TOChatSensorCapture__sub_8015A99C(u16, s32);
M2C_UNK TOChatSensor__sub_8015B108();
M2C_UNK append_string(void *);
u32 get_card_window__17TWindowSubComCardFUi(int);

extern s32 lbl_805D53A0;

void capture_chat_sensor__6TLobbyFi(s32 arg0) {
    TOChatSensor__sub_8015B108();
    TOChatSensorCapture__sub_8015A99C((u16) lbl_805D53A0, arg0);
}

extern M2C_UNK lbl_80449C6C[];

void append_card_window_text__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi((int) (0xFFFF));
    if (temp_r3 != 0U) {
        append_string((void *) (temp_r3 + 0x2254));
        return;
    }
    append_string((void *) (lbl_80449C6C));
}

extern M2C_UNK lbl_805DC4A4;

s32 parse_f_index(s32 a0) {
    s32 sp8;

    sp8 = -1;
    TAdEnterSerialAccessGC__sub_8039C8A0(a0, &lbl_805DC4A4, &sp8);
    if ((sp8 < 0x100) && (sp8 >= 0)) {
        return sp8;
    }
    return -1;
}

}
