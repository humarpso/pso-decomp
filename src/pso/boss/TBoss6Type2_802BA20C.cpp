#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss6Type2__sub_802BA220(void* a0 = 0, void* a1 = 0);
void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
int TBoss6PlotFalz__sub_802AAFCC(void*);
int is_falz_ready__11TBoss6Type2FPv(void* p);

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

int TBoss6Type2__sub_802BA220(void* a0, void* a1) { return 0; }

}
