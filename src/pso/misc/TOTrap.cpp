#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_80087278.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TOTrap.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

struct Base_A_80178BC0 { char pad[0x18]; };
struct V_A_80178BC0 : Base_A_80178BC0 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20(u32, f32);
};

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
s32 is_locally_controlled__10TObjPlayerFPv(int);
s32 obj_getField1c(u32);
s32 get_player_by_client_id(u32);
extern const f32 TOTrap__data_805DBA3C;
s32 submit_cursor_candidate(void *, s32);
extern u32 trap_scale_factor_table[];
extern s32 game_difficulty_selection;
s32 fn_80171314(void *);
u16 find_nearest_visible_player(void *, int, f32);
s32 calc_attach_pos__13TUnk_804806E8Fv();
f32 horizontal_distance_squared(void *, void *);
void send_6x2C_impose_hold(void *, void *, s32, int, f32);
void TOTrap__vt79(Obj_80178CF8 *self);
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

f32 TOTrap::scale_by_table_value(f32 farg0) {
    u32 v[4];
    v[0] = trap_scale_factor_table[0];
    v[1] = trap_scale_factor_table[1];
    v[2] = trap_scale_factor_table[2];
    v[3] = trap_scale_factor_table[3];
    return farg0 * ((f32*)v)[game_difficulty_selection];
}

void TOTrap::vfunc_89() {  }

extern const f32 TOTrap__data_805DBA38;

s32 TOTrap::is_any_player_matching_stat() {
    s32 i;
    void *p;
    for (i = 0; i < 4; i++) {
        p = ((void *)get_player_by_client_id((u32)(i)));
        if (p != 0) {
            if (((s16)((TUnk_804B9870 *)p)->get_stat_by_key_state() == (s16)get_stat_by_key_state()) && (fn_80171314(p) != 0)) {
                return 1;
            }
        }
    }
    return 0;
}

void TOTrap::vfunc_82() {
    s32 temp_r31;

    calc_attach_pos();
    refresh_collision_body_centers();
    if ((s32) this->m_84 < 0) {
        u32 p;
        ((V_A_80178BC0 *)this)->m20(*(u32 *)&this->target, TOTrap__data_805DBA38);
        p = *(u32 *)&this->target;
        if (p != 0U) {
            u32 v = (u16) obj_getField1c(p);
            if (v < 0x1000U) {
                temp_r31 = get_player_by_client_id(v);
                if ((is_locally_controlled__10TObjPlayerFPv(temp_r31) != 0) && (((TLobby *)temp_r31)->check_player_flag1() != 0)) {
                    TObjPlayer::send_code_45_1(temp_r31);
                }
            }
        }
    }
    submit_cursor_candidate(this, -1);
}

void TOTrap__vt79(Obj_80178CF8 *self) {
    u8 *pl;
    calc_attach_pos__13TUnk_804806E8Fv();
    self->idx = find_nearest_visible_player(self, 0, self->x334);
    if (self->idx != 0xFFFF) {
        pl = (u8 *)get_player_by_client_id(self->idx);
        self->target = pl;
        if (self->target != 0) {
            if (horizontal_distance_squared(self->target + 0x38, self->pos) < self->range * self->range) {
                self->state = 3;
                if (is_locally_controlled__10TObjPlayerFPv((int)pl) != 0) {
                    ((void (*)(f32, void *, void *, s32, int))send_6x2C_impose_hold)(self->range, pl, self->pos, self->x84, 0);
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

void TOTrap::submit_cursor_and_notify() {
    u8 *arg0 = (u8 *)this;
    submit_cursor_candidate((void *)((void *) (arg0)), (s32)((int) (-1)));
    this->find_target_player();
}

void TOTrap::find_target_player() {
    Obj_80178E10 *arg0 = (Obj_80178E10 *)this;
    calc_attach_pos();
    arg0->idx = find_nearest_visible_player(arg0, 0, arg0->range);
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

void TOTrap::play_sounds() {
    s32 arg0 = (s32)this;
    spawn_particle_effect((void *)(arg0 + 0x2FC), 0x45);
    spawn_particle_effect((void *)(arg0 + 0x2FC), 0x46);
}

void TOTrap::vfunc_6(s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_80178EF8_80178BC0 *)this)->m83();
        }
        set_flag8();
        queue_destruction__7TObjectFv(this);
    }
}

f32 TOTrap::receive_physical_attack(void *arg1, f32) {
  s16 sp8;
  s32 temp_r3_2;
  u16 temp_r3;
  if (((((u16) (this->m_1c)) >= 0x4000U) && (((u32) (*((u32 *) (((s8 *) ((u8 *)this)) + 0x80)))) != 0U)) && (access_object_saved_state((void *) (&sp8), (int) 1) != 0))
  {
    this->mode = 4;
    sp8 = this->mode;
    access_object_saved_state((void *) (&sp8), (int) 0);
    send_object_state_update((void *) (&sp8));
    if (arg1 != 0U)
    {
      temp_r3 = obj_getField1c((u32)((void *) arg1));
      if (temp_r3 < 0x1000U)
      {
        temp_r3_2 = get_player_by_client_id((u32)((int) ((s32) temp_r3)));
        if (((temp_r3_2 != 0) && (is_locally_controlled__10TObjPlayerFPv((int)((int) temp_r3_2)) != 0)) && (((TLobby *)((long long) temp_r3_2))->check_player_flag1() != 0))
        {
          TObjPlayer::send_code_45_1((s32)((int) temp_r3_2));
        }
      }
    }
  }
  return TOTrap__data_805DBA3C;
}

void TOTrap::run_task() {
    s16 temp_r0;
    if (TObjPlayer::check_demo_mode() == 1) {
        this->vfunc_88();
        return;
    }
    if (TObjPlayer::is_any_teammate_in_state() == 0) {
        this->vfunc_84();
        temp_r0 = this->mode;
        switch (temp_r0) {
        case 0:
            if (this->is_any_player_matching_stat() != 0) {
                this->mode = 1;
            }
            this->find_target_player();
            return;
        case 1:
            this->submit_cursor_and_notify();
            return;
        case 2:
            this->vfunc_81();
            return;
        case 3:
            this->vfunc_82();
            break;
        }
    }
}

}
