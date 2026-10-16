#include "types.h"
#include "pso/misc/TWindowSubSymbolChatFaceType.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 play_sound_effect(int, int, int, int);
s32 is_open__20TWindowSubSymbolChatFv();

void TWindowSubSymbolChatFaceType::close_when_chat_closed() {
    u8 *arg0 = (u8 *)this;
    if (is_open__20TWindowSubSymbolChatFv() == 0) {
        play_sound_effect((int)(0x52F16), (int)(0), (int)(0), (int)(0));
        this->m_60 = (u8) (this->m_60 | 2);
    }
}

void TWindowSubSymbolChatFaceType::confirm_selection() {
    play_sound_effect((int)(0x52D01), (int)(0), (int)(0), (int)(0));
    this->m_60 = (u8) (this->m_60 | 1);
    ((TWindowSubStatusDisp *)(*(s32 *)&this->m_68))->set_entry_state(2);
}

}
