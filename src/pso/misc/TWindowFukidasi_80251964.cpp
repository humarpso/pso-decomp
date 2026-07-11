#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_color__15TWindowFukidasiFPvUs(void *arg0, u16 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);

s32 obj_isState3_324();
extern M2C_UNK lbl_8044ED18[];

void set_color__15TWindowFukidasiFPvUs(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = 0xFFF8F8F8;
    if (((u32)arg1 < 0xCU) && (TPlayerBattleCtrl4P__sub_801BA74C((u32)arg1) != 0U) && (obj_isState3_324() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) lbl_8044ED18[(u16)arg1];
    }
}

}
