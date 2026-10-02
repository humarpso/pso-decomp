#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
extern const f32 TObjEnePanarms__data_805DA524;
void TObjEnePanarms__sub_800DFEDC(u8 *arg0);
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
s32 TObjEnePanarms__sub_800E1C98(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
extern const f32 lbl_805DA528;
void TObjEnePanarms__sub_800DFE08(u8 *arg0);
}

extern "C" {

void init_attack_state__14TObjEnePanarmsFPv(void *arg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
s32 angle_difference_abs(s32, s32, void *);

extern const f32 TObjEnePanarms__data_805DA524;

void init_attack_state__14TObjEnePanarmsFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 1;
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) TObjEnePanarms__data_805DA524;
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 1;
    if (angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4), temp_r5) < 0x2000) {
        if (TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4)) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D4) - 0x2000);
        } else {
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D4) + 0x2000);
        }
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 2);
}

void TObjEnePanarms__sub_800DFE08(u8 *arg0) {
    s32 temp_r0;
    s32 var_r5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        set_field_b8__14TObjEnePanarmsFPvs((void *)((void *) (arg0)), (M2C_UNK)((int) (4)));
    }
    if (lbl_805DA528 == (f32) M2C_FIELD(arg0, s32 *, 0x3B4)) {
        var_r5 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x33), s32 *, 0x18);
        if ((var_r5 < 0) || (var_r5 > 0xE)) {
            var_r5 = 0;
        }
        create__9TTecRestaFPvPvPv((void *) (arg0), (void *) (arg0 + 0x38), (int) (var_r5));
        TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003BC31))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98((void *) (arg0), (int) (2));
    }
}

void TObjEnePanarms__sub_800DFEDC(u8 *arg0) {
    u8 *temp_r7;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 1) {
        temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
        M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x384) = 1;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) TObjEnePanarms__data_805DA524;
        M2C_FIELD(arg0, s32 *, 0x3B4) = 6;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
        set_field_b8__14TObjEnePanarmsFPvs((void *)(arg0), (M2C_UNK)(0));
    }
}

}
