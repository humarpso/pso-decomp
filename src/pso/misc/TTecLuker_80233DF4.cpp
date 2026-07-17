#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TTecLuker__sub_80233DF4(int arg0, s32 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK create__9TTecLukerFPvPvPvPv(s32, s32, s32, M2C_UNK);

void TTecLuker__sub_80233DF4(int arg0, s32 arg1) {
    u32 r = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg0);
    if (r != 0U) {
        create__9TTecLukerFPvPvPvPv(r, arg1, arg1, 0xA);
    }
}

}
