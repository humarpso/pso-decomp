#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowDD__sub_80341AC0(void);
void set_mode_2__9TWindowDDFPv(void* p);
void reset_cursor__9TWindowDDFPv(void* p);

void set_mode_2__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x64) = 2; }
void reset_cursor__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x64) = 0; }

}
