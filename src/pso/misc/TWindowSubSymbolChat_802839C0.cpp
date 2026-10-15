#include "types.h"
#include "pso/misc/TWindowSubSymbolChatFaceType.h"

extern "C" {

s32 play_sound_effect(int, int, int, int);
s32 is_open__20TWindowSubSymbolChatFv();
s32 set_entry_state__20TWindowSubStatusDispFSc(s32, s32);

void TWindowSubSymbolChatFaceType::close_when_chat_closed() {
    u8 *arg0 = (u8 *)this;
    if (is_open__20TWindowSubSymbolChatFv() == 0) {
        play_sound_effect((int)(0x52F16), (int)(0), (int)(0), (int)(0));
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 2);
    }
}

void TWindowSubSymbolChatFaceType::confirm_selection() {
    play_sound_effect((int)(0x52D01), (int)(0), (int)(0), (int)(0));
    *(u8 *)((s8 *)this + 0x60) = (u8) (*(u8 *)((s8 *)this + 0x60) | 1);
    set_entry_state__20TWindowSubStatusDispFSc(*(s32 *)((s8 *)this + 0x68), 2);
}

}
