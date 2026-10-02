#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0);
void confirm_selection__28TWindowSubSymbolChatFaceTypeFPv(void *arg0);
M2C_UNK play_sound_effect(int, int, int, int);
s32 is_open__20TWindowSubSymbolChatFPv();
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

void close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0) {
    if (is_open__20TWindowSubSymbolChatFPv() == 0) {
        play_sound_effect((int)(0x52F16), (int)(0), (int)(0), (int)(0));
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

void confirm_selection__28TWindowSubSymbolChatFaceTypeFPv(void *arg0) {
    play_sound_effect((int)(0x52D01), (int)(0), (int)(0), (int)(0));
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x68), 2);
}

}
