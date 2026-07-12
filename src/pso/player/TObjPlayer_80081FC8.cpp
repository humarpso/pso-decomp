#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__10TObjPlayerFUiii(u32 arg0, s32 arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_8008213C(u32, u32, s32, s32);
s32 TObjPlayer__sub_802034EC();
u32 __nw__7TObjectFUl(M2C_UNK);
u16 obj_getField1c(u32);

void create__10TObjPlayerFUiii(u32 arg0, s32 arg1, s32 arg2) {
    u16 temp_r3;

    u32 obj;
    if ((TObjPlayer__sub_802034EC() != 0) && (arg0 != 0U)) {
        temp_r3 = obj_getField1c(arg0);
        if (((u16) temp_r3 != 0xFFFF) && ((u16) temp_r3 < 0x4000U) && ((obj = __nw__7TObjectFUl(0x368)) != 0U)) {
            TObjPlayer__sub_8008213C(obj, arg0, arg1, arg2);
        }
    }
}

}
