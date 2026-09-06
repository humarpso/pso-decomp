#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80156844(void *, void *, M2C_UNK);
void TObjEneMe1GiGue__sub_802CACD8(u8 *arg0);
s32 TObjEneMe1GiGue__sub_802CDAC4(M2C_UNK, s32);
f32 TObjEneMe1GiGue__sub_802CDAD8(M2C_UNK, s32);
extern f32 lbl_805D6840;
extern f32 lbl_805D6844;
extern f32 lbl_805D6848;
extern f32 lbl_805D684C;
extern s32 lbl_805D6850;
extern s32 lbl_805D6854;
extern const f32 lbl_805DE668;
void TObjEneMe1GiGue__sub_802CAF24(s32 arg0);
}

extern "C" {

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0);
s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1);
int get_barrier_count__15TObjEneMe1GiGueFv(void);
void update_direction__15TObjEneMe1GiGueFPv(void *arg0);
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

#pragma push
#pragma fp_contract on
void TObjEneMe1GiGue__sub_802CACD8(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (temp_r4 & 0x40000) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFFFBFFFF);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        TObjPlayer__sub_80156844(arg0, arg0 + 0x38, 0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 7) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
    }
}
#pragma pop

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        TObjEneMe1GiGue__sub_802CACD8((u8 *)(arg0));
        return 1;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
void TObjEneMe1GiGue__sub_802CAF24(s32 arg0) {
    lbl_805D6840 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 1);
    lbl_805D6844 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 2);
    lbl_805D6848 = TObjEneMe1GiGue__sub_802CDAD8(arg0, 3);
    lbl_805D684C = TObjEneMe1GiGue__sub_802CDAD8(arg0, 4);
    lbl_805D6850 = TObjEneMe1GiGue__sub_802CDAC4(arg0, 0);
    lbl_805D6854 = TObjEneMe1GiGue__sub_802CDAC4(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x44C) = (s32) (lbl_805DE668 * (f32) TObjEneMe1GiGue__sub_802CDAC4(arg0, 3));
    M2C_FIELD(arg0, s32 *, 0x450) = TObjEneMe1GiGue__sub_802CDAC4(arg0, 4);
}
#pragma pop

void update_direction__15TObjEneMe1GiGueFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x438) = get_pos_x__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
    M2C_FIELD(arg0, s32 *, 0x434) = get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
}

}
