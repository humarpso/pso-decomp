#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TOMonumentAncient02Fv(u8 *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(s32, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK TParticleCtrl__sub_80088010(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();

void run_task__19TOMonumentAncient02Fv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
            TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0xE8));
        }
        return;
    case 1:
        if ((is_not_split_screen__13TRaderMapCoreFv() != 1) && ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 1)) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
            TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0xE8));
            return;
        }
        break;
    case 2:
        TOTrapAncient01__sub_80226578(M2C_FIELD(arg0, s32 *, 0xD4), arg0, arg0 + 0x38, 0, 0);
        break;
    }
}

}
