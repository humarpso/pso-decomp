#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneMe1Gee__vt112(void* p);

int get_target_info__9TObjEneDDFPv(void*);
int TObjEneMe1Gee__sub_800CC0C4(void*);

void TObjEneMe1Gee__vt112(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneMe1Gee__sub_800CC0C4(p); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x800C811C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_message__13TObjEneMe1GeeFPvi(u8 *arg0, s32 arg1);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(s32, M2C_UNK, s32, void *, s32);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 TObjEneMe1Gee__data_805D51C0;

struct Base8036 { char pad[0x18]; };
struct VObj8036 : Base8036 {
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
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual s32 m106();
    virtual s32 m107();
};

void handle_message__13TObjEneMe1GeeFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        create_breakup_mdl__12TBoss3VoloptFiiiii(TObjEneMe1Gee__data_805D51C0, 0, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x400000);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        return;
    case 0:
        if (((VObj8036*)arg0)->m107() != 0) {
            send_entity_set_flags__6TLobbyFPv(arg0);
            queue_destruction__7TObjectFv(arg0);
        }
    case 3:
    case 1:
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        break;
    }
}

}
#endif

#if PSO_CLASS_PACKAGE == 0x800C8BA8
#include "types.h"

extern "C" {

void TObjEneMe1Gee__sub_800C8BA8(void* a0);

    extern int TObjEneMe1Gee__data_805D51B0;
void TObjEneMe1Gee__sub_800C8BA8(void* a0) { *(int*)((char*)a0 + 0x34) = *(int*)((char*)*(int*)((char*)TObjEneMe1Gee__data_805D51B0 + 0x42c) + 0x8); *(int*)((char*)a0 + 0x24) = *(int*)((char*)*(int*)((char*)TObjEneMe1Gee__data_805D51B0 + 0x42c) + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C8C7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt_deleting__13TObjEneMe1GeeFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__13TObjEneMe1GeeFv(void *, int);

extern M2C_UNK lbl_8049387C[];

void *__dt_deleting__13TObjEneMe1GeeFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049387C;
        __dt__13TObjEneMe1GeeFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C91B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void state_orbit__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1);
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK advance_animation_playback();
f32 sin_table_lookup(s32, f32);
f32 cos_table_lookup(s32);

extern const f32 lbl_805DA0C4;

void state_orbit__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1) {
    f32 temp_f1;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x448) = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60), temp_f1);
        M2C_FIELD(arg0, f32 *, 0x44C) = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
        return;
    case 0:
        advance_animation_playback();
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
        move_with_wall_slide_commit__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x448), M2C_FIELD(arg0, f32 *, 0x44C), lbl_805DA0C4);
    case 3:
    case 5:
    case 1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C9270
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_event__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1);

M2C_UNK advance_animation_playback();

void handle_event__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        return;
    case 0:
        advance_animation_playback();
        M2C_FIELD(arg0, s32 *, 0x434) = (s32) (M2C_FIELD(arg0, s32 *, 0x434) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) > 0x5A) {
            M2C_FIELD(arg0, s32 *, 0x434) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
            if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) >= 4) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            }
        }
    case 3:
    case 5:
    case 1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C9410
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseVT { char pad[0x18]; };
struct VObj : BaseVT {
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
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
};

extern "C" {

void state_return_home__13TObjEneMe1GeeFPvi(VObj *arg0, s32 arg1);
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, void *);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK update_angle__13TObjEneMe1GeeFPv(void *);
M2C_UNK TObjEneMe1Gee__sub_800CBE6C(void *, f32);
M2C_UNK set_move_speed_x__13TObjEneMe1GeeFPv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK advance_animation_playback();

extern const f32 TObjEneMe1Gee__data_805DA0A8;
extern const f32 lbl_805DA0CC;
extern const f32 lbl_805DA0D0;

void state_return_home__13TObjEneMe1GeeFPvi(VObj *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 0xF);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        arg0->m94();
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) == 2) {
            arg0->m103();
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        if (update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Gee__data_805DA0A8) != 0) {
            M2C_FIELD(arg0, s32 *, 0x434) = 2;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x434);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x438) >= 0x3C) {
                M2C_FIELD(arg0, s32 *, 0x434) = 1;
            }
            TObjEneMe1Gee__sub_800CBE6C(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F4));
            break;
        case 1:
            copy_position__14TObjEneEpsilonFPv(arg0, (u8 *)arg0 + 0x50);
            update_velocity__9TObjEneDDFPv(arg0);
            update_angle__13TObjEneMe1GeeFPv(arg0);
            set_move_speed_x__13TObjEneMe1GeeFPv(arg0);
            if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805DA0CC) {
                move_with_wall_slide_commit__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), lbl_805DA0D0);
            }
            break;
        }
        arg0->m87();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C9964
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_800c9964 { char pad[0x18]; };
struct VObj_800c9964 : VBase_800c9964 {
#define VM(i) virtual M2C_UNK m##i();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)
    VM(16)VM(17)VM(18)VM(19)VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)VM(30)
    VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)
    VM(46)VM(47)VM(48)VM(49)VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)VM(60)
    VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)
    VM(76)VM(77)VM(78)VM(79)VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)VM(90)
    VM(91)VM(92)VM(93)VM(94)VM(95)VM(96)VM(97)VM(98)VM(99)VM(100)VM(101)VM(102)VM(103)VM(104)
    VM(105)VM(106)
#undef VM
};

extern "C" {

void run_task__13TObjEneMe1GeeFPvi(u8 *arg0, s32 arg1);
M2C_UNK advance_animation_playback();
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK set_move_speed_x__13TObjEneMe1GeeFPv(void *);
s32 find_entity_by_id(int);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, void *);
M2C_UNK set_flag3c8_bit8__13TObjEneMe1GeeFPv(int);
M2C_UNK update_angle__13TObjEneMe1GeeFPv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

extern const f32 lbl_805DA0D0;
extern const f32 TObjEneMe1Gee__data_805DA0EC;

void run_task__13TObjEneMe1GeeFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (0xA));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj_800c9964 *) arg0)->m93();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x48C)));
            set_flag3c8_bit8__13TObjEneMe1GeeFPv((int) (M2C_FIELD(arg0, s32 *, 0x3C0)));
        }
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        return;
    case 3:
        if ((((VObj_800c9964 *) arg0)->m106() == 0) && (M2C_FIELD(arg0, f32 *, 0x3AC) < TObjEneMe1Gee__data_805DA0EC)) {
            transition_enemy_state((void *) (arg0), (int) (6));
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        copy_position__14TObjEneEpsilonFPv((void *) (arg0), (void *) (arg0 + 0x50));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        update_angle__13TObjEneMe1GeeFPv((void *) (arg0));
        set_move_speed_x__13TObjEneMe1GeeFPv((void *) (arg0));
        move_with_wall_slide_commit__9TObjEneDDFPvfff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (lbl_805DA0D0));
        ((VObj_800c9964 *) arg0)->m86();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CA970
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18G { char pad[0x18]; };
struct VObj18G : VBase18G {
    virtual void vpad0(); virtual void vpad1(); virtual void vpad2(); virtual void vpad3();
    virtual void vpad4(); virtual void vpad5(); virtual void vpad6(); virtual void vpad7();
    virtual void vpad8(); virtual void vpad9(); virtual void vpad10(); virtual void vpad11();
    virtual void vpad12(); virtual void vpad13(); virtual void vpad14(); virtual void vpad15();
    virtual void vpad16(); virtual void vpad17(); virtual void vpad18(); virtual void vpad19();
    virtual void vpad20(); virtual void vpad21(); virtual void vpad22(); virtual void vpad23();
    virtual void vpad24(); virtual void vpad25(); virtual void vpad26(); virtual void vpad27();
    virtual void vpad28(); virtual void vpad29(); virtual void vpad30(); virtual void vpad31();
    virtual void vpad32(); virtual void vpad33(); virtual void vpad34(); virtual void vpad35();
    virtual void vpad36(); virtual void vpad37(); virtual void vpad38(); virtual void vpad39();
    virtual void vpad40(); virtual void vpad41(); virtual void vpad42(); virtual void vpad43();
    virtual void vpad44(); virtual void vpad45(); virtual void vpad46(); virtual void vpad47();
    virtual void vpad48(); virtual void vpad49(); virtual void vpad50(); virtual void vpad51();
    virtual void vpad52(); virtual void vpad53(); virtual void vpad54(); virtual void vpad55();
    virtual void vpad56(); virtual void vpad57(); virtual void vpad58(); virtual void vpad59();
    virtual void vpad60(); virtual void vpad61(); virtual void vpad62(); virtual void vpad63();
    virtual void vpad64(); virtual void vpad65(); virtual void vpad66(); virtual void vpad67();
    virtual void vpad68(); virtual void vpad69(); virtual void vpad70(); virtual void vpad71();
    virtual void vpad72(); virtual void vpad73(); virtual void vpad74(); virtual void vpad75();
    virtual void vpad76(); virtual void vpad77(); virtual void vpad78(); virtual void vpad79();
    virtual void vpad80(); virtual void vpad81(); virtual void vpad82(); virtual void vpad83();
    virtual void vpad84(); virtual void vpad85(); virtual void vpad86();
    virtual void vf164();
    virtual void vpad88(); virtual void vpad89(); virtual void vpad90(); virtual void vpad91();
    virtual void vpad92(); virtual void vpad93();
    virtual void vf180();
    virtual void vpad95(); virtual void vpad96(); virtual void vpad97(); virtual void vpad98();
    virtual void vpad99(); virtual void vpad100(); virtual void vpad101(); virtual void vpad102();
    virtual void vf1A4();
    virtual void vpad104(); virtual void vpad105();
    virtual s32 vf1B0();
};

extern "C" {

void state_attack__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
s32 TObjEneMe1Gee__sub_800CB5A0(void *, M2C_UNK);
M2C_UNK TObjEneMe1Gee__sub_800CB764(void *, M2C_UNK);
M2C_UNK update__13TObjEneMe1GeeFPv(void *);
M2C_UNK update_animation_frame__13TObjEneMe1GeeFPv(void *);
M2C_UNK TObjEneMe1Gee__sub_800CBE6C(void *, f32);
M2C_UNK advance_animation_playback();

extern const f32 TObjEneMe1Gee__data_805DA0A8;

void state_attack__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj18G *) arg0)->vf180();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        return;
    case 3:
        if ((((VObj18G *) arg0)->vf1B0() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x434) == 3)) {
            M2C_FIELD(arg0, s32 *, 0x408) = 0;
            ((VObj18G *) arg0)->vf1A4();
        }
    case 5:
    case 1:
        return;
    case 0:
        advance_animation_playback();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Gee__data_805DA0A8);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x434);
        switch (temp_r0) {
        case 0:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 4) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r3 & 0xFFFFFFFB);
                if (TObjEneMe1Gee__sub_800CB5A0(arg0, 0x200) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x434) = 1;
                    TObjEneMe1Gee__sub_800CB764(arg0, 1);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x434) = 2;
                    TObjEneMe1Gee__sub_800CB764(arg0, 3);
                }
            }
            update__13TObjEneMe1GeeFPv(arg0);
            update_animation_frame__13TObjEneMe1GeeFPv(arg0);
            break;
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
                M2C_FIELD(arg0, s32 *, 0x434) = 3;
            }
            update__13TObjEneMe1GeeFPv(arg0);
            update_animation_frame__13TObjEneMe1GeeFPv(arg0);
            break;
        case 2:
            update__13TObjEneMe1GeeFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x47C) != 0) {
                update_animation_frame__13TObjEneMe1GeeFPv(arg0);
            } else {
                TObjEneMe1Gee__sub_800CBE6C(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F0));
                if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x80000) {
                    M2C_FIELD(arg0, s32 *, 0x434) = 3;
                }
            }
            break;
        }
        ((VObj18G *) arg0)->vf164();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CAB78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18 { char pad[0x18]; };
struct VObj18 : VBase18 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vpad86();
    virtual void vf164();
    virtual void vpad88();
    virtual void vpad89();
    virtual void vpad90();
    virtual void vpad91();
    virtual void vpad92();
    virtual void vpad93();
    virtual void vf180();
    virtual void vpad95();
    virtual void vpad96();
    virtual void vpad97();
    virtual void vpad98();
    virtual void vpad99();
    virtual void vpad100();
    virtual void vpad101();
    virtual void vpad102();
    virtual void vf1A4();
};

extern "C" {

void TObjEneMe1Gee__vt109(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK update__13TObjEneMe1GeeFPv(void *);
M2C_UNK update_animation_frame__13TObjEneMe1GeeFPv(void *);
M2C_UNK advance_animation_playback();

extern const f32 TObjEneMe1Gee__data_805DA0A8;

void TObjEneMe1Gee__vt109(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj18 *) arg0)->vf180();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x80000) {
            M2C_FIELD(arg0, s32 *, 0x408) = 0;
            ((VObj18 *) arg0)->vf1A4();
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Gee__data_805DA0A8);
        update__13TObjEneMe1GeeFPv(arg0);
        update_animation_frame__13TObjEneMe1GeeFPv(arg0);
        ((VObj18 *) arg0)->vf164();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CAE70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct F_A { char pad[0x18]; };
struct F_V : F_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m87();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m94();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual s32 m106();
};

extern "C" {

void state_hover__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK update_hover_height__13TObjEneMe1GeeFPv(void *);
M2C_UNK TObjEneMe1Gee__sub_800CBE6C(void *, f32);
s32 enemy_has_live_target(void *);
M2C_UNK advance_animation_playback();

extern const f32 TObjEneMe1Gee__data_805DA0A8;
extern const f32 lbl_805DA0AC;

void state_hover__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((F_V *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x47C) = 1;
        break;
    case 3:
        if (((F_V *) arg0)->m106() == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 1) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r3 & 0xFFFFFFFE);
                transition_enemy_state(arg0, 4);
            } else if (enemy_has_live_target(arg0) != 0) {
                transition_enemy_state(arg0, 4);
            }
        }
        break;
    case 0:
        advance_animation_playback();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) != 1) {
            update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Gee__data_805DA0A8);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 2) {
            TObjEneMe1Gee__sub_800CBE6C(arg0, lbl_805DA0AC + M2C_FIELD(arg0, f32 *, 0x3C));
        } else {
            update_hover_height__13TObjEneMe1GeeFPv(arg0);
        }
        ((F_V *) arg0)->m87();
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        break;
    case 1:
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CB17C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_En { char pad[0x18]; };
struct V_En : Base_En {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    virtual void m86();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
};
struct Base_Sub { char pad[0x14]; };
struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
};

extern "C" {

void state_move__13TObjEneMe1GeeFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK update_hover_height__13TObjEneMe1GeeFPv(void *);
M2C_UNK TObjEneMe1Gee__sub_800CBE6C(void *, f32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *, s32);
M2C_UNK TBoss3Volopt__sub_800D8E80(void *);
M2C_UNK advance_animation_playback();

extern const f32 lbl_805DA0AC;

void state_move__13TObjEneMe1GeeFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((V_En *) arg0)->m93();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x47C) = 1;
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3CC, temp_r4);
        TBoss3Volopt__sub_800D8E80(arg0 + 0x38);
        return;
    case 3:
        if (((V_Sub *) (arg0 + 0x3CC))->m5() != 0) {
            transition_enemy_state(arg0, 3);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 2) {
            TObjEneMe1Gee__sub_800CBE6C(arg0, lbl_805DA0AC + M2C_FIELD(arg0, f32 *, 0x3C));
        } else {
            update_hover_height__13TObjEneMe1GeeFPv(arg0);
        }
        ((V_En *) arg0)->m86();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CB290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Gee_A { char pad[0x18]; };
struct Gee_V : Gee_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m93();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m105();
};

extern "C" {

void state_attack_loop__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);

void state_attack_loop__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        ((Gee_V *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x400000);
        M2C_FIELD(arg0, s32 *, 0x47C) = 1;
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) >= 4) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x100000);
            }
            if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x02000000) {
                transition_enemy_state(arg0, 1);
            } else {
                transition_enemy_state(arg0, 2);
            }
        }
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x434) = (s32) (M2C_FIELD(arg0, s32 *, 0x434) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x434) == 2) {
            ((Gee_V *) arg0)->m105();
        }
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFEFFFFFF);
        break;
    }
}

}
#endif

#if PSO_CLASS_PACKAGE == 0x800CB72C
#include "types.h"

extern "C" {

void destroy_subobj__13TObjEneMe1GeeFPv(void* p);
int TObjEneMe1Gee__sub_800CB69C(void*);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

void destroy_subobj__13TObjEneMe1GeeFPv(void* p) { copy_vec4__13TRaderMapCoreFPvPv((char*)p + 0x468); TObjEneMe1Gee__sub_800CB69C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CB948
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 copy_target_state__14TObjEnePanarmsFPvPv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 transition_enemy_state(void * a0 = 0, s32 a1 = 0);
void TObjEneMe1Gee__vt105(void);
int TObjEneMe1Gee__vt102(void* p);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

int TObjEneMe1Gee__vt102(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CB9B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 copy_target_state__14TObjEnePanarmsFPvPv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 transition_enemy_state(void * a0 = 0, s32 a1 = 0);
void TObjEneMe1Gee__vt105(void);
int TObjEneMe1Gee__vt102(void* p);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

s32 handle_message__13TObjEneMe1GeeFii(s32 arg0, s32 arg1) {
    s32 var_r3;

    if (arg1 == 0x3A843) {
        var_r3 = 0x3A843;
        if (get_global_state__14TOKeyMachine01Fv() == 0x22) {
            return 0x4003B20D;
        }
        return var_r3;
    }
    var_r3 = copy_target_state__14TObjEnePanarmsFPvPv();
    return var_r3;
}
s32 check_death_trigger__13TObjEneMe1GeeFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
        transition_enemy_state(arg0, 0xF);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBA7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 copy_target_state__14TObjEnePanarmsFPvPv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 transition_enemy_state(void * a0 = 0, s32 a1 = 0);
void TObjEneMe1Gee__vt105(void);
int TObjEneMe1Gee__vt102(void* p);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

void TObjEneMe1Gee__vt105(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBA98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800CBA98 { char pad[0x18]; };
struct VObj_800CBA98 : Base_800CBA98 {
    virtual void pad_8(); virtual void pad_c(); virtual void pad_10(); virtual void pad_14();
    virtual void pad_18(); virtual void pad_1c(); virtual void pad_20(); virtual void pad_24();
    virtual void pad_28(); virtual void pad_2c(); virtual void pad_30(); virtual void pad_34();
    virtual void pad_38(); virtual void pad_3c(); virtual void pad_40(); virtual void pad_44();
    virtual void pad_48(); virtual void pad_4c(); virtual void pad_50(); virtual void pad_54();
    virtual void pad_58(); virtual void pad_5c(); virtual void pad_60(); virtual void pad_64();
    virtual void pad_68(); virtual void pad_6c(); virtual void pad_70(); virtual void pad_74();
    virtual void pad_78(); virtual void pad_7c(); virtual void pad_80(); virtual void pad_84();
    virtual void pad_88(); virtual void pad_8c(); virtual void pad_90(); virtual void pad_94();
    virtual void pad_98(); virtual void pad_9c(); virtual void pad_a0(); virtual void pad_a4();
    virtual void pad_a8(); virtual void pad_ac(); virtual void pad_b0(); virtual void pad_b4();
    virtual void pad_b8(); virtual void pad_bc(); virtual void pad_c0(); virtual void pad_c4();
    virtual void pad_c8(); virtual void pad_cc(); virtual void pad_d0(); virtual void pad_d4();
    virtual void pad_d8(); virtual void pad_dc(); virtual void pad_e0(); virtual void pad_e4();
    virtual void pad_e8(); virtual void pad_ec(); virtual void pad_f0(); virtual void pad_f4();
    virtual void pad_f8(); virtual void pad_fc(); virtual void pad_100(); virtual void pad_104();
    virtual void pad_108(); virtual void pad_10c(); virtual void pad_110(); virtual void pad_114();
    virtual void pad_118(); virtual void pad_11c(); virtual void pad_120(); virtual void pad_124();
    virtual void pad_128(); virtual void pad_12c(); virtual void pad_130(); virtual void pad_134();
    virtual void pad_138(); virtual void pad_13c(); virtual void pad_140(); virtual void pad_144();
    virtual void pad_148(); virtual void pad_14c(); virtual void pad_150(); virtual void pad_154();
    virtual void pad_158(); virtual void pad_15c(); virtual void pad_160(); virtual void pad_164();
    virtual void pad_168(); virtual void pad_16c(); virtual void pad_170(); virtual void pad_174();
    virtual void pad_178(); virtual void pad_17c(); virtual void pad_180(); virtual void pad_184();
    virtual void pad_188(); virtual void pad_18c(); virtual void pad_190(); virtual void pad_194();
    virtual void pad_198(); virtual void pad_19c(); virtual void pad_1a0(); virtual void pad_1a4();
    virtual void pad_1a8(); virtual void pad_1ac(); virtual void pad_1b0(); virtual void pad_1b4();
    virtual void pad_1b8(); virtual void pad_1bc(); virtual void pad_1c0(); virtual void pad_1c4();
    virtual void pad_1c8(); virtual void pad_1cc();
    virtual s32 m114(s32);
};

extern "C" {

s32 check_can_attack__13TObjEneMe1GeeFPv(void *arg0);
s32 TObjEneMe1Gee__sub_800CBB34(void *, f32 *, f32);
void *find_entity_by_id(u16);

extern const f32 lbl_805DA0FC;
extern const f32 lbl_805DA138;

s32 check_can_attack__13TObjEneMe1GeeFPv(void *arg0) {
    f32 sp8;
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    if (M2C_FIELD(arg0, f32 *, 0x3AC) < lbl_805DA0FC) {
        var_r31 = 1;
        M2C_FIELD(arg0, void **, 0x3C0) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x48C));
        temp_r3 = M2C_FIELD(arg0, void **, 0x3C0);
        if ((((VObj_800CBA98 *)temp_r3)->m114(M2C_FIELD(arg0, s32 *, 0x390)) == 0) && (TObjEneMe1Gee__sub_800CBB34(arg0, &sp8, lbl_805DA138) != 0) && (sp8 > lbl_805DA0FC)) {
            var_r31 = 0;
        }
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBC30
#include "types.h"

extern "C" {

int enemy_has_live_target(void*);
int enemy_copy_target_destination(void*);
int update_velocity__9TObjEneDDFPv(void*);
int update_angle__13TObjEneMe1GeeFPv(void*);
void update__13TObjEneMe1GeeFPv(void* p);
int TObjEneMe1Gee__vt87(void* p);
int TObjEneDD__vt86(void*);

int TObjEneMe1Gee__vt87(void* p) { return TObjEneDD__vt86(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBCDC
#include "types.h"

extern "C" {

int enemy_has_live_target(void*);
int enemy_copy_target_destination(void*);
int update_velocity__9TObjEneDDFPv(void*);
int update_angle__13TObjEneMe1GeeFPv(void*);
void update__13TObjEneMe1GeeFPv(void* p);
int TObjEneMe1Gee__vt87(void* p);
int TObjEneDD__vt86(void*);

void update__13TObjEneMe1GeeFPv(void* p) { if (enemy_has_live_target(p) != 0) { enemy_copy_target_destination(p); update_velocity__9TObjEneDDFPv(p); update_angle__13TObjEneMe1GeeFPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBD28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_angle__13TObjEneMe1GeeFPv(void *arg0);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 approach_angle_limited(s32, s32, M2C_UNK);

extern const f64 lbl_8043BF28;

void update_angle__13TObjEneMe1GeeFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), (s32) (lbl_8043BF28 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), 0x400);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (s16) M2C_FIELD(arg0, s32 *, 0x60);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBD90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_from_float_sum__13TObjEneMe1GeeFPv(void *arg0);
M2C_UNK TObjEneMe1Gee__sub_800CBDBC(f32);

void update_from_float_sum__13TObjEneMe1GeeFPv(void *arg0) {
    TObjEneMe1Gee__sub_800CBDBC(M2C_FIELD(arg0, f32 *, 0x3EC) + M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBE14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_animation_frame__13TObjEneMe1GeeFPv(void *arg0);

M2C_UNK TObjEneMe1Gee__sub_800CBE6C(f32);

void update_animation_frame__13TObjEneMe1GeeFPv(void *arg0) {
    TObjEneMe1Gee__sub_800CBE6C(M2C_FIELD(arg0, f32 *, 0x3E8) + M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBE40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_hover_height__13TObjEneMe1GeeFPv(void *arg0);
M2C_UNK TObjEneMe1Gee__sub_800CBE6C(f32);

void update_hover_height__13TObjEneMe1GeeFPv(void *arg0) {
    TObjEneMe1Gee__sub_800CBE6C(M2C_FIELD(arg0, f32 *, 0x3EC) + M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBEC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_move_speed_x__13TObjEneMe1GeeFPv(void *arg0);
M2C_UNK TObjEneMe1Gee__sub_800CBF58(f32);

void set_move_speed_x__13TObjEneMe1GeeFPv(void *arg0) {
    TObjEneMe1Gee__sub_800CBF58(M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E8));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CBFC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1Gee__vt99(void *arg0);

u32 TObjEneDD__vt98();

void TObjEneMe1Gee__vt99(void *arg0) {
    if (TObjEneDD__vt98() == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFEFFFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x01000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC010
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_position__13TObjEneMe1GeeFiPv(s32 arg0, void *arg1);
M2C_UNK vec3_add_to(void *, s32);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
f32 sin_table_lookup(s32, f32);
f32 cos_table_lookup(s32, f32);
s32 get_random_scaled__9TObjEneDDFv();

extern const f32 TObjEneMe1Gee__data_805DA0B4;
extern const f32 lbl_805DA0B8;
extern const f32 TObjEneMe1Gee__data_805DA0E8;

void calc_position__13TObjEneMe1GeeFiPv(s32 arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r31;

    temp_r31 = get_random_scaled__9TObjEneDDFv();
    f32 fv = calc_boss4_scale__10TObjPlayerFi(arg0);
    temp_f31 = (TObjEneMe1Gee__data_805DA0E8 * fv) + lbl_805DA0B8;
    temp_f1 = temp_f31 * sin_table_lookup(temp_r31, fv);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) TObjEneMe1Gee__data_805DA0B4;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f31 * cos_table_lookup(temp_r31, temp_f1));
    vec3_add_to(arg1, arg0 + 0x38);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC0A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1Gee__vt104(void *arg0);

extern void *TObjEneMe1Gee__data_805D51B0;

void TObjEneMe1Gee__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneMe1Gee__data_805D51B0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneMe1Gee__data_805D51B0, void **, 0x42C), s32 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC190
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_800CC190 {
    char pad[0x18];
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
};

extern "C" {

void TObjEneMe1Gee__vt86(void *arg0);

extern const f32 TObjEneMe1Gee__data_805DA0E8;

void TObjEneMe1Gee__vt86(void *arg0) {
    struct VBase_800CC190 *o = (struct VBase_800CC190 *)arg0;
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) - M2C_FIELD(arg0, f32 *, 0x3C));
    if (M2C_FIELD(arg0, f32 *, 0x3F4) < TObjEneMe1Gee__data_805DA0E8) {
        o->m96();
    } else {
        o->m95();
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3F4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC208
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_pos__13TObjEneMe1GeeFPv(u8 *arg0);
int transition_enemy_state(void*, void*);
void TObjEneMe1Gee__vt26(void);
void TObjEneMe1Gee__vt59(void);
void TObjEneMe1Gee__vt60(void* p);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void copy_pos__13TObjEneMe1GeeFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC24C
#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe1Gee__vt60(void* p);
void TObjEneMe1Gee__vt59(void);
void TObjEneMe1Gee__vt26(void);

void TObjEneMe1Gee__vt59(void) {  }
void TObjEneMe1Gee__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 13) { transition_enemy_state(p, (void*)13); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC2B8
#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe1Gee__vt60(void* p);
void TObjEneMe1Gee__vt59(void);
void TObjEneMe1Gee__vt26(void);

void TObjEneMe1Gee__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC2BC
#include "types.h"

extern "C" {

int TObjEneMe1Gee__sub_800CC2BC(void);

    extern int TObjEneMe1Gee__data_805D51B0;
int TObjEneMe1Gee__sub_800CC2BC(void) {  return TObjEneMe1Gee__data_805D51B0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC3A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjEneMe1GeeFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void free_collision_body_parts(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__13TObjEneMe1Gee[];

void *__dt__13TObjEneMe1GeeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneMe1Gee;
        if (M2C_FIELD(arg0, void **, 0x464) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x464)); M2C_FIELD(arg0, M2C_UNK *, 0x464) = 0; }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3CC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__13TObjEneMe1GeeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void TObjEneMe1Gee__sub_800CC0C4(void *);
void TObjEneMe1Gee__sub_800CC430(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__13TObjEneMe1Gee[];
extern void *lbl_805D2A68;

void *init__13TObjEneMe1GeeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneMe1Gee;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 972));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2A68;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    M2C_FIELD(arg0, u32 *, 0x3C8) = 0;
    TObjEneMe1Gee__sub_800CC0C4(arg0);
    M2C_FIELD(arg0, void **, 0x3C0) = arg0;
    M2C_FIELD(arg0, void **, 0x3C4) = arg3;
    TObjEneMe1Gee__sub_800CC430(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC89C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__13TObjEneMe1GeeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TObjEneMe1Gee__ct(void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__13TObjEneMe1GeeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x490);
    if (o != NULL) {
        o = TObjEneMe1Gee__ct(o, tl_04, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CC900
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TObjEneMe1GeeFPv(void *arg0);
void *init__13TObjEneMe1GeeFPvPvPvPv(void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__13TObjEneMe1GeeFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x490);
    if (o != NULL) {
        o = init__13TObjEneMe1GeeFPvPvPvPv(o, tl_04, arg0, 0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4BB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_model__13TObjEneMe1GeeFPv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object();
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjFish__sub_8001EDB0(void *, int);
M2C_UNK get_bml_model(void *, int);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK queue_destruction__7TObjectFv();

extern u32 lbl_805D6660;

void draw_model__13TObjEneMe1GeeFPv(u8 *arg0) {
    if ((u32) lbl_805D6660 == 0U) {
        queue_destruction__7TObjectFv();
        return;
    }
    push_matrix();
    begin_effect_render__13TParticleCtrlFv();
    post_translate_matrix((void *) (arg0 + 0x6C));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xA4)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xA0)));
    TObjFish__sub_8001EDB0((void *) (lbl_805D6660), (int) (1));
    set_global_param__8TObjFishFi();
    get_bml_model((void *) (lbl_805D6660), (int) (1));
    draw_ginja_object();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4C44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_missile__13TObjEneMe1GeeFPv(void *arg0);
M2C_UNK TObjPlayer__sub_802A445C(void *, M2C_UNK);
u32 find_entity_by_id(u16);
M2C_UNK TNeedleShoot__sub_802A4668(void *);
M2C_UNK TNeedleShoot__sub_802A4694(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_lifetime__22TObjEneMe1GiGueMissileFPv(void *);

void update_missile__13TObjEneMe1GeeFPv(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x34));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) == 1) {
        TNeedleShoot__sub_802A4694(arg0);
        update_lifetime__22TObjEneMe1GiGueMissileFPv(arg0);
        TObjPlayer__sub_802A445C(arg0, 1);
        return;
    }
    TNeedleShoot__sub_802A4668(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4D4C
#include "types.h"

extern "C" {

void TObjEneMe1Gee__sub_802A4D4C(void);

void TObjEneMe1Gee__sub_802A4D4C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4D50
#include "types.h"

extern "C" {

void cache_result_805D6660__13TObjEneMe1GeeFv(void);
int TObjEneMe1Gee__sub_800CC2BC(void);

    extern int lbl_805D6660;
void cache_result_805D6660__13TObjEneMe1GeeFv(void) { lbl_805D6660 = TObjEneMe1Gee__sub_800CC2BC(); }

}
#endif
#endif
