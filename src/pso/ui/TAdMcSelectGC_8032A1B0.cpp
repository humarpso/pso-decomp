#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_slot_index__13TAdMcSelectGCFPv(void* p);
void TAdMcSelectGC__sub_8032A15C(void* p);
void set_field_13c__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field_0x1c__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_select_index__13TAdMcSelectGCFPvi(void* p, s32 v);
void TAdMcSelectGC__sub_8032A180(void* p, s32 v);
void set_field_24__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field20__13TAdMcSelectGCFPvf(void* p, f32 v);
void set_field_20__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_float_1c__13TAdMcSelectGCFPvf(void* p, f32 v);

void set_field_24__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void set_field20__13TAdMcSelectGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x20) = v; }
void set_field_20__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void set_float_1c__13TAdMcSelectGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }

}
