#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_open__17TWindowSubComCardFv();
s32 get_entry_id__17TWindowSubComCardFv();
s32 set_text__20TWindowSubStatusDispFUlll(s32, s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFUll(s32, s32, s32);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
void clear_flag__19TWindowSubTradeMainFv(void* p);
u32 alloc__23TAdSinglePlyChrSelectGCFv(s32);
void clear_flag70_bit80__19TWindowSubTradeMainFv(void* p);
s32 TWindowSubComCard__sub_8026906C(void);
s32 set_entry_state__20TWindowSubStatusDispFSc(s32 a0 = 0, s32 a1 = 0);
s32 get_array_entry__20TWindowSubStatusDispFi(void * a0 = 0, s16 a1 = 0);
void move_cursor_prev__20TWindowChoiceSettingFv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFv(void *arg0);
void request_close__20TWindowChoiceSettingFv(void *arg0);
void update_selected_entry__17TWindowSubComCardFv(void *arg0);

int TWindowSubStatusDisp::is_flag80_set() { return *(u16*)((char*)this + 0x0) & 0x80; }

}
