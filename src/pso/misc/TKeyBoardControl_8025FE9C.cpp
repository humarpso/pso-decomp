#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TKeyBoardControl__sub_8025FE9C(void *arg0);
void TKeyBoardControl__sub_8025FEEC(void *arg0);
void TKeyBoardControl__sub_8025FF3C(void *arg0);
M2C_UNK TKeyBoardControl__sub_8025CBC0(u32);
M2C_UNK fn_8025CBCC(u32);
M2C_UNK fn_8025CC04(u32);
M2C_UNK fn_8025FF8C(void *);

void TKeyBoardControl__sub_8025FE9C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x1000);
        TKeyBoardControl__sub_8025CBC0(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

void TKeyBoardControl__sub_8025FEEC(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x800);
        fn_8025CBCC(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

void TKeyBoardControl__sub_8025FF3C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x400);
        fn_8025CC04(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

}
