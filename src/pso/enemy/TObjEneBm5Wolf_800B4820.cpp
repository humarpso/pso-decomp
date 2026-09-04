#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VBase_800B4820 { char pad[0x18]; };
struct VEne_800B4820 : VBase_800B4820 {
#define VPAD(n) virtual M2C_UNK _v##n() { return 0; }
    VPAD(0) VPAD(1) VPAD(2) VPAD(3) VPAD(4) VPAD(5) VPAD(6) VPAD(7) VPAD(8) VPAD(9)
    VPAD(10) VPAD(11) VPAD(12) VPAD(13) VPAD(14) VPAD(15) VPAD(16) VPAD(17) VPAD(18) VPAD(19)
    VPAD(20) VPAD(21) VPAD(22) VPAD(23) VPAD(24) VPAD(25) VPAD(26) VPAD(27) VPAD(28) VPAD(29)
    VPAD(30) VPAD(31) VPAD(32) VPAD(33) VPAD(34) VPAD(35) VPAD(36) VPAD(37) VPAD(38) VPAD(39)
    VPAD(40) VPAD(41) VPAD(42) VPAD(43) VPAD(44) VPAD(45) VPAD(46) VPAD(47) VPAD(48) VPAD(49)
    VPAD(50) VPAD(51) VPAD(52) VPAD(53) VPAD(54) VPAD(55) VPAD(56) VPAD(57) VPAD(58) VPAD(59)
    VPAD(60) VPAD(61) VPAD(62) VPAD(63) VPAD(64) VPAD(65) VPAD(66) VPAD(67) VPAD(68) VPAD(69)
    VPAD(70) VPAD(71) VPAD(72) VPAD(73) VPAD(74) VPAD(75) VPAD(76) VPAD(77) VPAD(78) VPAD(79)
    VPAD(80) VPAD(81) VPAD(82) VPAD(83) VPAD(84) VPAD(85) VPAD(86)
    virtual M2C_UNK m87();
    VPAD(88) VPAD(89) VPAD(90) VPAD(91) VPAD(92) VPAD(93)
    virtual M2C_UNK m94();
#undef VPAD
};
struct VBase2_800B4820 { char pad[0x18]; };
struct VObj2_800B4820 : VBase2_800B4820 { virtual void *m0(); virtual void *m1(); virtual void *m2(); virtual void *m3(); virtual void *m4(); virtual void *m5(); virtual void *m6(); virtual void *m7(); virtual void *m8(); virtual void *m9(); virtual void *m10(); virtual void *m11(); virtual void *m12(); virtual void *m13(); virtual void *m14(); virtual void *m15(); virtual void *m16(); virtual void *m17(); virtual void *m18(); virtual void *m19(); virtual void *m20(); virtual void *m21(); virtual void *m22(); virtual void *m23(); virtual void *m24(); virtual void *m25(); virtual void *m26(); virtual void *m27(); virtual void *m28(); virtual void *m29(); virtual void *m30(); virtual void *m31(); virtual void *m32(); virtual void *m33(); virtual void *m34(); virtual void *m35(); virtual void *m36(); virtual void *m37(); virtual void *m38(); virtual void *m39(); virtual void *m40(); virtual void *m41(); virtual void *m42(); virtual void *m43(); virtual void *m44(); virtual void *m45(); virtual void *m46(); virtual void *m47(); virtual void *m48(); virtual void *m49(); virtual void *m50(); virtual void *m51(); virtual void *m52(); virtual void *m53(); virtual void *m54(); virtual void *m55(); virtual void *m56(); virtual void *m57(); virtual void *m58(); virtual void *m59(); virtual void *m60(); virtual void *m61(); virtual void *m62(); virtual void *m63(); virtual void *m64(); virtual void *m65(); virtual void *m66(); virtual void *m67(); virtual void *m68(); virtual void *m69(); virtual void *m70(); virtual void *m71(); virtual void *m72(); virtual void *m73(); virtual void *m74(); virtual void *m75(); virtual void *m76(); virtual void *m77(); virtual void *m78(); virtual void *m79(); virtual void *m80(); virtual void *m81(); virtual void *m82(); virtual void *m83(); virtual void *m84(); virtual void *m85(); virtual void *m86(); virtual void *m87(); virtual void *m88(); virtual void *m89(); virtual void *m90(); virtual void *m91(); virtual void *m92(); virtual M2C_UNK m93(); };

void TObjEneBm5Wolf__sub_800B4820(void);
void TObjEneBm5Wolf__sub_800B6B4C(void);
void TObjEneBm5Wolf__sub_800B72B4(u8 *arg0, s32 arg1);
void action__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1);
void advance_spawn_timer__14TObjEneBm5WolfFv(void);
void update_state__14TObjEneBm5WolfFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm5Wolf__sub_800B74B8(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B7530(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B7DDC(void *, s32);
M2C_UNK TObjEneBm5Wolf__sub_800B7EA0(void *);
u32 TObjEneBm5Wolf__sub_800B850C(s32);
M2C_UNK TObjEneBm5Wolf__sub_800B8570(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B85A0(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
u8 *fn_800B8B00(u32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 get_target_info__9TObjEneDDFPv();
s32 objInBand__FP7GameObjf(void *, f32);
s16 obj_getField1c();
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_collision_center__14TObjEneBm5WolfFPv(void *);

void TObjEneBm5Wolf__sub_800B4820(void) {  }

void update_state__14TObjEneBm5WolfFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x3D8);
        TObjEneBm5Wolf__sub_800B7EA0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x3D8)) {
            if (temp_r31 != 0) {
                TObjEneBm5Wolf__sub_800B8570(arg0);
            } else {
                TObjEneBm5Wolf__sub_800B85A0(arg0);
            }
        }
        update_collision_center__14TObjEneBm5WolfFPv(arg0);
    }
}

extern s32 TObjEneBm5Wolf__data_805D5124;
extern s32 TObjEneBm5Wolf__data_805D5128;

void advance_spawn_timer__14TObjEneBm5WolfFv(void) {
    if (((s32) TObjEneBm5Wolf__data_805D5124 >= 0x16) && ((s32) TObjEneBm5Wolf__data_805D5124 < 0x18)) {
        TObjPlayer__sub_803D9214(0, TObjEneBm5Wolf__data_805D5128);
    }
    TObjEneBm5Wolf__data_805D5124 += 1;
}

extern const f32 TObjEneBm5Wolf__data_805D9DB4;

void action__14TObjEneBm5WolfFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VEne_800B4820 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 7);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        TObjEneBm5Wolf__sub_800B850C((s32)(M2C_FIELD(arg0, s32 *, 0x3DC)));
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 7);
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        TObjEneBm5Wolf__sub_800B7DDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DB4) != 0) {
            TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AA1A), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x100);
        }
        M2C_FIELD(arg0, s32 *, 0x41C) = (s32) (M2C_FIELD(arg0, s32 *, 0x41C) + 1);
        if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x1E) {
            TObjEneBm5Wolf__sub_800B7530(arg0);
        } else if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x28) {
            TObjEneBm5Wolf__sub_800B74B8(arg0);
        }
        ((VEne_800B4820 *)arg0)->m87();
        break;
    }
}

void TObjEneBm5Wolf__sub_800B6B4C(void) {  }

#define VTABLE_ENE ((VObj2_800B4820 *) arg0)

void TObjEneBm5Wolf__sub_800B72B4(u8 *arg0, s32 arg1) {
    u32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x420) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        VTABLE_ENE->m93();
        M2C_FIELD(arg0, s32 *, 0x408) = (s32) (M2C_FIELD(arg0, s32 *, 0x408) | 2);
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x420) > 0) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        temp_r3 = TObjEneBm5Wolf__sub_800B850C((s32)(M2C_FIELD(arg0, s32 *, 0x3DC)));
        if (temp_r3 != 0U) {
            M2C_FIELD(arg0, s16 *, 0x3E0) = obj_getField1c();
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) || (temp_r3 == 0U)) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3F4, arg0 + 0x3E8);
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3F4, fn_800B8B00(temp_r3));
        }
        M2C_FIELD(arg0, s32 *, 0x420) = (s32) (M2C_FIELD(arg0, s32 *, 0x420) + 1);
        break;
    }
}

}
