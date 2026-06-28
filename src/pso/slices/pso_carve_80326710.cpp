#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800112A4(s32, s16);
s32 fn_8001144C(s32, s16);
s16 obj_getS16_32E(s32);
s32 fn_802034EC();
void fn_80326794(void* p);

void fn_80326710(void *arg0) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;

    if (fn_802034EC() != 0) {
        temp_r3 = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x1FC) - temp_r3;
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s16 *, 0x1FC) = temp_r3;
        }
        if (temp_r0 > 0) {
            temp_r31 = temp_r0 / 2;
            fn_8001144C(M2C_FIELD(arg0, s32 *, 0xF0), (s16) temp_r31);
            fn_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), (s16) temp_r31);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 1);
}
void fn_80326794(void* p) { *(s16*)((char*)p + 0x1fc) = -1; *(s32*)((char*)p + 0x1f8) = 0; }

}
