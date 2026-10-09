#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Mine_80038760; struct O_80038908;
extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK play_sound_effect(int, void *, int, int);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
void update_move_flag__10TBoss2MineFPv(void *arg0);
void init_params__10TBoss2MineFPvif(u8 *arg0, s32 arg1, f32 farg0);
void set_state_by_distance__10TBoss2MineFPvi(void *arg0, s32 arg1);
void update_pulse_state__10TBoss2MineFPv(Mine_80038760 *self);
void set_node_offsets__10TBoss2MineFPv(O_80038908 *self);
void save_position__10TBoss2MineFPv(void* p);
void *__dt__10TBoss2MineFv(void *arg0, s16 arg1);
void* TBoss2Mine__ct(void* a0, int a1, int a2, int a3, int a4);
extern M2C_UNK lbl_80482D04[];
}

#define VecCopy__FP3VecPC3Vec ((M2C_UNK (*)(void *, s32))VecCopy__FP3VecPC3Vec)
#define update_pulse_state__10TBoss2MineFPv ((M2C_UNK (*)(void *))update_pulse_state__10TBoss2MineFPv)

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
struct Mine_800377E8 { u8 pad[0x404]; Vec_800375C0 vel; };

extern "C" {
void move_mine__10TBoss2MineFPv(u8 *arg0);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void init_launch__10TBoss2MineFPvPvii(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
void move_mine__10TBoss2MineFPv(u8 *arg0);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK subtract_vector(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void TBoss2Mine__sub_800375C0(u8 *arg0, s32 arg1);
}

extern "C" {

void TBoss2Mine__sub_80037C6C(void *arg0);
void move_mine__10TBoss2MineFPv(u8 *arg0);
M2C_UNK vec3_add_to(void *, void *);
s32 is_alive__9TObjEneDDFPv(s32);

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
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32)((6e+01f) * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + 0xF0;
        init_params__10TBoss2MineFPvif(arg0, 0x1E, (0.25f));
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
        M2C_FIELD(arg0, s32 *, 0x64) += 2.56e+03f;
        move_mine__10TBoss2MineFPv(arg0);
        VecCopy__FP3VecPC3Vec(&v, (s32)(arg0 + 0x390));
        subtract_vector(&v, arg0 + 0x2FC);
        s = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        s *= (0.75f);
        if (s < (0.2f)) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, (s32)&M2C_FIELD(arg0, Vec_800375C0 *, 0x390));
        } else {
            if (s > (4.0f)) {
                s = (4.0f);
            }
            M2C_FIELD(arg0, f32 *, 0x2FC) = v.x * s + M2C_FIELD(arg0, f32 *, 0x2FC);
            M2C_FIELD(arg0, f32 *, 0x300) = M2C_FIELD(arg0, f32 *, 0x394);
            M2C_FIELD(arg0, f32 *, 0x304) = v.z * s + M2C_FIELD(arg0, f32 *, 0x304);
        }
        set_state_by_distance__10TBoss2MineFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x3CC));
        update_pulse_state__10TBoss2MineFPv(arg0);
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

#pragma push
#pragma fp_contract on
void TBoss2Mine__sub_800377E8(u8 *arg0, s32 arg1) {
    Vec_800375C0 v;
    f32 t;
    switch (arg1) {
    case 4:
        ((VObj_18_4225ac *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x38C) &= ~7;
        M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x4000;
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
        M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
        M2C_FIELD(arg0, f32 *, 0x3DC) = (8.0f);
        M2C_FIELD(arg0, f32 *, 0x3E0) = (0.0f);
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3C8) == 3) {
            transition_enemy_state(arg0, 2);
        }
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x3C8)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3CC)++;
            if (M2C_FIELD(arg0, s32 *, 0x3CC) >= 0xF) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
                play_sound_effect(0x4003A804, arg0 + 0x2FC, 0, 0);
            }
            M2C_FIELD(arg0, f32 *, 0x2FC) = M2C_FIELD(arg0, f32 *, 0x404) * M2C_FIELD(arg0, f32 *, 0x3DC) + M2C_FIELD(arg0, f32 *, 0x2FC);
            M2C_FIELD(arg0, f32 *, 0x304) = M2C_FIELD(arg0, f32 *, 0x40C) * M2C_FIELD(arg0, f32 *, 0x3DC) + M2C_FIELD(arg0, f32 *, 0x304);
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x3A8) += 0x400;
            if (M2C_FIELD(arg0, s32 *, 0x3A8) >= 0x38E3) {
                M2C_FIELD(arg0, s32 *, 0x3A8) = 0x38E3;
                M2C_FIELD(arg0, s32 *, 0x3C8) = 2;
            }
            M2C_FIELD(arg0, f32 *, 0x2FC) = M2C_FIELD(arg0, f32 *, 0x404) * M2C_FIELD(arg0, f32 *, 0x3DC) + M2C_FIELD(arg0, f32 *, 0x2FC);
            M2C_FIELD(arg0, f32 *, 0x304) = M2C_FIELD(arg0, f32 *, 0x40C) * M2C_FIELD(arg0, f32 *, 0x3DC) + M2C_FIELD(arg0, f32 *, 0x304);
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x5C) -= 0x600;
            if (M2C_FIELD(arg0, s32 *, 0x5C) < 0) {
                M2C_FIELD(arg0, s32 *, 0x5C) = 0;
            }
            M2C_FIELD(arg0, s32 *, 0x64) += 2.56e+03f;
            M2C_FIELD(arg0, f32 *, 0x3DC) -= (0.2f);
            if (M2C_FIELD(arg0, f32 *, 0x3DC) <= (3.0f)) {
                M2C_FIELD(arg0, f32 *, 0x3DC) = (3.0f);
            }
            move_mine__10TBoss2MineFPv(arg0);
            VecCopy__FP3VecPC3Vec(&v, (s32)(arg0 + 0x390));
            subtract_vector(&v, arg0 + 0x2FC);
            if (update_scale__15TObjBoss2TunnelFPv(&v) <= (4.5f)) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = 3;
            }
            M2C_FIELD(arg0, f32 *, 0x3E0) += (0.05f);
            if (M2C_FIELD(arg0, f32 *, 0x3E0) > (3.0f)) {
                M2C_FIELD(arg0, f32 *, 0x3E0) = (3.0f);
            }
            t = M2C_FIELD(arg0, f32 *, 0x3E0) / M2C_FIELD(arg0, f32 *, 0x3DC);
            M2C_FIELD(arg0, f32 *, 0x404) = v.x * t + M2C_FIELD(arg0, f32 *, 0x404);
            M2C_FIELD(arg0, f32 *, 0x408) = v.y * t + M2C_FIELD(arg0, f32 *, 0x408);
            M2C_FIELD(arg0, f32 *, 0x40C) = v.z * t + M2C_FIELD(arg0, f32 *, 0x40C);
            update_scale__15TObjBoss2TunnelFPv((void *)((s32)arg0 + 0x404));
            M2C_FIELD(arg0, f32 *, 0x2FC) = ((Mine_800377E8 *)arg0)->vel.x * M2C_FIELD(arg0, f32 *, 0x3DC) + M2C_FIELD(arg0, f32 *, 0x2FC);
            M2C_FIELD(arg0, f32 *, 0x300) = M2C_FIELD(arg0, f32 *, 0x408) * M2C_FIELD(arg0, f32 *, 0x3DC) + M2C_FIELD(arg0, f32 *, 0x300);
            M2C_FIELD(arg0, f32 *, 0x304) = M2C_FIELD(arg0, f32 *, 0x40C) * M2C_FIELD(arg0, f32 *, 0x3DC) + M2C_FIELD(arg0, f32 *, 0x304);
            break;
        }
        update_move_flag__10TBoss2MineFPv(arg0);
        break;
    case 5:
        break;
    }
}
#pragma pop

void init_launch__10TBoss2MineFPvPvii(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 var_r31;
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 0x100);
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x2FC), (s32)(arg1));
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg2;
    temp_r31 = arg3 * 0x5555;
    M2C_FIELD(arg0, s32 *, 0x3F4) = arg3;
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) ((2e+01f) * sin_table_lookup(temp_r31));
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x400) = (f32) ((2e+01f) * cos_table_lookup(temp_r31));
    if (arg3 == 0) {
        var_r31 = 0x8000;
    } else if (arg3 == 1) {
        var_r31 = 0x6800;
    } else {
        var_r31 = 0x9800;
    }
    M2C_FIELD(arg0, f32 *, 0x404) = sin_table_lookup(var_r31);
    M2C_FIELD(arg0, f32 *, 0x408) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x40C) = cos_table_lookup(var_r31);
    M2C_FIELD(arg0, s32 *, 0x60) = var_r31;
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (0.0f);
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
        M2C_FIELD(arg0, f32 *, 0x394) += 17.0f;
    }
}

void TBoss2Mine__sub_80037C6C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) ((1.0f) + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

}

#undef VecCopy__FP3VecPC3Vec
#undef update_pulse_state__10TBoss2MineFPv

extern "C" {

void *TBoss2Mine__sub_80037C8C(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);

void *TBoss2Mine__sub_80037C8C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482D04;
        __dt__10TBoss2MineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#define init_params__10TBoss2MineFPvif ((M2C_UNK (*)(void *, int, f32))init_params__10TBoss2MineFPvif)
#define calc_elapsed_scaled__9TObjEneDDFv ((f32 (*)(void *, int, int))calc_elapsed_scaled__9TObjEneDDFv)
#define play_sound_effect ((M2C_UNK (*)(int, void *, int, int, int))play_sound_effect)
#define update_pulse_state__10TBoss2MineFPv ((M2C_UNK (*)(void *))update_pulse_state__10TBoss2MineFPv)

struct VBase { char pad[0x18]; };

struct VObj : VBase {
#define V(n) virtual void m##n();
V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)V(90)V(91)V(92)V(93)V(94)V(95)
#undef V
};

struct VBase_80037EE0 { char pad[0x18]; };

struct VObj_80037EE0 : VBase_80037EE0 {
#define V(n) virtual void m##n();
V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)V(90)V(91)V(92)V(93)V(94)V(95)
#undef V
};

extern "C" {
void TBoss2Mine__sub_80037D4C(u8 *arg0, s32 arg1);
void set_launch_position_velocity__10TBoss2MineFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(s32, f32, f32, f32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK subtract_vector(void *, void *);
void TBoss2Mine__sub_80037EE0(u8 *arg0, s32 arg1);
}

extern "C" {

void* create__10TBoss2MineFPviii(void* a0, int a1, int a2, int a3);

void* create__10TBoss2MineFPviii(void* a0, int a1, int a2, int a3) { TBoss2Mine__ct(a0, a1, a2, a3, 1); *(int*)((char*)a0 + 0x18) = (int)lbl_80482D04; *(int*)((char*)a0 + 0x3f0) = 0; *(int*)((char*)a0 + 0x3f4) = 0; *(float*)((char*)a0 + 0x3f8) = (0.0f); *(float*)((char*)a0 + 0x3fc) = (0.0f); *(float*)((char*)a0 + 0x400) = (0.0f); *(float*)((char*)a0 + 0x404) = (0.0f); *(float*)((char*)a0 + 0x408) = (0.0f); *(float*)((char*)a0 + 0x40c) = (0.0f); return a0; }
#pragma push
#pragma fp_contract on
void TBoss2Mine__sub_80037D4C(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r7;
    switch (arg1) {
    case 4:
        ((VObj *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & ~5);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x38C) | 2;
        M2C_FIELD(arg0, s32 *, 0x38C) = temp_r5;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x8000;
        M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
        temp_r7 = (s32) ((3e+01f) * calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0), (int) (0x8000), (int) (temp_r5)));
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r7 + 0xB4);
        play_sound_effect((int) (0x4003A804), (void *) (arg0 + 0x2FC), (int) (0), (int) (0), (int) (temp_r7));
        init_params__10TBoss2MineFPvif((void *) (arg0), (int) (0x1E), (f32) ((0.25f)));
        return;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x38C);
        if (temp_r4 & 0x100) {
            M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (temp_r4 & 0xFFFFFEFF);
            transition_enemy_state((void *) (arg0), (int) (1));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) == 2) {
            transition_enemy_state((void *) (arg0), (int) (3));
        }
        break;
    case 5:
        break;
    case 0:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C8);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3A8) + 0x280);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) >= 0x38E3) {
                M2C_FIELD(arg0, s32 *, 0x3A8) = 0x38E3;
                M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
                return;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = 2;
            }
            set_state_by_distance__10TBoss2MineFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x3CC)));
            update_pulse_state__10TBoss2MineFPv((void *) (arg0));
            break;
        }
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss2Mine__sub_80037EE0(u8 *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r3;
    switch (arg1) {
    case 4:
        ((VObj_80037EE0 *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFF8);
        VecCopy__FP3VecPC3Vec(arg0 + 0x39C, arg0 + 0x390);
        subtract_vector(arg0 + 0x39C, arg0 + 0x2FC);
        M2C_FIELD(arg0, f32 *, 0x3DC) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x39C);
        temp_r3 = (s32) ((10430.38043493439) * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x39C), M2C_FIELD(arg0, f32 *, 0x3A4)));
        M2C_FIELD(arg0, s32 *, 0x60) = temp_r3;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x4000;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x300);
        temp_f1 = newton_sqrtf(temp_r3, ((2.0f) * (temp_f2 - M2C_FIELD(arg0, f32 *, 0x394))) / (0.2f), temp_f2, (2.0f));
        M2C_FIELD(arg0, f32 *, 0x3E4) = (1e+01f) * temp_f1;
        M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) (1e+01f);
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) 0.0f;
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) M2C_FIELD(arg0, f32 *, 0x3DC);
        break;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x300) < M2C_FIELD(arg0, f32 *, 0x394)) {
            M2C_FIELD(arg0, f32 *, 0x300) = M2C_FIELD(arg0, f32 *, 0x394);
            transition_enemy_state(arg0, 2);
        }
        break;
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x39C) * M2C_FIELD(arg0, f32 *, 0x3EC)) + M2C_FIELD(arg0, f32 *, 0x2FC));
        M2C_FIELD(arg0, f32 *, 0x304) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3A4) * M2C_FIELD(arg0, f32 *, 0x3EC)) + M2C_FIELD(arg0, f32 *, 0x304));
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3EC));
        if (M2C_FIELD(arg0, f32 *, 0x3E0) < M2C_FIELD(arg0, f32 *, 0x3E4)) {
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E8) - (0.2f));
            M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + M2C_FIELD(arg0, f32 *, 0x3E8));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) >= 0x8000) {
                M2C_FIELD(arg0, s32 *, 0x5C) = 0x8000;
            } else {
                M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 0x300);
                M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 0x4000);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x5C) = 0x4000;
        }
        update_move_flag__10TBoss2MineFPv(arg0);
        break;
    }
}
#pragma pop

void set_launch_position_velocity__10TBoss2MineFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2) {
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 0x100);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x390, arg2);
    M2C_FIELD(arg0, f32 *, 0x394) += 1.0f;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x2FC);
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0xA00);
}

}

#undef init_params__10TBoss2MineFPvif
#undef calc_elapsed_scaled__9TObjEneDDFv
#undef play_sound_effect
#undef update_pulse_state__10TBoss2MineFPv
#define play_sound_effect ((s32 (*)(s32, u32, s16, s32))play_sound_effect)
#define TBoss2Mine__ct ((void *(*)(void *, s32, s16, s16, s32))TBoss2Mine__ct)
#define set_node_offsets__10TBoss2MineFPv ((void (*)(void *))set_node_offsets__10TBoss2MineFPv)

struct Base_8003843C_80038140 { char pad[0x18]; };
struct VObj_8003843C_80038140 : Base_8003843C_80038140 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)
    V(90)V(91)V(92)V(93)
#undef V
    virtual void m94();
};

struct VBase_18_444bc5
{
  char pad[0x18];
};

struct VObj_18_444bc5 : VBase_18_444bc5 {
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
    virtual M2C_UNK m94();
};

struct M2CCopy_10
{
  u8 bytes[0x10];
};

struct M2CCopy_14
{
  u8 bytes[0x14];
};

struct RecoveredGlobal_800384C8_lbl_80435AB0
{
  M2C_UNK value;
  u8 remaining[0x10];
};

struct Vec_80038200 { f32 x, y, z; };

struct Col_80038200 { s32 a; f32 r, g, b; };

struct Base_80038200 { char pad[0x18]; };

struct Mine_80038200 : Base_80038200 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)
#undef V
    virtual s32 m8(f32, f32);
#define V(n) virtual void m##n();
    V(9)V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)
    V(90)V(91)V(92)V(93)V(94)V(95)V(96)V(97)V(98)V(99)
    V(100)V(101)V(102)V(103)V(104)V(105)V(106)V(107)
#undef V
    virtual void m108();
    u8 pad1C[0x24 - 0x1C];
    void *f24;
    u8 pad28[0x34 - 0x28];
    void *model;
    Vec_80038200 pos;
    u8 pad44[0x5C - 0x44];
    s32 f5C;
    s32 f60;
    s32 f64;
    u8 pad68[0x300 - 0x68];
    f32 f300;
    u8 pad304[0x326 - 0x304];
    s16 f326;
    u8 pad328[0x38C - 0x328];
    u32 flags;
    u8 pad390[0x3AC - 0x390];
    f32 f3AC;
    u32 f3B0;
};

extern "C" {
f32 TBoss2DeRolLe__sub_80034CEC(void);
s32 create_timed_particle_emitter(s32, s32, s32, s32);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
void TObjEneDD__sub_800BA5A4(s32, s32);
extern RecoveredGlobal_800384C8_lbl_80435AB0 lbl_80435AB0;
void TBoss2Mine__vt105(u8 *arg0, s32 arg1);
void render_with_position_override__10TObjPlayerFPvPvi(void *, void *, s32);
s32 check_demo_mode__10TObjPlayerFv(void);
void clear_global_flag_400__9TObjEneDDFv(void);
void toggle_particle_effect__10TObjPlayerFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void scale_matrix(s32, f32, f32, f32);
void rotate_matrix_y(s32, s32);
void translate_matrix(s32, f32, f32, f32);
void rotate_matrix_x(s32, s32);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(void *);
void set_chunk_material_color(void *);
void draw_chunk_object(void *);
extern Vec_80038200 lbl_80435AD0;
extern Col_80038200 lbl_80435ADC;
extern void *lbl_805D28BC;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
void render__10TBoss2MineFv(Mine_80038200 *self);
}

extern "C" {

void TBoss2Mine__sub_80038140(void *arg0);
void *TBoss2Mine__sub_800381B8(void *arg0, s32 arg1, s16 arg2, s16 arg3);
void TBoss2Mine__vt103(void);
void TBoss2Mine__vt104(void);
void TBoss2Mine__vt106(void *arg0, s32 arg1);
void TBoss2Mine__vt107(void);
void TBoss2Mine__vt108(void);
void *deleting_dtor__10TBoss2MineFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);

void TBoss2Mine__sub_80038140(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) ((5.0f) + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

extern M2C_UNK lbl_80482EC0[];

void *deleting_dtor__10TBoss2MineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482EC0;
        __dt__10TBoss2MineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80482EC0[];

void *TBoss2Mine__sub_800381B8(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    TBoss2Mine__ct(arg0, arg1, arg2, arg3, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482EC0;
    return arg0;
}

void TBoss2Mine__vt108(void) {  }
void TBoss2Mine__vt107(void) {  }

void render__10TBoss2MineFv(Mine_80038200 *self) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        self->m108();
        return;
    }
    if (self->flags & 1) {
        return;
    }
    if (self->m8((4e+02f), (2e+01f)) == 0) {
        return;
    }
    if (self->flags & 2) {
        Vec_80038200 v = lbl_80435AD0;
        render_with_position_override__10TObjPlayerFPvPvi(self, &v, 0);
    }
    set_global_param__8TObjFishFi(self->f24);
    lbl_805D5660 = some_id_805c6f74;
    clear_global_flag_400__9TObjEneDDFv();
    toggle_particle_effect__10TObjPlayerFv();
    set_node_offsets__10TBoss2MineFPv(self);
    push_matrix();
    post_translate_matrix(&self->pos);
    translate_matrix(0, (0.0f), self->f300 - self->pos.y, (0.0f));
    rotate_matrix_y(0, self->f60);
    rotate_matrix_x(0, self->f5C);
    rotate_matrix_y(0, self->f64);
    translate_matrix(0, (0.0f), (-1e+01f), (0.0f));
    if (self->flags & 4) {
        some_id_805c6f74 |= 0x20;
        Col_80038200 c = lbl_80435ADC;
        f32 f = -(f32)(self->f3B0 >> 16) / (255.0f);
        c.b = f;
        c.g = f;
        c.r = -f;
        set_chunk_material_color(&c);
        draw_chunk_object(self->model);
    } else {
        draw_chunk_object(self->model);
    }
    pop_matrix();
    if (self->f326 == 3) {
        push_matrix();
        f32 s = (0.5f) * self->f3AC;
        post_translate_matrix(&self->pos);
        scale_matrix(0, s, (3.0f), s);
        draw_chunk_object(lbl_805D28BC);
        pop_matrix();
    }
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
}

void TBoss2Mine__vt106(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_8003843C_80038140 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFF8);
        return;
    case 3:
        transition_enemy_state(arg0, 0);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    case 0:
        return;
    }
}

typedef struct CopyStack_800384C8 CopyStack_800384C8;
typedef struct M2CCopy_10 M2CCopy_10;
typedef struct M2CCopy_14 M2CCopy_14;
typedef struct RecoveredGlobal_800384C8_lbl_80435AB0 RecoveredGlobal_800384C8_lbl_80435AB0;
typedef struct VBase_18_444bc5 VBase_18_444bc5;
typedef struct VObj_18_444bc5 VObj_18_444bc5;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
typedef char RecoveredGlobal_800384C8_lbl_80435AB0_size[((sizeof(RecoveredGlobal_800384C8_lbl_80435AB0)) == 0x14) ? (1) : (-1)];
#define PSO_VCALL_VObj_18_444bc5_m94(_self) (((VObj_18_444bc5 *)(_self))->m94())
void TBoss2Mine__vt105(u8 *arg0, s32 arg1) {
  struct CopyStack_800384C8
  {
    u8 bytes[0x14];
  };
  u8 *temp_r4;
  CopyStack_800384C8 copy_storage_800384C8;
  switch (arg1)
  {
    case 4:
      PSO_VCALL_VObj_18_444bc5_m94(arg0);
      *((s32 *) (((s8 *) arg0) + 0x38C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x38C))) & 0xFFFFFFF8);
      *((s32 *) (((s8 *) arg0) + 0x3B0)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x3C8)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x3CC)) = 0;
      create_timed_particle_emitter((*((s32 *) (((s8 *) arg0) + 0xA4))) + 0x1C, 0x16A, 0, 6);
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3CC)))) == 2)
    {
      transition_enemy_state((void *)(arg0), (M2C_UNK)(0));
    }
    case 5:
      return;
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x3C8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x3C8))) + 1);
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3C8)))) > 0x1E)
    {
      temp_r4 = ((u8 *) (&lbl_80435AB0.value)) - 4;
      *((M2CCopy_14 *) (((s32) (copy_storage_800384C8.bytes - 0x4)) + 4)) = *((const M2CCopy_14 *) (((s32) temp_r4) + 4));
      *((f32 *) (copy_storage_800384C8.bytes + 0x4)) = TBoss2DeRolLe__sub_80034CEC();
      TObjEneDD__sub_800BA5A4((s32) arg0, (s32) copy_storage_800384C8.bytes);
      spawn_particle_effect_with_flags((*((s32 *) (((s8 *) arg0) + 0xA4))) + 0x1C, 0x16B, 0x40);
      *((s32 *) (((s8 *) arg0) + 0x3CC)) = 2;
      play_sound_effect(0x4003AD05, (u32) (arg0 + 0x2FC), 0, 0);
    }
      break;
  }
}

void TBoss2Mine__vt104(void) {  }
void TBoss2Mine__vt103(void) {  }

}

#undef play_sound_effect
#undef TBoss2Mine__ct
#undef set_node_offsets__10TBoss2MineFPv
#define transition_enemy_state ((int (*)(void *, void *))transition_enemy_state)

struct Base_80038610 { char pad[0x18]; };
struct VObj_80038610 : Base_80038610 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93();
};
#define VM(n) virtual void m##n();
struct Base_800386A4_80038610 { char pad[0x18]; };
struct VObj_800386A4_80038610 : Base_800386A4_80038610 {
    VM(0) VM(1) VM(2) VM(3) VM(4) VM(5) VM(6) VM(7) VM(8) VM(9)
    VM(10) VM(11) VM(12) VM(13) VM(14) VM(15) VM(16) VM(17) VM(18) VM(19)
    VM(20) VM(21) VM(22) VM(23) VM(24) VM(25) VM(26) VM(27) VM(28) VM(29)
    VM(30) VM(31) VM(32) VM(33) VM(34) VM(35) VM(36) VM(37) VM(38) VM(39)
    VM(40) VM(41) VM(42) VM(43) VM(44) VM(45) VM(46) VM(47) VM(48) VM(49)
    VM(50) VM(51) VM(52) VM(53) VM(54) VM(55) VM(56) VM(57) VM(58) VM(59)
    VM(60) VM(61) VM(62) VM(63) VM(64) VM(65) VM(66) VM(67) VM(68) VM(69)
    VM(70) VM(71) VM(72) VM(73) VM(74) VM(75) VM(76) VM(77) VM(78) VM(79)
    VM(80) VM(81) VM(82) VM(83) VM(84) VM(85) VM(86) VM(87) VM(88) VM(89)
    VM(90) VM(91) VM(92) VM(93) VM(94) VM(95) VM(96) VM(97) VM(98) VM(99)
    VM(100) VM(101)
    virtual void m102(s32);
    virtual void m103(s32);
    virtual void m104(s32);
    virtual void m105(s32);
    virtual void m106(s32);
};

struct N_80038908 { u8 pad[0x14]; s32 f14; u8 pad2[0x30 - 0x18]; N_80038908 *next; };

struct M_80038908 { u8 pad[0x2c]; N_80038908 *first; };

struct O_80038908 { u8 pad[0x34]; M_80038908 *m; u8 pad2[0x3a8 - 0x38]; s32 f3a8; };

typedef struct Mine_80038760 {
    u8 pad0[0x38C];
    s32 flags;
    u8 pad390[0x3B0 - 0x390];
    s32 angle;
    f32 scale;
    f32 speed;
    s32 timer;
    s32 wait;
    s32 state;
} Mine_80038760;

extern "C" {
}

extern "C" {

struct Base_80038948_80038610 {
    char pad[0x18];
};
struct VObj_80038948_80038610 : Base_80038948_80038610 {
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
    virtual u32 m102();
};

void TBoss2Mine__vt102(void *arg0, s32 arg1);
void TBoss2Mine__vt59(void);
void TBoss2Mine__vt85(void *arg0, s32 arg1, s32 arg2);
void TBoss2Mine__vt26(void);
void TBoss2Mine__vt61(void* p);

void TBoss2Mine__vt102(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        ((VObj_80038610 *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 1);
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFF9);
        return;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x38C);
        if (temp_r4 & 0x100) {
            M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (temp_r4 & 0xFFFFFEFF);
            transition_enemy_state((void*)((s32)arg0), (void*)(1));
        }
    case 5:
    case 0:
        return;
    }
}

void TBoss2Mine__vt85(void *arg0, s32 arg1, s32 arg2) {
    VObj_800386A4_80038610 *o = (VObj_800386A4_80038610 *)arg0;
    switch (arg1) {
    case 0:
        o->m102(arg2);
        return;
    case 1:
        o->m103(arg2);
        return;
    case 2:
        o->m104(arg2);
        return;
    case 3:
        o->m105(arg2);
        return;
    case 4:
        o->m106(arg2);
        return;
    }
}

void update_pulse_state__10TBoss2MineFPv(Mine_80038760 *self) {
    self->timer++;
    switch (self->state) {
    case 2:
        if (self->timer >= self->wait) {
            self->timer = 0;
            self->scale = (0.0f);
            self->state = 0;
        } else {
            self->flags &= ~4;
            break;
        }
    case 0: {
        self->scale += self->speed;
        if (self->scale >= 1.0f) {
            self->scale = 1.0f;
            self->state = 1;
        }
        self->angle = (s32)((255.0f) * self->scale) << 16;
        self->flags |= 4;
        break;
    }
    case 1: {
        self->scale -= self->speed;
        if (self->scale <= 0.0f) {
            self->scale = 0.0f;
            self->timer = 0;
            self->state = 2;
        }
        self->angle = (s32)((255.0f) * self->scale) << 16;
        self->flags |= 4;
        break;
    }
    case 3:
        break;
    }
}

void set_state_by_distance__10TBoss2MineFPvi(void *arg0, s32 arg1) {
    if (arg1 < 0x5A) {
        f32 temp = (0.5f);
        M2C_FIELD(arg0, s32 *, 0x3C0) = 3;
        M2C_FIELD(arg0, f32 *, 0x3B8) = temp;
        return;
    }
    if (arg1 < 0x96) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 5;
        return;
    }
    if (arg1 < 0x12C) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0xA;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0x1E;
}

void init_params__10TBoss2MineFPvif(u8 *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x3B8) = farg0;
    M2C_FIELD(arg0, s32 *, 0x3C0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) (0.0f);
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
}

void set_node_offsets__10TBoss2MineFPv(O_80038908 *self) {
    N_80038908 *n = self->m->first;
    s32 i;
    s32 v = -self->f3a8;
    for (i = 0; i < 4; i++) {
        n->f14 = v;
        n = n->next;
    }
    v = self->f3a8;
    for (i = 0; i < 4; i++) {
        n->f14 = v;
        n = n->next;
    }
}

void update_move_flag__10TBoss2MineFPv(void *arg0) {
    struct VObj_80038948_80038610 *obj = (struct VObj_80038948_80038610 *) arg0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x2FC);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x304);
    if (obj->m102() == 0U) {
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFFD);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 2);
}

void save_position__10TBoss2MineFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TBoss2Mine__vt59(void) {  }

}

#undef transition_enemy_state
#define transition_enemy_state ((int (*)(void *, void *))transition_enemy_state)

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m81();
    virtual void m82();
    virtual void m83();
    virtual s32 m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual M2C_UNK m86();
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
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual M2C_UNK m107();
};
extern "C" {
int TBoss2Mine__vt60(void* p);
int clear_attack_receipts(void*);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK TObjEneDD__sub_800BBA0C(void *);
M2C_UNK refresh_collision_body_centers(void *);
void run_task__10TBoss2MineFv(u8 *arg0);
}

extern "C" {

void TBoss2Mine__vt26(void);
void TBoss2Mine__vt61(void* p);
void TBoss2Mine__vt59(void);

int TBoss2Mine__vt60(void* p) { return clear_attack_receipts(p); }

void TBoss2Mine__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 4) { transition_enemy_state(p, (void*)4); } }
void TBoss2Mine__vt26(void) {  }
void run_task__10TBoss2MineFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m107();
        return;
    }
    ((VObj_18 *)(arg0))->m81();
    if (((VObj_18 *)(arg0))->m84() == 0) {
        ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 3);
    }
    ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
    TObjEneDD__sub_800BBA0C((void *) (arg0));
    if (!(M2C_FIELD(arg0, s32 *, 0x38C) & 1)) {
        save_position__10TBoss2MineFPv((void *) (arg0));
        ((VObj_18 *)(arg0))->m86();
        set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
        ((VObj_18 *)(arg0))->m98();
    }
    refresh_collision_body_centers((void *) (arg0));
}

}

#undef transition_enemy_state

struct VBase_18_72b3e0 { char pad[0x18]; };

struct VObj_18_72b3e0 : VBase_18_72b3e0 {
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
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

typedef struct Rec_80038BA0 { u8 d[0x1C]; } Rec_80038BA0;

typedef struct Tbl_80038BA0 {
    s32 a[2];
    s32 b[2];
    s32 c[2];
    Rec_80038BA0 d[2];
    u8 model[0x10];
} Tbl_80038BA0;

extern "C" {
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK check_state_flag_2__9TObjEneDDFPv(void *);
M2C_UNK init_model__9TObjEneDDFPv(void *, void *, int, int);
M2C_UNK init_position_vectors__9TObjEneDDFPv(void *);
extern u8 *lbl_805D4BA4;
void init__10TBoss2MineFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneDD__vt0(void *, int);
void __dl__7TObjectFPv(void *);
void free_collision_body_parts(void *);

extern M2C_UNK __vt__10TBoss2Mine[];

void *__dt__10TBoss2MineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TBoss2Mine;
        free_collision_body_parts(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
__declspec(section ".data") void *boss2_mine_params[2] = {
    (void *)0x11, (void *)0x11,
};
__declspec(section ".data") void *lbl_80482C90[2] = {
    (void *)0xf, (void *)0xf,
};
__declspec(section ".data") void *lbl_80482C98[2] = {
    (void *)0x11, (void *)0x11,
};
void *lbl_80482CA0[14] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x43610000,
    (void *)0x0, (void *)0x600, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_80482CD8[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40a00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void init__10TBoss2MineFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r29;
    s32 temp_r30;
    u8 *temp_r6;
    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C), s32 *, 0x38);
    temp_r6 = M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(temp_r6, s32 *, 0x2C);
    init_model__9TObjEneDDFPv(arg0, (u8 *)lbl_80482CD8, 1, (int)temp_r6);
    reset_hp__9TObjEneDDFPv(arg0, register_boss__6TLobbyFPv(((s32 *)boss2_mine_params)[arg1]),
                            dispatch_shared_handler_b__6TLobbyFPv(((s32 *)lbl_80482C90)[arg1]),
                            register_object__6TLobbyFPv(((s32 *)lbl_80482C98)[arg1]));
    check_state_flag_2__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, Rec_80038BA0 **, 0x350) = &((Rec_80038BA0 *)lbl_80482CA0)[arg1];
    M2C_FIELD(arg0, f32 *, 0x37C) = (3.0f);
    ((VObj_18_72b3e0 *)(arg0))->m93();
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
    M2C_FIELD(arg0, f32 *, 0x390) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x394) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x398) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x39C) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3A0) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3A4) = (0.0f);
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (0.0f);
    M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
    M2C_FIELD(arg0, f32 *, 0x3B4) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3B8) = (0.0f);
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 2;
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3DC) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3E0) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3E4) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3E8) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3EC) = (0.0f);
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    ((VObj_18_72b3e0 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
}

}
