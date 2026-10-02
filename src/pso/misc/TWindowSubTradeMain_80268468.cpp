#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
void clear_flag__19TWindowSubTradeMainFPv(void* p);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 TWindowSubComCard__sub_8026906C(void);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);
s32 is_open__17TWindowSubComCardFPv();
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);

void clear_flag__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }

void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }

}
