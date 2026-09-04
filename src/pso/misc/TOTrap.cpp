#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void trigger__6TOTrapFPvPvi(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK set_flag8__6TLobbyFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

struct Base_80178EF8 { char pad[0x18]; };
struct VObj_80178EF8 : Base_80178EF8 {
#define VM(n) virtual void m##n();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)
    VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)VM(16)VM(17)VM(18)VM(19)
    VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)
    VM(30)VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)
    VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)VM(46)VM(47)VM(48)VM(49)
    VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)
    VM(60)VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)
    VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)VM(76)VM(77)VM(78)VM(79)
    VM(80)VM(81)VM(82)
    virtual void m83();
#undef VM
};

void trigger__6TOTrapFPvPvi(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_80178EF8 *)arg0)->m83();
        }
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80178BC0
#include "types.h"

extern "C" {

void TOTrap__sub_80178BC0(void);

void TOTrap__sub_80178BC0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80178C48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20(u32, f32);
};

extern "C" {

void TOTrap__vt80(void *arg0);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK calc_attach_pos__10TObjPlayerFPv();
s32 TObjPlayer__sub_80019248();
s32 check_player_flag1__6TLobbyFPv(s32);

s32 obj_getField1c(u32);
extern const f32 TOTrap__data_805DBA38;

void TOTrap__vt80(void *arg0) {
    s32 temp_r31;

    calc_attach_pos__10TObjPlayerFPv();
    TObjPlayer__sub_80154E3C(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) < 0) {
        u32 p;
        ((V_A *)arg0)->m20(M2C_FIELD(arg0, u32 *, 0x2A8), TOTrap__data_805DBA38);
        p = M2C_FIELD(arg0, u32 *, 0x2A8);
        if (p != 0U) {
            u32 v = (u16) obj_getField1c(p);
            if (v < 0x1000U) {
                temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C(v);
                if ((TObjPlayer__sub_80019248() != 0) && (check_player_flag1__6TLobbyFPv(temp_r31) != 0)) {
                    send_code_45_1__10TObjPlayerFi(temp_r31);
                }
            }
        }
    }
    TObjPlayer__sub_801B4A18(arg0, -1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80178EB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_sounds__6TOTrapFi(s32 arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);

void play_sounds__6TOTrapFi(s32 arg0) {
    TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0x45);
    TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0x46);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80179140
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__6TOTrapFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);

extern const f32 lbl_805DBA40;
extern const f32 lbl_805DBA44;

struct TOTrapBase { char pad[0x18]; };
struct TOTrapVObj : TOTrapBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};
#pragma explicit_unused_unused_members on
void render__6TOTrapFv(u8 *arg0) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x340) = ((TOTrapVObj*)arg0)->m8(lbl_805DBA40, lbl_805DBA44);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x340) == 1) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
            } else {
                TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
            }
            TObjPlayer__sub_803D9B78();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801791EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__6TOTrapFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__6TOTrap[];

void *__dt__6TOTrapFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__6TOTrap;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801792A8
#include "types.h"

extern "C" {

void TOTrap__vt82(void);
void TOTrap__sub_801792AC(void);
void TOTrap__sub_801792B0(void);

void TOTrap__vt82(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801792AC
#include "types.h"

extern "C" {

void TOTrap__vt82(void);
void TOTrap__sub_801792AC(void);
void TOTrap__sub_801792B0(void);

void TOTrap__sub_801792AC(void) {  }
void TOTrap__sub_801792B0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80179314
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80179314 { char pad[0x18]; };
struct VObj_80179314 : Base_80179314 {
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
    virtual void m20(int, f32);
};
struct Base_80179358 { char pad[0x18]; };
struct VObj_80179358 : Base_80179358 {
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
    virtual void m20(int, f32);
};

extern "C" {

f32 check_trigger_range__6TOTrapFPvUi(struct VObj_80179314 *arg0, u32 arg1);
f32 get_scale__6TOTrapFPvUi(struct VObj_80179358 *arg0, u32 arg1);

extern f32 TOTrap__data_805DBA38;
extern f32 TOTrap__data_805DBA3C;

f32 check_trigger_range__6TOTrapFPvUi(struct VObj_80179314 *arg0, u32 arg1) {
    if (arg1 != M2C_FIELD(arg0, u32 *, 0x2A8)) {
        arg0->m20(0, TOTrap__data_805DBA38);
    }
    return TOTrap__data_805DBA3C;
}

extern f32 TOTrap__data_805DBA38;
extern f32 TOTrap__data_805DBA3C;

f32 get_scale__6TOTrapFPvUi(struct VObj_80179358 *arg0, u32 arg1) {
    if (arg1 != M2C_FIELD(arg0, u32 *, 0x2A8)) {
        arg0->m20(0, TOTrap__data_805DBA38);
    }
    return TOTrap__data_805DBA3C;
}

}
#endif
#endif
