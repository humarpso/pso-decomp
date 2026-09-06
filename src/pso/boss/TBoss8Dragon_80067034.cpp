#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TBoss8Dragon__sub_8028B0DC(void *, s32, s32);
extern u8 *lbl_805D4DE0;
void TBoss8Dragon__sub_800670E0(s32 arg0, s32 arg1);
s32 TBoss8Dragon__sub_80289710(int, void *, void *);
s32 TBoss8Dragon__sub_8028A900(int, void *, void *);
extern u8 *lbl_805D4DE0;
void TBoss8Dragon__sub_80067074(s32 arg0, s32 arg1);
}

extern "C" {

f32 calc_sq_offset__12TBoss8DragonFPvf(void *arg0, f32 farg0);

f32 calc_sq_offset__12TBoss8DragonFPvf(void *arg0, f32 farg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 8) + farg0;
    return temp_f0 * temp_f0;
}

void TBoss8Dragon__sub_80067074(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u32 temp_r3_2;
    if ((void *) lbl_805D4DE0 != NULL) {
        temp_r3 = M2C_FIELD(lbl_805D4DE0, u32 *, 0x1C);
        if (temp_r3 != 0U) {
            TBoss8Dragon__sub_8028A900((int) (temp_r3), (void *) (arg0), (void *) (arg1));
        }
        temp_r3_2 = M2C_FIELD(lbl_805D4DE0, u32 *, 0x20);
        if (temp_r3_2 != 0U) {
            TBoss8Dragon__sub_80289710((int) (temp_r3_2), (void *) (arg0), (void *) (arg1));
        }
    }
}

void TBoss8Dragon__sub_800670E0(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    if ((void *) lbl_805D4DE0 != NULL) {
        temp_r3 = (u8 *)(M2C_FIELD(lbl_805D4DE0, u8 **, 0x24));
        if (temp_r3 != NULL) {
            TBoss8Dragon__sub_8028B0DC(temp_r3, arg0, arg1);
        }
    }
}

}
