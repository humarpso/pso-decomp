#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__18TObjButterflyLobbyFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjDoor__sub_803DC894(int, void *, f32);
s32 TObjFish__sub_8001ED9C(void *, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D6EB8;

void render__18TObjButterflyLobbyFPv(u8 *arg0) {
    f32 temp_f1;

    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (-0x2000));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 3) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
    }
    TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0xC4)), (void *) (TObjFish__sub_8001ED9C((void *) (lbl_805D6EB8), (int) (0))), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
    TObjPlayer__sub_803D9B78();
}

}
