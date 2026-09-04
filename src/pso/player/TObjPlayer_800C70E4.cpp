#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 find_target_in_range__10TObjPlayerFPvf(void *arg0, f32 farg0);
u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32);
u8 TObjPlayer__sub_800C6FFC(void *, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 obj_testFlags30(void *, M2C_UNK);

u8 find_target_in_range__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    if (obj_testFlags30(arg0, 0x10) != 0) {
        return TObjPlayer__sub_800C6FFC(arg0, farg0);
    }
    M2C_FIELD(arg0, u16 *, 0x338) = TObjPlayer__sub_800115C4(arg0, 0, farg0);
    M2C_FIELD(arg0, s32 *, 0x2A8) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x338));
    return (u8) (M2C_FIELD(arg0, s32 *, 0x2A8) != 0);
}

}
