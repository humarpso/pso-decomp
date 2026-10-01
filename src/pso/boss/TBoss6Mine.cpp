#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

#include <stddef.h>
struct Stack_803242C0 {
    f32 sp8;
    f32 spC;
    u8 pad_10[0x4];
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

struct VBase_18_b27ba1 { char pad[0x18]; };

struct VObj_18_b27ba1 : VBase_18_b27ba1 {
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
    virtual M2C_UNK m21(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Vec_803240F8 { f32 x, y, z; };

struct Hit_803240F8 { s32 a; s32 b; s32 c; f32 d; };

struct Vec_80324440 { f32 x, y, z; };

struct Vec_80323FA4 { f32 x, y, z; };

extern "C" {
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern const f32 lbl_805DF58C;
s32 TBoss6Mine__sub_803240C4(s32 arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805DF5BC;
extern const f32 lbl_805DF5C0;
extern const f32 lbl_805DF5C4;
void TBoss6Mine__vt0(u8 *arg0);
M2C_UNK TObjPlayer__sub_800F5E08();
extern const f32 TBoss6Mine__data_805DF580;
void TBoss6Mine__sub_80323E1C(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
s32 TObjPlayer__sub_80156844(void *, void *, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805DF59C;
extern const f32 lbl_805DF5A0;
void TBoss6Mine__vt5(u8 *arg0);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 is_active__14TBoss6PlotFalzFPv(void *);
s32 TBoss6PlotFalz__sub_802AB5B4(s32, f32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 TBoss6Mine__data_805DF580;
extern const f32 lbl_805DF590;
extern const f32 lbl_805DF594;
void TBoss6Mine__sub_803240F8(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern const f32 TBoss6Mine__data_805DF580;
extern const f32 lbl_805DF588;
void TBoss6Mine__vt3(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
f64 TBoss5GryphonLightningWing__sub_80324CEC(f32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern const f64 lbl_804766A0[];
extern const f32 lbl_805DF588;
void TBoss6Mine__sub_80323FA4(u8 *arg0);
}

extern "C" {

void TBoss6Mine__sub_80323E68(void* a0);
void TBoss6Mine__vt1(void *arg0);
void TBoss6Mine__vt4(u8 *arg0);
void TBoss6Mine__vt6(s32 arg0);
void TBoss6Mine__vt7(void* p);
void *__dt__10TBoss6MineFPvs(void *arg0, s16 arg1);
void copy_pos__10TBoss6MineFi(s32 arg0);
s32 create__10TBoss6MineFi(s32 arg0);
void draw__10TBoss6MineFPv(void *arg0);
void draw_parts__10TBoss6MineFPv(void* p);
void set_state7__10TBoss6MineFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 TBoss6Mine__ct(s32, s32, s32);
M2C_UNK TBoss6PlotFalz__sub_802ABE3C(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
void TBoss6Type1__sub_802B5DD4(void *);
int TOHangerMachine01__sub_803D9C00(void*);
int TOSwitchAttack__sub_80087278(void*, void*, void*);
int rotate_matrix_x(void*, void*);
s32 TObjControl__ct(s32, s32);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
int rotate_matrix_y(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK clear_global_state__10TObjPlayerFv();
int queue_destruction__7TObjectFv(void*);
void request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();

void TBoss6Mine__sub_80323E1C(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0x3C) >= (*(const f32 *)&TBoss6Mine__data_805DF580)) {
        TObjPlayer__sub_800F5E08();
    }
}

void set_state7__10TBoss6MineFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 7) {
        M2C_FIELD(arg0, s32 *, 0x380) = 7;
    }
}

    extern const float TBoss6Mine__data_805DF584;
void TBoss6Mine__sub_80323E68(void* a0) { *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffffdff); *(float*)((char*)a0 + 0x3c8) = TBoss6Mine__data_805DF584; }

void copy_pos__10TBoss6MineFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
}

extern const f32 TBoss6Mine__data_805DF580;

void draw__10TBoss6MineFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;

    set_global_flag__10TObjPlayerFv();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r30 = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r31_2 = TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x374), 0);
    set_global_param__8TObjFishFi(temp_r31);
    TBoss6PlotFalz__sub_802AC008(M2C_FIELD(arg0, f32 *, 0x3C8), TBoss6Mine__data_805DF580);
    TObjEneSlimeOne__sub_803E4AF4(temp_r30, temp_r31_2, M2C_FIELD(arg0, f32 *, 0x39C));
    update_camera_target__14TBoss6PlotFalzFv();
    clear_global_state__10TObjPlayerFv();
}

void draw_parts__10TBoss6MineFPv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x390)); rotate_matrix_x((void*)0, *(void**)((char*)p + 0x394)); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x398)); draw__10TBoss6MineFPv((void *)(p)); TObjPlayer__sub_803D9B78(); }

void TBoss6Mine__sub_80323FA4(u8 *arg0) {
    Vec_80323FA4 v;
    s32 a;
    s32 b;
    switch (M2C_FIELD(arg0, s32 *, 0x380)) {
    case 5:
    case 6:
        VecCopy__FP3VecPC3Vec((s32) &v, (s32) (arg0 + 0x38));
        TBoss6Type1__sub_803D9370(&v, arg0 + 0x44);
        if (TBoss6Kakusan__sub_803D8BD8(&v) <= lbl_805DF588) {
            a = 0;
            b = 0;
        } else {
            TNpcPlayer__sub_803D97B4(&v);
            a = lbl_804766A0[0] * get_ad_end_text_start__10TObjPlayerFv(-v.x, -v.z);
            b = lbl_804766A0[0] * TBoss5GryphonLightningWing__sub_80324CEC(v.y);
            if (b < -0x2000) {
                b = -0x2000;
            } else if (b > 0x2000) {
                b = 0x2000;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x390) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x390), a, 0x1111);
        M2C_FIELD(arg0, s32 *, 0x394) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x394), b, 0x444);
        M2C_FIELD(arg0, s32 *, 0x398) += 0x888;
        break;
    }
}

s32 TBoss6Mine__sub_803240C4(s32 arg0) {
    return TBoss6Kakusan__sub_803D8BD8((void *) (arg0 + 0x38)) > lbl_805DF58C;
}

void TBoss6Mine__sub_803240F8(u8 *arg0) {
    s32 n;
    s32 i;
    u8 *pl;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv(pl) != 0) {
            Vec_803240F8 v = *(Vec_803240F8 *) (arg0 + 0x38);
            TBoss6Type1__sub_803D9370(&v, pl + 0x38);
            v.y = TBoss6Mine__data_805DF580;
            if (!(TBoss6Kakusan__sub_803D8BD8(&v) > lbl_805DF590)) {
                Hit_803240F8 h;
                s32 r = TBoss6PlotFalz__sub_802AB5B4(M2C_FIELD(arg0, s32 *, 0x384), lbl_805DF594);
                h.a = 1;
                h.c = 1;
                h.d = r;
                h.b = *(s32 *) &h.d;
                ((VObj_18_b27ba1 *) pl)->m21(arg0, &h, 0, -1, -1);
            }
        }
    }
    TBoss3Volopt__sub_8022675C(0x4003BA1E, arg0 + 0x38, 0, 0);
}

void TBoss6Mine__vt7(void* p) { TOSwitchAttack__sub_80087278((void*)((char*)p + 0x38), (void*)((void*)252), (void*)((void*)64)); queue_destruction__7TObjectFv((void*)(p)); }

extern f32 lbl_805DF598;

void TBoss6Mine__vt6(s32 arg0) {
    TBoss6Mine__sub_803240F8((u8 *)(arg0));
    TOSwitchAttack__sub_80087278((void*)(arg0 + 0x38), (void*)(0xFB), (void*)(0x40));
    TOSwitchAttack__sub_80087278((void*)(arg0 + 0x38), (void*)(0xFC), (void*)(0x40));
    TBoss6PlotFalz__sub_802ABE3C(arg0 + 0x38, 0xC0, 0xF, lbl_805DF598);
    queue_destruction__7TObjectFv((void*)(arg0));
}

#pragma push
#pragma opt_common_subs off
void TBoss6Mine__vt5(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_803242C0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803242C0, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_803242C0, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_803242C0, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_803242C0, sp1C) == 0x14) ? 1 : -1];
    Stack_803242C0 stack;
    f32 temp_f31;
    VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.sp14)), (s32)((void *) (arg0 + 0x3BC)));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp14), (void *) (arg0 + 0x38));
    if (TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp14)) <= lbl_805DF59C) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 6;
        return;
    }
    TNpcPlayer__sub_803D97B4((void *) (&stack.sp14));
    stack.sp14 *= lbl_805DF59C;
    stack.sp18 *= lbl_805DF59C;
    stack.sp1C *= lbl_805DF59C;
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (&stack.sp14));
    VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.sp8)), (s32)((void *) (arg0 + 0x38)));
    temp_f31 = stack.spC - lbl_805DF5A0;
    stack.spC = temp_f31;
    if ((TObjPlayer__sub_80156844((void *) (arg0), (void *) (&stack.sp8), (int) (0)) != 0) && (temp_f31 < stack.spC)) {
        stack.spC += lbl_805DF5A0;
        VecCopy__FP3VecPC3Vec((s32)((void *) (arg0 + 0x38)), (s32)((void *) (&stack.sp8)));
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 6;
    }
}
#pragma pop

void TBoss6Mine__vt4(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x38C) + 1;
    M2C_FIELD(arg0, s32 *, 0x38C) = temp_r3;
    if (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x3A8)) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 5;
        TBoss3Volopt__sub_8022675C(0x4003B51D, arg0 + 0x38, 0, 0);
    }
}

void TBoss6Mine__vt3(u8 *arg0) {
    Vec_80324440 v;
    f32 len;
    f32 cnt;
    f32 k;
    cnt = (f32) (M2C_FIELD(arg0, s32 *, 0x3A4) - M2C_FIELD(arg0, s32 *, 0x38C) + 1);
    VecCopy__FP3VecPC3Vec((s32) &v, (s32) (arg0 + 0x38));
    v.y = TBoss6Mine__data_805DF580;
    len = TBoss6Kakusan__sub_803D8BD8(&v);
    if (len > lbl_805DF588) {
        TNpcPlayer__sub_803D97B4(&v);
    }
    k = len + (120.0f - len) / cnt;
    M2C_FIELD(arg0, f32 *, 0x38) = k * v.x;
    M2C_FIELD(arg0, f32 *, 0x40) = k * v.z;
    M2C_FIELD(arg0, f32 *, 0x39C) += 0.8333334f;
    if (M2C_FIELD(arg0, f32 *, 0x39C) >= 9.0f) {
        M2C_FIELD(arg0, f32 *, 0x39C) = 9.0f;
    }
    if (++M2C_FIELD(arg0, s32 *, 0x38C) > M2C_FIELD(arg0, s32 *, 0x3A4)) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 4;
    }
}

void TBoss6Mine__vt1(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x38C) + 1;
    M2C_FIELD(arg0, s32 *, 0x38C) = temp_r4;
    if (temp_r4 > (s32) M2C_FIELD(arg0, s32 *, 0x3A0)) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 2;
    }
}

extern M2C_UNK lbl_804ECBAC[];

#pragma push
#pragma fp_contract on
void TBoss6Mine__vt0(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x38C);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x3AC) / lbl_805DF5BC;
    if (temp_r0 > 0xF) {
        temp_r0_2 = 0x1E - temp_r0;
        if (temp_r0_2 > 0) {
            temp_f3 = M2C_FIELD(arg0, f32 *, 0x3B4);
            M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) (temp_f3 + ((lbl_805DF5C0 - temp_f3) / (f32) temp_r0_2));
        }
    }
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((temp_f31 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x37C))) + M2C_FIELD(arg0, f32 *, 0x38));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((temp_f31 * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x37C))) + M2C_FIELD(arg0, f32 *, 0x40));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DF5C4 * TBoss8Dragon__sub_803D64C0((s32) (M2C_FIELD(arg0, s32 *, 0x38C) << 0xF) / 30)) + M2C_FIELD(arg0, f32 *, 0x3B4));
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x38C) + 1;
    M2C_FIELD(arg0, s32 *, 0x38C) = temp_r0_3;
    if (temp_r0_3 > 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 1;
    }
}
#pragma pop

void *__dt__10TBoss6MineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECBAC;
        if (M2C_FIELD(arg0, void **, 0x3CC) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3CC)); M2C_FIELD(arg0, M2C_UNK *, 0x3CC) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0x378) != NULL) { TBoss6Type1__sub_802B5DD4(M2C_FIELD(arg0, void **, 0x378)); }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

s32 create__10TBoss6MineFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3D0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Mine__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
