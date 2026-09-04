#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void set_flag3cc_bit2000__18TObjEneRe4SorcererFPv(void* p);

void set_flag3cc_bit2000__18TObjEneRe4SorcererFPv(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2000; }

}
#else
#if PSO_CLASS_PACKAGE == 0x800ED300
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_flags__18TObjEneRe4SorcererFPv(u8 *arg0);

struct ED300Base_800ed300 { char pad[0x14]; };
struct ED300Obj_800ed300 : ED300Base_800ed300 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3(void *);
};

void set_state_flags__18TObjEneRe4SorcererFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFB);
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x308);
    ((ED300Obj_800ed300*)(arg0 + 0x3DC))->m3(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED34C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_state_flag_0x10__18TObjEneRe4SorcererFPv(void *arg0);
M2C_UNK set_state_flags__18TObjEneRe4SorcererFPv();

void clear_state_flag_0x10__18TObjEneRe4SorcererFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFEF);
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x408)) {
        set_state_flags__18TObjEneRe4SorcererFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED384
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_hold_flags__18TObjEneRe4SorcererFPv(u8 *arg0);

struct ED384Base_800ed384 { char pad[0x14]; };
struct ED384Obj_800ed384 : ED384Base_800ed384 {
    virtual void m0();
    virtual void m1();
    virtual void m2(void *);
};

void set_hold_flags__18TObjEneRe4SorcererFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x204);
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
    ((ED384Obj_800ed384*)(arg0 + 0x3DC))->m2(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED3D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_hold_flags__18TObjEneRe4SorcererFPv();
void TObjEneRe4Sorcerer__sub_800ED408(void* p);
void set_attack_flag__18TObjEneRe4SorcererFPv(void* p);
void TObjEneRe4Sorcerer__sub_800ED47C(void* p);
void* get_spell_data__18TObjEneRe4SorcererFPv(void* p);
s32 get_state__18TObjEneRe4SorcererFPv(void* p);

void set_flag_and_notify__18TObjEneRe4SorcererFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x10);
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 4)) {
        set_hold_flags__18TObjEneRe4SorcererFPv();
    }
}
void TObjEneRe4Sorcerer__sub_800ED408(void* p) { *(u32*)((char*)p + 0x3cc) &= 0xfffffeff; }
void set_attack_flag__18TObjEneRe4SorcererFPv(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED47C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_hold_flags__18TObjEneRe4SorcererFPv();
void TObjEneRe4Sorcerer__sub_800ED408(void* p);
void set_attack_flag__18TObjEneRe4SorcererFPv(void* p);
void TObjEneRe4Sorcerer__sub_800ED47C(void* p);
void* get_spell_data__18TObjEneRe4SorcererFPv(void* p);
s32 get_state__18TObjEneRe4SorcererFPv(void* p);

void TObjEneRe4Sorcerer__sub_800ED47C(void* p) { *(s32*)((char*)p + 0x3d0) = 3; }
void* get_spell_data__18TObjEneRe4SorcererFPv(void* p) { return (char*)p + 0x2fc; }
s32 get_state__18TObjEneRe4SorcererFPv(void* p) { return *(s32*)((char*)p + 0x404); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EDB98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Sorcerer__vt104(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK update_player_state__9TObjEneDDFPv(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
M2C_UNK get_target_info__9TObjEneDDFPv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800F5BC0(s32, s16, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

extern s32 TObjEneRe4Sorcerer__data_805D52F4;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA788;
extern const f32 TObjEneRe4Sorcerer__data_805DA78C;
extern const f32 TObjEneRe4Sorcerer__data_805DA790;
extern const f32 TObjEneRe4Sorcerer__data_805DA794;
extern const f32 lbl_805DA798;

struct Base { u8 pad[0x18]; };
struct VObj : Base {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual s32 m8(f32, f32) = 0;
};

void TObjEneRe4Sorcerer__vt104(u8 *arg0) {
    get_target_info__9TObjEneDDFPv();
    if (((VObj *)arg0)->m8(lbl_805DA788, TObjEneRe4Sorcerer__data_805DA78C) != 0) {
        update_player_state__9TObjEneDDFPv(arg0, 0, 0);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9624(0, TObjEneRe4Sorcerer__data_805DA790, TObjEneRe4Sorcerer__data_805DA794, TObjEneRe4Sorcerer__data_805DA790);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s16 *, 0x3C0) = (s16) (M2C_FIELD(arg0, s16 *, 0x3C0) + 5);
        TObjPlayer__sub_800F5BC0(TObjEneRe4Sorcerer__data_805D52F4, M2C_FIELD(arg0, s16 *, 0x3C0), 0);
        M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C4) + lbl_805DA798);
        some_id_805c6f74 |= 0x20000;
        TObjEneRe4Sorcerer__sub_801E3F1C(TObjEneRe4Sorcerer__data_805DA790, M2C_FIELD(arg0, f32 *, 0x3C4));
        toggle_particle_effect__10TObjPlayerFv();
        TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 &= 0xFFFDFFFF;
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EDC90
#include "types.h"

extern "C" {

void TObjEneRe4Sorcerer__vt103(void* p);

int get_target_info__9TObjEneDDFPv(void*);
int TObjEneRe4Sorcerer__sub_800EFE30(void*);

void TObjEneRe4Sorcerer__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneRe4Sorcerer__sub_800EFE30(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EEB04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m93();
};

extern "C" {

void state_wait__18TObjEneRe4SorcererFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneRe4Sorcerer__sub_800EF95C(void *, f32);
s32 try_attack__18TObjEneRe4SorcererFiff(f32, f32);
M2C_UNK fn_800B98C0(void *);

extern const f32 lbl_805DA7C0;
extern const f32 lbl_805DA7C4;
extern const f32 lbl_805DA7C8;

void state_wait__18TObjEneRe4SorcererFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFFFD);
        ((V_A *) arg0)->m93();
        fn_800B98C0(arg0);
        return;
    case 3:
        if (try_attack__18TObjEneRe4SorcererFiff(lbl_805DA7C0, lbl_805DA7C0) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x3EC) & 1) {
                TObjEneRe4Sorcerer__sub_800EF95C(arg0, lbl_805DA7C4);
            } else {
                TObjEneRe4Sorcerer__sub_800EF95C(arg0, lbl_805DA7C8);
            }
            TObjEneDD__sub_800BBA18(arg0, 2);
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) > 0x5A) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4E4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4E4) + 1);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EF0F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_state__18TObjEneRe4SorcererFPvi(void *arg0, s32 arg1);

M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void handle_state__18TObjEneRe4SorcererFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        break;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) >= 2) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
        break;
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4E4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4E4) + 1);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EF25C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_effect__18TObjEneRe4SorcererFPv(u8 *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);

void create_effect__18TObjEneRe4SorcererFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) == 0) {
        TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A812), arg0, arg0 + 0x38, 0, 0);
        return;
    }
    TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AB13), arg0, arg0 + 0x38, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EF2D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 cast_resta__18TObjEneRe4SorcererFPv(u8 *arg0);
s32 is_alive__9TObjEneDDFPv(s32);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK create__9TTecRestaFPvPvPv(void *, void *, s32);
s32 clamp_frame_index__9TObjEneDDFi(s32);
u8 *get_spell_data__18TObjEneRe4SorcererFPv();

extern u8 *lbl_805D52DC;

s32 cast_resta__18TObjEneRe4SorcererFPv(u8 *arg0) {
    u8 *var_r31;

    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x390)) != 0) {
        if (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4)) != 0U) {
            var_r31 = get_spell_data__18TObjEneRe4SorcererFPv();
        } else {
            var_r31 = arg0 + 0x38;
        }
        create__9TTecRestaFPvPvPv(arg0, var_r31, clamp_frame_index__9TObjEneDDFi(M2C_FIELD(lbl_805D52DC, s32 *, 0x20)));
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EF504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void turn_to_target__18TObjEneRe4SorcererFPv(void *arg0);
M2C_UNK TObjEneEpsilon__sub_800B96A4();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);

extern const f64 TObjEneRe4Sorcerer__data_8043D408;

void turn_to_target__18TObjEneRe4SorcererFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    update_velocity__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TObjEneRe4Sorcerer__data_8043D408 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), 0xA00);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EF56C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_orb_positions__18TObjEneRe4SorcererFPv(void *arg0);
void apply_mylla_effect__18TObjEneRe4SorcererFPv(void *arg0);
void set_photon_state__18TObjEneRe4SorcererFPv(void *arg0);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TObjEneRe4Sorcerer__sub_800ED428(u32, s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 TObjEneRe4Sorcerer__data_805DA78C;
extern const f32 lbl_805DA7E0;

void calc_orb_positions__18TObjEneRe4SorcererFPv(void *arg0) {
    f32 temp_f2;
    f32 temp_f31;

    temp_f31 = TObjEneRe4Sorcerer__data_805DA78C * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f2 = TObjEneRe4Sorcerer__data_805DA78C * -TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + temp_f31);
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) (lbl_805DA7E0 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + temp_f2);
    M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) - temp_f31);
    M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) (lbl_805DA7E0 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x3D4) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) - temp_f2);
}

void apply_mylla_effect__18TObjEneRe4SorcererFPv(void *arg0) {
    u32 temp_r3;
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E6));
    if (temp_r3 != 0U) {
        TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(2));
    }
}

void set_photon_state__18TObjEneRe4SorcererFPv(void *arg0) {
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) == 0) {
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(0));
        }
    } else {
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            TObjEneRe4Sorcerer__sub_800ED428((u32)(temp_r3), (s32)(1));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EF740
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_shield__18TObjEneRe4SorcererFiPv(s32 arg0, void *arg1);
s16 get_field_2b8__14TItemProShieldFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();

s32 check_shield__18TObjEneRe4SorcererFiPv(s32 arg0, void *arg1) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        return M2C_FIELD(arg1, s16 *, 0x32C) < get_field_2b8__14TItemProShieldFPv(arg1);
    }
    return M2C_FIELD(arg1, s16 *, 0x32C) < (get_field_2b8__14TItemProShieldFPv(arg1) / 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EF8C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_anim_frame__18TObjEneRe4SorcererFPv(void *arg0);
void request_death_effect__18TObjEneRe4SorcererFPv(void *arg0);
void set_motion_by_state__18TObjEneRe4SorcererFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void advance_anim_frame__18TObjEneRe4SorcererFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E8) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) >= 3) {
        M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    }
}

void request_death_effect__18TObjEneRe4SorcererFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) != 2) {
        TObjEneDD__sub_800BBA18(arg0, 4);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 6);
}

void set_motion_by_state__18TObjEneRe4SorcererFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) != 2) {
        TObjEneDD__sub_800BBA18(arg0, 5);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 7);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EFAD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_attack__18TObjEneRe4SorcererFiff(s32 arg0, f32 farg0, f32 farg1);
s32 TObjEneRe4Sorcerer__sub_800EFB60(s32, f32, f32);
s32 fn_800B9194(s32);
M2C_UNK fn_800B98C0(s32);
s32 TObjEneEpsilon__sub_800BBE64(s32, M2C_UNK, M2C_UNK);

s32 try_attack__18TObjEneRe4SorcererFiff(s32 arg0, f32 farg0, f32 farg1) {
    if (TObjEneEpsilon__sub_800BBE64(arg0, arg0 + 0x3B0, 0x1E) != 0) {
        return TObjEneRe4Sorcerer__sub_800EFB60(arg0, farg0, farg1);
    }
    if (fn_800B9194(arg0) != 0) {
        return 1;
    }
    fn_800B98C0(arg0);
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EFE30
#include "types.h"

extern "C" {

void TObjEneRe4Sorcerer__sub_800EFE30(void);

void TObjEneRe4Sorcerer__sub_800EFE30(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EFE34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Sorcerer__vt86(void *arg0);

extern f32 TObjEneRe4Sorcerer__data_805DA794;

void TObjEneRe4Sorcerer__vt86(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) TObjEneRe4Sorcerer__data_805DA794;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EFE44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_collision_center__18TObjEneRe4SorcererFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);

extern const f32 TObjEneRe4Sorcerer__data_805DA794;

void update_collision_center__18TObjEneRe4SorcererFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneRe4Sorcerer__data_805DA794 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneRe4Sorcerer__data_805DA794));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EFE90
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe4Sorcerer__vt61(void* p);
void TObjEneRe4Sorcerer__vt59(void);
void TObjEneRe4Sorcerer__vt26(void);

void TObjEneRe4Sorcerer__vt59(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EFED8
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe4Sorcerer__vt61(void* p);
void TObjEneRe4Sorcerer__vt59(void);
void TObjEneRe4Sorcerer__vt26(void);

void TObjEneRe4Sorcerer__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 9) { TObjEneDD__sub_800BBA18(p, (void*)9); } }
void TObjEneRe4Sorcerer__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F032C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe4Sorcerer__sub_800EFE30(void *);
void TObjEneRe4Sorcerer__sub_800F0118(void *);
void TObjPlayer__sub_8004433C(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

extern M2C_UNK __vt__18TObjEneRe4Sorcerer[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D2AF0;

void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneRe4Sorcerer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1020));
    TObjPlayer__sub_8004433C((void *)((char *)arg0 + 1048));
    __construct_array((void *)((char *)arg0 + 1140), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AF0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneRe4Sorcerer__sub_800EFE30(arg0);
    TObjEneRe4Sorcerer__sub_800F0118(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F03C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_bits__18TObjEneRe4SorcererFv(void);
M2C_UNK TObjEneRe4Bit__sub_800EDAB0();
void TLobby__sub_8001FE7C(void*, int);
void destroy_buffer_pair(void*, int);

extern u32 lbl_805D52E0;
extern u32 TObjEneRe4Sorcerer__data_805D52F4;

void free_bits__18TObjEneRe4SorcererFv(void) {
    if ((u32) TObjEneRe4Sorcerer__data_805D52F4 != 0U) {
        destroy_buffer_pair((void*)TObjEneRe4Sorcerer__data_805D52F4, 1);
        TObjEneRe4Sorcerer__data_805D52F4 = 0U;
    }
    TObjEneRe4Bit__sub_800EDAB0();
    if ((u32) lbl_805D52E0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D52E0, 1);
        lbl_805D52E0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F0418
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__18TObjEneRe4SorcererFPv(void *arg0);
void *TObjEneRe4Sorcerer__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__18TObjEneRe4SorcererFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F0);
    if (o != NULL) {
        o = TObjEneRe4Sorcerer__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E3F14
#include "types.h"

extern "C" {

void TObjEneRe4Sorcerer__sub_801E3F14(void);
void TObjEneRe4Sorcerer__sub_801E3F18(void);
void TObjCMHairMenu__sub_801E3F54(void* p, void* q);
void TObjEneRe4Sorcerer__sub_801E3F1C(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);

void TObjEneRe4Sorcerer__sub_801E3F14(void) {  }
void TObjEneRe4Sorcerer__sub_801E3F18(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E3F1C
#include "types.h"

extern "C" {

void TObjEneRe4Sorcerer__sub_801E3F14(void);
void TObjEneRe4Sorcerer__sub_801E3F18(void);
void TObjEneRe4Sorcerer__sub_801E3F1C(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjCMHairMenu__sub_801E3F54(void* p, void* q);

void TObjEneRe4Sorcerer__sub_801E3F1C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E3F20
#include "types.h"

extern "C" {

void TObjEneRe4Sorcerer__sub_801E3F14(void);
void TObjEneRe4Sorcerer__sub_801E3F18(void);
void TObjEneRe4Sorcerer__sub_801E3F1C(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjCMHairMenu__sub_801E3F54(void* p, void* q);

void TObjEneRe4Sorcerer__sub_801E3F20(void) {  }

}
#endif
#endif
