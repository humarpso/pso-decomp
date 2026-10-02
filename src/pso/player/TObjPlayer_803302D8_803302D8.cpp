#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802BD340(int);
M2C_UNK TBoss6Type2__sub_803301B8(void *, int);
extern const f32 lbl_805DF7F4;
void TObjPlayer__sub_8033030C(u8 *arg0);
}

extern "C" {

f32 get_conditional_rate__10TObjPlayerFPv(void *arg0);
f32 TObjPlayer__sub_80014108();

extern f32 lbl_805DF7FC;

f32 get_conditional_rate__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) != 0) {
        return TObjPlayer__sub_80014108();
    }
    return lbl_805DF7FC;
}
void TObjPlayer__sub_8033030C(u8 *arg0) {
    switch (M2C_FIELD(arg0, s32 *, 0x380)) {
    case 3:
    case 4:
    case 5:
        return;
    default:
        TBoss6Type2__sub_802BD340((int) (M2C_FIELD(arg0, s32 *, 0x378)));
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) lbl_805DF7F4;
        TBoss6Type2__sub_803301B8((void *) (arg0), (int) (4));
        play_sound_effect((int) (0x69E17), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    }
}

}
