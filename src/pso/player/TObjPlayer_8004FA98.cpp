#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8004FA98(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4BC4();
M2C_UNK TObjPlayer__sub_803E4BD0();
M2C_UNK fn_80052374();
M2C_UNK fn_80052390(f32);

extern const f32 lbl_805D8A08;

void TObjPlayer__sub_8004FA98(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) >= 0xB4) {
        fn_80052390(lbl_805D8A08);
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803E4BC4();
        TOHangerMachine01__sub_803D9C00(arg0 + 0xD4);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xE0));
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0xCC));
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x108));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE8));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x108));
        TObjPlayer__sub_803E4BD0();
        TObjPlayer__sub_803D9B78();
        fn_80052374();
    }
}

}
