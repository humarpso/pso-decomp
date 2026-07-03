#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdMcSelectGC__sub_8032A154(void* p);
void TAdMcSelectGC__sub_8032A15C(void* p);
void TAdMcSelectGC__sub_8032A168(void* p, s32 v);
void TAdMcSelectGC__sub_8032A170(void* p, s32 v);
void TAdMcSelectGC__sub_8032A178(void* p, s32 v);
void TAdMcSelectGC__sub_8032A180(void* p, s32 v);
void TAdMcSelectGC__sub_8032A1B0(void* p, s32 v);
void TAdMcSelectGC__sub_8032A1B8(void* p, f32 v);
void TAdMcSelectGC__sub_8032A1C0(void* p, s32 v);
void TAdMcSelectGC__sub_8032A1C8(void* p, f32 v);

void TAdMcSelectGC__sub_8032A1B0(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void TAdMcSelectGC__sub_8032A1B8(void* p, f32 v) { *(f32*)((char*)p + 0x20) = v; }
void TAdMcSelectGC__sub_8032A1C0(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void TAdMcSelectGC__sub_8032A1C8(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }

}
