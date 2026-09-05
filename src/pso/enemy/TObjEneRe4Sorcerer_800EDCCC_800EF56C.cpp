#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 TObjEneDD__vt99();
void TObjEneRe4Sorcerer__vt100(u8 *arg0);
u32 TObjEneDD__vt98();
void TObjEneRe4Sorcerer__vt99(u8 *arg0);
}

extern "C" {

void advance_anim_frame__18TObjEneRe4SorcererFPv(void *arg0);
void apply_mylla_effect__18TObjEneRe4SorcererFPv(void *arg0);
void calc_orb_positions__18TObjEneRe4SorcererFPv(void *arg0);
s32 check_shield__18TObjEneRe4SorcererFiPv(s32 arg0, void *arg1);
void request_death_effect__18TObjEneRe4SorcererFPv(void *arg0);
void set_motion_by_state__18TObjEneRe4SorcererFPv(void *arg0);
void set_photon_state__18TObjEneRe4SorcererFPv(void *arg0);
s32 try_attack__18TObjEneRe4SorcererFiff(s32 arg0, f32 farg0, f32 farg1);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 TObjEneEpsilon__sub_800BBE64(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneRe4Sorcerer__sub_800ED428(u32, s32);
s32 TObjEneRe4Sorcerer__sub_800EFB60(s32, f32, f32);
void TObjEneRe4Sorcerer__sub_800EFE30(void);
u32 TPhotonMylla__sub_80154CB4(u16);
s32 check_v2_mode__9TObjEneDDFv();
s32 fn_800B9194(s32);
M2C_UNK fn_800B98C0(s32);
s16 get_field_2b8__14TItemProShieldFPv(void *);

extern const f32 TObjEneRe4Sorcerer__data_805DA78C;
extern const f32 lbl_805DA7E0;

void calc_orb_positions__18TObjEneRe4SorcererFPv(void *arg0) {
    f32 temp_f2;
    f32 temp_f31;

    temp_f31 = TObjEneRe4Sorcerer__data_805DA78C * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f2 = TObjEneRe4Sorcerer__data_805DA78C * -TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + temp_f31);
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) (lbl_805DA7E0 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + temp_f2);
    M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) - temp_f31);
    M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) (lbl_805DA7E0 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x3D4) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) - temp_f2);
}

void apply_mylla_effect__18TObjEneRe4SorcererFPv(void *arg0) {
    u32 temp_r3;
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E6));
    if (temp_r3 != 0U) {
        TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(2));
    }
}

void set_photon_state__18TObjEneRe4SorcererFPv(void *arg0) {
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) == 0) {
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(0));
        }
    } else {
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(1));
        }
    }
}

s32 check_shield__18TObjEneRe4SorcererFiPv(s32 arg0, void *arg1) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        return M2C_FIELD(arg1, s16 *, 0x32C) < get_field_2b8__14TItemProShieldFPv(arg1);
    }
    return M2C_FIELD(arg1, s16 *, 0x32C) < (get_field_2b8__14TItemProShieldFPv(arg1) / 4);
}

void advance_anim_frame__18TObjEneRe4SorcererFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E8) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) >= 3) {
        M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    }
}

void request_death_effect__18TObjEneRe4SorcererFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) != 2) {
        TObjEneDD__sub_800BBA18(arg0, 4);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 6);
}

void set_motion_by_state__18TObjEneRe4SorcererFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) != 2) {
        TObjEneDD__sub_800BBA18(arg0, 5);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 7);
}

s32 try_attack__18TObjEneRe4SorcererFiff(s32 arg0, f32 farg0, f32 farg1) {
    if (TObjEneEpsilon__sub_800BBE64(arg0, arg0 + 0x3B0, 0x1E) != 0) {
        return TObjEneRe4Sorcerer__sub_800EFB60(arg0, farg0, farg1);
    }
    if (fn_800B9194(arg0) != 0) {
        return 1;
    }
    fn_800B98C0(arg0);
    return 0;
}

void TObjEneRe4Sorcerer__vt100(u8 *arg0) {
    if (TObjEneDD__vt99() == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFFEF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x10);
}
void TObjEneRe4Sorcerer__vt99(u8 *arg0) {
    if (TObjEneDD__vt98() == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFFEF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x10);
}

}
