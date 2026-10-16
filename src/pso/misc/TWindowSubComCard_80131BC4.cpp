#include "types.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowKeyBoardSoft.h"
#include "pso/misc/TWindowMakeTeam.h"

extern "C" {

s32 export_keyboard_text(s32, s32);
s32 mem_alloc();
int is_active__16TKeyBoardControlFv(void*);
int is_key_active__16TKeyBoardControlFv(void*);

s32 TWindowSubComCard::realloc_buffer() {
    s32 temp_r3;

    ((TWindowKeyBoardSoft *)(*(s32 *)&this->m_20))->measure_text_overflow();
    temp_r3 = mem_alloc();
    export_keyboard_text(*(s32 *)&this->m_20, temp_r3);
    return temp_r3;
}

int TWindowSubComCard::is_keyboard_active() { return is_active__16TKeyBoardControlFv(*(void* *)&this->m_20); }
int TWindowSubComCard::update_keyboard() { return is_key_active__16TKeyBoardControlFv(*(void* *)&this->m_20); }

}
