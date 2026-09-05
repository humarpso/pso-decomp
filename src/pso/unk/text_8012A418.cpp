#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s8 TObjPlayer__sub_80102C30();
M2C_UNK TObjPlayer__sub_8011F7CC(void *, u32, u32, s32, s32, f32);
M2C_UNK TObjPlayer__sub_8012A508(void *, u32, s32);
void TObjPlayer__sub_8012A5E8(void *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, f32 farg0);
}

extern "C" {

void TObjPlayer__sub_8012A5E8(void *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    u32 f;
    if (TObjPlayer__sub_80102C30() == 2) {
        f = M2C_FIELD(arg0, u32 *, 0xF0);
        if ((f != 0U) && (arg2 != 0U)) {
            switch (M2C_FIELD(arg0, s32 *, 0x1F8)) {
            case 1:
            case 2:
                if (arg3 == 2) {
                    TObjPlayer__sub_8012A508(arg0, arg2, arg4);
                } else {
                    TObjPlayer__sub_8011F7CC(arg0, f, arg2, arg3, arg4, farg0);
                }
                break;
            default:
                TObjPlayer__sub_8011F7CC(arg0, f, arg2, arg3, arg4, farg0);
                break;
            }
        }
    }
}

}
