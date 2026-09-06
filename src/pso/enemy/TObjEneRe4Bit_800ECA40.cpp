#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK set_state_flags__18TObjEneRe4SorcererFPv(void *);
M2C_UNK set_hold_flags__18TObjEneRe4SorcererFPv(void *);
M2C_UNK TObjEneRe4Sorcerer__sub_800ED47C();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, int, int);
extern const f32 TObjEneRe4Bit__data_805DA770;
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1);
}

extern "C" {

void handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1);
void reset_transform__13TObjEneRe4BitFPv(void *arg0);
void TObjEneDD__sub_800BA934(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneRe4Bit__sub_800ED4BC();
void VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
void update_position_flag__13TObjEneRe4BitFPv(void *);

#pragma push
#pragma fp_contract on
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        set_hold_flags__18TObjEneRe4SorcererFPv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x400);
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A815)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3CC) & 8) {
            TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD16)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (M2C_UNK)((int) (1)));
        }
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x408) = (s32) (M2C_FIELD(arg0, s32 *, 0x408) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x408) >= 0x384) {
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
            if (!(temp_r4 & 0x10)) {
                M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFBFF);
                set_state_flags__18TObjEneRe4SorcererFPv((void *) (arg0));
                return;
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
        TObjEneRe4Sorcerer__sub_800ED47C();
        M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) TObjEneRe4Bit__data_805DA770;
        break;
    }
}
#pragma pop

void handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFEFFF);
        break;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        if (temp_r4 & 1) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFE);
            TObjEneDD__sub_800BBA18(arg0, 2);
            break;
        }
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        TObjEneRe4Bit__sub_800ED4BC();
        update_position_flag__13TObjEneRe4BitFPv((void *)(arg0));
        break;
    }
}

extern const f32 TObjEneRe4Bit__data_805DA770;

void reset_transform__13TObjEneRe4BitFPv(void *arg0) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 764), M2C_FIELD(arg0, void **, 0x3C0));
    M2C_FIELD(arg0, f32 *, 0x3F8) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x3FC) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x400) = TObjEneRe4Bit__data_805DA770;
    update_position_flag__13TObjEneRe4BitFPv((void *)(arg0));
    TObjEneDD__sub_800BA934(arg0);
}

}
