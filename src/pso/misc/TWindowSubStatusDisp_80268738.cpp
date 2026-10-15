#include "types.h"

extern "C" {

void add_text_entry__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_open__17TWindowSubComCardFPv();
s32 get_entry_id__17TWindowSubComCardFPv();
s32 TWindowSubComCard__sub_8026906C(void);
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
void clear_flag__19TWindowSubTradeMainFPv(void* p);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);

void add_text_entry__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;

    temp_r4 = *(s16 *)((s8 *)arg0 + 0x72);
    if (temp_r4 < (s16) *(s16 *)((s8 *)arg0 + 0x76)) {
        set_text__20TWindowSubStatusDispFPvUii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2);
        *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
    }
}

}
