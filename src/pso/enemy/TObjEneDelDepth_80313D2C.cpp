#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_cast__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
s32 get_flag_bit4__15TObjEneDelDepthFPv(void *);
M2C_UNK create_ex__9TTecBartaFPvPvPvPv(void *, void *, int, int);
M2C_UNK create_ex__9TTecMegidFiiii(void *, void *, int, int);

extern s32 lbl_805D5550;
extern u8 *TObjEneDelDepth__data_805D6AC0;

void update_attack_cast__15TObjEneDelDepthFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388);
    if ((temp_r0 <= 0) && (temp_r0 == 0)) {
        if ((s32) lbl_805D5550 == 3) {
            create_ex__9TTecMegidFiiii((void *) (arg0), (void *) (arg0 + 0x38), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(TObjEneDelDepth__data_805D6AC0, s32 *, 0x18)));
        } else {
            create_ex__9TTecBartaFPvPvPvPv((void *) (arg0), (void *) (arg0 + 0x38), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(TObjEneDelDepth__data_805D6AC0, s32 *, 0x18)));
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
    M2C_FIELD(arg0, s32 *, 0x384) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (get_flag_bit4__15TObjEneDelDepthFPv((void *) (arg0)) != 0) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (7));
            return;
        }
        TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (5));
    }
}

}
