#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800C6A18(void *);
M2C_UNK TObjPlayer__sub_800D7BB0(void *);
s32 TNpcPlayer__sub_800D87EC(int);
f32 fn_8013157C(void *, void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK TObjEneMe1GiGue__sub_802CAF24(void *);
M2C_UNK TObjEneMe1GiGue__sub_802CB6D4(void *);
M2C_UNK TObjEneMe1GiGue__sub_802CD054(void *);
M2C_UNK TObjEneMe1GiGue__sub_802CD2EC(void *);
extern const f32 TObjEneMe1GiGue__data_805DE6A4;
extern const f32 TObjEneMe1GiGue__data_805DE6A8;
extern const f32 lbl_805DE6B8;
extern const f32 lbl_805DE6BC;

void TObjEneMe1GiGue__sub_802CD390(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjEneMe1GiGue__sub_802CAF24((void *) (arg0));
        TObjEneMe1GiGue__sub_802CD054((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2A8) = TNpcPlayer__sub_800D87EC((int) (M2C_FIELD(arg0, u16 *, 0x338)));
    TObjPlayer__sub_800C6A18((void *) (arg0));
    TObjEneMe1GiGue__sub_802CB6D4((void *) (arg0));
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjEneMe1GiGue__sub_802CD2EC((void *) (arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjEneMe1GiGue__sub_802CD2EC((void *) (arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        TObjEneMe1GiGue__sub_802CD2EC((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + (TObjEneMe1GiGue__data_805DE6A4 + M2C_FIELD(arg0, f32 *, 0x3EC)));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (lbl_805DE6B8 + M2C_FIELD(arg0, f32 *, 0x3EC));
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3F4);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = (s32) (temp_r3 - 1);
    }
    temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) & 0xFFFFFFF9);
    if (M2C_FIELD(arg0, f32 *, 0x3EC) > TObjEneMe1GiGue__data_805DE6A8) {
        temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 4);
    } else {
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x18) | 2);
    }
    TObjPlayer__sub_800D7BB0((void *) (arg0 + 0x418));
    if (fn_8013157C((void *) (arg0 + 0x38), (void *) (arg0 + 0x44)) > lbl_805DE6BC) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x44));
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
}

}
