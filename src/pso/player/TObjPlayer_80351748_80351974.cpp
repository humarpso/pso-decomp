#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 TObjPlayer__sub_803519D8(u8 *arg0, s32 arg1);
u8 fn_803519FC(s32 *arg0, s32 arg1);
u8 fn_803519FC(s32 *arg0, s32 arg1);
}

extern "C" {

int TObjPlayer__sub_80351974(void);
int fn_80351A14(void);
int get_flag_1__10TObjPlayerFPv(void* p);
int is_grounded__10TObjPlayerFPv(void* p);
int __dl__FPv();
s32 dt__10TObjPlayerFis(s32 arg0, s16 arg1);

int TObjPlayer__sub_80351974(void) { return 0; }

int get_flag_1__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x4) >> 1) & 0x1; }

u8 TObjPlayer__sub_803519D8(u8 *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 8) & arg1) != 0);
}

int is_grounded__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0x4) & 0x1; }

u8 fn_803519FC(s32 *arg0, s32 arg1) {
    return (u8) ((*arg0 & arg1) != 0);
}

int fn_80351A14(void) { return 0; }

}
