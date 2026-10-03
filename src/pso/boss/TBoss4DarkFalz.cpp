#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
#include "pso/boss/TBoss4DarkFalz.h"
struct Stack_8004B084 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B084 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108 {
    M2C_UNK value;
    u8 remaining[0x33C];
};

struct Stack_8004B0F8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B0F8 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108 {
    M2C_UNK value;
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

extern "C" {
s32 TBoss4DarkFalz__sub_8004AF5C(u8 *arg0, s16 *arg1, s16 *arg2);
void fn_803594B4(void *, s32, f32);
extern const f32 lbl_805D8908;
extern const f32 lbl_805D8910;
void TBoss4DarkFalz__sub_8004B730(u8 *arg0, s32 arg1, f32 farg0);
extern RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108 TBoss4DarkFalz__data_80485108;
void TBoss4DarkFalz__sub_8004B084(u8 *arg0);
extern RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108 TBoss4DarkFalz__data_80485108;
void TBoss4DarkFalz__sub_8004B0F8(u8 *arg0);
void *get_player_data__10TObjPlayerFi(s32 i);
extern s32 lbl_805D586C;
s32 TBoss4DarkFalz__sub_8004AFC4(void);
void set_code_25_4__14TBoss4DarkFalzFPv(void *p);
void swap_and_send__14TBoss4DarkFalzFPv(void *p);
void TBoss4DarkFalz__sub_8004B16C(Obj_8004B16C *self, s32 arg);
void set_code_25_4__14TBoss4DarkFalzFPv(void *p);
void swap_and_send__14TBoss4DarkFalzFPv(void *p);
void TBoss4DarkFalz__sub_8004B1BC(Obj_8004B1BC *self, s32 arg);
void *get_player_data__10TObjPlayerFi(s32 i);
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
void refresh_equipment_slot__10TObjPlayerFv(void *p);
extern s32 lbl_805D586C;
void TBoss4DarkFalz__sub_8004B77C(void *self);
void *get_player_data__10TObjPlayerFi(s32 i);
s32 init_all_slots2__11TWindowCtrlFv();
s32 end_camera_pan__10TObjPlayerFPv(void *p);
s32 release_all_players_control_lock();
extern s32 lbl_805D586C;
void TBoss4DarkFalz__sub_8004BA18(void *self);
void *get_player_data__10TObjPlayerFi(s32 i);
s32 init_all_slots__11TWindowCtrlFv();
s32 start_freeze__10TObjPlayerFPv(void *p);
extern s32 lbl_805D586C;
void TBoss4DarkFalz__sub_8004BA70(void *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *get_player_data__10TObjPlayerFi(s32 i);
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
void spawn_particle_effect(void *, s32);
void play_sound_effect(s32, s32, s32, s32);
s32 TBoss4Thanks__sub_8035C96C();
extern s32 lbl_805D586C;
extern const f32 lbl_805D8928;
void TBoss4DarkFalz__sub_8004B5A0(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4DarkFalz__sub_8004AF5C(u8 *arg0, s16 *arg1, s16 *arg2);
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);
void create__10TBoss4ZakoFi(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern u8 lbl_80484D84[];
extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern s32 lbl_805D5550;
extern const f32 lbl_805D891C;
extern const f32 lbl_805D8920;
extern const f32 lbl_805D8924;
void TBoss4DarkFalz__sub_8004B3BC(u8 *arg0);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
void *get_player_data__10TObjPlayerFi(s32 i);
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
s32 calc_rate_from_field__14TBoss4DarkFalzFPv(void *arg0);
Hit_8004B7DC *get_hit_data__14TBoss4DarkFalzFPv(void *);
void save_position__14TBoss4DarkFalzFi(void *);
void TBoss4DarkFalz__sub_8004C220(void *, Vec_8004B7DC *);
void reset_cameras_to_actor(void *, s32);
void refresh_equipment_slot__10TObjPlayerFv(void *p);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern Vec_8004B7DC lbl_804371C8;
extern s32 lbl_805D586C;
extern const f32 lbl_805D892C;
void TBoss4DarkFalz__sub_8004B7DC(void *arg0);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
void *get_player_data__10TObjPlayerFi(s32 i);
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
s32 calc_rate_from_field__14TBoss4DarkFalzFPv(void *arg0);
Hit_8004B7DC *get_hit_data__14TBoss4DarkFalzFPv(void *);
void save_position__14TBoss4DarkFalzFi(void *);
void TBoss4DarkFalz__sub_8004C220(void *, Vec_8004B7DC *);
void reset_cameras_to_actor(void *, s32);
void refresh_equipment_slot__10TObjPlayerFv(void *p);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern Vec_8004B8F8 lbl_804371BC;
extern s32 lbl_805D586C;
extern const f32 lbl_805D8928;
void TBoss4DarkFalz__sub_8004B8F8(void *arg0);
}

extern "C" {

void TBoss4DarkFalz__sub_8004AFB8(void* p);
int TBoss4DarkFalz__sub_8004B07C(void);
s32 calc_rate_from_field__14TBoss4DarkFalzFPv(void *arg0);
u8 is_ending_or_split_screen__14TBoss4DarkFalzFv(void);
s32 is_timer_expired__14TBoss4DarkFalzFPv(void *arg0);
void update_visible_flag__14TBoss4DarkFalzFPv(void *arg0);
s32 TLobby__sub_800C6C10();
void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 get_main_phase();
s32 is_split_screen();

s32 TBoss4DarkFalz__sub_8004AF5C(u8 *arg0, s16 *arg1, s16 *arg2) {
    s32 temp_r6;
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x384);
    if ((temp_r6 < 1) || (temp_r6 > 0x1FE)) {
        return 0;
    }
    if (temp_r6 > 0x1FD) {
        return 0;
    }
    *arg1 = M2C_FIELD(arg0, s16 *, 0x2C) + temp_r6;
    *arg2 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x384);
    M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) + 1);
    return 1;
}

void TBoss4DarkFalz__sub_8004AFB8(void* p) { *(s32*)((char*)p + 0x384) = 1; }

s32 TBoss4DarkFalz__sub_8004AFC4(void) {
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

u8 is_ending_or_split_screen__14TBoss4DarkFalzFv(void) {
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
void TBoss4DarkFalz__sub_8004B084(u8 *arg0) {
  MemberActionStorage_8004B084 member_action;
  Stack_8004B084 stack;
  u8 *temp_r6;
  temp_r6 = (u8 *) (&TBoss4DarkFalz__data_80485108.value);
  temp_r6 = temp_r6 + ((*((s32 *) (((s8 *) arg0) + 0x37C))) * 0x34);
  member_action.words[0] = *((s32 *) (((s8 *) temp_r6) + 0x28));
  member_action.words[1] = *((s32 *) (((s8 *) temp_r6) + 0x2C));
  member_action.words[2] = *((s32 *) (((s8 *) temp_r6) + 0x30));
  if (member_action.action != 0)
  {
    (((TBoss4DarkFalz *)((void *) arg0))->*( member_action.action))();
  }
}

typedef char MemberActionStorage_8004B0F8_size[sizeof(MemberActionStorage_8004B0F8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];
void TBoss4DarkFalz__sub_8004B0F8(u8 *arg0) {
  MemberActionStorage_8004B0F8 member_action;
  Stack_8004B0F8 stack;
  u8 *temp_r6;
  temp_r6 = (u8 *) (&(*(RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108 *)&TBoss4DarkFalz__data_80485108).value);
  temp_r6 = temp_r6 + ((*((s32 *) (((s8 *) arg0) + 0x37C))) * 0x34);
  member_action.words[0] = *((s32 *) (((s8 *) temp_r6) + 0x1C));
  member_action.words[1] = *((s32 *) (((s8 *) temp_r6) + 0x20));
  member_action.words[2] = *((s32 *) (((s8 *) temp_r6) + 0x24));
  if (member_action.action != 0)
  {
    (((TBoss4DarkFalz *)((void *) arg0))->*( member_action.action))();
  }
}

void TBoss4DarkFalz__sub_8004B16C(Obj_8004B16C *self, s32 arg) {
    Msg_8004B16C msg;
    set_code_25_4__14TBoss4DarkFalzFPv(&msg);
    msg.id = self->id;
    msg.a = -1;
    msg.b = arg;
    swap_and_send__14TBoss4DarkFalzFPv(&msg);
}

void TBoss4DarkFalz__sub_8004B1BC(Obj_8004B1BC *self, s32 arg) {
    Msg_8004B1BC msg;
    set_code_25_4__14TBoss4DarkFalzFPv(&msg);
    msg.id = self->id;
    msg.a = arg;
    msg.b = -1;
    swap_and_send__14TBoss4DarkFalzFPv(&msg);
}

void update_visible_flag__14TBoss4DarkFalzFPv(void *arg0) {
    if (TLobby__sub_800C6C10() != 0) {
        M2C_FIELD(arg0, s32 *, 0x378) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
}

s32 calc_rate_from_field__14TBoss4DarkFalzFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x390);
    if (temp_r3 > 0) {
        return 0x10000 / temp_r3;
    }
    return 0;
}

s32 is_timer_expired__14TBoss4DarkFalzFPv(void *arg0) {
    s32 var_r4;

    var_r4 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x35), s32 *, 0x18);
    if ((var_r4 < 1) || (var_r4 > 0x13)) {
        var_r4 = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38C) >= (s32) (var_r4 * M2C_FIELD(arg0, s32 *, 0x390))) {
        return 1;
    }
    return 0;
}

#pragma fp_contract on
void TBoss4DarkFalz__sub_8004B3BC(u8 *arg0) {
    Params_8004B3BC p;
    f32 r;
    f32 dr;
    s32 j;
    s32 n;
    s32 ang;
    s32 step;
    s32 i;
    p.owner = (s32)arg0;
    r = lbl_805D891C;
    dr = lbl_805D8920;
    TBoss4DarkFalz__sub_8004B4F0(p.a, TBoss4DarkFalz__data_804FF1E8);
    p.c = 1;
    if (lbl_805D5550 == 3) {
        r *= lbl_805D8924;
        dr *= lbl_805D8924;
    }
    for (j = 0; j < 4; j++) {
        n = (j * 2 + 1) * 5;
        ang = 0;
        step = 0x10000 / n;
        for (i = 0; i < n; i++) {
            if (TBoss4DarkFalz__sub_8004AF5C(arg0, p.a, &p.b) == 0) {
                return;
            }
            VecCopy__FP3VecPC3Vec(&p.pos, lbl_80484D84);
            p.pos.x += r * sin_table_lookup(ang);
            p.pos.z += r * cos_table_lookup(ang);
            create__10TBoss4ZakoFi(&p);
            ang += step;
        }
        r += dr;
    }
}

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
            if (p != 0 && get_field_3e0__12TBoss3VoloptFPv(p) == 0xE) {
                VecCopy__FP3VecPC3Vec(&v, &p->pos);
                v.y += k;
                spawn_particle_effect(&v, 0x28);
            }
        }
    }
}

void TBoss4DarkFalz__sub_8004B730(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f1;
    u8 *temp_r3;
    var_f1 = farg0;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x398));
    if ((temp_r3 != NULL) && !(var_f1 <= lbl_805D8908)) {
        if (var_f1 > lbl_805D8910) {
            var_f1 = lbl_805D8910;
        }
        fn_803594B4(temp_r3, arg1, var_f1);
    }
}
void TBoss4DarkFalz__sub_8004B77C(void *self) {
    s32 i;
    void *p;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            if (get_field_3e0__12TBoss3VoloptFPv(p) == 0xE) {
                refresh_equipment_slot__10TObjPlayerFv(p);
            }
        }
    }
}

#pragma fp_contract on
void TBoss4DarkFalz__sub_8004B7DC(void *arg0) {
    Vec_8004B7DC base = lbl_804371C8;
    s32 rate;
    s32 ang;
    s32 i;
    void *p;
    rate = calc_rate_from_field__14TBoss4DarkFalzFPv(arg0);
    ang = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && get_field_3e0__12TBoss3VoloptFPv(p) == 0xE) {
            Vec_8004B7DC v = base;
            v.x += lbl_805D892C * sin_table_lookup(ang);
            v.z += lbl_805D892C * cos_table_lookup(ang);
            TBoss4DarkFalz__sub_8004C220(p, &v);
            save_position__14TBoss4DarkFalzFi(p);
            get_hit_data__14TBoss4DarkFalzFPv(p)->f4 = ang + 0x8000;
            refresh_equipment_slot__10TObjPlayerFv(p);
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
    rate = calc_rate_from_field__14TBoss4DarkFalzFPv(arg0);
    ang = rate / 2;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && get_field_3e0__12TBoss3VoloptFPv(p) == 0xE) {
            Vec_8004B8F8 v = base;
            v.x += lbl_805D8928 * sin_table_lookup(ang);
            v.z += lbl_805D8928 * cos_table_lookup(ang);
            TBoss4DarkFalz__sub_8004C220((void *)(p), (Vec_8004B7DC *)(&v));
            save_position__14TBoss4DarkFalzFi(p);
            ((Hit_8004B8F8 *)get_hit_data__14TBoss4DarkFalzFPv(p))->f4 = 0x8000;
            refresh_equipment_slot__10TObjPlayerFv(p);
            if (is_locally_controlled__10TObjPlayerFPv(p) != 0) {
                reset_cameras_to_actor(p, 0);
            }
            ang += rate;
        }
    }
}

void TBoss4DarkFalz__sub_8004BA18(void *self) {
    s32 i;
    void *p;
    init_all_slots2__11TWindowCtrlFv();
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            end_camera_pan__10TObjPlayerFPv(p);
        }
    }
    release_all_players_control_lock();
}
void TBoss4DarkFalz__sub_8004BA70(void *self) {
    s32 i;
    void *p;
    init_all_slots__11TWindowCtrlFv();
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            start_freeze__10TObjPlayerFPv(p);
        }
    }
}

}
