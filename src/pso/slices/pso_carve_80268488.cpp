#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8025B514(s32, s32, s32, s32);
s32 fn_8025B5AC(s32, s32, s32);
u32 fn_8007EB94(s32);
u32 fn_802880BC(u32, s32, s16);
s32 fn_8028783C(s32 a0 = 0, s32 a1 = 0);
s32 fn_8026906C(void);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
s32 fn_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 TWindowSubComCard__sub_80249604();
void TWindowSubComCard__sub_80268494(void *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
M2C_UNK fn_80269064();
void fn_80268468(void* p);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
int fn_80268488(void* p);

int fn_80268488(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }

}
