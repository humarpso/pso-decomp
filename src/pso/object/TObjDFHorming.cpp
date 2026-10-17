#include "types.h"
#include "pso/system/vector.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TBoss4Type3.h"
#include "pso/object/TObjDFHorming.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/enemy/TObjEnemy.h"

extern "C" {
u8 *get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
s32 TBoss4Type3__sub_8005254C(s16);
s32 rand(void);
extern s32 lbl_805D586C;
extern const f32 lbl_805D890C;
extern const f32 lbl_805D8918;
void play_sound_effect(s32, s32, s32, s32);
s32 rand();
extern const f32 lbl_805D8930;
extern const f32 lbl_805D8934;
int TBoss4DarkFalz__sub_8004C1AC(void);
s32 TBoss4DarkFalz__sub_8004C1B4(void);
s32 get_action_state__14TBoss4DarkFalzFv();
s32 get_phase__14TBoss4DarkFalzFv();
s32 get_state__14TBoss4DarkFalzFv();

u8 TObjDFHorming::is_boss_active() {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1AC() != 0U) {
        TBoss4DarkFalz__sub_8004C1AC();
        if (get_action_state__14TBoss4DarkFalzFv() != 3) {
            TBoss4DarkFalz__sub_8004C1AC();
            if (get_action_state__14TBoss4DarkFalzFv() != 2) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

u8 TBoss4DarkFalz::is_state_ready() {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1B4() != 0U) {
        TBoss4DarkFalz__sub_8004C1B4();
        if (get_phase__14TBoss4DarkFalzFv() != 3) {
            TBoss4DarkFalz__sub_8004C1B4();
            if (get_phase__14TBoss4DarkFalzFv() != 2) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

u8 TBoss4DarkFalz::is_active() {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz::get_instance() != 0U) {
        TBoss4DarkFalz::get_instance();
        if (get_state__14TBoss4DarkFalzFv() != 3) {
            TBoss4DarkFalz::get_instance();
            if (get_state__14TBoss4DarkFalzFv() != 4) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}
u16 TBoss4Type3::pick_random_target_player() {
    u16 buf[4];
    s32 n;
    s32 i;
    u8 *p;
    n = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && TBoss4Type3__sub_8005254C(obj_getField1c(p)) != 0) {
            buf[n++] = obj_getField1c(p);
            if (n >= 4) {
                break;
            }
        }
    }
    if (n == 0) {
        return 0xFFFF;
    }
    return buf[(s32)(((f32)n - lbl_805D890C) * (lbl_805D8918 * (f32)rand()))];
}

}

#include <stddef.h>
#include "pso/boss/TBoss3Volopt.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowCtrl.h"
struct Stack_8004B084 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B084 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108 {
    s32 value;
    u8 remaining[0x33C];
};

struct Stack_8004B0F8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B0F8 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108 {
    s32 value;
    u8 remaining[0x33C];
};

struct Obj_8004B16C { u8 pad[0x1C]; u16 id; };

struct Msg_8004B16C { u8 code; u8 size; u16 id; s16 a; u8 pad6[2]; s32 b; u8 padc[4]; };

struct Obj_8004B1BC { u8 pad[0x1C]; u16 id; };

struct Msg_8004B1BC { u8 code; u8 size; u16 id; s16 a; u8 pad6[2]; s32 b; u8 padc[4]; };

struct V_8004B5A0 { f32 x, y, z; };

struct P_8004B5A0 { u8 pad0[0x38]; V_8004B5A0 pos; };

typedef struct Vec_8004B3BC {
    f32 x, y, z;
} Vec_8004B3BC;

typedef struct Params_8004B3BC {
    s32 owner;
    s16 a[3];
    s16 b;
    s16 c;
    u8 pad[0x14 - 0xE];
    Vec_8004B3BC pos;
    u8 pad20[0x48 - 0x20];
} Params_8004B3BC;

typedef struct Vec_8004B7DC {
    f32 x, y, z;
} Vec_8004B7DC;

typedef struct Hit_8004B7DC {
    s32 f0;
    s32 f4;
} Hit_8004B7DC;

typedef struct Vec_8004B8F8 {
    f32 x, y, z;
} Vec_8004B8F8;

typedef struct Hit_8004B8F8 {
    s32 f0;
    s32 f4;
} Hit_8004B8F8;

struct Boss_8004B20C {
    u8 pad0[0x37C];
    s32 state;
};

typedef void (Boss_8004B20C::*Act_8004B20C)();

struct Entry_8004B20C {
    s32 f0;
    Act_8004B20C enter;
    Act_8004B20C leave;
    Act_8004B20C a;
    Act_8004B20C b;
};

struct VBase_18_8004B654 { char pad[0x18]; };
struct VObj_18_8004B654 : VBase_18_8004B654 {
#define V(n) virtual void m##n();
V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)V(70)V(71)V(72)V(73)V(74)V(75)V(76)
#undef V
    virtual s32 m77(s32 *);
};
extern "C" {
s32 is_split_screen();
s32 queue_destruction__7TObjectFv(void *);
s32 send_6x0A_enemy_state(void *, void *);
s32 get_player_by_client_id(void *);
extern s32 local_client_id;
s32 TBoss4DarkFalz__sub_8004AF5C(u8 *arg0, s16 *arg1, s16 *arg2);
void fn_803594B4(void *, s32, f32);
extern const f32 lbl_805D8908;
extern const f32 lbl_805D8910;
void TBoss4DarkFalz__sub_8004B730(u8 *arg0, s32 arg1, f32 farg0);
extern RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108 TBoss4DarkFalz__data_80485108;
void release_all_players_control_lock(void);
void *spawn_particle_effect(void *pos, s32 id);
s32 TBoss4Thanks__sub_8035C96C();
extern const f32 lbl_805D8928;
void TBoss4DarkFalz__sub_8004B5A0(void);
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);
void create__10TBoss4ZakoFl(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern u8 dark_falz_zako_ring_origin_vec[];
extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern s32 game_difficulty_selection;
extern const f32 lbl_805D891C;
extern const f32 lbl_805D8920;
extern const f32 lbl_805D8924;
s32 is_locally_controlled__10TObjPlayerFPv(void *);
Hit_8004B7DC *get_hit_data__14TBoss4DarkFalzFv(void *);
void reset_cameras_to_actor(void *, s32);
extern Vec_8004B7DC dark_falz_player_ring_center;
extern const f32 lbl_805D892C;
void TBoss4DarkFalz__sub_8004B7DC(void *arg0);
extern Vec_8004B8F8 lbl_804371BC;
void TBoss4DarkFalz__sub_8004B8F8(void *arg0);
int TBoss4DarkFalz__sub_8004B07C(void);
s32 is_local_client_floor_leader();
s32 get_main_phase();

s32 TBoss4DarkFalz__sub_8004AF5C(u8 *arg0, s16 *arg1, s16 *arg2) {
    s32 temp_r6;
    temp_r6 = *(s32 *)((s8 *)arg0 + 0x384);
    if ((temp_r6 < 1) || (temp_r6 > 0x1FE)) {
        return 0;
    }
    if (temp_r6 > 0x1FD) {
        return 0;
    }
    *arg1 = *(s16 *)((s8 *)arg0 + 0x2C) + temp_r6;
    *arg2 = *(u16 *)((s8 *)arg0 + 0x1C) + *(s32 *)((s8 *)arg0 + 0x384);
    *(s32 *)((s8 *)arg0 + 0x384) = (s32) (*(s32 *)((s8 *)arg0 + 0x384) + 1);
    return 1;
}

void TBoss4DarkFalz::sub_8004AFB8() { this->m_384 = 1; }

s32 TBoss4DarkFalz::count_active_players() {
    s32 count = 0;
    s32 i;
    for (i = 0; i < lbl_805D586C; i++) {
        if (get_player_data__10TObjPlayerFi(i) != 0) {
            count++;
        }
    }
    if (count == 0 || count > 4) {
        return 1;
    }
    return count;
}

u8 TBoss4DarkFalz::is_ending_or_split_screen() {
    int var_r31;

    var_r31 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
int TBoss4DarkFalz__sub_8004B07C(void) { return 0; }

typedef char MemberActionStorage_8004B084_size[sizeof(MemberActionStorage_8004B084) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];
void TBoss4DarkFalz::sub_8004B084() {
  MemberActionStorage_8004B084 member_action;
  Stack_8004B084 stack;
  u8 *temp_r6;
  temp_r6 = (u8 *)&TBoss4DarkFalz__data_80485108.value;
  temp_r6 = temp_r6 + ((this->m_37c) * 0x34);
  member_action.words[0] = *((s32 *) (((s8 *) temp_r6) + 0x28));
  member_action.words[1] = *((s32 *) (((s8 *) temp_r6) + 0x2C));
  member_action.words[2] = *((s32 *) (((s8 *) temp_r6) + 0x30));
  if (member_action.action != 0)
  {
    (((TBoss4DarkFalz *)this)->*( member_action.action))();
  }
}

typedef char MemberActionStorage_8004B0F8_size[sizeof(MemberActionStorage_8004B0F8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];
void TBoss4DarkFalz::sub_8004B0F8() {
  MemberActionStorage_8004B0F8 member_action;
  Stack_8004B0F8 stack;
  u8 *temp_r6;
  temp_r6 = (u8 *) (&(*(RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108 *)&TBoss4DarkFalz__data_80485108).value);
  temp_r6 = temp_r6 + ((this->m_37c) * 0x34);
  member_action.words[0] = *((s32 *) (((s8 *) temp_r6) + 0x1C));
  member_action.words[1] = *((s32 *) (((s8 *) temp_r6) + 0x20));
  member_action.words[2] = *((s32 *) (((s8 *) temp_r6) + 0x24));
  if (member_action.action != 0)
  {
    (((TBoss4DarkFalz *)this)->*( member_action.action))();
  }
}

void TBoss4DarkFalz::send_code_25_4(s32 arg) {
    Obj_8004B16C *self = (Obj_8004B16C *)this;
    Msg_8004B16C msg;
    ((TBoss4DarkFalz *)(&msg))->set_code_25_4();
    msg.id = self->id;
    msg.a = -1;
    msg.b = arg;
    ((TBoss4DarkFalz *)(&msg))->swap_and_send();
}

void TBoss4DarkFalz::send_action_packet(s32 arg) {
    Obj_8004B1BC *self = (Obj_8004B1BC *)this;
    Msg_8004B1BC msg;
    ((TBoss4DarkFalz *)(&msg))->set_code_25_4();
    msg.id = self->id;
    msg.a = arg;
    msg.b = -1;
    ((TBoss4DarkFalz *)(&msg))->swap_and_send();
}

void TBoss4DarkFalz::change_state(s32 arg1) {
    Boss_8004B20C *arg0 = (Boss_8004B20C *)this;
    if (arg1 < 0 || arg1 >= 16) {
        return;
    }
    if (arg0->state != -1) {
        u8 *t = (u8 *)&TBoss4DarkFalz__data_80485108.value;
        t = t + arg0->state * 0x34;
        Act_8004B20C f = ((Entry_8004B20C *)t)->leave;
        if (f) {
            (arg0->*f)();
        }
    }
    arg0->state = arg1;
    u8 *t2 = (u8 *)&TBoss4DarkFalz__data_80485108.value;
    t2 = t2 + arg0->state * 0x34;
    Act_8004B20C g = ((Entry_8004B20C *)t2)->enter;
    if (g) {
        (arg0->*g)();
    }
}

void TBoss4DarkFalz::update_visible_flag() {
    if (is_local_client_floor_leader() != 0) {
        this->m_378 = 0;
        return;
    }
    this->m_378 = 1;
}

s32 TBoss4DarkFalz::calc_rate_from_field() {
    s32 temp_r3;

    temp_r3 = this->m_390;
    if (temp_r3 > 0) {
        return 0x10000 / temp_r3;
    }
    return 0;
}

s32 TBoss4DarkFalz::is_timer_expired() {
    s32 var_r4;

    var_r4 = *(s32 *)((s8 *)(TLobby::dispatch_shared_handler_a(0x35)) + 0x18);
    if ((var_r4 < 1) || (var_r4 > 0x13)) {
        var_r4 = 2;
    }
    if ((s32) this->m_38c >= (s32) (var_r4 * this->m_390)) {
        return 1;
    }
    return 0;
}

#pragma fp_contract on
void TBoss4DarkFalz::spawn_zako_rings() {
    Params_8004B3BC p;
    f32 r;
    f32 dr;
    s32 j;
    s32 n;
    s32 ang;
    s32 step;
    s32 i;
    p.owner = (s32)this;
    r = lbl_805D891C;
    dr = lbl_805D8920;
    TBoss4DarkFalz__sub_8004B4F0(p.a, TBoss4DarkFalz__data_804FF1E8);
    p.c = 1;
    if (game_difficulty_selection == 3) {
        r *= lbl_805D8924;
        dr *= lbl_805D8924;
    }
    for (j = 0; j < 4; j++) {
        n = (j * 2 + 1) * 5;
        ang = 0;
        step = 0x10000 / n;
        for (i = 0; i < n; i++) {
            if (TBoss4DarkFalz__sub_8004AF5C(((u8 *)this), p.a, &p.b) == 0) {
                return;
            }
            VecCopy((Vec *)&p.pos, (const Vec *)dark_falz_zako_ring_origin_vec);
            p.pos.x += r * sin_table_lookup(ang);
            p.pos.z += r * cos_table_lookup(ang);
            create__10TBoss4ZakoFl(&p);
            ang += step;
        }
        r += dr;
    }
}

struct C12_8004B4F0 { u32 w[3]; };
struct C20_8004B4F0 { u32 w[5]; };
struct S_8004B4F0 {
  s16 a0;
  s16 a2;
  s16 a4;
  u16 a6;
  s16 a8;
  s16 aa;
  s16 ac;
  s16 ae;
  struct C12_8004B4F0 c10;
  struct C12_8004B4F0 c1c;
  struct C20_8004B4F0 c28;
  s16 a3c;
  s16 a3e;
};

#pragma push
#pragma cplusplus off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss4DarkFalz__sub_8004B4F0(void *arg0p, void *arg1p) {
#define o ((struct S_8004B4F0 *)arg0p)
#define s ((struct S_8004B4F0 *)arg1p)
  struct S_8004B4F0 *new_var;
  struct S_8004B4F0 *new_var2;
  struct C20_8004B4F0 *dc = &o->c28;
  struct C20_8004B4F0 *sc = &s->c28;
  o->a0 = s->a0;
  new_var2 = (new_var = o);
  new_var2->a2 = s->a2;
  o->a4 = s->a4;
  new_var->a6 = s->a6;
  o->a8 = s->a8;
  o->aa = s->aa;
  new_var->ac = s->ac;
  o->ae = s->ae;
  new_var->c10 = s->c10;
  o->c1c = s->c1c;
  *dc = *sc;
  new_var->a3c = s->a3c;
  o->a3e = s->a3e;
}
#undef o
#undef s
#pragma pop

void TBoss4DarkFalz__sub_8004B5A0(void) {
    V_8004B5A0 v;
    P_8004B5A0 *p;
    s32 i;
    f32 k;
    if (TBoss4Thanks__sub_8035C96C() != 0) {
        play_sound_effect(0x40033231, 0, 0, 0);
        k = lbl_805D8928;
        for (i = 0; i < lbl_805D586C; i++) {
            p = (P_8004B5A0 *)get_player_data__10TObjPlayerFi(i);
            if (p != 0 && ((TBoss3Volopt *)p)->get_field_3e0() == 0xE) {
                VecCopy((Vec *)&v, (const Vec *)&p->pos);
                v.y += k;
                spawn_particle_effect(&v, 0x28);
            }
        }
    }
}

struct V3_8004B654 { u32 w[3]; };
#pragma inline_depth(4)
#pragma dont_inline off
#pragma auto_inline on
void TBoss4DarkFalz::handle_defeat() {
    u8 *arg0 = (u8 *)this;
    struct V3_8004B654 save;
    s32 flags[3];
    s32 p;

    TBoss4DarkFalz__sub_8004B5A0();
    if (is_split_screen() != 0) {
        ((TObjEnemy *)arg0)->distribute_experience();
    } else {
        p = get_player_by_client_id((void *) ((u16) local_client_id));
        if (p != 0) {
            save = *(struct V3_8004B654 *)(arg0 + 0x2FC);
            VecCopy((Vec *)&this->m_2fc, (const Vec *)(p + 0x2FC));
            ((TObjEnemy *)arg0)->distribute_experience();
            VecCopy((Vec *)&this->m_2fc, (const Vec *)&save);
        }
    }
    flags[0] = 0x800;
    send_6x0A_enemy_state(arg0, flags);
    ((TObjEnemy *)arg0)->exchange_object_state((s32)flags, (s16)0);
    ((VObj_18_8004B654 *)(arg0))->m77(flags);
    ((TObjEnemy *)arg0)->send_entity_set_flags();
    queue_destruction__7TObjectFv(arg0);
}

void TBoss4DarkFalz__sub_8004B730(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f1;
    u8 *temp_r3;
    var_f1 = farg0;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x398));
    if ((temp_r3 != NULL) && !(var_f1 <= lbl_805D8908)) {
        if (var_f1 > lbl_805D8910) {
            var_f1 = lbl_805D8910;
        }
        fn_803594B4(temp_r3, arg1, var_f1);
    }
}
void TBoss4DarkFalz::refresh_player_equipment(void *self) {
    s32 i;
    void *p;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            if (((TBoss3Volopt *)p)->get_field_3e0() == 0xE) {
                ((TObjPlayer *)p)->refresh_equipment_slot();
            }
        }
    }
}

#pragma fp_contract on
void TBoss4DarkFalz__sub_8004B7DC(void *arg0) {
    Vec_8004B7DC base = dark_falz_player_ring_center;
    s32 rate;
    s32 ang;
    s32 i;
    void *p;
    rate = ((TBoss4DarkFalz *)arg0)->calc_rate_from_field();
    ang = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && ((TBoss3Volopt *)p)->get_field_3e0() == 0xE) {
            Vec_8004B7DC v = base;
            v.x += lbl_805D892C * sin_table_lookup(ang);
            v.z += lbl_805D892C * cos_table_lookup(ang);
            ((TBoss4DarkFalz *)p)->set_position_from(&v);
            ((TBoss4DarkFalz *)p)->save_position();
            get_hit_data__14TBoss4DarkFalzFv(p)->f4 = ang + 0x8000;
            ((TObjPlayer *)p)->refresh_equipment_slot();
            if (is_locally_controlled__10TObjPlayerFPv(p) != 0) {
                reset_cameras_to_actor(p, 0);
            }
            ang += rate;
        }
    }
}

#pragma fp_contract on
void TBoss4DarkFalz__sub_8004B8F8(void *arg0) {
    Vec_8004B8F8 base = lbl_804371BC;
    s32 rate;
    s32 ang;
    s32 i;
    void *p;
    rate = ((TBoss4DarkFalz *)arg0)->calc_rate_from_field();
    ang = rate / 2;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && ((TBoss3Volopt *)p)->get_field_3e0() == 0xE) {
            Vec_8004B8F8 v = base;
            v.x += lbl_805D8928 * sin_table_lookup(ang);
            v.z += lbl_805D8928 * cos_table_lookup(ang);
            ((TBoss4DarkFalz *)p)->set_position_from((Vec_8004B7DC *)(&v));
            ((TBoss4DarkFalz *)p)->save_position();
            ((Hit_8004B8F8 *)get_hit_data__14TBoss4DarkFalzFv(p))->f4 = 0x8000;
            ((TObjPlayer *)p)->refresh_equipment_slot();
            if (is_locally_controlled__10TObjPlayerFPv(p) != 0) {
                reset_cameras_to_actor(p, 0);
            }
            ang += rate;
        }
    }
}

void TBoss4DarkFalz::end_player_camera_pans(void *self) {
    s32 i;
    void *p;
    TWindowCtrl::init_all_slots2();
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            ((TObjPlayer *)p)->end_camera_pan();
        }
    }
    release_all_players_control_lock();
}
void TBoss4DarkFalz::freeze_all_players(void *self) {
    s32 i;
    void *p;
    TWindowCtrl::init_all_slots();
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            ((TObjPlayer *)p)->start_freeze();
        }
    }
}
#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void TBoss4DarkFalz::update_roar_sound_timer() {
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = this->m_37c;
    if (temp_r0 >= 9 || temp_r0 < 4) {
        return;
    }
    {
        temp_r0_2 = this->m_374 - 1;
        this->m_374 = temp_r0_2;
        if (temp_r0_2 < 0) {
            if ((lbl_805D8918 * (f32) rand()) < lbl_805D8930) {
                play_sound_effect(0x3A300, 0, 0, 0);
            } else {
                play_sound_effect(0x3A801, 0, 0, 0);
            }
            {
                f32 r = lbl_805D8918 * (f32) rand();
                this->m_374 = (s32) ((lbl_805D8934 * r) + lbl_805D8934);
            }
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on

#pragma pop

}
