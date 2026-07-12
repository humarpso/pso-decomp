#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TObjBoss5PillarFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
M2C_UNK TObjFish__sub_803DA798(void *);
s32 TObjPlayer__sub_801A85A0();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK fn_8028ADB0(int);
M2C_UNK fn_8028ADDC(int);

extern s32 lbl_805D4DDC;

void render__15TObjBoss5PillarFPv(u8 *arg0) {
    if (TObjPlayer__sub_801A85A0() == 0) {
        TObjPlayer__sub_803D9B2C();
        TObjFish__sub_803DA798((void *) (lbl_805D4DDC));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x2C));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 3) {
            fn_8028ADDC((int) (M2C_FIELD(arg0, s32 *, 0x48)));
            TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x38)), (int) (M2C_FIELD(arg0, s32 *, 0x40)), (f32) (M2C_FIELD(arg0, f32 *, 0x20)));
            fn_8028ADB0((int) (M2C_FIELD(arg0, s32 *, 0x48)));
        }
        TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x3C)), (int) (M2C_FIELD(arg0, s32 *, 0x44)), (f32) (M2C_FIELD(arg0, f32 *, 0x20)));
        TObjPlayer__sub_803D9B78();
    }
}

}
