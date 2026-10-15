#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_open__17TWindowSubComCardFv();
s32 get_entry_id__17TWindowSubComCardFv();
s32 TWindowSubComCard__sub_8026906C(void);
int is_flag80_set__20TWindowSubStatusDispFv(void* p);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
void clear_flag__19TWindowSubTradeMainFv(void* p);
u32 alloc__23TAdSinglePlyChrSelectGCFv(s32);
void clear_flag70_bit80__19TWindowSubTradeMainFv(void* p);
s32 get_array_entry__20TWindowSubStatusDispFi(void * a0 = 0, s16 a1 = 0);
void move_cursor_prev__20TWindowChoiceSettingFv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFv(void *arg0);
void request_close__20TWindowChoiceSettingFv(void *arg0);
s32 set_entry_state__20TWindowSubStatusDispFSc(s32 a0 = 0, s32 a1 = 0);
s32 set_text__20TWindowSubStatusDispFUll(s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFUlll(s32, s32, s32, s32);
void update_selected_entry__17TWindowSubComCardFv(void *arg0);

void TWindowSubStatusDisp::add_text_entry(s32 arg1, s32 arg2) {
    s16 temp_r4;

    temp_r4 = *(s16 *)((s8 *)this + 0x72);
    if (temp_r4 < (s16) *(s16 *)((s8 *)this + 0x76)) {
        set_text__20TWindowSubStatusDispFUll(get_array_entry__20TWindowSubStatusDispFi(this, temp_r4), arg1, arg2);
        *(s16 *)((s8 *)this + 0x72) = (s16) (*(s16 *)((s8 *)this + 0x72) + 1);
    }
}

}
