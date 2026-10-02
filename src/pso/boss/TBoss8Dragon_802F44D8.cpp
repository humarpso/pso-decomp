#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802F45A0_lbl_80474580 { M2C_UNK value; u8 remaining[0x88]; };
typedef char RecoveredGlobal_802F45A0_lbl_80474580_size[sizeof(RecoveredGlobal_802F45A0_lbl_80474580) == 0x8C ? 1 : -1];

struct RecoveredGlobal_802F45A0_lbl_80541DE8 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802F45A0_lbl_80541DE8_size[sizeof(RecoveredGlobal_802F45A0_lbl_80541DE8) == 0xC ? 1 : -1];

struct RecoveredGlobal_802F45A0_lbl_80541DF4 { M2C_UNK value; u8 remaining[0x38]; };
typedef char RecoveredGlobal_802F45A0_lbl_80541DF4_size[sizeof(RecoveredGlobal_802F45A0_lbl_80541DF4) == 0x3C ? 1 : -1];

#include <stddef.h>
struct Stack_802F4760 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802F4760_lbl_80541E30 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802F4760_lbl_80541E3C {
    M2C_UNK value;
    u8 remaining[0x8];
};

typedef s32 M2C_UNK;
struct Vec_802F481C { f32 x, y, z; };
struct Obj_802F44D8 {
    u8 pad0[0x34];
    s32 f34;
    u8 v38[0x5C - 0x38];
    s32 f5C;
    s32 f60;
    s32 f64;
    u8 v68[0xF8 - 0x68];
    s32 fF8;
    u8 padFC[0x3C0 - 0xFC];
    s32 f3C0;
    u8 pad3C4[0x3EC - 0x3C4];
    u8 f3EC[0x434 - 0x3EC];
    u8 f434[4];
};

struct Vec_802F4990 { f32 x, y, z; };

extern "C" {
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
void update_camera_sequence__9TObjEneDDFPv(void);
M2C_UNK TObjPlayer__sub_803D8960(int, void *, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
extern RecoveredGlobal_802F45A0_lbl_80474580 lbl_80474580;
extern RecoveredGlobal_802F45A0_lbl_80541DE8 lbl_80541DE8;
extern RecoveredGlobal_802F45A0_lbl_80541DF4 lbl_80541DF4;
extern s32 TBoss8Dragon__data_805D698C;
extern s32 lbl_805D6990;
extern s32 TBoss8Dragon__data_805D6994;
extern s32 TBoss8Dragon__data_805D6998;
extern s32 TBoss8Dragon__data_805D699C;
extern s32 TBoss8Dragon__data_805D69A0;
void TBoss8Dragon__sub_802F45A0(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
f32 newton_sqrtf(f32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 TObjPlayer__sub_803D89C0(void *, void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_802F4760_lbl_80541E30 lbl_80541E30;
extern RecoveredGlobal_802F4760_lbl_80541E3C lbl_80541E3C;
extern const f32 lbl_805D69B0;
extern const f32 TBoss8Dragon__data_805DED50;
extern const f32 TBoss8Dragon__data_805DED74;
s32 TBoss8Dragon__sub_802F4760(f32 farg0);
s32 get_speed_or_default__10TObjPlayerFPv(void *);
s32 render_model_tree__12TBoss8DragonFPvPv(s32, s32);
s32 rotate_matrix_y(s32, s32);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
s32 TBoss7Tentacle__sub_803D9BA0(void *);
s32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
s32 set_global_state__16TObjEneRe7BeruraFi(void (*)(void));
void TBoss8Dragon__sub_802F45A0(void);
extern s32 TBoss8Dragon__data_805D698C;
extern s32 TBoss8Dragon__data_805D6994;
extern s32 TBoss8Dragon__data_805D6998;
extern s32 TBoss8Dragon__data_805D699C;
extern s32 TBoss8Dragon__data_805D69A0;
extern s32 TBoss8Dragon__data_805D69A8;
void TBoss8Dragon__sub_802F44D8(Obj_802F44D8 *o);
M2C_UNK TObjEneDD__sub_800BAE74(void *, void *);
M2C_UNK calc_shot_position__9TObjEneDDFPvPvfff(void *, void *, f32, f32, f32);
s32 TBoss8Dragon__sub_802F3878(void *);
s32 TBoss8Dragon__sub_802F3974(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
M2C_UNK TObjEneEpsilon__sub_800B9384(void *, int, f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK TObjEneDD__sub_800BAD1C(void *, f32, f32, f32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
void TBoss8Dragon__sub_802F481C(u8 *arg0, f32 *arg1);
M2C_UNK set_state_1__12TBoss8DragonFPv(void *);
M2C_UNK check_condition_default__12TBoss8DragonFPv(void *);
M2C_UNK TBoss8Dragon__sub_802FC268(void *);
M2C_UNK TBoss8Dragon__sub_802FC9D8(void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern u8 *TBoss8Dragon__data_80541DDC[];
extern const f32 lbl_805DED78;
extern const f32 TBoss8Dragon__data_805DED7C;
extern const f32 lbl_805DED80;
extern const f32 lbl_805DED84;
extern const f32 lbl_805DED88;
extern const f32 TBoss8Dragon__data_805DED8C;
extern const f32 TBoss8Dragon__data_805DED90;
extern const f32 lbl_805DED94;
extern const f32 lbl_805DED98;
extern const f32 TBoss8Dragon__data_805DED9C;
void TBoss8Dragon__sub_802F4990(u8 *arg0);
}

extern "C" {

void TBoss8Dragon__sub_802F44D8(Obj_802F44D8 *o) {
    s32 saved = o->f34;
    o->f34 = TBoss8Dragon__data_805D69A8;
    TBoss8Dragon__data_805D698C = 0;
    TBoss8Dragon__data_805D6994 = (s32)o->f3EC;
    TBoss8Dragon__data_805D6998 = 0;
    TBoss8Dragon__data_805D699C = (s32)o->f434;
    TBoss8Dragon__data_805D69A0 = o->f3C0;
    set_global_state__16TObjEneRe7BeruraFi(TBoss8Dragon__sub_802F45A0);
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(o->v38);
    rotate_matrix_y(0, o->f60);
    rotate_matrix_x(0, o->f5C);
    rotate_matrix_z(0, o->f64);
    TBoss7Tentacle__sub_803D9BA0(o->v68);
    get_speed_or_default__10TObjPlayerFPv(o);
    render_model_tree__12TBoss8DragonFPvPv(o->f34, o->fF8);
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    o->f34 = saved;
}

void TBoss8Dragon__sub_802F45A0(void) {
    s32 temp_r0;
    s32 temp_r4;
    if ((s32) TBoss8Dragon__data_805D698C == (s32) lbl_805D6990) {
        TObjPlayer__sub_803D9B2C();
        update_camera_sequence__9TObjEneDDFPv();
        TObjPlayer__sub_803D8960((int) (0), (void *) (&lbl_80541DF4.value), (int) (TBoss8Dragon__data_805D6994), (int) (3));
        pop_matrix();
    }
    if ((s32) TBoss8Dragon__data_805D698C == (s32) M2C_FIELD(&lbl_80474580.value, M2C_UNK *, (TBoss8Dragon__data_805D6998 * 4))) {
        temp_r4 = TBoss8Dragon__data_805D699C;
        TBoss8Dragon__data_805D699C = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_80541DE8.value, temp_r4);
        temp_r0 = TBoss8Dragon__data_805D6998 + 1;
        TBoss8Dragon__data_805D6998 = temp_r0;
        if ((temp_r0 == 7) && !(TBoss8Dragon__data_805D69A0 & 4)) {
            TBoss8Dragon__data_805D6998 = 0xC;
            TBoss8Dragon__data_805D699C += 0x3C;
        }
        if (((s32) TBoss8Dragon__data_805D6998 == 0x12) && !(TBoss8Dragon__data_805D69A0 & 2)) {
            TBoss8Dragon__data_805D6998 = 0x20;
            TBoss8Dragon__data_805D699C += 0xA8;
        }
    }
    TBoss8Dragon__data_805D698C += 1;
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802F4760_lbl_80541E30_size[sizeof(RecoveredGlobal_802F4760_lbl_80541E30) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802F4760_lbl_80541E3C_size[sizeof(RecoveredGlobal_802F4760_lbl_80541E3C) == 0xC ? 1 : -1];
s32 TBoss8Dragon__sub_802F4760(f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_802F4760, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802F4760, spC) == 0x4) ? 1 : -1];
    Stack_802F4760 stack;
    f32 temp_f1;
    f32 temp_f31;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8));
    stack.spC = TBoss8Dragon__data_805DED50;
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (&lbl_80541E30.value));
    temp_f1 = clamp_velocity__15TObjBoss2TunnelFPv((void *) (&stack.sp8));
    if ((temp_f1 + farg0) < lbl_805D69B0) {
        temp_f31 = temp_f1 * (TBoss8Dragon__data_805DED74 / newton_sqrtf((f32) ((temp_f1 * temp_f1) + (farg0 * farg0))));
        if (TObjPlayer__sub_803D89C0((void *) (&stack.sp8), (void *) (&lbl_80541E3C.value)) >= temp_f31) {
            return 1;
        }
    }
    return 0;
}
#pragma pop

#define VecCopy2_802F481C ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)
void TBoss8Dragon__sub_802F481C(u8 *arg0, f32 *arg1) {
    Vec_802F481C c;
    Vec_802F481C b;
    Vec_802F481C a;
    f32 t;
    M2C_FIELD(arg0, f32 *, 0x3C) = M2C_FIELD(arg0, f32 *, 0x3C) + arg1[1];
    arg1[1] = TBoss8Dragon__data_805DED50;
    VecCopy2_802F481C(&a, arg0 + 0x38);
    VecCopy2_802F481C(&c, arg1);
    t = clamp_velocity__15TObjBoss2TunnelFPv(&c);
    calc_shot_position__9TObjEneDDFPvPvfff(arg0, &b, c.x, c.z, t);
    TObjEneDD__sub_800BAE74(arg0, &b);
    M2C_FIELD(arg0, f32 *, 0x3C) = a.y;
    if ((TBoss8Dragon__sub_802F3878(arg0) != 0) && (TBoss8Dragon__sub_802F3974(arg0) != 0)) {
        VecCopy2_802F481C(arg0 + 0x38, &a);
    }
}
#define VecCopy2_802F4990 ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)
void TBoss8Dragon__sub_802F4990(u8 *arg0) {
    Vec_802F4990 old;
    Vec_802F4990 d;
    f32 scale;
    s32 iscale;
    f32 v;
    scale = lbl_805DED78 + M2C_FIELD(TBoss8Dragon__data_80541DDC[0], f32 *, 0x10);
    iscale = (s32) (TBoss8Dragon__data_805DED7C * scale);
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DED80 * scale;
    } else {
        M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DED84 * scale;
    }
    advance_animation_playback((void *) (arg0));
    TBoss8Dragon__sub_802FC268((void *) (arg0));
    update_velocity__9TObjEneDDFPv((void *) (arg0));
    TBoss8Dragon__sub_802FC9D8((void *) (arg0));
    if (objInBand__FP7GameObjf((void *) (arg0), lbl_805DED88) != 0) {
        check_condition_default__12TBoss8DragonFPv((void *) (arg0));
    } else if (objInBand__FP7GameObjf((void *) (arg0), TBoss8Dragon__data_805DED8C) != 0) {
        set_state_1__12TBoss8DragonFPv((void *) (arg0));
    }
    VecCopy2_802F4990(&old, arg0 + 0x38);
    v = M2C_FIELD(arg0, f32 *, 0xC0);
    if (v < TBoss8Dragon__data_805DED90) {
        TObjEneDD__sub_800BAD1C((void *) (arg0), TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60)), TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60)), scale);
    } else if (!(v < lbl_805DED94)) {
        if (v < lbl_805DED98) {
            TObjEneEpsilon__sub_800B9384((void *) (arg0), iscale, scale);
        } else if (v < lbl_805DED88) {
            TObjEneDD__sub_800BAD1C((void *) (arg0), TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60)), TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60)), scale);
        } else if (!(v < TBoss8Dragon__data_805DED9C)) {
            TObjEneEpsilon__sub_800B9384((void *) (arg0), iscale, scale);
        }
    }
    d.x = M2C_FIELD(arg0, f32 *, 0x38) - old.x;
    d.y = M2C_FIELD(arg0, f32 *, 0x3C) - old.y;
    d.z = M2C_FIELD(arg0, f32 *, 0x40) - old.z;
    VecCopy2_802F4990(arg0 + 0x38, &old);
    TBoss8Dragon__sub_802F481C(arg0, (f32 *) &d);
}
#undef VecCopy2_802F4990

#undef VecCopy2_802F481C

}
