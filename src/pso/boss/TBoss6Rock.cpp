#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80353E10_TBoss6Rock__data_80543778 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

struct RecoveredGlobal_80353DC4_TBoss6Rock__data_80543778 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

struct RecoveredGlobal_80354148_TBoss6Rock__data_80479258 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80354148_TBoss6Rock__data_80543778 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

struct Rock_80353EDC { u8 pad[0xb8]; s32 b8; u8 pad2[4]; s32 c0; u8 pad3[4]; s32 state; };

struct Rock_80353EA4 { u8 pad[0xc8]; s32 state; };

struct R_80353E5C { u8 pad0[0xC4]; s32 fC4; s32 fC8; };

struct Vec_80353B7C { f32 x, y, z; };

struct R_80353B7C { u8 pad0[4]; f32 f4; f32 f8; };

struct Vec_80353C60 { f32 x, y, z; };

struct Vec_80353A14 { f32 x, y, z; };

extern "C" {
void release_object__10TBoss6RockFPv(void* p);
void TBoss6Rock__sub_803542E8(void *, s32);
void TBoss6Rock__sub_8035A460(void *, s32);
void TBoss6Rock__sub_80354494(u8 *arg0);
extern const f32 TBoss6Rock__data_805DFF48;
extern const f32 TBoss6Rock__data_805DFF4C;
extern const f32 lbl_805DFF98;
extern const f32 lbl_805DFFA4;
void TBoss6Rock__sub_8035461C(void *arg0);
extern RecoveredGlobal_80353E10_TBoss6Rock__data_80543778 TBoss6Rock__data_80543778;
s32 TBoss6Rock__sub_80353E10(s32 arg0);
extern RecoveredGlobal_80353E10_TBoss6Rock__data_80543778 TBoss6Rock__data_80543778;
u8 TBoss6Rock__sub_80353DC4(s32 arg0);
s32 rand__11TOBoss4RockFv();
extern const f32 TBoss6Rock__data_805DFF4C;
extern const f32 lbl_805DFF68;
extern const f32 lbl_805DFF6C;
extern const f32 lbl_805DFF70;
extern const f32 lbl_805DFF74;
extern const f32 lbl_805DFF78;
void TBoss6Rock__sub_80353FF0(u8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
s32 TBoss3Volopt__sub_8022675C(s32, u32, int, s32);
M2C_UNK TBoss6PlotFalz__sub_802ABE3C(void *, int, int, f32);
M2C_UNK TBoss6Rock__sub_80353F5C(void *);
void TBoss6Rock__sub_803542E8(void *, s32);
extern const f32 TBoss6Rock__data_805DFF50;
extern const f32 lbl_805DFF54;
extern const f32 lbl_805DFF94;
extern const f32 lbl_805DFF98;
extern const f32 lbl_805DFF9C;
extern const f32 lbl_805DFFA0;
void TBoss6Rock__sub_80354520(u8 *arg0);
extern RecoveredGlobal_80354148_TBoss6Rock__data_80479258 TBoss6Rock__data_80479258;
extern RecoveredGlobal_80353E10_TBoss6Rock__data_80543778 TBoss6Rock__data_80543778;
u8 *TBoss6Rock__sub_80354148(s32 arg0);
s32 TBoss6Rock__sub_80353E10(s32 arg0);
u8 *TBoss6Rock__sub_80354148(s32 arg0);
void VecCopy__FP3VecPC3Vec(void *, const void *);
extern u8 TBoss6Rock__data_805437F8[];
s32 get_point__10TBoss6RockFiPvPv(s32 arg0, s32 arg1, f32 *arg2);
extern RecoveredGlobal_80353E10_TBoss6Rock__data_80543778 TBoss6Rock__data_80543778;
void TBoss6Rock__sub_80353EDC(s32 i, s32 a, s32 b);
extern RecoveredGlobal_80353E10_TBoss6Rock__data_80543778 TBoss6Rock__data_80543778;
void TBoss6Rock__sub_80353EA4(s32 i);
extern RecoveredGlobal_80353E10_TBoss6Rock__data_80543778 TBoss6Rock__data_80543778;
void TBoss6Rock__sub_80353E5C(s32 arg0);
u8 TBoss6Rock__sub_80353DC4(s32 arg0);
void TBoss6Rock__sub_80353EA4(s32 i);
u8 *TBoss6Rock__sub_80354148(s32 arg0);
void VecCopy__FP3VecPC3Vec(void *, const void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
extern u8 TBoss6Rock__data_805437F8[];
extern const f32 TBoss6Rock__data_805DFF50;
void TBoss6Rock__sub_80353B7C(Vec_80353B7C *arg0, f32 r);
void VecCopy__FP3VecPC3Vec(void *, const void *);
void TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
void TNpcPlayer__sub_803D97B4(void *);
extern u8 TBoss6Rock__data_805437F8[];
extern const f32 TBoss6Rock__data_805DFF50;
extern const f32 TBoss6Rock__data_805DFF5C;
extern const f32 lbl_805DFF60;
extern const f32 lbl_805DFF64;
s32 TBoss6Rock__sub_80353C60(Vec_80353C60 *arg0, f32 r);
s32 TBoss6Rock__sub_80353E10(s32 arg0);
u8 *TBoss6Rock__sub_80354148(s32 arg0);
void VecCopy__FP3VecPC3Vec(void *, const void *);
void TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
void TNpcPlayer__sub_803D97B4(void *);
extern u8 TBoss6Rock__data_805437F8[];
extern u8 *TBoss6Rock__data_805D6EF8;
extern const f32 TBoss6Rock__data_805DFF50;
extern const f32 lbl_805DFF54;
extern const f32 lbl_805DFF58;
s32 TBoss6Rock__sub_80353A14(s32 arg0, Vec_80353A14 *out, f32 *outR);
}

extern "C" {

int TBoss6Rock__sub_80353A04(void);
int TBoss6Rock__sub_80353A0C(void);
void check_and_destroy__10TBoss6RockFPv(void* p);
void *create__10TBoss6RockFv(void);
void *destroy__10TBoss6RockFPvs(void *arg0, s16 arg1);
void *init_object__10TBoss6RockFPvPv(void *arg0, void *);
void release_object__10TBoss6RockFPv(void* p);
void render_if_active__10TBoss6RockFPv(u8 *arg0);
void set_target__10TBoss6RockFPviiiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0);
s32 TBoss6PlotFalz__sub_802AB6CC(void *, f32);
M2C_UNK TBoss6PlotFalz__sub_802ABF44(f32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
int is_active__10TBoss6RockFv(void*);
int queue_destruction__7TObjectFv(void*);
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK set_global_param__8TObjFishFi(int);

void set_target__10TBoss6RockFPviiiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x20)), (const void *)((void *) (arg2)));
        copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x30), (void *) (arg3));
        M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x3C) = arg4;
        M2C_FIELD(arg0, s32 *, 0x40) = arg5;
    }
}

extern const f32 TBoss6Rock__data_805DFF48;
extern const f32 TBoss6Rock__data_805DFF4C;

void render_if_active__10TBoss6RockFPv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (TBoss6PlotFalz__sub_802AB6CC((void *) (arg0 + 0x20), (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - TBoss6Rock__data_805DFF48)) != 0)) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x20));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34)));
        rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x30)));
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x38)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x3C)));
        TBoss6PlotFalz__sub_802ABF44((f32) (TBoss6Rock__data_805DFF4C));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x40)));
        reset_fish_globals__8TObjFishFv();
        TObjPlayer__sub_803D9B78();
    }
}

void check_and_destroy__10TBoss6RockFPv(void* p) { if (is_active__10TBoss6RockFv(p) == 0) { *(int*)((char*)p + 0x1c) = 0; queue_destruction__7TObjectFv(p); } }

extern M2C_UNK lbl_804F1280[];

void *destroy__10TBoss6RockFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1280;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F1280[];

void *init_object__10TBoss6RockFPvPv(void *arg0, void *) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1280;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

extern void *tl_06;

void *create__10TBoss6RockFv(void) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = init_object__10TBoss6RockFPvPv((void *)((void *)(o)), (void *)((void *)(tl_06)));
    }
    return o;
}

    extern int TBoss6Rock__data_805D6EF4;
int TBoss6Rock__sub_80353A04(void) {  return TBoss6Rock__data_805D6EF4; }

    extern int TBoss6Rock__data_805D6EF0;
int TBoss6Rock__sub_80353A0C(void) {  return TBoss6Rock__data_805D6EF0; }

extern u8 TBoss6Rock__data_805437F8[];

typedef char RecoveredGlobal_80353E10_TBoss6Rock__data_80543778_size[sizeof(RecoveredGlobal_80353E10_TBoss6Rock__data_80543778) == 0x80 ? 1 : -1];

typedef char RecoveredGlobal_80353DC4_TBoss6Rock__data_80543778_size[sizeof(RecoveredGlobal_80353DC4_TBoss6Rock__data_80543778) == 0x80 ? 1 : -1];

#pragma push
#pragma fp_contract on
s32 TBoss6Rock__sub_80353A14(s32 arg0, Vec_80353A14 *out, f32 *outR) {
    u8 *rec;
    f32 r;
    f32 d;
    f32 s;
    Vec_80353A14 a;
    Vec_80353A14 b;
    Vec_80353A14 c;
    if (TBoss6Rock__sub_80353E10(arg0) == 0) {
        return 0;
    }
    if (TBoss6Rock__data_805D6EF8 == NULL) {
        return 0;
    }
    rec = TBoss6Rock__sub_80354148(arg0);
    if (rec == NULL) {
        return 0;
    }
    r = *(f32 *)(rec + 4);
    VecCopy__FP3VecPC3Vec(&a, TBoss6Rock__data_805D6EF8 + 0x38);
    a.y = TBoss6Rock__data_805DFF50;
    VecCopy__FP3VecPC3Vec(&b, &((Vec_80353A14 *)TBoss6Rock__data_805437F8)[arg0]);
    VecCopy__FP3VecPC3Vec(&c, &b);
    TBoss6Type1__sub_803D9370(&c, &a);
    d = TBoss6Kakusan__sub_803D8BD8(&c);
    if (d <= lbl_805DFF54) {
        return 0;
    }
    if (d > lbl_805DFF58) {
        d = lbl_805DFF58;
    }
    TNpcPlayer__sub_803D97B4(&c);
    s = r - r * (1.0f - (d - 100.0f) / 100.0f);
    c.x *= s;
    c.z *= s;
    TBoss4Zako__sub_803D8910(&c, &b);
    VecCopy__FP3VecPC3Vec(out, &c);
    *outR = r;
    return 1;
}
#pragma pop

void TBoss6Rock__sub_80353B7C(Vec_80353B7C *arg0, f32 r) {
    Vec_80353B7C v;
    s32 i;
    R_80353B7C *p;
    for (i = 0; i < 0x20; i++) {
        p = (R_80353B7C *)TBoss6Rock__sub_80354148(i);
        if (p != NULL && ((s32 (*)(s32))TBoss6Rock__sub_80353DC4)(i) != 0 && !(arg0->y > r + p->f8)) {
            f32 lim = r + p->f4;
            VecCopy__FP3VecPC3Vec(&v, &((Vec_80353B7C *)TBoss6Rock__data_805437F8)[i]);
            TBoss6Type1__sub_803D9370(&v, arg0);
            v.y = TBoss6Rock__data_805DFF50;
            if (TBoss6Kakusan__sub_803D8BD8(&v) <= lim) {
                TBoss6Rock__sub_80353EA4(i);
            }
        }
    }
}

s32 TBoss6Rock__sub_80353C60(Vec_80353C60 *arg0, f32 r) {
    Vec_80353C60 v;
    s32 hit;
    s32 i;
    f32 y = TBoss6Rock__data_805DFF50;
    f32 lim = lbl_805DFF60 + r;
    hit = 0;
    for (i = 0; i < 0x20; i++) {
        f32 d;
        VecCopy__FP3VecPC3Vec(&v, arg0);
        TBoss6Type1__sub_803D9370(&v, &((Vec_80353C60 *)TBoss6Rock__data_805437F8)[i]);
        v.y = y;
        d = TBoss6Kakusan__sub_803D8BD8(&v);
        if (!(d >= lim)) {
            if (d <= lbl_805DFF64) {
                v.x = TBoss6Rock__data_805DFF5C;
            }
            TNpcPlayer__sub_803D97B4(&v);
            v.x *= lim;
            v.z *= lim;
            TBoss4Zako__sub_803D8910(arg0, &v);
            hit = 1;
        }
    }
    return hit;
}

s32 get_point__10TBoss6RockFiPvPv(s32 arg0, s32 arg1, f32 *arg2) {
    s32 temp_r5;
    if (TBoss6Rock__sub_80353E10(arg0) == 0) {
        return 0;
    }
    temp_r5 = arg0 * 0xC;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg1)), (const void *)((void *) ((u8 *)(&TBoss6Rock__data_805437F8) + temp_r5)));
    M2C_FIELD(arg2, f32 *, 0) = M2C_FIELD(TBoss6Rock__sub_80354148(arg0), f32 *, 4);
    return 1;
}

u8 TBoss6Rock__sub_80353DC4(s32 arg0) {
    u8 *temp_r3;
    if ((arg0 < 0) || (arg0 >= 0x20)) {
        return 0U;
    }
    temp_r3 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_80353DC4_TBoss6Rock__data_80543778 *)&TBoss6Rock__data_80543778).value, M2C_UNK *, (arg0 * 4)));
    if (temp_r3 == NULL) {
        return 0U;
    }
    return (u8) (M2C_FIELD(temp_r3, s32 *, 0xC8) == 2);
}

s32 TBoss6Rock__sub_80353E10(s32 arg0) {
    u8 *temp_r3;
    if ((arg0 < 0) || (arg0 >= 0x20)) {
        return 0U;
    }
    temp_r3 = (u8 *)(M2C_FIELD(&TBoss6Rock__data_80543778.value, M2C_UNK *, (arg0 * 4)));
    if (temp_r3 == NULL) {
        return 0U;
    }
    return (u8) (M2C_FIELD(temp_r3, s32 *, 0xC4) == 2);
}

void TBoss6Rock__sub_80353E5C(s32 arg0) {
    R_80353E5C *r;
    if (arg0 < 0 || arg0 >= 0x20) {
        return;
    }
    r = ((R_80353E5C * *)&TBoss6Rock__data_80543778)[arg0];
    if (r == NULL || r->fC4 != 2) {
        return;
    }
    r->fC8 = 0;
}

void TBoss6Rock__sub_80353EA4(s32 i) {
    Rock_80353EA4 *p;
    if (i < 0 || i >= 0x20) {
        return;
    }
    p = ((Rock_80353EA4 **)&TBoss6Rock__data_80543778)[i];
    if (p != NULL) {
        p->state = 0;
    }
}

void TBoss6Rock__sub_80353EDC(s32 i, s32 a, s32 b) {
    Rock_80353EDC *p;
    if (i < 0 || i >= 0x20) {
        return;
    }
    p = ((Rock_80353EDC **)&TBoss6Rock__data_80543778)[i];
    if (p != NULL) {
        p->state = 2;
        p->b8 = a;
        p->c0 = b;
    }
}

void release_object__10TBoss6RockFPv(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0xb0)); *(int*)((char*)p + 0xb0) = 0; } }

#pragma push
#pragma fp_contract on
void TBoss6Rock__sub_80353FF0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (lbl_805DFF68 * ((lbl_805DFF6C * (f32) rand__11TOBoss4RockFv()) - TBoss6Rock__data_805DFF4C));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (lbl_805DFF70 * (lbl_805DFF6C * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (lbl_805DFF68 * ((lbl_805DFF6C * (f32) rand__11TOBoss4RockFv()) - TBoss6Rock__data_805DFF4C));
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (lbl_805DFF74 * ((lbl_805DFF6C * (f32) rand__11TOBoss4RockFv()) - TBoss6Rock__data_805DFF4C));
    VecCopy__FP3VecPC3Vec((void *)((void *) ((u8 *)(arg0) + 0x38)), (const void *)((void *) ((u8 *)(arg0) + 0xD4)));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DFF78;
}
#pragma pop

#pragma push
#pragma peephole off
typedef char RecoveredGlobal_80354148_TBoss6Rock__data_80479258_size[sizeof(RecoveredGlobal_80354148_TBoss6Rock__data_80479258) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80354148_TBoss6Rock__data_80543778_size[sizeof(RecoveredGlobal_80354148_TBoss6Rock__data_80543778) == 0x80 ? 1 : -1];
u8 *TBoss6Rock__sub_80354148(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 0x20)) {
        return NULL;
    }
    return (u8 *)(&TBoss6Rock__data_80479258.value) + (M2C_FIELD(M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_80354148_TBoss6Rock__data_80543778 *)&TBoss6Rock__data_80543778).value) + (arg0 * 4)), u8 **, 0), s32 *, 0xB4) * 0x14);
}
#pragma pop

void TBoss6Rock__sub_80354494(u8 *arg0) {
    TBoss6Rock__sub_803542E8(arg0, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 1) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 2) {
        TBoss6Rock__sub_8035A460(arg0 + 0xD4, M2C_FIELD(arg0, s32 *, 0xB4));
        TBoss3Volopt__sub_8022675C(0x4006AB1F, (u32) (arg0 + 0x38), 0, 0);
        release_object__10TBoss6RockFPv((void*)(arg0));
        TBoss6Rock__sub_80353FF0((u8 *)(arg0));
        M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    }
}
#pragma fp_contract on

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TBoss6Rock__sub_80354520(u8 *arg0) {
    f32 var_f1;
    f32 var_f2;
    var_f1 = lbl_805DFF94;
    var_f2 = lbl_805DFF98;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + M2C_FIELD(arg0, s32 *, 0xD0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 1) {
        var_f1 = lbl_805DFF9C;
        var_f2 = lbl_805DFFA0;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (M2C_FIELD(arg0, f32 *, 0xCC) + var_f1);
    if (M2C_FIELD(arg0, f32 *, 0xCC) < var_f2) {
        M2C_FIELD(arg0, f32 *, 0xCC) = var_f2;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0xCC));
    if (M2C_FIELD(arg0, f32 *, 0x3C) <= TBoss6Rock__data_805DFF50) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss6Rock__data_805DFF50;
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TBoss6Rock__data_805DFF50;
        TBoss6Rock__sub_803542E8((void *)((void *) (arg0)), (s32)((int) (1)));
        TBoss6Rock__sub_80353F5C((void *) (arg0));
        TBoss3Volopt__sub_8022675C((s32)((int) (0x4006B51E)), (u32)((void *) (arg0 + 0x38)), (int)((int) (0)), (s32)((int) (0)));
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0x220));
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0x222));
        TBoss6PlotFalz__sub_802ABE3C((void *) (arg0 + 0x38), (int) (0xC0), (int) (0xF), (f32) (lbl_805DFF54));
        M2C_FIELD(arg0, s32 *, 0xC4) = 2;
    }
}
#pragma pop

void TBoss6Rock__sub_8035461C(void *arg0) {
  s32 temp_r4;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0xC8)))) != 0)
  {
    f32 k = TBoss6Rock__data_805DFF4C;
    f32 s = lbl_805DFF98;
    if ((TBoss6Rock__data_805DFF4C && TBoss6Rock__data_805DFF4C) && TBoss6Rock__data_805DFF4C)
    {
    }
    temp_r4 = *((s32 *) (((s8 *) arg0) + 0xAC));
    *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) (s * ((k * (((f32) (temp_r4 & 3)) / TBoss6Rock__data_805DFF48)) + (k * (((f32) temp_r4) * lbl_805DFFA4))));
    *((s32 *) (((s8 *) arg0) + 0xC4)) = 1;
    *((s32 *) (((s8 *) arg0) + 0xB4)) = (s32) (*((s32 *) (((s8 *) arg0) + 0xB8)));
    *((s32 *) (((s8 *) arg0) + 0xBC)) = (s32) (*((s32 *) (((s8 *) arg0) + 0xC0)));
  }
}

}
