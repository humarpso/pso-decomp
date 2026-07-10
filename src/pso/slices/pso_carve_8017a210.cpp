#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern M2C_UNK lbl_80442F30;
extern s32 lbl_805D5550;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA7C;

void calc_trap_count__16TOTrapAncient02RFPv(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x360) = (s32) (M2C_FIELD(arg0, f32 *, 0x70) + ((lbl_805DBA7C * (f32) lbl_805D5550) + lbl_805DBA78));
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x360);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x360) = 0;
        return;
    }
    if ((s32) lbl_805D5550 == 3) {
        if (temp_r4 > 0x1D) {
            M2C_FIELD(arg0, s32 *, 0x360) = 0x1D;
        }
    } else if (temp_r4 > 0xE) {
        M2C_FIELD(arg0, s32 *, 0x360) = 0xE;
    }
}

}
