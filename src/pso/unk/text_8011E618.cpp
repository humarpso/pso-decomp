#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TObjPlayer__sub_801012DC(void *, s32);
s32 rand__11TOBoss4RockFv(void);
extern const f32 lbl_805DAC8C;
void TObjPlayer__sub_8011E618(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8011E618(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C0) = (s32) M2C_FIELD(arg0, s32 *, 0x1BC);
    TObjPlayer__sub_801012DC(arg0, (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x1C4) * (lbl_805DAC8C * (f32) rand__11TOBoss4RockFv())));
}

}
