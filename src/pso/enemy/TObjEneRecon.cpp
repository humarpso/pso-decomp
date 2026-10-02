#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

f32 get_field_4d4__12TObjEneReconFPv(void* p);
f32 get_field_4d0__12TObjEneReconFPv(void* p);

f32 get_field_4d4__12TObjEneReconFPv(void* p) { return *(f32*)((char*)p + 0x4d4); }
f32 get_field_4d0__12TObjEneReconFPv(void* p) { return *(f32*)((char*)p + 0x4d0); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8029E89C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_player_marker__12TObjEneReconFUsi(u16 arg0, s32 arg1);
s32 TObjEneRecon__sub_8029EA4C(M2C_UNK *, M2C_UNK);
M2C_UNK reflect_matrix_in_plane(M2C_UNK, M2C_UNK *);
M2C_UNK TObjPlayer__sub_803D9B2C();
u32 get_player_by_client_id(u32);
s32 is_state_active__14TOKeyMachine01Fv();
s32 fn_8029E7BC(s32, M2C_UNK *);

extern u16 lbl_805D65F8;

s32 render_player_marker__12TObjEneReconFUsi(u16 arg0, s32 arg1) {
    M2C_UNK sp8[8];
    s32 var_r3;
    u32 temp_r3;

    if (is_state_active__14TOKeyMachine01Fv() == 0) {
        return 0;
    }
    if ((u16) lbl_805D65F8 == 0) {
        return 1;
    }
    temp_r3 = get_player_by_client_id(arg0);
    if (temp_r3 == 0U) {
        return 0;
    }
    if (fn_8029E7BC(temp_r3 + 0x2FC, sp8) == 0) {
        return 0;
    }
    if (arg1 != 0) {
        var_r3 = TObjEneRecon__sub_8029EA4C(sp8, 1);
    } else {
        var_r3 = 1;
    }
    if (var_r3 != 0) {
        TObjPlayer__sub_803D9B2C();
        reflect_matrix_in_plane(0, sp8);
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029EB08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_particle_if_active__12TObjEneReconFv(void);
u32 get_state__10TSceneSoraFPv(void*);
M2C_UNK reset_ind_tev_stages__13TParticleCtrlFv();

extern u32 lbl_805D65F4;

void update_particle_if_active__12TObjEneReconFv(void) {
    if (((u32) lbl_805D65F4 != 0U) && (get_state__10TSceneSoraFPv((void*)lbl_805D65F4) != 0U)) {
        reset_ind_tev_stages__13TParticleCtrlFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029EB40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_scene__12TObjEneReconFi(s32 arg0);
u32 get_state__10TSceneSoraFPv(u32);
M2C_UNK play_particle__13TParticleCtrlFPvis(u32, M2C_UNK, s32);

extern u32 lbl_805D65F4;

void notify_scene__12TObjEneReconFi(s32 arg0) {
    u32 temp_r31;
    if ((u32) lbl_805D65F4 != 0U) {
        temp_r31 = get_state__10TSceneSoraFPv(lbl_805D65F4);
        if (temp_r31 != 0U) {
            play_particle__13TParticleCtrlFPvis(temp_r31, 0, arg0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029EB90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__12TObjEneReconFv(void);
M2C_UNK reset_lobby_subobject__10TObjPlayerFPv(void*);
void __dl__FPv(void*);
s32 is_state_active__14TOKeyMachine01Fv();

extern s32 lbl_805D65F4;
extern u32 lbl_805D65FC;

void destroy_instance__12TObjEneReconFv(void) {
    lbl_805D65F4 = 0;
    if (is_state_active__14TOKeyMachine01Fv() != 0) {
        if ((u32) lbl_805D65FC != 0U) {
            reset_lobby_subobject__10TObjPlayerFPv((void*)lbl_805D65FC);
        }
        if ((u32) lbl_805D65FC != 0U) {
            __dl__FPv((void*)lbl_805D65FC);
            lbl_805D65FC = 0U;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029EBE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_if_valid_state__12TObjEneReconFv(void);
M2C_UNK init_render_target__10TObjPlayerFPv();
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 is_state_active__14TOKeyMachine01Fv();

extern s32 lbl_805D65F0;
extern s32 lbl_805D65F4;
extern u32 lbl_805D65FC;

void alloc_if_valid_state__12TObjEneReconFv(void) {
    u32 temp_r3;

    if (is_state_active__14TOKeyMachine01Fv() != 0) {
        lbl_805D65F4 = 0;
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0x28);
        lbl_805D65FC = temp_r3;
        if (temp_r3 != 0U) {
            init_render_target__10TObjPlayerFPv();
            lbl_805D65F0 = lbl_805D65FC + 0x1C;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80302DB0
#include "types.h"

extern "C" {

void set_active__12TObjEneReconFv(void);

    extern unsigned char lbl_805D65FA;
void set_active__12TObjEneReconFv(void) { lbl_805D65FA = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80302DBC
#include "types.h"

extern "C" {

void TObjEneRecon__sub_80302DBC(void);

void TObjEneRecon__sub_80302DBC(void) {  }

}
#endif

#if PSO_CLASS_PACKAGE == 0x8031BD64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase800AFB60_8031bd64 { char pad[0x18]; };
struct VObj800AFB60_8031bd64 : VBase800AFB60_8031bd64 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void TObjEneRecon__vt104(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DF3BC;
extern const f32 TObjEneRecon__data_805DF3C0;

void TObjEneRecon__vt104(u8 *arg0) {
    if (((VObj800AFB60_8031bd64 *) arg0)->m8(lbl_805DF3BC, TObjEneRecon__data_805DF3C0) != 0) {
        update_player_state__9TObjEneDDFPv(arg0, 0, 0);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031BDF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_model_if_visible__12TObjEneReconFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK restore_render_scissor(int);

extern M2C_UNK main_task[];

s32 render_model_if_visible__12TObjEneReconFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x41C)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjPlayer__sub_803D9B2C();
            translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x448)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031C124
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_intro_stage__12TObjEneReconFv(void);
M2C_UNK update_camera_sequence__9TObjEneDDFPv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK TCameraCtrl__sub_803D8934(M2C_UNK, s32, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();

extern s32 lbl_805D6B08;
extern s32 lbl_805D6B0C;

void advance_intro_stage__12TObjEneReconFv(void) {
    switch ((s32) lbl_805D6B08) {
    case 0:
        TObjPlayer__sub_803D9B2C();
        update_camera_sequence__9TObjEneDDFPv();
        TCameraCtrl__sub_803D8934(0, lbl_805D6B0C, lbl_805D6B0C);
        pop_matrix();
        break;
    case 10:
        begin_effect_render__13TParticleCtrlFv();
        break;
    }
    lbl_805D6B08 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031C18C
#include "types.h"

extern "C" {

void TObjEneRecon__vt103(void);

void TObjEneRecon__vt103(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031C23C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_anim_5__12TObjEneReconFPv(void *arg0);

u8 is_anim_5__12TObjEneReconFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x326) == 5);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031C2E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_message__12TObjEneReconFPvi(void *arg0, s32 arg1);

M2C_UNK queue_destruction__7TObjectFv();
u32 find_entity_by_id(u16);
M2C_UNK TObjEneRecon__sub_8031EF14(u32, void *);

void handle_message__12TObjEneReconFPvi(void *arg0, s32 arg1) {
    u32 temp;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 1);
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) & 0xFFFFFFFD);
        if ((temp = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x434))) != 0U) {
            TObjEneRecon__sub_8031EF14(temp, arg0);
        }
        break;
    case 5:
    case 0:
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031C7BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8031c7bc { char pad[0x18]; };
struct VObj_8031c7bc : VBase_8031c7bc {
#define VM(i) virtual M2C_UNK m##i();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)
    VM(16)VM(17)VM(18)VM(19)VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)VM(30)
    VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)
    VM(46)VM(47)VM(48)VM(49)VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)VM(60)
    VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)
    VM(76)VM(77)VM(78)VM(79)VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)VM(90)
    VM(91)VM(92)VM(93)VM(94)
#undef VM
};
struct WBase_8031c7bc { char pad[0x14]; };
struct WObj_8031c7bc : WBase_8031c7bc {
#define WM(i) virtual M2C_UNK w##i();
    WM(0)WM(1)WM(2)WM(3)WM(4)
#undef WM
};

extern "C" {

void run_task__12TObjEneReconFPvi(u8 *arg0, s32 arg1);
M2C_UNK advance_animation_playback();
M2C_UNK create_timed_particle_emitter(void *, int, int, int);
M2C_UNK TObjEneDD__sub_800BA934(void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK TObjEneRecon__sub_8031DD14(void *);
M2C_UNK TObjEneRecon__sub_8031EFAC(int, void *);
s32 find_entity_by_id(int);
s32 is_anim_6__12TObjEneReconFPv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_trap_b__12TObjEneReconFi(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

void run_task__12TObjEneReconFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_8031c7bc *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        ((WObj_8031c7bc *) (arg0 + 0x480))->w2();
        create_timed_particle_emitter((void *) (arg0 + 0x38), (int) (0x79), (int) (0), (int) (0xF));
        return;
    case 3:
        temp_r3 = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x434)));
        if (temp_r3 == 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if (is_anim_6__12TObjEneReconFPv() == 1) {
            transition_enemy_state((void *) (arg0), (int) (7));
            return;
        }
        if (((WObj_8031c7bc *) (arg0 + 0x480))->w4() != 0) {
            M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 1);
            TObjEneRecon__sub_8031EFAC((int) (temp_r3), (void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        ((VObj_8031c7bc *) arg0)->m86();
        TObjEneRecon__sub_8031DD14((void *) (arg0));
        TObjEneDD__sub_800BA934((void *) (arg0));
        spawn_trap_b__12TObjEneReconFi((void *) (arg0));
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031D780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031D780 { char pad[0x18]; };
struct VObj_8031D780 : Base_8031D780 {
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
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual s32 m97();
};

extern "C" {

void spawn_trap_a__12TObjEneReconFi(s32 arg0);
void spawn_trap_b__12TObjEneReconFi(s32 arg0);
u16 TObjEneRecon__sub_8031D878(void *arg0);
void TObjEneRecon__vt102(void *arg0, f32 farg0);
M2C_UNK play_persistent_sound(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);
M2C_UNK TObjEneRecobox__sub_8032013C(M2C_UNK);

void TObjEneRecon__vt102(void *arg0, f32 farg0) {
    if (((VObj_8031D780 *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}

void spawn_trap_a__12TObjEneReconFi(s32 arg0) {
    play_persistent_sound((s32)(TObjEneRecobox__sub_8032013C(0x4003AD07)), (s32)(arg0), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
}

void spawn_trap_b__12TObjEneReconFi(s32 arg0) {
    play_persistent_sound((s32)(TObjEneRecobox__sub_8032013C(0x4003B206)), (s32)(arg0), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
}

u16 TObjEneRecon__sub_8031D878(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x474) != 0) {
        return M2C_FIELD(arg0, u16 *, 0x38C);
    }
    return 0xFFFFU;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031DB34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 approach_value__12TObjEneReconFff(f32 farg0, f32 farg1);
f32 get_random_float__8TObjFishFv(f32);

extern const f32 lbl_805DF3B8;
extern const f32 TObjEneRecon__data_805DF3D0;
extern const f32 lbl_805DF3E8;
extern const f32 lbl_805DF424;

f32 approach_value__12TObjEneReconFff(f32 farg0, f32 farg1) {
    f32 temp_f31;
    f32 var_f1;

    temp_f31 = farg1 - farg0;
    if (get_random_float__8TObjFishFv(temp_f31) < lbl_805DF3E8) {
        return farg1;
    }
    var_f1 = TObjEneRecon__data_805DF3D0;
    var_f1 = temp_f31 * var_f1;
    if (var_f1 > lbl_805DF3B8) {
        var_f1 = lbl_805DF3B8;
    } else if (var_f1 < lbl_805DF424) {
        var_f1 = lbl_805DF424;
    }
    return farg0 + var_f1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031DCCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031DCCC { char pad[0x18]; };
struct VObj_8031DCCC : Base_8031DCCC {
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
    virtual void m84(); virtual void m85(); virtual void m86();
};

extern "C" {

void TObjEneRecon__vt87(void *arg0);
M2C_UNK TObjEneDD__vt86(void *);
M2C_UNK TObjEneRecon__sub_8031DD14(void *);

void TObjEneRecon__vt87(void *arg0) {
    struct VObj_8031DCCC *o = (struct VObj_8031DCCC *)arg0;
    o->m86();
    TObjEneDD__vt86(arg0);
    TObjEneRecon__sub_8031DD14(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031DD40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position_from_offsets__12TObjEneReconFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *);

void update_position_from_offsets__12TObjEneReconFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031DD7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031DE2C { char pad[0x18]; };
struct VObj_8031DE2C : Base_8031DE2C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)VV(65)VV(66)VV(67)VV(68)VV(69)VV(70)
VV(71)VV(72)VV(73)VV(74)VV(75)VV(76)VV(77)VV(78)VV(79)VV(80)
VV(81)VV(82)VV(83)VV(84)VV(85)VV(86)VV(87)VV(88)VV(89)VV(90)
VV(91)VV(92)VV(93)VV(94)VV(95)VV(96)VV(97)VV(98)VV(99)
#undef VV
    virtual u32 v102();
};

extern "C" {

void update_collide_flag__12TObjEneReconFPv(void *arg0);
void set_flag2__12TObjEneReconFPv(void *arg0);
void update_flag_0x444__12TObjEneReconFPv(void *arg0);
u32 TObjEneDD__sub_800BAC14();
u32 TObjEneEpsilon__sub_800B92F8(void *, s32, void *, f32);

extern f32 *TObjEneRecon__data_805D6AFC;

void update_collide_flag__12TObjEneReconFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x350);
    if (TObjEneEpsilon__sub_800B92F8(arg0, M2C_FIELD(temp_r5, s32 *, 8), temp_r5, *TObjEneRecon__data_805D6AFC) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) & 0xFFFFFFFD);
}

void set_flag2__12TObjEneReconFPv(void *arg0) {
    if (TObjEneDD__sub_800BAC14() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) & 0xFFFFFFFD);
}

void update_flag_0x444__12TObjEneReconFPv(void *arg0) {
    if (((VObj_8031DE2C *)arg0)->v102() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) & 0xFFFFFFFD);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031DEF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneEpsilon__sub_800B96A4();
int transition_enemy_state(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

void advance_field398__12TObjEneReconFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x398) + M2C_FIELD(arg0, f32 *, 0x464));
}
void sync_height__12TObjEneReconFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x460);
}
void TObjEneRecon__vt59(void) {  }
void TObjEneRecon__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 6) { transition_enemy_state(p, (void*)6); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031DFCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneEpsilon__sub_800B96A4();
int transition_enemy_state(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

void TObjEneRecon__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031E2B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TObjEneReconFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjEneGibbles__sub_80156720(void *);
void send_entity_set_flags__6TLobbyFPv(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__12TObjEneRecon[];

void *__dt__12TObjEneReconFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjEneRecon;
        send_entity_set_flags__6TLobbyFPv(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478)); M2C_FIELD(arg0, M2C_UNK *, 0x478) = 0; }
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x480, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031E574
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjEneRecon__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6);
M2C_UNK TObjEneRecon__sub_8031E33C(void *);
f32 get_field_4d4__12TObjEneReconFPv(void *);
f32 get_field_4d0__12TObjEneReconFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK init_common__18TObjEneMe3SinowZoaFPv(void *);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
M2C_UNK init_object__9TObjEneDDFPv();
s16 obj_getField1c(void *);

extern M2C_UNK __vt__12TObjEneRecon[];
extern s32 lbl_805D4130;

u8 *TObjEneRecon__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6) {
    init_object__9TObjEneDDFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjEneRecon;
    init_common__18TObjEneMe3SinowZoaFPv((void *) (arg0 + 0x480));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4130;
    M2C_FIELD(arg0, s16 *, 0x434) = obj_getField1c((void *) (arg2));
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg5));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x438), (void *) (arg2 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x428), (void *) (arg6));
    TObjEneRecon__sub_8031E33C((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0x460) = (f32) (M2C_FIELD(arg0, f32 *, 0x460) + get_field_4d0__12TObjEneReconFPv((void *) (arg2)));
    M2C_FIELD(arg0, f32 *, 0x468) = (f32) (M2C_FIELD(arg0, f32 *, 0x468) + get_field_4d4__12TObjEneReconFPv((void *) (arg2)));
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031E650
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031E650 { char pad[0xC]; };
struct VObj_8031E650 : Base_8031E650 {
    virtual void m0(int);
};

extern "C" {

void release_static_instance__12TObjEneReconFv(void);
M2C_UNK TObjEneRecon__sub_8031BC38();

extern struct VObj_8031E650 *lbl_805D6B04;

void release_static_instance__12TObjEneReconFv(void) {
    TObjEneRecon__sub_8031BC38();
    if (lbl_805D6B04 != 0) {
        if (lbl_805D6B04 != 0) {
            lbl_805D6B04->m0(1);
        }
        lbl_805D6B04 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031E69C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__12TObjEneReconFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TObjEneRecon__ct(void *, void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__12TObjEneReconFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4E4);
    if (o != NULL) {
        o = TObjEneRecon__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031E800
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_trap_model_if_visible__12TObjEneReconFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK restore_render_scissor(int);

extern M2C_UNK main_task[];

s32 render_trap_model_if_visible__12TObjEneReconFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3E4)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031ED80
#include "types.h"

extern "C" {

void update_if_800BB858__12TObjEneReconFPv(void* p);
int get_target_info__9TObjEneDDFPv(void*);
int TObjEneRecon__sub_8031F800(void*);

void update_if_800BB858__12TObjEneReconFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneRecon__sub_8031F800(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031EF00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_anim_6__12TObjEneReconFPv(void *arg0);

u8 is_anim_6__12TObjEneReconFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x326) == 6);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031F374
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_8031F374 { char pad[0x18]; };
struct VObj_8031F374 : Base_8031F374 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m93();
};

extern "C" {

void handle_death_state__12TObjEneReconFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneRecobox__sub_8031F1A8(void *);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv();

void handle_death_state__12TObjEneReconFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        refresh_lobby_state__10TObjPlayerFPv();
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) | 1);
        TObjEneRecobox__sub_8031F1A8(arg0);
        ((VObj_8031F374 *)arg0)->m93();
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
            send_entity_set_flags__6TLobbyFPv();
            queue_destruction__7TObjectFv(arg0);
        }
    case 5:
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031F408
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031F408 { char pad[0x18]; };
struct VObj_8031F408 : Base_8031F408 {
    virtual void pad0(); virtual void pad1(); virtual void pad2(); virtual void pad3();
    virtual void pad4(); virtual void pad5(); virtual void pad6(); virtual void pad7();
    virtual void pad8(); virtual void pad9(); virtual void pad10(); virtual void pad11();
    virtual void pad12(); virtual void pad13(); virtual void pad14(); virtual void pad15();
    virtual void pad16(); virtual void pad17(); virtual void pad18(); virtual void pad19();
    virtual void pad20(); virtual void pad21(); virtual void pad22(); virtual void pad23();
    virtual void pad24(); virtual void pad25(); virtual void pad26(); virtual void pad27();
    virtual void pad28(); virtual void pad29(); virtual void pad30(); virtual void pad31();
    virtual void pad32(); virtual void pad33(); virtual void pad34(); virtual void pad35();
    virtual void pad36(); virtual void pad37(); virtual void pad38(); virtual void pad39();
    virtual void pad40(); virtual void pad41(); virtual void pad42(); virtual void pad43();
    virtual void pad44(); virtual void pad45(); virtual void pad46(); virtual void pad47();
    virtual void pad48(); virtual void pad49(); virtual void pad50(); virtual void pad51();
    virtual void pad52(); virtual void pad53(); virtual void pad54(); virtual void pad55();
    virtual void pad56(); virtual void pad57(); virtual void pad58(); virtual void pad59();
    virtual void pad60(); virtual void pad61(); virtual void pad62(); virtual void pad63();
    virtual void pad64(); virtual void pad65(); virtual void pad66(); virtual void pad67();
    virtual void pad68(); virtual void pad69(); virtual void pad70(); virtual void pad71();
    virtual void pad72(); virtual void pad73(); virtual void pad74(); virtual void pad75();
    virtual void pad76(); virtual void pad77(); virtual void pad78(); virtual void pad79();
    virtual void pad80(); virtual void pad81(); virtual void pad82(); virtual void pad83();
    virtual void pad84(); virtual void pad85(); virtual void pad86(); virtual void pad87();
    virtual void pad88(); virtual void pad89(); virtual void pad90(); virtual void pad91();
    virtual void pad92(); virtual void pad93(); virtual void m94();
};

extern "C" {

void TObjEneRecon__sub_8031F408(void *arg0, s32 arg1);
M2C_UNK advance_animation_playback();
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();

void TObjEneRecon__sub_8031F408(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) & 0xFFFFFFFE;
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        ((VObj_8031F408 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            transition_enemy_state(arg0, 2);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031F4A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031F4A8 { char pad[0x18]; };
struct VObj_8031F4A8 : Base_8031F4A8 {
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
};
struct Base_8031F550 { char pad[0x18]; };
struct VObj_8031F550 : Base_8031F550 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
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
    virtual void m92(); virtual void m93(); virtual void m94();
};

extern "C" {

void handle_action_state__12TObjEneReconFPvi(void *arg0, s32 arg1);
void update_state__12TObjEneReconFPvi(void *arg0, s32 arg1);
M2C_UNK advance_animation_playback();
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
M2C_UNK TObjEneRecon__sub_8031F8C4(void *);
s32 is_out_of_range__12TObjEneReconFPv();

void handle_action_state__12TObjEneReconFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) & 0xFFFFFFFE;
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        ((VObj_8031F4A8 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        return;
    case 3:
        if (is_out_of_range__12TObjEneReconFPv() != 0) {
            transition_enemy_state(arg0, 5);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        TObjEneRecon__sub_8031F8C4(arg0);
        break;
    }
}

void update_state__12TObjEneReconFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x40C) = M2C_FIELD(arg0, s32 *, 0x40C) & 0xFFFFFFFE;
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_8031F550 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x4D8) = 0;
            M2C_FIELD(arg0, s32 *, 0x4DC) = 0x1E;
            transition_enemy_state(arg0, 4);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031F600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031F600 { char pad[0x18]; };
struct VObj_8031F600 : Base_8031F600 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
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
    virtual void m92(); virtual void m93(); virtual void m94(s32);
    virtual void m95(); virtual void m96(); virtual void m97();
    virtual void m98(); virtual void m99(); virtual void m100(); virtual void m101();
    virtual s32 m102(f32);
};

extern "C" {

void TObjEneRecon__sub_8031F600(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback();
s32 TObjEneRecon__sub_8031FACC(void *);

extern const f32 TObjEneRecon__data_805DF438;

void TObjEneRecon__sub_8031F600(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) & 0xFFFFFFFE;
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((VObj_8031F600 *)arg0)->m94(temp_r4);
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        return;
    case 3:
        if ((((VObj_8031F600 *)arg0)->m102(TObjEneRecon__data_805DF438) != 0) && (TObjEneRecon__sub_8031FACC(arg0) != 0)) {
            transition_enemy_state(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031F6C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031F6C0 { char pad[0x18]; };
struct VObj_8031F6C0 : Base_8031F6C0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
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
    virtual void m92(); virtual void m93(s32);
};
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_En_8031f748 { char pad[0x18]; };
struct V_En_8031f748 : Base_En_8031f748 {
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
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
};
struct Base_Sub_8031f748 { char pad[0x14]; };
struct V_Sub_8031f748 : Base_Sub_8031f748 {
    PADV4
    PADV
    virtual s32 m5();
};

extern "C" {

void TObjEneRecon__sub_8031F6C0(void *arg0, s32 arg1);
void handle_state__12TObjEneReconFPvi(u8 *arg0, s32 arg1);
M2C_UNK advance_animation_playback();
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);

void TObjEneRecon__sub_8031F6C0(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) | 1;
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((VObj_8031F6C0 *)arg0)->m93(temp_r4);
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (int)(0));
        return;
    case 3:
        transition_enemy_state((void *)(arg0), (int)(1));
    case 5:
    case 0:
        return;
    }
}

void handle_state__12TObjEneReconFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) & 0xFFFFFFFE;
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((V_En_8031f748 *) arg0)->m93();
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (int)(0));
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3C0);
        return;
    case 3:
        if (((V_Sub_8031f748 *) (arg0 + 0x3C0))->m5() != 0) {
            transition_enemy_state((void *)(arg0), (int)(2));
        }
    case 5:
        return;
    case 0:
        advance_animation_playback();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031FA64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_out_of_range__12TObjEneReconFPv(void *arg0);
s32 TObjEneRecon__sub_8031F070();

u8 is_out_of_range__12TObjEneReconFPv(void *arg0) {
    int var_r4;

    if (TObjEneRecon__sub_8031F070() == 1) {
        return 1;
    }
    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) >= (s32) M2C_FIELD(arg0, s32 *, 0x3F8)) || ((s32) M2C_FIELD(arg0, s32 *, 0x414) >= (s32) M2C_FIELD(arg0, s32 *, 0x3F4))) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031FC2C
#include "types.h"

extern "C" {

void restore_position__12TObjEneReconFPv(void* p);
void TObjEneRecon__sub_8031FC58(void);
int TObjEneRecon__sub_8031FC5C(void* p);
void set_state_6__12TObjEneReconFPv(void* p);
void TObjEneRecon__sub_8031FCAC(void);
int clear_attack_receipts(void*);
int transition_enemy_state(void*, void*);
int VecCopy__FP3VecPC3Vec(void*, void*);

void restore_position__12TObjEneReconFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneRecon__sub_8031FC58(void) {  }
int TObjEneRecon__sub_8031FC5C(void* p) { return clear_attack_receipts(p); }
void set_state_6__12TObjEneReconFPv(void* p) { if (*(short*)((char*)p + 0x326) != 6) { transition_enemy_state(p, (void*)6); } }
void TObjEneRecon__sub_8031FCAC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80320350
#include "types.h"

extern "C" {

void* get_field_38_ptr__12TObjEneReconFPv(void* p);

void* get_field_38_ptr__12TObjEneReconFPv(void* p) { return (char*)p + 0x38; }

}
#endif

#endif
