#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK init_forward__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80313138(void *);
M2C_UNK __construct_array(void *, void *, void *, int, int);
s32 TObjPlayer__sub_803966F8(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
s16 TObjPlayer__sub_801AA508(void* p);
u16 TObjPlayer__sub_801AA510(void* p);
void TObjPlayer__sub_801AA518(void* p, s16 v);
void TObjPlayer__sub_801AA520(void* p, s16 v);
u16 TObjPlayer__sub_801AA664(void* p);

s32 init_arrays__10TObjPlayerFi(s32 arg0) {
    init_forward__10TObjPlayerFPv((void *) (arg0 + 4));
    __construct_array((void *) (arg0 + 8), (void *) (&TObjPlayer__sub_801AA61C), (void *) (&TObjPlayer__sub_801AA584), (int) (4), (int) (4));
    TObjPlayer__sub_80313138((void *) (arg0));
    return arg0;
}

}

}
