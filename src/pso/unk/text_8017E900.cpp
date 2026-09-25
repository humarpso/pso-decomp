#include "types.h"
typedef s32 M2C_UNK;
struct Self_8017E900 { u8 pad[0x38]; u8 pos[0x60 - 0x38]; s32 f60; u8 pad64[0xA8 - 0x64]; f32 fa8; };

extern "C" {
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
s32 TObjFish__sub_8001ED9C(void *, s32);
s32 TObjFish__sub_8001EDC4(void *, s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9B78();
extern void *lbl_805D5B10;
void fn_8017E900(Self_8017E900 *self);
}

extern "C" {

void fn_8017E900(Self_8017E900 *self) {
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(self->pos);
    TObjPlayer__sub_803D9214(0, self->f60);
    TObjContainerIdo__sub_803D96A8(0, -0x2000);
    TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(lbl_805D5B10, 0), TObjFish__sub_8001ED9C(lbl_805D5B10, 0), self->fa8);
    TObjPlayer__sub_803D9B78();
}

}
