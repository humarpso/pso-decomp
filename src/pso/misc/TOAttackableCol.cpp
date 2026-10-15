#include "types.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80157AD8_lbl_804AF9A8 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80157AD8___vt__15TOAttackableCol {
    s32 value;
    u8 remaining[0x138];
};

struct Msg_801575AC {
    u16 cmd;
    u16 room;
    s32 id;
    s32 type;
    u16 state;
    s16 f0E;
    s16 f10;
    s8 flag;
    s8 player;
};

struct Obj_801575AC {
    u8 pad0[0x1C];
    u16 room;
    u8 pad1E[0x80 - 0x1E];
    u8 *parent;
    u8 pad84[0x326 - 0x84];
    s16 id;
    u8 pad328[0x33C - 0x328];
    s32 f33C;
    s32 f340;
    s32 f344;
    s32 f348;
};

extern "C" {
void *__nw__7TObjectFUl(int);
int TOAttackableCol__vt24(void);
int TOAttackableCol__vt25(void);
int TOAttackableCol__vt18(void);
int TOAttackableCol__vt19(void);
f32 TOAttackableCol__vt20(void* p, s32 _w1);
f32 TOAttackableCol__vt21(void* p, s32 _w1);
f32 TOAttackableCol__vt22(void* p, s32 _w1);
void init__17TOBarrierEnergy01FPv(void *);
void *fn_80157CA8(void *arg0);
s32 check_demo_mode__10TObjPlayerFv();
void TOAttackableCol__sub_80157310(void * = 0);
void release__15TOAttackableColFPv(void* p);
void check_door_trigger__15TOAttackableColFPv(void *arg0);
void run_task__15TOAttackableColFv(u8 *arg0);
void check_door_trigger__15TOAttackableColFPv(void *arg0);
void release__15TOAttackableColFPv(void* p);
void release__15TOAttackableColFPv(void* p);
void check_door_trigger__15TOAttackableColFPv(void *arg0);
extern s32 __vt__11TOVS2Wall01[];
void run_task__15TOAttackableColFv(u8 *arg0);
s32 access_object_saved_state(void *, void *, int);
int handle_6x91_update_state__15TOAttackableColFPv(void* p);
void TOAttackableCol__vt4(u8 *arg0, s16 *arg1, s32 arg2);
u8 is_current_floor_switch_set(int);
void *__nw__7TObjectFUl(int);
s32 set_parent__7TObjectFP7TObject(int, int);
volatile int is_locally_controlled__10TObjPlayerFPv(void *);
u16 obj_getField1c(void *);
s32 spawn_particle_effect(void *, int);
u32 __ct__12TQuestThreadFv(int, void *, int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern u32 quest_mission_manager;
extern u32 quest_area_manager;
extern s32 tl_00;
extern const f32 lbl_805DB2C8;
f32 apply_hit__15TOAttackableColFPvi(u8 *arg0, s32 arg1);
s32 construct_actor_base__10TObjPlayerFPvPv(void *, int);
s32 calc_attach_pos__10TObjPlayerFPv(void *);
s32 obj_setFlags30(void *, int);
s32 set_indexed_flags(void *, s32, s32);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
void init_params__15TOAttackableColFPv(void *arg0);
extern RecoveredGlobal_80157AD8_lbl_804AF9A8 TOAttackableCol__collision_parts;
extern s32 __vt__15TOAttackableCol[];
extern s32 lbl_805D2E98;
extern s32 tl_05;
extern const f32 lbl_805DB2CC;
extern const f32 lbl_805DB2D0;
u8 *TOAttackableCol__ct(u8 *arg0, s32 arg1);
s8 get_current_floor();
s32 access_object_saved_state(void *, void *, int);
void broadcast_state__15TOAttackableColFPv(void* p);
void *fn_80157CA8(void *arg0);
int send_state_change__15TOAttackableColFPvUs(void *arg0, u16 state);
}

extern "C" {

void TOAttackableCol__sub_80157C20(void* p, s32 v);
s32 TOAttackableCol__sub_80157C28(void* p);
void TOAttackableCol__vt23(void);
void *__dt__15TOAttackableColFv(void *arg0, s16 arg1);
void broadcast_state__15TOAttackableColFPv(void* p);
void bswap_state__15TOAttackableColFPv(void* p);
void check_door_trigger__15TOAttackableColFPv(void *arg0);
int handle_6x91_update_state__15TOAttackableColFPv(void* p);
void init_params__15TOAttackableColFPv(void *arg0);
void release__15TOAttackableColFPv(void* p);
void render__15TOAttackableColFv(void);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_80156BA8(void*);
void TOBarrierEnergy01__vt18(void);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);
int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, int, int);
s32 destroy_motion_object__10TObjPlayerFPvs(void *, s32);
int queue_destruction__7TObjectFv(void*);
int set_flag8__6TLobbyFPv(void*);
s32 set_indexed_flags(void *, s32, s32);

void TOAttackableCol__sub_80157310(void * _w0) {  }

extern const f32 lbl_805DB2C8;

void init_params__15TOAttackableColFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    *(s32 *)((s8 *)arg0 + 0x33C) = (s32) (*(s32 *)((s8 *)arg0 + 0x84) + 1);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x33C);
    if (temp_r0 < 1) {
        *(s32 *)((s8 *)arg0 + 0x33C) = 1;
    } else if (temp_r0 > 0x100) {
        *(s32 *)((s8 *)arg0 + 0x33C) = 0x100;
    }
    *(s32 *)((s8 *)arg0 + 0x340) = (s32) *(s32 *)((s8 *)arg0 + 0x88);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x340) < 0) {
        *(s32 *)((s8 *)arg0 + 0x340) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x344) = (s32) *(s32 *)((s8 *)arg0 + 0x8C);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x344) < 0) {
        *(s32 *)((s8 *)arg0 + 0x344) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x34C) = (s32) *(f32 *)((s8 *)arg0 + 0x68);
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x34C);
    if ((temp_r0_2 < 0) || (temp_r0_2 >= 0x100)) {
        *(s32 *)((s8 *)arg0 + 0x34C) = -1;
    }
    if (*(f32 *)((s8 *)arg0 + 0x6C) < lbl_805DB2C8) {
        set_indexed_flags(arg0, 0, 0x08000000);
    } else {
        clear_player_status_flag__10TObjPlayerFPviUi((void*)(arg0), (int)(0), (int)(0x08000000));
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x344) == 0) {
        *(s32 *)((s8 *)arg0 + 0x348) = (s32) *(f32 *)((s8 *)arg0 + 0x70);
        temp_r0_3 = *(s32 *)((s8 *)arg0 + 0x348);
        if ((temp_r0_3 < 0) || (temp_r0_3 >= 0x100)) {
            *(s32 *)((s8 *)arg0 + 0x348) = -1;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0x348) = -1;
    }
}

int send_state_change__15TOAttackableColFPvUs(void *arg0, u16 state) {
    Obj_801575AC *self = (Obj_801575AC *)arg0;
    Msg_801575AC msg;
    s16 id;
    u8 *parent;
    id = self->id;
    access_object_saved_state(self, &id, 0);
    parent = self->parent;
    if (parent != NULL) {
        fn_80157CA8(&msg);
        msg.room = self->room;
        msg.id = id;
        msg.type = *(s16 *)(parent + 4);
        msg.state = state;
        msg.f0E = self->f33C;
        if (self->f344 == 0 && self->f348 >= 0 && state == 1) {
            msg.f10 = self->f348;
            msg.flag = 1;
        } else {
            msg.flag = 0;
            msg.f10 = 0;
        }
        msg.player = get_current_floor();
        broadcast_state__15TOAttackableColFPv((void*)(&msg));
    }
}

void TOAttackableCol__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    s16 sp8;
    s32 temp_r0;
    if (arg1 != NULL) {
        *(s16 *)((s8 *)arg0 + 0x326) = (s16) *arg1;
    }
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    if (temp_r0 != 1) {
        if ((temp_r0 >= 1) || (temp_r0 < 0)) {
            *(s16 *)((s8 *)arg0 + 0x326) = 0;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0x33C) = 0;
        if (arg2 != 0) {
            handle_6x91_update_state__15TOAttackableColFPv((void*)((void *) (arg0)));
        }
    }
    sp8 = *(s16 *)((s8 *)arg0 + 0x326);
    access_object_saved_state((void *) (arg0), (void *) (&sp8), (int) (0));
}

int handle_6x91_update_state__15TOAttackableColFPv(void* p) { return clear_player_status_flag__10TObjPlayerFPviUi((void*)(p), (int)(0), (int)(1)); }

f32 apply_hit__15TOAttackableColFPvi(u8 *arg0, s32 arg1) {
  s32 temp_r0;
  s32 temp_r0_2;
  s32 var_r30;
  u32 temp_r3;
  u32 temp_r3_2;
  u32 var_r0;
  u32 var_r0_2;
  var_r30 = 0;
  if (((arg1 != 0) && (obj_getField1c((void *) arg1) < 4U)) && (is_locally_controlled__10TObjPlayerFPv((void *) arg1) != 0))
  {
    var_r30 = 1;
  }
  if (var_r30 != 0)
  {
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x34C));
    if (((temp_r0 >= 0) && (temp_r0 < 0x100)) && (is_current_floor_switch_set((int) ((u16) temp_r0)) == 0))
    {
      return lbl_805DB2C8;
    }
    *((s32 *) (((s8 *) arg0) + 0x33C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x33C))) - 1);
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x33C)))) <= 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x33C)) = 0;
      send_state_change__15TOAttackableColFPvUs((void *)((void *)((void *) arg0)), (u16)((s32)((int) 1)));
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x344)))) > 0)
      {
        temp_r0_2 = *((s32 *) (((s8 *) arg0) + 0x340));
        if ((((temp_r0_2 >= 0x64) && (temp_r0_2 < 0x3E8)) && (((u32) quest_mission_manager) != 0U)) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) quest_mission_manager) != 0))
        {
          temp_r3 = ((u32)__nw__7TObjectFUl((int) 0x194));
          var_r0 = temp_r3;
          if (var_r0 != 0U)
          {
            var_r0 = __ct__12TQuestThreadFv((int) temp_r3, (void *) quest_mission_manager, (int) (*((s32 *) (((s8 *) arg0) + 0x344))));
          }
          if (var_r0 != 0U)
          {
            set_parent__7TObjectFP7TObject((int) var_r0, (int) tl_00);
          }
        }
        else
          if ((((u32) quest_area_manager) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) quest_area_manager) != 0))
        {
          temp_r3_2 = ((u32)__nw__7TObjectFUl((int) 0x194));
          var_r0_2 = temp_r3_2;
          if (var_r0_2 != 0U)
          {
            var_r0_2 = __ct__12TQuestThreadFv((int) temp_r3_2, (void *) quest_area_manager, (int) (*((s32 *) (((s8 *) arg0) + 0x344))));
          }
          if (var_r0_2 != 0U)
          {
            set_parent__7TObjectFP7TObject((int) var_r0_2, (int) tl_00);
          }
        }
      }
    }
    else
    {
      send_state_change__15TOAttackableColFPvUs((void *)((void *)((void *) arg0)), (u16)((s32)((int) 0)));
    }
    goto block_26;
  }
  block_26:
  spawn_particle_effect((void *) (arg0 + 0x38), (int) 0x1D0);
  spawn_particle_effect((void *) (arg0 + 0x38), (int) 1);
  return lbl_805DB2C8;
}

void release__15TOAttackableColFPv(void* p) { set_flag8__6TLobbyFPv(p); queue_destruction__7TObjectFv(p); }
void check_door_trigger__15TOAttackableColFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x34C);
    if (((temp_r0 < 0) || (temp_r0 >= 0x100) || (is_current_floor_switch_set((u16) temp_r0) == 1)) && ((submit_cursor_candidate(arg0, -1), (((s32) *(s32 *)((s8 *)arg0 + 0x33C) > 0) == 0)) || (((s32) *(s32 *)((s8 *)arg0 + 0x344) == 0) && (temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x348), ((temp_r0_2 < 0) == 0)) && (temp_r0_2 < 0x100) && (is_current_floor_switch_set((u16) temp_r0_2) == 1)))) {
        *(s32 *)((s8 *)arg0 + 0x33C) = 0;
        send_state_change__15TOAttackableColFPvUs((void *)((void *)(arg0)), (u16)((s32)(1)));
    }
}

void run_task__15TOAttackableColFv(u8 *arg0) {
    s16 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOAttackableCol__sub_80157310((void *)((void *) (arg0)));
        return;
    }
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    default:
        *(s16 *)((s8 *)arg0 + 0x326) = 0;
    case 0:
        check_door_trigger__15TOAttackableColFPv((void *)((void*)((void *) (arg0))));
        return;
    case 1:
        release__15TOAttackableColFPv((void*)((void *) (arg0)));
        return;
    }
}

void render__15TOAttackableColFv(void) {  }

extern s32 __vt__15TOAttackableCol[];

void * create__15TOAttackableColFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x350);
    if (o != NULL) {
        o = TOAttackableCol__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

void *__dt__15TOAttackableColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TOAttackableCol;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80157AD8_lbl_804AF9A8_size[sizeof(RecoveredGlobal_80157AD8_lbl_804AF9A8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80157AD8___vt__15TOAttackableCol_size[sizeof(RecoveredGlobal_80157AD8___vt__15TOAttackableCol) == 0x13C ? 1 : -1];
u8 *TOAttackableCol__ct(u8 *arg0, s32 arg1) {
    construct_actor_base__10TObjPlayerFPvPv((void *) (arg0), (int) (tl_05));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80157AD8___vt__15TOAttackableCol *)&__vt__15TOAttackableCol).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2E98;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    calc_attach_pos__10TObjPlayerFPv((void *) (arg0));
    obj_setFlags30((void *) (arg0), (int) (0x60000000));
    init_collision_body_parts((void *) (arg0), (void *) (&TOAttackableCol__collision_parts.value), (int) (1));
    set_indexed_flags((void *)((void *) (arg0)), (s32)((int) (0)), (s32)((int) (0x718)));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(f32 *)((s8 *)arg0 + 0x334) = (f32) lbl_805DB2CC;
    *(f32 *)((s8 *)arg0 + 0x338) = (f32) lbl_805DB2D0;
    init_params__15TOAttackableColFPv((void *) (arg0));
    return arg0;
}

int TOAttackableCol__vt24(void) { return 1; }

int TOAttackableCol__vt25(void) { return 1; }

int TOAttackableCol__vt18(void) { return 1; }

int TOAttackableCol__vt19(void) { return 1; }

f32 TOAttackableCol__vt20(void* p, s32 _w1) { return apply_hit__15TOAttackableColFPvi((u8 *)(p), (s32)(_w1)); }

f32 TOAttackableCol__vt21(void* p, s32 _w1) { return apply_hit__15TOAttackableColFPvi((u8 *)(p), (s32)(_w1)); }

f32 TOAttackableCol__vt22(void* p, s32 _w1) { return apply_hit__15TOAttackableColFPvi((u8 *)(p), (s32)(_w1)); }

void TOAttackableCol__vt23(void) {  }

void TOAttackableCol__sub_80157C20(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 TOAttackableCol__sub_80157C28(void* p) { return *(s32*)((char*)p + 0x33c); }
void bswap_state__15TOAttackableColFPv(void* p) { bswap_header__6TLobbyFi(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap_16__FPUs((char*)p + 0x10); }
void broadcast_state__15TOAttackableColFPv(void* p) { bswap_state__15TOAttackableColFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void *fn_80157CA8(void *arg0) {
    init__17TOBarrierEnergy01FPv(arg0);
    *(u16 *)((s8 *)arg0 + 0xC) = 0;
    *(u16 *)((s8 *)arg0 + 0xE) = 0;
    *(u8 *)((s8 *)arg0 + 0x0) = 145;
    *(u8 *)((s8 *)arg0 + 0x1) = 5;
    return arg0;
}

}
