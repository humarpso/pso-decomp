#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0);
s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1);
int get_barrier_count__15TObjEneMe1GiGueFv(void);
void update_direction__15TObjEneMe1GiGueFPv(void *arg0);
M2C_UNK TObjEneMe1GiGue__sub_802CACD8(s32);
s32 TObjPlayer__sub_80016FF8();
s32 *csnVectorUnder(s32, s32, M2C_UNK, s32);
s32 get_field_0c__10TObjPlayerFPv(s32);
f32 get_pos_x__10TObjPlayerFPv(s32);

    extern int TObjEneMe1GiGue__data_805D6838;
int get_barrier_count__15TObjEneMe1GiGueFv(void) {  return TObjEneMe1GiGue__data_805D6838; }

s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = csnVectorUnder(arg1, arg0 + 0x120, 5, arg0);
    if (temp_r3 == NULL) {
        return 0;
    }
    return (u32)__cntlzw(*temp_r3 & 4) >> 5;
}

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        TObjEneMe1GiGue__sub_802CACD8(arg0);
        return 1;
    }
    return 0;
}

void update_direction__15TObjEneMe1GiGueFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x438) = get_pos_x__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
    M2C_FIELD(arg0, s32 *, 0x434) = get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
}

}
