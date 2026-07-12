#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800A1900(s32 arg0);
void TObjPlayer__sub_800A1974(void);
M2C_UNK TOHangerMachine01__sub_803D9C00(s32);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
s32 TObjPlayer__sub_800A3224(s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 obj_testFlags30(s32, s32);

extern s32 lbl_805D5014;
extern s32 lbl_805D5018;
extern s32 lbl_805D501C;

void TObjPlayer__sub_800A1900(s32 arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        if (TObjPlayer__sub_800A3224(arg0) == 0) {
            TObjFish__sub_803DA798(lbl_805D5014);
        } else {
            TObjFish__sub_803DA798(lbl_805D5018);
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x3B4);
        TObjFish__sub_803E46BC(lbl_805D501C);
        TObjPlayer__sub_803D9B78();
    }
}

void TObjPlayer__sub_800A1974(void) {  }

}
