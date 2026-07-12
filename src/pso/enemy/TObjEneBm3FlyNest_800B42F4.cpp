#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm3FlyNest__sub_800B42F4(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK TObjFish__sub_803DA798(s32, void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4BC4();
M2C_UNK TObjPlayer__sub_803E4BD0();

extern u8 *lbl_805D5108;

void TObjEneBm3FlyNest__sub_800B42F4(u8 *arg0) {
    TObjFish__sub_803DA798(M2C_FIELD(M2C_FIELD(lbl_805D5108, void **, 0x42C), s32 *, 0xC), lbl_805D5108);
    TObjPlayer__sub_803D9B2C();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        TOHangerMachine01__sub_803D9C00(M2C_FIELD(arg0, void **, 0x30));
    } else {
        TOHangerMachine01__sub_803D9C00(M2C_FIELD(arg0, void **, 0x34));
    }
    TOHangerMachine01__sub_803D9C00(arg0 + 0x1C);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x40));
    TObjPlayer__sub_803E4BC4();
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(M2C_FIELD(lbl_805D5108, void **, 0x42C), s32 *, 8), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x4C));
    TObjPlayer__sub_803E4BD0();
    TObjPlayer__sub_803D9B78();
}

}
