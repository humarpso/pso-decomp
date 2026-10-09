#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TKeyBoardControl__sub_8025CC3C(u32);
extern s32 current_language;
void fn_8025FF8C(void *arg0);
}

extern "C" {

void fn_8025FF8C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x40);
        TKeyBoardControl__sub_8025CC3C(M2C_FIELD(arg0, u32 *, 0x70));
        switch ((s32) current_language) {
        case 0:
        case 1:
            break;
        case 2:
        case 3:
        case 4:
            M2C_FIELD(arg0, s32 *, 0x6C) = 7;
            break;
        }
    }
}

}
