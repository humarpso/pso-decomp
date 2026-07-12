#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012703C(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
u8 TItemProShield__sub_8010B734();
M2C_UNK TObjPlayer__sub_8011E2FC(void *, f32);
s32 TObjPlayer__sub_8011E384(void *);
M2C_UNK TObjPlayer__sub_8011EDFC(void *, M2C_UNK, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_8011F5E0(void *);

extern f32 lbl_805DADB0;
extern f32 lbl_805DADB4;

void TObjPlayer__sub_8012703C(void *arg0) {
    if (TItemProShield__sub_8010B734() == 0) {
        if (TObjPlayer__sub_8011E384(arg0) != 0) {
            TObjPlayer__sub_8011E2FC(arg0, lbl_805DADB0);
            TObjPlayer__sub_8011EDFC(arg0, 0, 1, lbl_805DADB4);
            TBoss3Volopt__sub_8022675C(0x4001A341, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            return;
        }
        TObjPlayer__sub_8011F5E0(arg0);
        return;
    }
    TObjPlayer__sub_8011F5E0(arg0);
}

}
