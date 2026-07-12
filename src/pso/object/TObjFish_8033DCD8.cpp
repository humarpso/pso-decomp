#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_effect__8TObjFishFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK TObjFish__sub_800E3074(int);
M2C_UNK TObjFish__sub_803DA798(int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4BC4();
M2C_UNK TObjPlayer__sub_803E4BD0();
M2C_UNK clear_render_callback__8TObjFishFv(int);

void render_effect__8TObjFishFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) >= 0x1AC) {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803E4BC4();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x58));
        TObjFish__sub_803DA798((int) (M2C_FIELD(arg0, s32 *, 0x44)));
        TObjFish__sub_800E3074((int) (M2C_FIELD(arg0, s32 *, 0x9C)));
        TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(arg0, s32 *, 0x40)), (int) (M2C_FIELD(arg0, s32 *, 0x48)), (f32) (M2C_FIELD(arg0, f32 *, 0x4C)));
        clear_render_callback__8TObjFishFv((int) (M2C_FIELD(arg0, s32 *, 0x9C)));
        TObjPlayer__sub_803E4BD0();
        TObjPlayer__sub_803D9B78();
    }
}

}
