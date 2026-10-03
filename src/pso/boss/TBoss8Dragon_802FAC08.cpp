#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80065370_80062BA0 { char pad[0x18]; };
struct VObj_80065370_80062BA0 : Base_80065370_80062BA0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void vcall(s16 a, int b);
};

struct Stack_802FB0DC {
    M2C_UNK sp8;
    f32 spC;
};

struct V3_802FAC08 { f32 x, y, z; };

struct Obj_802FAC08 { u8 pad0[0x38]; f32 x; u8 pad1[4]; f32 z; };

extern "C" {
s32 objInBand__FP7GameObjf(f32);
extern const f32 TBoss8Dragon__data_805DEE38;
void TBoss8Dragon__sub_802FB09C(s32 arg0);
extern f32 TObjEneDf2Bringer__data_805D9820;
void TBoss8Dragon__sub_802FB09C(s32 arg0);
extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;
extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;
    extern const float lbl_805D8EC4;
    extern const float lbl_805D8E20;
    extern const float lbl_805D8DEC;
    extern const float lbl_805D8D84;
extern const f32 lbl_805D8EC8;
void TBoss8Dragon__sub_802FB09C(s32 arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
M2C_UNK set_type__10TObjPlayerFPvi(void *, int);
M2C_UNK start_freeze__10TObjPlayerFPv(int);
M2C_UNK TBoss8Dragon__sub_802FD9D0();
extern const f32 lbl_805DEEB8;
void TBoss8Dragon__sub_802FAE74(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *csnVecterUnder(M2C_UNK *, M2C_UNK);
M2C_UNK spawn_particle_effect_with_flags(void *, void *, int);
extern const f32 TBoss8Dragon__data_805DED9C;
void TBoss8Dragon__sub_802FB0DC(u8 *arg0);
s32 reset_lobby_model__10TObjPlayerFPv(void *);
s32 send_6x2F_change_player_hp(int, int, int);
s32 end_camera_pan__10TObjPlayerFPv(int);
u8 * get_player_by_client_id(s32);
s32 TBoss8Dragon__sub_802FBA84(void *);
s32 is_health_low__12TBoss8DragonFPv(void *);
extern s32 lbl_805D53A0;
extern const f32 TBoss8Dragon__data_805DED50;
void TBoss8Dragon__sub_802FAC78(u8 *arg0);
f32 vec3_dot(void *, void *);
extern const f32 TBoss8Dragon__data_805DED50;
extern const f32 lbl_805DEEB4;
f32 TBoss8Dragon__sub_802FAC08(Obj_802FAC08 *o, f32 a, f32 b, f32 s);
s32 is_main_phase_15__9TObjEneDDFv(void *);
extern u8 lbl_8050E208[];
extern s32 TBoss8Dragon__data_805D69B8;
extern u16 TBoss8Dragon__data_805D69BC;
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
u8 * get_player_by_client_id(s32);
extern s32 TLobby__data_805D53AC;
u16 TBoss8Dragon__sub_802FAFD8(void *arg0);
}

extern "C" {

struct Base_80098E4C_80098DB0 { char pad[0x18]; };
struct VObj_80098E4C_80098DB0 : Base_80098E4C_80098DB0 {
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
    virtual int m97();
};

#pragma push
#pragma fp_contract on
f32 TBoss8Dragon__sub_802FAC08(Obj_802FAC08 *o, f32 a, f32 b, f32 s) {
    V3_802FAC08 v;
    v.x = a * s + o->x;
    v.y = TBoss8Dragon__data_805DED50;
    v.z = b * s + o->z;
    if (vec3_dot(&v, &v) > lbl_805DEEB4) {
        s = TBoss8Dragon__data_805DED50;
    }
    return s;
}
#pragma pop

void TBoss8Dragon__sub_802FAC78(u8 *arg0) {
    s16 temp_r3_2;
    s16 temp_r3_3;
    s32 var_r31;
    u16 temp_r4;
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_player_by_client_id((s32) M2C_FIELD(arg0, u16 *, 0x750)));
    if (temp_r3 != NULL) {
        end_camera_pan__10TObjPlayerFPv((int) (temp_r3));
        M2C_FIELD(temp_r3, s32 *, 0x30) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x30) & 0xFDFFFFFF);
        reset_lobby_model__10TObjPlayerFPv((void *) ((u8 *)(temp_r3) + 0x644));
        M2C_FIELD(temp_r3, f32 *, 0x3C) = (f32) TBoss8Dragon__data_805DED50;
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x750);
        if (((s32) temp_r4 == (s32) lbl_805D53A0) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 0x15)) {
            send_6x2F_change_player_hp((int) (0xFFFFU), (int) (temp_r4), (int) (0));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x74C) = 0;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0x15) {
        var_r31 = 0;
        if (is_health_low__12TBoss8DragonFPv((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x674) = 0;
            temp_r3_2 = M2C_FIELD(arg0, s16 *, 0x326);
            switch (temp_r3_2) {
            case 24:
            case 25:
                var_r31 = 1;
                M2C_FIELD(arg0, s32 *, 0x674) = 0;
                break;
            case 3:
                M2C_FIELD(arg0, s32 *, 0x674) = 2;
                break;
            case 4:
                M2C_FIELD(arg0, s32 *, 0x674) = 3;
                break;
            case 5:
                M2C_FIELD(arg0, s32 *, 0x674) = 4;
                break;
            case 26:
            case 27:
                var_r31 = 1;
                M2C_FIELD(arg0, s32 *, 0x674) = 6;
                break;
            case 7:
                M2C_FIELD(arg0, s32 *, 0x674) = 6;
                break;
            case 8:
                M2C_FIELD(arg0, s32 *, 0x674) = 7;
                break;
            case 9:
                M2C_FIELD(arg0, s32 *, 0x674) = 0;
                break;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x674) = 0;
            temp_r3_3 = M2C_FIELD(arg0, s16 *, 0x326);
            switch (temp_r3_3) {
            case 24:
            case 25:
                var_r31 = 1;
                M2C_FIELD(arg0, s32 *, 0x674) = 0;
                break;
            case 3:
            case 4:
                M2C_FIELD(arg0, s32 *, 0x674) = 0;
                break;
            case 5:
                M2C_FIELD(arg0, s32 *, 0x674) = 1;
                break;
            case 26:
            case 27:
                var_r31 = 1;
                M2C_FIELD(arg0, s32 *, 0x674) = 0xA;
                break;
            case 7:
                M2C_FIELD(arg0, s32 *, 0x674) = 0xA;
                break;
            case 8:
            case 19:
                M2C_FIELD(arg0, s32 *, 0x674) = 0xB;
                break;
            case 15:
                M2C_FIELD(arg0, s32 *, 0x674) = 2;
                break;
            case 37:
            case 38:
                var_r31 = 1;
                M2C_FIELD(arg0, s32 *, 0x674) = 9;
                break;
            case 9:
                M2C_FIELD(arg0, s32 *, 0x674) = 0;
                break;
            }
            M2C_FIELD(arg0, s32 *, 0x674) = (s32) (M2C_FIELD(arg0, s32 *, 0x674) + 0x32);
        }
        if (var_r31 != 0) {
            TBoss8Dragon__sub_802FBA84((void *) (arg0));
        }
    }
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_802FAE74(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x750));
    if (temp_r3 != NULL) {
        if (get_field_3e4__10TObjPlayerFPv((int) (temp_r3)) == get_current_floor()) {
            start_freeze__10TObjPlayerFPv((int) (temp_r3));
            set_type__10TObjPlayerFPvi((void *) (temp_r3 + 0x644), (int) (0x14));
            M2C_FIELD(temp_r3, s32 *, 0x30) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x30) & 0xFFEFFFDF);
            VecCopy__FP3VecPC3Vec((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38));
            M2C_FIELD(temp_r3, f32 *, 0x3C) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x3C) - lbl_805DEEB8);
            M2C_FIELD(temp_r3, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
            return;
        }
    }
    TBoss8Dragon__sub_802FD9D0();
}
#pragma pop

void TBoss8Dragon__sub_802FAF18(u8 *arg0) {
    u16 var_r31;
    if (TBoss8Dragon__data_805D69B8 != 0) {
        M2C_FIELD(arg0, s32 *, 0x74C) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x74C) = 0;
        M2C_FIELD(arg0, u16 *, 0x750) = 0xFFFFU;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x754) = 0x96;
    M2C_FIELD(arg0, u8 **, 0x6D8) = lbl_8050E208 + 0x20;
    if (is_main_phase_15__9TObjEneDDFv(lbl_8050E208) != 0) {
        if (TBoss8Dragon__data_805D69BC == 0xFFFFU) {
            var_r31 = TBoss8Dragon__sub_802FAFD8((void *)(arg0));
        } else {
            var_r31 = TBoss8Dragon__data_805D69BC;
        }
    } else {
        var_r31 = (u16)lbl_805D53A0;
    }
    if (get_player_by_client_id(var_r31) != NULL) {
        ((M2C_UNK (*)(void))start_freeze__10TObjPlayerFPv)();
    }
    M2C_FIELD(arg0, u16 *, 0x750) = var_r31;
}

u16 TBoss8Dragon__sub_802FAFD8(void *arg0) {
    u8 *p;
    u16 idx;
    u16 i;
    p = get_player_by_client_id(TLobby__data_805D53AC);
    if (p != NULL) {
        if (get_field_3e4__10TObjPlayerFPv((int)p) == get_current_floor()) {
            return TLobby__data_805D53AC;
        }
    }
    for (i = 0; i < 4; i++) {
        idx = (TLobby__data_805D53AC + i + 1) % 4;
        p = get_player_by_client_id(idx);
        if (p != NULL) {
            if (get_field_3e4__10TObjPlayerFPv((int)p) == get_current_floor()) {
                break;
            }
        }
    }
    return idx;
}

void TBoss8Dragon__sub_802FB09C(s32 arg0) {
    if (objInBand__FP7GameObjf((f32) (TBoss8Dragon__data_805DEE38)) != 0) {
        TBoss8Dragon__sub_802FB0DC((u8 *)((void *) (arg0)));
    }
}
void TBoss8Dragon__sub_802FB0DC(u8 *arg0) {
    Stack_802FB0DC stack;
    f32 temp_f1;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    temp_r3 = csnVecterUnder(&stack.sp8, 0x16EF);
    if (temp_r3 != NULL) {
        temp_f1 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 4);
        if (!(temp_f1 > TBoss8Dragon__data_805DED9C)) {
            stack.spC = temp_f1;
            spawn_particle_effect_with_flags((void *) (&stack.sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x760), s32 *, 4)), (int) (0x40));
        }
    }
}

}
