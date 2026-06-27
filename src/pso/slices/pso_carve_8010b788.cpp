#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_8010B7F8(s16 *arg0, s32 arg1);
void fn_8010B818(void *arg0, s32 arg1);
void fn_8010B828(void *arg0, s32 arg1);
void fn_8010B838(s16 *arg0, s32 arg1);
int fn_8010B788(void* p);
int fn_8010B7B0(void* p);
s32 fn_8010B808(void* p);
s32 fn_8010B810(void* p);
int fn_8001BED8(void*, int);
int TAdRicoRing__sub_8001BEE8(void*, int);

int fn_8010B788(void* p) { return fn_8001BED8((char*)p + 0xc, 32); }
int fn_8010B7B0(void* p) { return TAdRicoRing__sub_8001BEE8((char*)p + 0xc, 32); }
int fn_8010B7D8(void) { return 0; }
int fn_8010B7E8(void) { return 0; }
void fn_8010B7F8(s16 *arg0, s32 arg1) {
    *arg0 -= arg1;
}
s32 fn_8010B808(void* p) { return *(s32*)((char*)p + 0x31c); }
s32 fn_8010B810(void* p) { return *(s32*)((char*)p + 0x318); }
void fn_8010B818(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) + arg1);
}
void fn_8010B828(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
}
void fn_8010B838(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
}
int fn_8010B848(void) { return 0; }
int fn_8010B8B0(void) { return 0; }

}
