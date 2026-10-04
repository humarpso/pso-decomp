#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_4225ac { char pad[0x18]; };

struct VObj_18_4225ac : VBase_18_4225ac {
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
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
};

struct Vec_800375C0 { f32 x, y, z; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void move_mine__10TBoss2MineFPv(u8 *arg0);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 TBoss2Mine__data_805D84D4;
extern const f32 lbl_805D84E4;
void TBoss2Mine__sub_80037AEC(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void move_mine__10TBoss2MineFPv(u8 *arg0);
M2C_UNK TBoss2Mine__sub_80038760(void *);
M2C_UNK set_state_by_distance__10TBoss2MineFPvi(void *, int);
M2C_UNK init_params__10TBoss2MineFPvif(void *, int, f32);
M2C_UNK update_move_flag__10TBoss2MineFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK subtract_vector(void *, void *);
extern const f32 lbl_805D84B8;
extern const f32 lbl_805D84BC;
extern const f32 lbl_805D84C0;
extern const f32 lbl_805D84C4;
extern const f32 TBoss2Mine__data_805D84C8;
extern const f32 lbl_805D84CC;
void TBoss2Mine__sub_800375C0(u8 *arg0, s32 arg1);
}

extern "C" {

void TBoss2Mine__sub_80037C6C(void *arg0);
void move_mine__10TBoss2MineFPv(u8 *arg0);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
s32 is_alive__9TObjEneDDFPv(s32);

extern const f32 lbl_805D84E8;

#pragma push
#pragma fp_contract on
void TBoss2Mine__sub_800375C0(u8 *arg0, s32 arg1) {
    Vec_800375C0 v;
    f32 s;
    switch (arg1) {
    case 4:
        ((VObj_18_4225ac *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x38C) &= ~5;
        M2C_FIELD(arg0, s32 *, 0x38C) |= 2;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32)(lbl_805D84B8 * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + 0xF0;
        init_params__10TBoss2MineFPvif(arg0, 0x1E, lbl_805D84BC);
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x38C) & 0x100) {
            M2C_FIELD(arg0, s32 *, 0x38C) &= ~0x100;
            transition_enemy_state(arg0, 1);
        }
        if (M2C_FIELD(arg0, s32 *, 0x3C8) == 1) {
            transition_enemy_state(arg0, 3);
        }
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x3CC)--;
        if (M2C_FIELD(arg0, s32 *, 0x3CC) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x64) = (s32)(M2C_FIELD(arg0, s32 *, 0x64) + lbl_805D84C0);
        move_mine__10TBoss2MineFPv(arg0);
        VecCopy__FP3VecPC3Vec(&v, (s32)(arg0 + 0x390));
        subtract_vector(&v, arg0 + 0x2FC);
        s = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        s *= lbl_805D84C4;
        if (s < TBoss2Mine__data_805D84C8) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, (s32)&M2C_FIELD(arg0, Vec_800375C0 *, 0x390));
        } else {
            if (s > lbl_805D84CC) {
                s = lbl_805D84CC;
            }
            M2C_FIELD(arg0, f32 *, 0x2FC) = v.x * s + M2C_FIELD(arg0, f32 *, 0x2FC);
            M2C_FIELD(arg0, f32 *, 0x300) = M2C_FIELD(arg0, f32 *, 0x394);
            M2C_FIELD(arg0, f32 *, 0x304) = v.z * s + M2C_FIELD(arg0, f32 *, 0x304);
        }
        set_state_by_distance__10TBoss2MineFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x3CC));
        TBoss2Mine__sub_80038760(arg0);
        M2C_FIELD(arg0, f32 *, 0x38) = M2C_FIELD(arg0, f32 *, 0x2FC);
        M2C_FIELD(arg0, f32 *, 0x40) = M2C_FIELD(arg0, f32 *, 0x304);
        ((VObj_18_4225ac *)(arg0))->m87();
        M2C_FIELD(arg0, f32 *, 0x2FC) = M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(arg0, f32 *, 0x304) = M2C_FIELD(arg0, f32 *, 0x40);
        update_move_flag__10TBoss2MineFPv(arg0);
        break;
    case 5:
        break;
    }
}
#pragma pop

void TBoss2Mine__sub_80037AEC(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 var_r31;
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 0x100);
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x2FC), (s32)(arg1));
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg2;
    temp_r31 = arg3 * 0x5555;
    M2C_FIELD(arg0, s32 *, 0x3F4) = arg3;
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (lbl_805D84E4 * sin_table_lookup(temp_r31));
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x400) = (f32) (lbl_805D84E4 * cos_table_lookup(temp_r31));
    if (arg3 == 0) {
        var_r31 = 0x8000;
    } else if (arg3 == 1) {
        var_r31 = 0x6800;
    } else {
        var_r31 = 0x9800;
    }
    M2C_FIELD(arg0, f32 *, 0x404) = sin_table_lookup(var_r31);
    M2C_FIELD(arg0, f32 *, 0x408) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x40C) = cos_table_lookup(var_r31);
    M2C_FIELD(arg0, s32 *, 0x60) = var_r31;
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) TBoss2Mine__data_805D84D4;
    move_mine__10TBoss2MineFPv((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x5C) = 0x4000;
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x38), (s32)(arg0 + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0xA00);
}

void move_mine__10TBoss2MineFPv(u8 *arg0) {
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x3F0)) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x390, M2C_FIELD(arg0, s32 *, 0x3F0) + 0x38);
        vec3_add_to(arg0 + 0x390, arg0 + 0x3F8);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + lbl_805D84E8);
    }
}

extern f32 TBoss2Mine__data_805D84EC;

void TBoss2Mine__sub_80037C6C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TBoss2Mine__data_805D84EC + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

}
