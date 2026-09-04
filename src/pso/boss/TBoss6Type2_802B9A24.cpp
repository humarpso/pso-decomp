#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss6Type2__sub_802B9EE4(void);
int TBoss6Type2__sub_802B9F0C(void);
int TBoss6Type2__sub_802BA158(void);
int TBoss6Type2__sub_802BA180(void);
void init_parts__11TBoss6Type2FPv(void* p);
void set_fields_554__11TBoss6Type2FPv(void* p);
void unpack_path_entry__11TBoss6Type2FPvPv(u8 *arg0, s32 *arg1);
int TBoss6PlotFalz__sub_802AAFCC(void*);
M2C_UNK TBoss6Type2__sub_802B9994(int, int, void *, void *);
int TBoss6Type2__sub_802B9BBC(void*, void*);
void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
int is_falz_ready__11TBoss6Type2FPv(void* p);

void unpack_path_entry__11TBoss6Type2FPvPv(u8 *arg0, s32 *arg1) {
    *arg1 = (s32) (s16) ((s8) M2C_FIELD(arg0, u8 *, 2) << 8);
    TBoss6Type2__sub_802B9994((int) (M2C_FIELD(arg0, u8 *, 0)), (int) (M2C_FIELD(arg0, u8 *, 1)), (void *) ((u8 *) arg1 + 4), (void *) (arg0));
}

void init_parts__11TBoss6Type2FPv(void* p) { { int i; for (i = 0; i < 14; i++) { TBoss6Type2__sub_802B9BBC(p, (void*)i); } } }

void set_fields_554__11TBoss6Type2FPv(void* p) { *(s32*)((char*)p + 0x554) = 1; *(s32*)((char*)p + 0x558) = 1; }

int TBoss6Type2__sub_802B9EE4(void) { return 0; }
int TBoss6Type2__sub_802B9F0C(void) { return 0; }

int TBoss6Type2__sub_802BA158(void) { return 0; }
int TBoss6Type2__sub_802BA180(void) { return 0; }

}
