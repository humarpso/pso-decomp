#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801C57D0 { char pad[0x18]; };
struct VObj_801C57D0 : Base_801C57D0 {
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
    virtual void m11(s32);
};

struct VBase_18_f1aa6a { char pad[0x18]; };

struct VObj_18_f1aa6a : VBase_18_f1aa6a {
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
    virtual void m63(s32, void *);
};

struct Actor_801C58CC : VObj_18_f1aa6a {
    u8 pad1C[0x20];
    f32 f3c;
};

typedef struct Out_801C58CC {
    u8 pad0[4];
    f32 v;
} Out_801C58CC;

extern "C" {
void TObjPlayer__sub_801C58CC(Out_801C58CC *arg0, Actor_801C58CC *arg1);
s32 obj_testFlags30(int, int);
s32 is_inactive__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_80108164(int);
s32 get_mode__11TCameraCtrlFv();
s32 TObjPlayer__sub_801AFF0C(int);
M2C_UNK TObjPlayer__sub_801B0FF4(int);
M2C_UNK TObjPlayer__sub_801B12CC(int);
s32 check_flag_40000__10TObjPlayerFPv(int);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK set_flag_2000000_alt__10TObjPlayerFPv();
s32 check_flag_04000000__10TObjPlayerFPv(int);
extern const f32 lbl_805DC32C;
void TObjPlayer__sub_801C5968(u8 *arg0);
}

extern "C" {

struct VOff_801C5870_arg0_801C57D0 { char pad_0[0x1C]; char f_1C[1]; };

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2);
void TObjPlayer__sub_801C5954(void *arg0);
void run_task__13TForceOperateFv(s32 arg0);
s32 TObjPlayer__sub_801B58DC(void *);
s32 TObjPlayer__sub_801C6DAC(s32);
void *TPhotonMylla__sub_80154CB4();
void __ct__7TObjectFP7TObject(void *);
void fn_8013E020(void *);
M2C_UNK get_id__11TMainCursorFPv(s32);
void *get_state__11TMainCursorFPv(s32);
s32 is_target_valid__10TObjPlayerFPv();
s32 obj_getField1c(void *);
M2C_UNK queue_destruction__7TObjectFv(s32);
void set_field_0__13TForceOperateFPvs(void *, void *);

void run_task__13TForceOperateFv(s32 arg0) {
    void *temp_r31;
    void *temp_r3;

    if (TObjPlayer__sub_801C6DAC(arg0 + 0x1C) != 0) {
        temp_r31 = get_state__11TMainCursorFPv(arg0 + 0x1C);
        if ((is_target_valid__10TObjPlayerFPv() != 0) && (TObjPlayer__sub_801B58DC(temp_r31) != 0)) {
            get_id__11TMainCursorFPv(M2C_FIELD(temp_r31, s32 *, 0x424) + 0x4F8);
            temp_r3 = TPhotonMylla__sub_80154CB4();
            if (temp_r3 != NULL) {
                ((VObj_801C57D0 *)temp_r3)->m11(obj_getField1c(temp_r31));
                queue_destruction__7TObjectFv(arg0);
            }
        }
    }
}

extern M2C_UNK __vt__13TForceOperate[];
extern void *lbl_805D3560;

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_801C5870_arg0_801C57D0 *self = (struct VOff_801C5870_arg0_801C57D0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TForceOperate;
    fn_8013E020(self->f_1C);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3560;
    set_field_0__13TForceOperateFPvs(self->f_1C, arg2);
    return arg0;
}

void TObjPlayer__sub_801C58CC(Out_801C58CC *arg0, Actor_801C58CC *arg1) {
    f32 sp[4];
    arg1->m63(1, sp);
    arg0->v = (1.0f + arg1->f3c) - sp[1];
    if (arg0->v > 3.0f) {
        arg0->v = 3.0f;
    }
    if (arg0->v < -4.0f) {
        arg0->v = -4.0f;
    }
}

void TObjPlayer__sub_801C5954(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg0, f32 *, 8));
}
void TObjPlayer__sub_801C5968(u8 *arg0) {
    f32 var_f31;
    s16 temp_r3_2;
    s32 temp_r0;
    u8 *temp_r3;
    temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0)));
    if (temp_r3 != NULL) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 4);
        switch (temp_r0) {
        case 2:
        default:
            break;
        case 0:
            if ((is_inactive__10TObjPlayerFPv() != 0) && (check_flag_40000__10TObjPlayerFPv((int) (temp_r3)) == 0) && (check_flag_04000000__10TObjPlayerFPv((int) (temp_r3)) != 0) && (TObjPlayer__sub_801AFF0C((int) (temp_r3)) != 0)) {
                if (--M2C_FIELD(arg0, s16 *, 2) < 0) {
                    if (get_mode__11TCameraCtrlFv() != 0) {
                        M2C_FIELD(temp_r3, f32 *, 0x624) = (f32) 1.0f;
                        M2C_FIELD(arg0, s32 *, 4) = 2;
                        return;
                    }
                    M2C_FIELD(arg0, s32 *, 4) = 1;
                    TObjPlayer__sub_801B12CC((int) (temp_r3));
                    if (obj_testFlags30((int) (temp_r3), (int) (0x800)) == 0) {
                        TObjPlayer__sub_80108164((int) (M2C_FIELD(arg0, u16 *, 0)));
                    }
                    M2C_FIELD(temp_r3, f32 *, 0x624) = (f32) lbl_805DC32C;
                    TObjPlayer__sub_801B0FF4((int) (temp_r3));
                    return;
                }
            }
            break;
        case 1:
            var_f31 = M2C_FIELD(temp_r3, f32 *, 0x624);
            var_f31 += 0.1f;
            if (var_f31 >= 1.0f) {
                var_f31 = 1.0f;
                M2C_FIELD(arg0, s32 *, 4) = 2;
                set_flag_2000000_alt__10TObjPlayerFPv();
                TObjPlayer__sub_801B12CC((int) (temp_r3));
            }
            M2C_FIELD(temp_r3, f32 *, 0x624) = var_f31;
            break;
        }
    }
}

}
