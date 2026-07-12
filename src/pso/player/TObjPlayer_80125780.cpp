#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_child_transform__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
s32 TObjPlayer__sub_80121200();

extern const f32 lbl_805DAD58;
extern const f32 lbl_805DAD5C;

void reset_child_transform__10TObjPlayerFPv(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    if (TObjPlayer__sub_80121200() == 1) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x188);
        if ((temp_r3 != NULL) && ((s32) M2C_FIELD(arg0, s32 *, 0x234) == 0)) {
            temp_r31 = M2C_FIELD(temp_r3, void **, 0x2C);
            if (temp_r31 != NULL) {
                M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, f32 *, 0x28) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFB);
                TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, void **, 0x188));
                M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 4);
                M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD5C;
                M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) lbl_805DAD5C;
                M2C_FIELD(temp_r31, f32 *, 0x28) = (f32) lbl_805DAD5C;
            }
        }
    }
}

}
