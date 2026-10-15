#include "types.h"

extern "C" {

void close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0);
void confirm_selection__28TWindowSubSymbolChatFaceTypeFPv(void *arg0);
s32 play_sound_effect(int, int, int, int);
s32 is_open__20TWindowSubSymbolChatFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32, s32);

void close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0) {
    if (is_open__20TWindowSubSymbolChatFPv() == 0) {
        play_sound_effect((int)(0x52F16), (int)(0), (int)(0), (int)(0));
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 2);
    }
}

void confirm_selection__28TWindowSubSymbolChatFaceTypeFPv(void *arg0) {
    play_sound_effect((int)(0x52D01), (int)(0), (int)(0), (int)(0));
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(*(s32 *)((s8 *)arg0 + 0x68), 2);
}

}
