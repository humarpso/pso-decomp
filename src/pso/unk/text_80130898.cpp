#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjPlayer__sub_8012E1E8(int, void *, void *, void *, void *, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern s32 tl_05;
extern const f32 lbl_805DB014;
void TObjPlayer__sub_80130A30(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjPlayer__sub_80130A30(u8 *arg0, s32 arg1, s32 arg2) {
    f32 buffer_14[3];
    s32 buffer_8[3];
    s32 temp_r31;
    s32 temp_r8;
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
    if (temp_r3 != NULL) {
        temp_r31 = M2C_FIELD(temp_r3, s32 *, 0x60) - arg2;
        buffer_14[0] = TBoss8Dragon__sub_803D64C0((int) (temp_r31));
        buffer_14[1] = lbl_805DB014;
        buffer_14[2] = TBoss8Dragon__sub_803D64DC((int) (temp_r31));
        buffer_8[0] = 0x4000;
        temp_r8 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0x60);
        buffer_8[1] = temp_r8;
        buffer_8[2] = 0;
        TObjPlayer__sub_8012E1E8((int) (tl_05), (void *) (arg0), (void *) (arg1), (void *) (&buffer_14[0]), (void *) (&buffer_8[0]), (int) (temp_r8));
    }
}

}
