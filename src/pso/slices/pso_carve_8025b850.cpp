#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
int fn_8025B850(void* p);
s32 fn_8025B8C8(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

int fn_8025B850(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }
int fn_8025B85C(void) { return 0; }
s32 fn_8025B8C8(void* p) { return *(s32*)((char*)p + 0x70); }
int TWindowKeyBoardSoft__vt2(void) { return 0; }

}
