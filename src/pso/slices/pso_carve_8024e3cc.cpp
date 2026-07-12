#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * get_array_entry__20TWindowSubStatusDispFPvi(s32 a0 = 0, s32 a1 = 0);
void TWindowDeposit__sub_8024E434(void *arg0, s32 arg1);
M2C_UNK fn_80287580(s32, s32, M2C_UNK, f32);
int TWindowDD__sub_8024664C(void*);
int fn_80257C28(void*, void*);
void fn_8024E3CC(void);
void fn_8024E3D0(void);
int fn_8024E3D4(void* p);
int fn_8024E3E0(void* p);
void TWindowMainMenu__vt4(void);
void TWindowMainMenu__vt6(void);
int fn_8024E3F4(void* p);

void fn_8024E3CC(void) {  }
void fn_8024E3D0(void) {  }
int fn_8024E3D4(void* p) { return (*(u32*)((char*)p + 0x4c) >> 3) & 0x1; }
int fn_8024E3E0(void* p) { return *(u32*)((char*)p + 0x4c) & 0x1; }

}
