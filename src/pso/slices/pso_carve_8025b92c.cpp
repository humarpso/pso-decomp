#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
int TWindowSubComCard__sub_8025B850(void* p);
s32 TWindowKeyBoardSoft__sub_8025B8C8(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

int TWindowKeyBoardSoft__sub_8025B92C(void) { return 0; }

}
