#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_condition_flags__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK TNpcPlayer__sub_8014E33C(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_8014FAB0(s32);
s32 check_and_set_reached__10TNpcPlayerFPv(s32, f32);
M2C_UNK TNpcPlayer__sub_8014FEAC(s32);
M2C_UNK TNpcPlayer__sub_801528B8(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_801528C8(void *, M2C_UNK);
s16 TNpcPlayer__sub_801528F4(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_80152900(void *, M2C_UNK, M2C_UNK);
s32 TNpcPlayer__sub_80152980(s32);

extern const f32 lbl_805DB240;

void update_condition_flags__10TNpcPlayerFPv(u8 *arg0) {
    TNpcPlayer__sub_8014FEAC(M2C_FIELD(arg0, s32 *, 0x74));
    TNpcPlayer__sub_8014FAB0(M2C_FIELD(arg0, s32 *, 0x74));
    if (TNpcPlayer__sub_80152980(M2C_FIELD(arg0, s32 *, 0x74)) & 2) {
        if (TNpcPlayer__sub_801528F4(arg0 + 0x5C, 0xA) == 0) {
            TNpcPlayer__sub_8014E33C(arg0, 9);
        }
        TNpcPlayer__sub_801528C8(arg0 + 0x5C, 0xA);
    } else {
        TNpcPlayer__sub_801528B8(arg0 + 0x5C, 0xA);
    }
    if (check_and_set_reached__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74), lbl_805DB240) != 0) {
        if (TNpcPlayer__sub_80152980(M2C_FIELD(arg0, s32 *, 0x74)) & 8) {
            if (TNpcPlayer__sub_801528F4(arg0 + 0x5C, 9) == 0) {
                TNpcPlayer__sub_8014E33C(arg0, 0xC);
            }
            TNpcPlayer__sub_801528C8(arg0 + 0x5C, 8);
            TNpcPlayer__sub_80152900(arg0 + 0x5C, 9, 0x2BC);
            return;
        }
        TNpcPlayer__sub_801528B8(arg0 + 0x5C, 9);
    }
}

}
