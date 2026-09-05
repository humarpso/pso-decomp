#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80178BC0 { char pad[0x18]; };
struct V_A_80178BC0 : Base_A_80178BC0 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20(u32, f32);
};

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
    virtual M2C_UNK m77();
    virtual M2C_UNK m78();
    virtual M2C_UNK m79();
    virtual M2C_UNK m80();
    virtual s32 m81();
    virtual M2C_UNK m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual M2C_UNK m86();
};
extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
s32 is_any_teammate_in_state__10TObjPlayerFv();
void TOTrap__sub_80179028(u8 *arg0);
}

extern "C" {

struct Base_80178EF8_80178BC0 { char pad[0x18]; };
struct VObj_80178EF8_80178BC0 : Base_80178EF8_80178BC0 {
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

void TOTrap__sub_80178BC0(void);
int TOTrap__sub_80178BC4(void);
void TOTrap__vt80(void *arg0);
void play_sounds__6TOTrapFi(s32 arg0);
void trigger__6TOTrapFPvPvi(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
s32 TObjPlayer__sub_80019248();
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK calc_attach_pos__10TObjPlayerFPv();
s32 check_player_flag1__6TLobbyFPv(s32);
s32 obj_getField1c(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);
M2C_UNK set_flag8__6TLobbyFPv(void *);

void TOTrap__sub_80178BC0(void) {  }

int TOTrap__sub_80178BC4(void) { return 0; }

extern const f32 TOTrap__data_805DBA38;

void TOTrap__vt80(void *arg0) {
    s32 temp_r31;

    calc_attach_pos__10TObjPlayerFPv();
    TObjPlayer__sub_80154E3C(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) < 0) {
        u32 p;
        ((V_A_80178BC0 *)arg0)->m20(M2C_FIELD(arg0, u32 *, 0x2A8), TOTrap__data_805DBA38);
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

void play_sounds__6TOTrapFi(s32 arg0) {
    TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0x45);
    TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0x46);
}

void trigger__6TOTrapFPvPvi(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_80178EF8_80178BC0 *)arg0)->m83();
        }
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}
void TOTrap__sub_80179028(u8 *arg0) {
    s16 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((VObj_18 *)(arg0))->m86();
        return;
    }
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        ((VObj_18 *)(arg0))->m82();
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        switch (temp_r0) {
        case 0:
            if (((VObj_18 *)(arg0))->m81() != 0) {
                M2C_FIELD(arg0, s16 *, 0x326) = 1;
            }
            ((VObj_18 *)(arg0))->m77();
            return;
        case 1:
            ((VObj_18 *)(arg0))->m78();
            return;
        case 2:
            ((VObj_18 *)(arg0))->m79();
            return;
        case 3:
            ((VObj_18 *)(arg0))->m80();
            break;
        }
    }
}

}
