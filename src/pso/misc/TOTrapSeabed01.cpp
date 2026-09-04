#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrapSeabed01__vt20(s32 arg0, s32 arg1, f32 farg0);

M2C_UNK TOTrap__sub_80178F54(s32, s32, f32);
M2C_UNK fn_802C9D38();

void TOTrapSeabed01__vt20(s32 arg0, s32 arg1, f32 farg0) {
    fn_802C9D38();
    TOTrap__sub_80178F54(arg0, arg1, farg0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802CA2BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

extern u32 lbl_805D6818;

void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0) {
    if (arg0 == (u32) lbl_805D6818) {
        begin_effect_render__13TParticleCtrlFv();
        return;
    }
    end_effect_render__13TParticleCtrlFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CA2F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0);
M2C_UNK PPCSync();
M2C_UNK TOComputerMachine01__sub_8023DDC8(int, int, int, void *, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_80141A30();
M2C_UNK set_npc_enemy_param(void *);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK set_depth_buffer_settings_3__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);

extern M2C_UNK trigger_by_id__14TOTrapSeabed01FUi[];
extern s32 lbl_805D53A4;
extern s32 TOTrapSeabed01__data_805D6814;
extern u8 *lbl_805D6818;
extern s32 lbl_805D681C;
extern s32 lbl_805D6820;

void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0) {
    set_global_param__8TObjFishFi((void *) (TOTrapSeabed01__data_805D6814));
    if ((s32) lbl_805D53A4 != (s32) lbl_805D681C) {
        if (((void *) lbl_805D6818 != NULL) && ((s32) lbl_805D6820 != -1)) {
            TOComputerMachine01__sub_8023DDC8((int) (M2C_FIELD(lbl_805D6818, s32 *, 4)), (int) (0), (int) (-0x14), (void *) ((u16) lbl_805D6820), (int) (1));
            PPCSync();
        }
        lbl_805D681C = lbl_805D53A4;
    }
    set_npc_enemy_param((void *) (trigger_by_id__14TOTrapSeabed01FUi));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_depth_buffer_settings_3__Fv();
    set_depth_buffer_settings_id__FUl((int) (1));
    TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    func_80141618__Fv();
    fn_80141A30();
    begin_effect_render__13TParticleCtrlFv();
    set_depth_buffer_settings_1__Fv();
    set_depth_buffer_settings_id__FUl((int) (2));
    TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    func_80141618__Fv();
    fn_80141A30();
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
    set_npc_enemy_param((void *) (NULL));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CA4C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__14TOTrapSeabed01FPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOTrapSeabed01__sub_802CA3EC(void *, s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK fn_80141A30();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_3__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);

extern s32 TOTrapSeabed01__data_805D6814;

void draw__14TOTrapSeabed01FPv(u8 *arg0) {
    if ((is_not_split_screen__13TRaderMapCoreFv() != 1) || ((s32) M2C_FIELD(arg0, s32 *, 0x34C) == 0)) {
        set_depth_buffer_settings_3__Fv();
        set_depth_buffer_settings_id__FUl(1);
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(TOTrapSeabed01__data_805D6814);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TOTrapSeabed01__sub_802CA3EC(arg0, M2C_FIELD(arg0, s32 *, 0x34));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        func_80141618__Fv();
        fn_80141A30();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CA5F0
#include "types.h"

extern "C" {

void TOTrapSeabed01__vt82(void);

void TOTrapSeabed01__vt82(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CA77C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TOTrapSeabed01FPv(void *arg0);
void *TOTrapSeabed01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__14TOTrapSeabed01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x35C);
    if (o != NULL) {
        o = TOTrapSeabed01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CA7C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_resources__14TOTrapSeabed01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 TOTrapSeabed01__data_805D6810;
extern u32 TOTrapSeabed01__data_805D6814;

void free_static_resources__14TOTrapSeabed01Fv(void) {
    if ((u32) TOTrapSeabed01__data_805D6814 != 0U) {
        TLobby__sub_803DA16C((void*)TOTrapSeabed01__data_805D6814);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TOTrapSeabed01__data_805D6814);
        TOTrapSeabed01__data_805D6814 = 0U;
    }
    if ((u32) TOTrapSeabed01__data_805D6810 != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapSeabed01__data_805D6810, 1);
        TOTrapSeabed01__data_805D6810 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CA8C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802CA8C8 { char pad[0x18]; };
struct VObj_802CA8C8 : Base_802CA8C8 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)
#undef V
    virtual void m83();
};

extern "C" {

void TOTrapSeabed01__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK set_flag8__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_80226294(s32);
M2C_UNK fn_802C9D38(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TOTrapSeabed01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_802CA8C8 *)arg0)->m83();
        }
        s32 tmp = M2C_FIELD(arg0, s32 *, 0x358);
        if (tmp >= 0) {
            TLobby__sub_80226294(tmp);
            tmp = -1;
            M2C_FIELD(arg0, s32 *, 0x358) = tmp;
        }
        fn_802C9D38(arg0);
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CA944
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TOTrapSeabed01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__6TOTrapFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__14TOTrapSeabed01[];

void *__dt__14TOTrapSeabed01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOTrapSeabed01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__6TOTrapFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
