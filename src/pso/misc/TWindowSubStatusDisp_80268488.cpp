#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowSubStatusDisp__sub_80268488(void* p);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 TWindowSubComCard__sub_80249604();
M2C_UNK TWindowSubComCard__sub_80269064();
s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
void TWindowSubTradeMain__sub_80268468(void* p);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
s32 fn_8026906C(void);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);

int TWindowSubStatusDisp__sub_80268488(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }

}
