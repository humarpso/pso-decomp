#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_800EF7C8 { u8 pad[0x18]; };

struct V_800EF7C8 : Base_800EF7C8 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91(); };

struct Obj_800EF7C8 : V_800EF7C8 { u8 pad2[0x3e4 - 0x1c]; u16 orbs[2]; };

struct Base_800EF844 { u8 pad[0x18]; };

struct V_800EF844 : Base_800EF844 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92(); };

struct Obj_800EF844 : V_800EF844 { u8 pad2[0x3e4 - 0x1c]; u16 orbs[2]; };

struct VBase_18_f9c8ca { char pad[0x18]; };

struct VObj_18_f9c8ca : VBase_18_f9c8ca {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Vec_800EF95C { f32 x, y, z; };

struct Base_800EF95C { u8 pad[0x18]; };

struct V_800EF95C : Base_800EF95C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100();
};

struct Obj_800EF95C : V_800EF95C {
    u8 pad1c[0x38 - 0x1C];
    Vec_800EF95C pos;
    Vec_800EF95C prev;
    u8 pad50[0x60 - 0x50];
    s32 rot;
    u8 pad64[0x120 - 0x64];
    u8 col[0x394 - 0x120];
    u8 mtx[0x3E4 - 0x394];
    u16 orbs[2];
    u8 pad3e8[0x3F0 - 0x3E8];
    s32 ang;
};

extern "C" {
u32 TObjEneDD__vt99();
void TObjEneRe4Sorcerer__vt100(u8 *arg0);
u32 TObjEneDD__vt98();
void TObjEneRe4Sorcerer__vt99(u8 *arg0);
s16 obj_getField1c(void *);
s32 is_alive__9TObjEneDDFPv(void *);
s32 check_shield__18TObjEneRe4SorcererFiPv(s32 arg0, void *arg1);
f32 horizontal_distance_squared(void *, void *);
extern const f32 lbl_805DA7E4;
s32 TObjEneRe4Sorcerer__sub_800EF6A4(u8 *arg0, s32 arg1, f32 *arg2);
u32 find_entity_by_id(u16);
void TObjEneRe4Sorcerer__sub_800ED268(u8 *arg0);
void TObjEneRe4Sorcerer__sub_800EF7C8(Obj_800EF7C8 *self);
u32 find_entity_by_id(u16);
void TObjEneRe4Sorcerer__sub_800ED2B4(u8 *arg0);
void TObjEneRe4Sorcerer__sub_800EF844(Obj_800EF844 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnVectorUnder(void *, void *, s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
void TObjEneEpsilon__sub_800B96A4(void *);
void update_velocity__9TObjEneDDFPv(void *);
void TObjEneDD__sub_800BA934(void *);
void TObjEneDD__sub_800BAF1C(void *, Vec_800EF95C *, f32, f32, f32);
void reset_transform__13TObjEneRe4BitFPv(u32);
void calc_orb_positions__18TObjEneRe4SorcererFPv(void *arg0);
void update_collision_center__18TObjEneRe4SorcererFPv(void *);
u32 find_entity_by_id(u16);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TBoss4Zako__sub_803D8910(void *, void *);
void TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 TObjEneRe4Sorcerer__data_805DA790;
extern const f32 lbl_805DA7E8;
void TObjEneRe4Sorcerer__sub_800EF95C(Obj_800EF95C *self, f32 speed);
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
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 TObjEneEpsilon__sub_800BBE64(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneRe4Sorcerer__sub_800ED428(u32, s32);
s32 TObjEneRe4Sorcerer__sub_800EFB60(s32, f32, f32);
void TObjEneRe4Sorcerer__sub_800EFE30(void);
u32 find_entity_by_id(u16);
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
    temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x3E6));
    if (temp_r3 != 0U) {
        TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(2));
    }
}

void set_photon_state__18TObjEneRe4SorcererFPv(void *arg0) {
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) == 0) {
        temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(0));
        }
    } else {
        temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(1));
        }
    }
}

s32 TObjEneRe4Sorcerer__sub_800EF6A4(u8 *arg0, s32 arg1, f32 *arg2) {
    f32 temp_f1;
    if ((is_alive__9TObjEneDDFPv((void *) (arg1)) != 0) && (check_shield__18TObjEneRe4SorcererFiPv((s32)((void *) (arg0)), (void *)((void *) (arg1))) != 0)) {
        temp_f1 = horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (arg1 + 0x38));
        if ((temp_f1 <= lbl_805DA7E4) && (temp_f1 > *arg2)) {
            *arg2 = temp_f1;
            M2C_FIELD(arg0, s16 *, 0x38C) = obj_getField1c((void *) (arg1));
            M2C_FIELD(arg0, s32 *, 0x390) = arg1;
            return 1;
        }
    }
    return 0;
}

s32 check_shield__18TObjEneRe4SorcererFiPv(s32 arg0, void *arg1) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        return M2C_FIELD(arg1, s16 *, 0x32C) < get_field_2b8__14TItemProShieldFPv(arg1);
    }
    return M2C_FIELD(arg1, s16 *, 0x32C) < (get_field_2b8__14TItemProShieldFPv(arg1) / 4);
}

void TObjEneRe4Sorcerer__sub_800EF7C8(Obj_800EF7C8 *self) {
    s32 i;
    self->m90();
    self->m91();
    for (i = 0; i < 2; i++) {
        u32 p = find_entity_by_id(self->orbs[i]);
        if (p != 0) {
            TObjEneRe4Sorcerer__sub_800ED268((u8 *)p);
        }
    }
}

void TObjEneRe4Sorcerer__sub_800EF844(Obj_800EF844 *self) {
    s32 i;
    self->m89();
    self->m92();
    for (i = 0; i < 2; i++) {
        u32 p = find_entity_by_id(self->orbs[i]);
        if (p != 0) {
            TObjEneRe4Sorcerer__sub_800ED2B4((u8 *)p);
        }
    }
}

void advance_anim_frame__18TObjEneRe4SorcererFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E8) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) >= 3) {
        M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    }
}

void request_death_effect__18TObjEneRe4SorcererFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) != 2) {
        transition_enemy_state(arg0, 4);
        return;
    }
    transition_enemy_state(arg0, 6);
}

void set_motion_by_state__18TObjEneRe4SorcererFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) != 2) {
        transition_enemy_state(arg0, 5);
        return;
    }
    transition_enemy_state(arg0, 7);
}

void TObjEneRe4Sorcerer__sub_800EF95C(Obj_800EF95C *self, f32 speed) {
    s32 i;
    Vec_800EF95C out;
    Vec_800EF95C v;
    Vec_800EF95C t;
    u32 p;
    TObjEneEpsilon__sub_800B96A4(self);
    update_velocity__9TObjEneDDFPv(self);
    v.x = speed * TBoss8Dragon__sub_803D64C0(self->ang);
    v.y = TObjEneRe4Sorcerer__data_805DA790;
    v.z = speed * TBoss8Dragon__sub_803D64DC(self->ang);
    TBoss4Zako__sub_803D8910(&v, self->mtx);
    TBoss6Type1__sub_803D9370(&v, &self->pos);
    speed = clamp_velocity__15TObjBoss2TunnelFPv(&v);
    TObjEneDD__sub_800BAF1C(self, &out, v.x, v.z, speed);
    t.x = out.x;
    t.y = lbl_805DA7E8 + out.y;
    t.z = out.z;
    if (csnVectorUnder(&t, self->col, 0xE0) == 0) {
        VecCopy__FP3VecPC3Vec(&self->pos, &out);
    }
    self->m100();
    VecCopy__FP3VecPC3Vec(&self->prev, &self->pos);
    update_collision_center__18TObjEneRe4SorcererFPv(self);
    self->rot = self->ang + 0x8000;
    calc_orb_positions__18TObjEneRe4SorcererFPv(self);
    self->ang += 0x2AAA;
    TObjEneDD__sub_800BA934(self);
    for (i = 0; i < 2; i++) {
        p = find_entity_by_id(self->orbs[i]);
        if (p != 0) {
            reset_transform__13TObjEneRe4BitFPv(p);
        }
    }
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
