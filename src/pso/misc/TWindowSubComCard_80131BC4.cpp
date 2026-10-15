#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 export_keyboard_text(s32, s32);
s32 measure_text_overflow__19TWindowKeyBoardSoftFv(s32);
s32 mem_alloc();
int get_field_6c__19TWindowKeyBoardSoftFv(void*);
int get_keyboard_field_6c__15TWindowMakeTeamFv(void* p);
int is_active__16TKeyBoardControlFPv(void*);
int is_key_active__16TKeyBoardControlFPv(void*);

s32 TWindowSubComCard::realloc_buffer() {
    s32 temp_r3;

    measure_text_overflow__19TWindowKeyBoardSoftFv(*(s32 *)((s8 *)this + 0x20));
    temp_r3 = mem_alloc();
    export_keyboard_text(*(s32 *)((s8 *)this + 0x20), temp_r3);
    return temp_r3;
}

int TWindowSubComCard::is_keyboard_active() { return is_active__16TKeyBoardControlFPv(*(void**)((char*)this + 0x20)); }
int TWindowSubComCard::update_keyboard() { return is_key_active__16TKeyBoardControlFPv(*(void**)((char*)this + 0x20)); }

}
