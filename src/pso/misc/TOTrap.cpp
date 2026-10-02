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

struct VBase_18_f90cfc { char pad[0x18]; };

struct VObj_18_f90cfc : VBase_18_f90cfc {
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
};

typedef s32 M2C_UNK;
struct Obj_80178CF8 {
    u8 pad[0x38];
    f32 pos[3];
    u8 pad44[0x84 - 0x44];
    s32 x84;
    u8 pad88[0x2A8 - 0x88];
    u8 *target;
    u8 pad2ac[0x326 - 0x2AC];
    s16 state;
    u8 pad328[0x334 - 0x328];
    f32 x334;
    f32 range;
    u16 idx;
};

struct Obj_80178E10 { u8 pad0[0x2A8]; u8 *target; u8 pad1[0x7A]; s16 state; u8 pad2[0xC]; f32 range; u8 pad3[4]; u16 idx; };

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
s32 is_any_teammate_in_state__10TObjPlayerFv();
void TOTrap__sub_80179028(u8 *arg0);
s32 TObjPlayer__sub_80019248(int);
s32 obj_getField1c(u32);
s32 check_player_flag1__6TLobbyFPv(s32);
s32 TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, int);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);
s32 get_player_by_client_id(u32);
extern const f32 TOTrap__data_805DBA3C;
f32 TOTrap__sub_80178F54(u8 *arg0, u32 arg1);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
void TOTrap__sub_80178DCC(u8 *arg0);
extern u32 lbl_80442CD0[];
extern s32 lbl_805D5550;
f32 TOTrap__sub_80178B78(f32 farg0);
s32 fn_80171314(void *);
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(u32);
s32 TOTrap__sub_80178BC4(void *arg0);
u16 TObjPlayer__sub_800115C4(void *, int, f32);
M2C_UNK calc_attach_pos__10TObjPlayerFPv();
s32 TObjPlayer__sub_80019248(int);
f32 horizontal_distance_squared(void *, void *);
void TObjPlayer__sub_801B5328(void *, void *, s32, int, f32);
s32 get_player_by_client_id(u32);
void TOTrap__vt79(Obj_80178CF8 *self);
M2C_UNK calc_attach_pos__10TObjPlayerFPv();
u16 TObjPlayer__sub_800115C4(void *, int, f32);
f32 horizontal_distance_squared(void *, void *);
s32 get_player_by_client_id(u32);
void TOTrap__sub_80178E10(Obj_80178E10 *arg0);
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
void TOTrap__vt80(void *arg0);
void play_sounds__6TOTrapFi(s32 arg0);
void trigger__6TOTrapFPvPvi(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
s32 get_player_by_client_id(u32);
M2C_UNK calc_attach_pos__10TObjPlayerFPv();
s32 check_player_flag1__6TLobbyFPv(s32);
s32 obj_getField1c(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);
M2C_UNK set_flag8__6TLobbyFPv(void *);

f32 TOTrap__sub_80178B78(f32 farg0) {
    u32 v[4];
    v[0] = lbl_80442CD0[0];
    v[1] = lbl_80442CD0[1];
    v[2] = lbl_80442CD0[2];
    v[3] = lbl_80442CD0[3];
    return farg0 * ((f32*)v)[lbl_805D5550];
}

void TOTrap__sub_80178BC0(void) {  }

extern const f32 TOTrap__data_805DBA38;

s32 TOTrap__sub_80178BC4(void *arg0) {
    s32 i;
    void *p;
    for (i = 0; i < 4; i++) {
        p = ((void *)get_player_by_client_id((u32)(i)));
        if (p != 0) {
            if (((s16)get_stat_by_key_state__10TObjPlayerFPv(p) == (s16)get_stat_by_key_state__10TObjPlayerFPv(arg0)) && (fn_80171314(p) != 0)) {
                return 1;
            }
        }
    }
    return 0;
}

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
                temp_r31 = get_player_by_client_id(v);
                if ((TObjPlayer__sub_80019248(temp_r31) != 0) && (check_player_flag1__6TLobbyFPv(temp_r31) != 0)) {
                    send_code_45_1__10TObjPlayerFi(temp_r31);
                }
            }
        }
    }
    submit_cursor_candidate(arg0, -1);
}

void TOTrap__vt79(Obj_80178CF8 *self) {
    u8 *pl;
    calc_attach_pos__10TObjPlayerFPv();
    self->idx = TObjPlayer__sub_800115C4(self, 0, self->x334);
    if (self->idx != 0xFFFF) {
        pl = (u8 *)get_player_by_client_id(self->idx);
        self->target = pl;
        if (self->target != 0) {
            if (horizontal_distance_squared(self->target + 0x38, self->pos) < self->range * self->range) {
                self->state = 3;
                if (TObjPlayer__sub_80019248((int)pl) != 0) {
                    ((void (*)(f32, void *, void *, s32, int))TObjPlayer__sub_801B5328)(self->range, pl, self->pos, self->x84, 0);
                }
            } else {
                self->idx = 0xFFFF;
                self->target = 0;
            }
        }
    } else {
        self->target = 0;
    }
}

void TOTrap__sub_80178DCC(u8 *arg0) {
    submit_cursor_candidate((void *)((void *) (arg0)), (M2C_UNK)((int) (-1)));
    ((VObj_18_f90cfc *)(arg0))->m77();
}

void TOTrap__sub_80178E10(Obj_80178E10 *arg0) {
    calc_attach_pos__10TObjPlayerFPv();
    arg0->idx = TObjPlayer__sub_800115C4(arg0, 0, arg0->range);
    if (arg0->idx != (u16)0xFFFF) {
        arg0->target = (u8 *)get_player_by_client_id(arg0->idx);
        if (arg0->target != 0) {
            if (horizontal_distance_squared(arg0->target + 0x38, (u8 *)arg0 + 0x38) < arg0->range * arg0->range) {
                arg0->state = 2;
            }
        } else {
            arg0->idx = 0xFFFF;
            arg0->target = 0;
        }
    } else {
        arg0->target = 0;
    }
}

void play_sounds__6TOTrapFi(s32 arg0) {
    spawn_particle_effect(arg0 + 0x2FC, 0x45);
    spawn_particle_effect(arg0 + 0x2FC, 0x46);
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

f32 TOTrap__sub_80178F54(u8 *arg0, u32 arg1) {
  s16 sp8;
  s32 temp_r3_2;
  u16 temp_r3;
  if (((((u16) (*((u16 *) (((s8 *) arg0) + 0x1C)))) >= 0x4000U) && (((u32) (*((u32 *) (((s8 *) arg0) + 0x80)))) != 0U)) && (TLobby__sub_80156A80((void *) arg0, (void *) (&sp8), (int) 1) != 0))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 4;
    sp8 = *((s16 *) (((s8 *) arg0) + 0x326));
    TLobby__sub_80156A80((void *) arg0, (void *) (&sp8), (int) 0);
    TObjPlayer__sub_80154954((void *) arg0, (void *) (&sp8));
    if (arg1 != 0U)
    {
      temp_r3 = obj_getField1c((u32)((void *) arg1));
      if (temp_r3 < 0x1000U)
      {
        temp_r3_2 = get_player_by_client_id((u32)((int) ((s32) temp_r3)));
        if (((temp_r3_2 != 0) && (TObjPlayer__sub_80019248((int)((int) temp_r3_2)) != 0)) && (check_player_flag1__6TLobbyFPv((s32)((int) ((long long) temp_r3_2))) != 0))
        {
          send_code_45_1__10TObjPlayerFi((s32)((int) temp_r3_2));
        }
      }
    }
  }
  return TOTrap__data_805DBA3C;
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
