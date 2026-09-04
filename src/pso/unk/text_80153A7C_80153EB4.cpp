#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjFogCollision__sub_80153F68(void);
int TObjFogCollision__sub_80153F70(void);
int TObjFogCollision__vt11(void);
s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1);
f32 TObjPlayer__sub_80141CF8(void *, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

extern const f32 lbl_805DB26C;

s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg1);
    if (temp_r3 != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
        temp_f31 = temp_f0 * temp_f0;
        temp_f1 = TObjPlayer__sub_80141CF8(arg0 + 0x38, temp_r3 + 0x38);
        if (temp_f31 > temp_f1) {
            return 1;
        }
        if ((lbl_805DB26C + temp_f31) < temp_f1) {
            M2C_FIELD(arg0, s32 *, 0x94) = 0x3C;
        }
        goto block_5;
    }
block_5:
    return 0;
}

int TObjFogCollision__vt11(void) { return 0; }

int TObjFogCollision__sub_80153F68(void) { return 0; }
int TObjFogCollision__sub_80153F70(void) { return 0; }

}
