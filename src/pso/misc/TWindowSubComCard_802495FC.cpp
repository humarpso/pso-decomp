#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TWindowSubComCard__sub_802495FC(void* p);
int TWindowChoiceSetting__sub_80249610(void* p);
void *TWindowCtrlMain__sub_8024CDD0(s32);
s32 TWindowFukidasi__sub_80244DFC(s32, s32, s32, s32);
int is_open__17TWindowSubComCardFPv(void* p);

s16 TWindowSubComCard__sub_802495FC(void* p) { return *(s16*)((char*)p + 0x74); }

}
