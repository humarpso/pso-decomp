#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_field_74__17TWindowSubComCardFPv(void* p);
int is_open__17TWindowSubComCardFPv(void* p);
void *TWindowCtrlMain__sub_8024CDD0(s32);
s32 find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(s32, s32, s32, s32);
int is_selected__20TWindowChoiceSettingFPv(void* p);

s16 get_field_74__17TWindowSubComCardFPv(void* p) { return *(s16*)((char*)p + 0x74); }

int is_open__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }

}
