#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjEneDD__vt96(void *arg0);

u8 TObjEneDD__vt96(void *arg0) {
    return (u8) (((M2C_FIELD(arg0, s32 *, 0x30) & 0x10) - 0x10) == 0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800B99B4
#include "types.h"

extern "C" {

void init_float_params__9TObjEneDDFPv(void* a0);

    extern const float TObjEneDD__data_805D9E8C;
void init_float_params__9TObjEneDDFPv(void* a0) { *(float*)((char*)a0 + 0x394) = TObjEneDD__data_805D9E8C; *(float*)((char*)a0 + 0x398) = TObjEneDD__data_805D9E8C; *(float*)((char*)a0 + 0x39c) = TObjEneDD__data_805D9E8C; *(float*)((char*)a0 + 0x3a0) = TObjEneDD__data_805D9E8C; *(float*)((char*)a0 + 0x3a4) = TObjEneDD__data_805D9E8C; *(float*)((char*)a0 + 0x3a8) = TObjEneDD__data_805D9E8C; *(float*)((char*)a0 + 0x3ac) = TObjEneDD__data_805D9E8C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B99D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_velocity__9TObjEneDDFPv(u8 *arg0);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, f32, f32);

extern const f32 TObjEneDD__data_805D9E8C;

void update_velocity__9TObjEneDDFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x394);
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 0x38));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDD__data_805D9E8C;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x40));
    M2C_FIELD(arg0, f32 *, 0x3AC) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x3A0, temp_f1, temp_f2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9A34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TObjEneDDFv(void *arg0, s16 arg1);
void TObjEneDD__vt0(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_80492558[];

void *__dt__9TObjEneDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492558;
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9A8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_object__9TObjEneDDFPv(void *arg0);
void TObjEneDD__ct(void *);
void init_float_params__9TObjEneDDFPv(void *);
void TObjEneEpsilon__sub_800B965C(void *, int);
void fn_800B98A4(void *, int);
void fn_800B98C0(void *);

extern M2C_UNK lbl_80492558[];
extern void *lbl_805D2A34;

void *init_object__9TObjEneDDFPv(void *arg0) {
    TObjEneDD__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492558;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2A34;
    fn_800B98C0(arg0);
    init_float_params__9TObjEneDDFPv(arg0);
    fn_800B98A4(arg0, 30);
    TObjEneEpsilon__sub_800B965C(arg0, 30);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9AF8
#include "types.h"

extern "C" {

void init_lights__9TObjEneDDFv(void);
int TObjLight__sub_801337F8(void*);
int TObjLight__sub_801337FC(void*);

    extern int lbl_805D555C;
    extern int lbl_805D5560;
void init_lights__9TObjEneDDFv(void) { TObjLight__sub_801337F8((void*)(lbl_805D5560)); TObjLight__sub_801337FC((void*)(lbl_805D555C)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9B24
#include "types.h"

extern "C" {

void TObjEneDD__sub_800B9B24(void);
s32 clamp_frame_index__9TObjEneDDFi(s32 arg0);
s32 check_v2_mode__9TObjEneDDFv();

void TObjEneDD__sub_800B9B24(void) {  }
s32 clamp_frame_index__9TObjEneDDFi(s32 arg0) {
    s32 limit;
    s32 idx;

    idx = arg0;
    limit = 0xE;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        limit = 0x1D;
    }
    if (idx < 0) {
        idx = 0;
    } else if (idx >= limit) {
        idx = limit - 1;
    }
    return idx;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9B84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_v2_mode__9TObjEneDDFv(void);

extern s32 enable_v2_features;
extern s32 lbl_805D5550;

s32 check_v2_mode__9TObjEneDDFv(void) {
    if (((s32) enable_v2_features != 0) && ((s32) lbl_805D5550 == 3)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9BAC
#include "types.h"

extern "C" {

int get_target_state_a__9TObjEneDDFPv(void* p);
int get_target_state_b__9TObjEneDDFPv(void* p);
int TObjPlayer__sub_801BA42C(void*);
int TObjPlayer__sub_801BA494(void*);

int get_target_state_a__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_801BA42C(p); }
int get_target_state_b__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_801BA494(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9C88
#include "types.h"

extern "C" {

s32 get_main_phase();
int query_teammate_state__9TObjEneDDFPv(void* p);
int update_lobby_state__9TObjEneDDFPv(void* p);
int TLobby__sub_800C6C10(void*);
int is_any_teammate_in_state__10TObjPlayerFv(void*);

int query_teammate_state__9TObjEneDDFPv(void* p) { return is_any_teammate_in_state__10TObjPlayerFv(p); }
int update_lobby_state__9TObjEneDDFPv(void* p) { return TLobby__sub_800C6C10(p); }
u8 is_phase_e__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xE);
}
u8 is_main_phase_15__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xF);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9D64
#include "types.h"

extern "C" {

void clear_global_flag_400__9TObjEneDDFv(void);
int update_player_state__9TObjEneDDFPv(void* p);
int render_with_position_override__10TObjPlayerFPvPvi(void*);

    extern int some_id_805c6f74;
void clear_global_flag_400__9TObjEneDDFv(void) { some_id_805c6f74 = (some_id_805c6f74 & 0xfffffbff); }

int update_player_state__9TObjEneDDFPv(void* p) { return render_with_position_override__10TObjPlayerFPvPvi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9E44
#include "types.h"

extern "C" {

int TObjPlayer__sub_800F7478(void*);
void reset_hp__9TObjEneDDFPv(void* p);
int update_primary_light__9TObjEneDDFPv(void* p);
int update_secondary_light__9TObjEneDDFPv(void* p);
int get_camera_ctrl__9TObjEneDDFPv(void* p);
int update_camera_sequence__9TObjEneDDFPv(void* p);
int initialize_enemy_state__9TObjEneDDFPv(void* p);
int TCameraCtrl__sub_80069148(void*);
int TCameraCtrl__sub_800691C8(void*);
int set_param__12TObjEneLappyFPvi(void*);
int TObjLight__sub_80134098(void*);
int TObjLight__sub_80134194(void*);

int update_primary_light__9TObjEneDDFPv(void* p) { return TObjLight__sub_80134098(p); }
int update_secondary_light__9TObjEneDDFPv(void* p) { return TObjLight__sub_80134194(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9ED0
#include "types.h"

extern "C" {

int TObjPlayer__sub_800F7478(void*);
void reset_hp__9TObjEneDDFPv(void* p);
int update_primary_light__9TObjEneDDFPv(void* p);
int update_secondary_light__9TObjEneDDFPv(void* p);
int get_camera_ctrl__9TObjEneDDFPv(void* p);
int update_camera_sequence__9TObjEneDDFPv(void* p);
int initialize_enemy_state__9TObjEneDDFPv(void* p);
int TCameraCtrl__sub_80069148(void*);
int TCameraCtrl__sub_800691C8(void*);
int set_param__12TObjEneLappyFPvi(void*);
int TObjLight__sub_80134098(void*);
int TObjLight__sub_80134194(void*);

void reset_hp__9TObjEneDDFPv(void* p) { TObjPlayer__sub_800F7478(p); *(short*)((char*)p + 0x33e) = *(short*)((char*)p + 0x32c); }
int get_camera_ctrl__9TObjEneDDFPv(void* p) { return TCameraCtrl__sub_80069148(p); }
int update_camera_sequence__9TObjEneDDFPv(void* p) { return TCameraCtrl__sub_800691C8(p); }
int initialize_enemy_state__9TObjEneDDFPv(void* p) { return set_param__12TObjEneLappyFPvi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9F64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_random_scaled__9TObjEneDDFv(void);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 lbl_805D9E94;

s32 get_random_scaled__9TObjEneDDFv(void) {
    return (s32) (lbl_805D9E94 * calc_boss4_scale__10TObjPlayerFi());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9F98
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 rand_range__9TObjEneDDFff(f32 farg0, f32 farg1);
f32 calc_boss4_scale__10TObjPlayerFi();

f32 rand_range__9TObjEneDDFff(f32 farg0, f32 farg1) {
    return ((farg1 - farg0) * calc_boss4_scale__10TObjPlayerFi()) + farg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B9FE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_elapsed_scaled__9TObjEneDDFv(void);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 lbl_805D9E98;
extern f32 lbl_805D9E9C;

f32 calc_elapsed_scaled__9TObjEneDDFv(void) {
    return lbl_805D9E98 * (calc_boss4_scale__10TObjPlayerFi() - lbl_805D9E9C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA0D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800BA0D8 { char pad[0x18]; };
struct VObj_800BA0D8 : Base_800BA0D8 {
    virtual void m0();    virtual void m1();    virtual void m2();    virtual void m3();
    virtual void m4();    virtual void m5();    virtual void m6();    virtual void m7();
    virtual void m8();    virtual void m9();    virtual void m10();    virtual void m11();
    virtual void m12();    virtual void m13();    virtual void m14();    virtual void m15();
    virtual void m16();    virtual void m17();    virtual void m18();    virtual void m19();
    virtual void m20();    virtual void m21();    virtual void m22();    virtual void m23();
    virtual void m24();    virtual void m25();    virtual void m26();    virtual void m27();
    virtual void m28();    virtual void m29();    virtual void m30();    virtual void m31();
    virtual void m32();    virtual void m33();    virtual void m34();    virtual void m35();
    virtual void m36();    virtual void m37();    virtual void m38();    virtual void m39();
    virtual void m40();    virtual void m41();    virtual void m42();    virtual void m43();
    virtual void m44();    virtual void m45();    virtual void m46();    virtual void m47();
    virtual void m48();    virtual void m49();    virtual void m50();    virtual void m51();
    virtual void m52();    virtual void m53();    virtual void m54();    virtual void m55();
    virtual void m56();    virtual void m57();    virtual void m58();    virtual void m59();
    virtual void m60();    virtual void m61();    virtual void m62();    virtual void m63();
    virtual void m64();    virtual void m65();    virtual void m66();    virtual void m67();
    virtual void m68();    virtual void m69();    virtual void m70();    virtual void m71();
    virtual void m72();    virtual void m73();    virtual void m74();    virtual void m75();
    virtual void m76();    virtual void m77();    virtual void m78();    virtual void m79();
    virtual void m80();    virtual void m81();    virtual void m82();    virtual void m83();
    virtual void m84();    virtual void m85();    virtual void m86();    virtual void m87();
    virtual void m88();    virtual void m89();
    virtual void m90();
    virtual void m91();
};

extern "C" {

void TObjEneDD__vt93(void *arg0);

void TObjEneDD__vt93(void *arg0) {
    ((VObj_800BA0D8*)arg0)->m90();
    ((VObj_800BA0D8*)arg0)->m91();
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA138
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800BA138 { char pad[0x18]; };
struct VObj_800BA138 : Base_800BA138 {
    virtual void g0();
#define VM(n) virtual void m##n();
    VM(0) VM(1) VM(2) VM(3) VM(4) VM(5) VM(6) VM(7) VM(8) VM(9)
    VM(10) VM(11) VM(12) VM(13) VM(14) VM(15) VM(16) VM(17) VM(18) VM(19)
    VM(20) VM(21) VM(22) VM(23) VM(24) VM(25) VM(26) VM(27) VM(28) VM(29)
    VM(30) VM(31) VM(32) VM(33) VM(34) VM(35) VM(36) VM(37) VM(38) VM(39)
    VM(40) VM(41) VM(42) VM(43) VM(44) VM(45) VM(46) VM(47) VM(48) VM(49)
    VM(50) VM(51) VM(52) VM(53) VM(54) VM(55) VM(56) VM(57) VM(58) VM(59)
    VM(60) VM(61) VM(62) VM(63) VM(64) VM(65) VM(66) VM(67) VM(68) VM(69)
    VM(70) VM(71) VM(72) VM(73) VM(74) VM(75) VM(76) VM(77) VM(78) VM(79)
    VM(80) VM(81) VM(82) VM(83) VM(84) VM(85) VM(86) VM(87)
#undef VM
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
};

extern "C" {

void TObjEneDD__vt92(void *arg0);

void TObjEneDD__vt92(void *arg0) {
    struct VObj_800BA138 *o = (struct VObj_800BA138 *)arg0;
    o->m88();
    o->m91();
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04040000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA288
#include "types.h"

extern "C" {

int set_state_8__9TObjEneDDFPv(void* p);
int check_state_flag_4__9TObjEneDDFPv(void* p);
int check_state_flag_2__9TObjEneDDFPv(void* p);
int check_state_flag_1__9TObjEneDDFPv(void* p);
int add_flags_2e4__10TObjPlayerFPvUi(void*, int);

int set_state_8__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 8); }
int check_state_flag_4__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 4); }
int check_state_flag_2__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 2); }
int check_state_flag_1__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA4C4
#include "types.h"

extern "C" {

int emit_effect__9TObjEneDDFPvii(void* p, int a1, int a2);
int emit_enemy_effect__9TObjEneDDFiiPvi(void*, int, int, int);

int emit_effect__9TObjEneDDFPvii(void* p, int a1, int a2) { return emit_enemy_effect__9TObjEneDDFiiPvi(p, a1, a2, 0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA4E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void emit_enemy_effect__9TObjEneDDFiiPvi(s32 arg0, s32 arg1, u8 *arg2, s32 arg3);
M2C_UNK get_position__12TBoss1DragonFPv(void *, s32);
M2C_UNK fn_800BC3E8(void *, s32);

extern u8 *lbl_805D5138;
extern const f32 lbl_805D9EA0;

struct EneDDBase2 { char pad[0x18]; };
struct EneDDObj2 : EneDDBase2 {
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
    virtual void m15(void *, void *);
    virtual void m16(void *, void *);
};

void emit_enemy_effect__9TObjEneDDFiiPvi(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    fn_800BC3E8(lbl_805D5138, arg0);
    get_position__12TBoss1DragonFPv(lbl_805D5138, arg1);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), s32 *, 0x18) = 0x9D03;
    if (M2C_FIELD(arg2, f32 *, 8) > lbl_805D9EA0) {
        ((EneDDObj2*)lbl_805D5138)->m16((void*)(arg2 + 0xC), (void*)arg3);
        return;
    }
    ((EneDDObj2*)lbl_805D5138)->m15((void*)(arg2 + 0xC), (void*)arg3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA5D0
#include "types.h"

extern "C" {

int setup__9TObjEneDDFPvii(void* p, int a1, int a2);
int setup_instance__9TObjEneDDFiiPvi(void*, int, int, int);

int setup__9TObjEneDDFPvii(void* p, int a1, int a2) { return setup_instance__9TObjEneDDFiiPvi(p, a1, a2, 0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA5F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_instance__9TObjEneDDFiiPvi(s32 arg0, s32 arg1, u8 *arg2, s32 arg3);
M2C_UNK get_position__12TBoss1DragonFPv(void *, s32);
M2C_UNK fn_800BC3E8(void *, s32);

extern u8 *lbl_805D5138;
extern const f32 lbl_805D9EA0;

struct EneDDBase { char pad[0x18]; };
struct EneDDObj : EneDDBase {
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
    virtual void m12(void *, void *, void *);
    virtual void m13(void *, void *, void *);
};

void setup_instance__9TObjEneDDFiiPvi(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    fn_800BC3E8(lbl_805D5138, arg0);
    get_position__12TBoss1DragonFPv(lbl_805D5138, arg1);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), s32 *, 0x18) = 0x9D03;
    if (M2C_FIELD(arg2, f32 *, 8) > lbl_805D9EA0) {
        ((EneDDObj*)lbl_805D5138)->m13((void*)(arg2 + 0xC), (void*)arg2, (void*)arg3);
        return;
    }
    ((EneDDObj*)lbl_805D5138)->m12((void*)(arg2 + 0xC), (void*)arg2, (void*)arg3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA6B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_alive__9TObjEneDDFPv(void *arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
int TObjEneDD__sub_800BA754(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void transform_relative_position__9TObjEneDDFPvPv(void* p, void* a1);
int TObjEneDD__sub_800BA6B8(void* p);
int TObjEneDD__sub_800BA6C4(void* p);

int TObjEneDD__sub_800BA6B8(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }
int TObjEneDD__sub_800BA6C4(void* p) { return (*(u32*)((char*)p + 0x890) >> 6) & 0x1; }
u8 is_alive__9TObjEneDDFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((arg0 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02040800)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}
void transform_relative_position__9TObjEneDDFPvPv(void* p, void* a1) { TObjEneDD__sub_800BA754(a1, (char*)p + 0x2fc, p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA7AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_alive__9TObjEneDDFPv(void *arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
int TObjEneDD__sub_800BA754(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void transform_relative_position__9TObjEneDDFPvPv(void* p, void* a1);
int TObjEneDD__sub_800BA6B8(void* p);
int TObjEneDD__sub_800BA6C4(void* p);

u8 is_valid_target__9TObjEneDDFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((arg0 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x06040800)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA8E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800BA8E8 { char pad[0x18]; };
struct VObj_800BA8E8 : Base_800BA8E8 {
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

void TObjEneDD__vt86(void *arg0);
M2C_UNK TObjPlayer__sub_801564A0(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);

void TObjEneDD__vt86(void *arg0) {
    struct VObj_800BA8E8 *o = (struct VObj_800BA8E8 *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_801564A0(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA930
#include "types.h"

extern "C" {

int TObjEneGibbles__sub_80156780(void*);
int TObjEneDD__sub_800BA934(void* a0 = 0);
void init_model__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
void clear_field_388__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);

void TObjEneDD__vt85(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BAB58
#include "types.h"

extern "C" {

int TObjEneGibbles__sub_80156780(void*);
int TObjEneDD__sub_800BA934(void* a0 = 0);
void init_model__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
void clear_field_388__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);

void init_model__9TObjEneDDFPv(void* p) { TObjEneGibbles__sub_80156780(p); TObjEneDD__sub_800BA934(p); }
void clear_field_388__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 0; }
void set_active__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB158
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_shot_position__9TObjEneDDFPvPvfff(u8 *arg0, u8 *arg1, f32 farg0, f32 farg1, f32 farg2);
u32 TObjEneDD__sub_800BB218(f32, f32, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, s32);

void calc_shot_position__9TObjEneDDFPvPvfff(u8 *arg0, u8 *arg1, f32 farg0, f32 farg1, f32 farg2) {
    s32 temp_r5;

    f32 temp_f3 = farg2 + M2C_FIELD(arg0, f32 *, 0x37C);
    if (TObjEneDD__sub_800BB218(farg0, farg1, temp_f3) == 0U) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) ((farg0 * farg2) + M2C_FIELD(arg0, f32 *, 0x38));
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg1, f32 *, 8) = (f32) ((farg1 * farg2) + M2C_FIELD(arg0, f32 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        return;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x380);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_r5 + 1);
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x38, temp_r5);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB364
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_squared_value__9TObjEneDDFf(f32 farg0);
M2C_UNK TObjEneDD__sub_800BB388(f32);

void set_squared_value__9TObjEneDDFf(f32 farg0) {
    TObjEneDD__sub_800BB388(farg0 * farg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB804
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_common_from__9TObjEneDDFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C(void *, int);
M2C_UNK TObjEneDD__sub_800BB88C();

extern s32 lbl_805D5328;

void init_common_from__9TObjEneDDFPvPv(u8 *arg0, u8 *arg1) {
    TObjEneDD__sub_800BB88C();
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 0x2A);
    TAdSinglePlyChrSelectGC__sub_8007C48C((void *) (arg0 + 0x160), (int) (M2C_FIELD(arg0, u16 *, 0x1C) + lbl_805D5328));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB858
#include "types.h"

extern "C" {

int get_target_info__9TObjEneDDFPv(void* p);
int fn_800FD8A0(void*);

int get_target_info__9TObjEneDDFPv(void* p) { return fn_800FD8A0(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB8E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_800BB8E0 { char pad[0x18]; };
struct VObj_800BB8E0 : Base_800BB8E0 {
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
};

extern "C" {

void invoke_initialization_hook__9TObjEneDDFPv(void *arg0);

void invoke_initialization_hook__9TObjEneDDFPv(void *arg0) {
    struct VObj_800BB8E0 *o = (struct VObj_800BB8E0 *)arg0;
    o->m79();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB90C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDD__vt77(void *arg0);
M2C_UNK call_vt78__10TObjPlayerFPv();
void set_field_378__9TObjEneDDFPvi(void* p, s32 v);

void TObjEneDD__vt77(void *arg0) {
    s16 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s16 *, 0x326);
    call_vt78__10TObjPlayerFPv();
    M2C_FIELD(arg0, s16 *, 0x326) = temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BBA04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDD__vt77(void *arg0);
M2C_UNK call_vt78__10TObjPlayerFPv();
void set_field_378__9TObjEneDDFPvi(void* p, s32 v);

void set_field_378__9TObjEneDDFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x378) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BBA7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjEneDD__vt84(void *arg0);

u8 TObjEneDD__vt84(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x374) != M2C_FIELD(arg0, s16 *, 0x326));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BBC80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase800BBC80 { char pad[0x18]; };
struct VObj800BBC80 : VBase800BBC80 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual M2C_UNK m80();
};

extern "C" {

void init_position_vectors__9TObjEneDDFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK reset_photon_effect__12TBoss3VoloptFPv(void *);

extern const f32 TObjEneDD__data_805D9E8C;

void init_position_vectors__9TObjEneDDFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x50, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x248) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x24C) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, f32 *, 0x250) = (f32) TObjEneDD__data_805D9E8C;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    ((VObj800BBC80 *) arg0)->m80();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BBD18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDD__vt0(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK __vt__9TObjEneDD[];

void *TObjEneDD__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjEneDD;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BBD70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDD__ct(void *arg0);
void TObjEnemy__ct(void *);

extern M2C_UNK __vt__9TObjEneDD[];
extern const f32 lbl_805D9EA8;
extern void *lbl_805D2A30;

void *TObjEneDD__ct(void *arg0) {
    TObjEnemy__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjEneDD;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2A30;
    M2C_FIELD(arg0, u32 *, 0x374) = 0;
    M2C_FIELD(arg0, u32 *, 0x378) = 0;
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805D9EA8;
    M2C_FIELD(arg0, u32 *, 0x380) = 0;
    M2C_FIELD(arg0, u32 *, 0x384) = 0;
    M2C_FIELD(arg0, u32 *, 0x388) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BBDD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_800BBDD4 { char pad[0x18]; };
struct VObj_800BBDD4 : Base_800BBDD4 {
    virtual void m0(int);
};

void release_resource__9TObjEneDDFv(void);

extern struct VObj_800BBDD4 *lbl_805D5138;

void release_resource__9TObjEneDDFv(void) {
    if (lbl_805D5138 != NULL) {
        if (lbl_805D5138 != NULL) {
            lbl_805D5138->m0(1);
        }
        lbl_805D5138 = NULL;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BBE1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_instance__9TObjEneDDFv(void);
int get_enemy_count__9TObjEneDDFv(void);
void *__nw__7TObjectFUl(int);
void *fn_800BC4C8(void *, int, int);

extern void *lbl_805D5138;

void create_instance__9TObjEneDDFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = fn_800BC4C8(o, 0, 0);
    }
    lbl_805D5138 = o;
}

    extern int lbl_805D5870;
int get_enemy_count__9TObjEneDDFv(void) {  return lbl_805D5870; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C2614
#include "types.h"

extern "C" {

void TObjEneDD__sub_800C2614(void);
void TObjEneDD__sub_800C2618(void* p);

void TObjEneDD__sub_800C2614(void) {  }
void TObjEneDD__sub_800C2618(void* p) { *(u32*)((char*)p + 0x3c4) |= 0x2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C38D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_En_800c38d0 { char pad[0x18]; };
struct V_En_800c38d0 : Base_En_800c38d0 {
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
struct Base_Sub_800c38d0 { char pad[0x14]; };
struct V_Sub_800c38d0 : Base_Sub_800c38d0 {
    PADV4
    PADV
    virtual s32 m5();
};
struct Base_800C3A00 { char pad[0x18]; };
struct VObj_800C3A00 : Base_800C3A00 {
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
};

extern "C" {

void handle_state__9TObjEneDDFPvi(u8 *arg0, s32 arg1);
void dispatch_action__9TObjEneDDFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
M2C_UNK clear_child_flags__16TObjEneRe2FlowerFPv(void *);
M2C_UNK fn_800B98C0(void *);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK TBoss3Volopt__sub_800D8E80(void *);

void handle_state__9TObjEneDDFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((V_En_800c38d0 *) arg0)->m93();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 8);
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        fn_800B98C0(arg0);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3F4);
        if (get_flag_11__16TObjEneRe2FlowerFPv(arg0) != 0) {
            TBoss3Volopt__sub_800D8C48(arg0 + 0x38);
            return;
        }
        TBoss3Volopt__sub_800D8E80(arg0 + 0x38);
        return;
    case 3:
        if (((V_Sub_800c38d0 *) (arg0 + 0x3F4))->m5() != 0) {
            TObjEneDD__sub_800BBA18((void *)(arg0), (s32)(2));
        }
    case 1:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        ((V_En_800c38d0 *) arg0)->m100();
        ((V_En_800c38d0 *) arg0)->m86();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFF7);
        break;
    }
}

void dispatch_action__9TObjEneDDFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_800C3A00 *)arg0)->m93();
        return;
    case 3:
        TObjEneDD__sub_800BBA18((void *)(arg0), (s32)(1));
    case 5:
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C3A5C
#include "types.h"

extern "C" {

void noop__9TObjEneDDFv(void);

void noop__9TObjEneDDFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80181E10
#include "types.h"

extern "C" {

int is_phase_e__9TObjEneDDFPv(void* p);
int is_phase_e__9TObjEneDDFv(void*);

int is_phase_e__9TObjEneDDFPv(void* p) { return is_phase_e__9TObjEneDDFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA498
#include "types.h"

extern "C" {

void TObjEneDD__sub_800BA498(void* p, void* a1);
int emit_effect__9TObjEneDDFPvii(void* p, int a1, int a2);
int emit_enemy_effect__9TObjEneDDFiiPvi(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);

void TObjEneDD__sub_800BA498(void* p, void* a1) { emit_enemy_effect__9TObjEneDDFiiPvi(p, (char*)p + 0x38, a1, (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BA5A4
#include "types.h"

extern "C" {

void TObjEneDD__sub_800BA5A4(void* p, void* a1);
int setup__9TObjEneDDFPvii(void* p, int a1, int a2);
int setup_instance__9TObjEneDDFiiPvi(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);

void TObjEneDD__sub_800BA5A4(void* p, void* a1) { setup_instance__9TObjEneDDFiiPvi(p, (char*)p + 0x38, a1, (void*)0); }

}
#endif
#endif
