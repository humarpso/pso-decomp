#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801695a8_80169520 { char pad[0x18]; };
struct VObj_801695a8_80169520 : Base_801695a8_80169520 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};

struct RecoveredGlobal_80169710_lbl_804B2748
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_80169710_lbl_804B2760
{
  M2C_UNK value;
  u8 remaining[0xC];
};

typedef struct TOHealGeneral_801697C0 {
    u8 pad0[0x18];
    void **vtable;
    u8 pad1C[0xEC - 0x1C];
    u32 handles[2];
} TOHealGeneral_801697C0;

typedef s32 M2C_UNK;
struct Vec_80169858 { f32 x, y, z; };

struct VBase_80169858 { char pad[0x18]; };

struct VObj_80169858 : VBase_80169858 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Heal_80169858 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void **vtable;
    u16 f1c;
    u8 pad1e[0x24 - 0x1E];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_80169858 pos;
    u8 pad44[0xC4 - 0x44];
    f32 fC4;
    u8 padC8[0xCC - 0xC8];
    s32 fCC;
    f32 fD0;
    Vec_80169858 pts[2];
    u32 handles[2];
    u16 fF4;
};

extern "C" {
void TOHealGeneral__sub_801699F8(u8 *arg0, s16 *arg1);
u8 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern RecoveredGlobal_80169710_lbl_804B2748 lbl_804B2748;
extern RecoveredGlobal_80169710_lbl_804B2760 lbl_804B2760;
extern u32 TOHealGeneral__data_805D59F0;
void load_resources__13TOHealGeneralFv(void);
void request_destroy__11TBoss4Type2FUi(u32);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_key_base__5TOKeyFPvs(void *, s16);
void __dl__7TObjectFPv(void *);
extern void *__vt__13TOHealGeneral[];
TOHealGeneral_801697C0 *__dt__13TOHealGeneralFv(TOHealGeneral_801697C0 *self, s16 flag);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 spawn_continuous_particle_effect_with_flags(void *, s32, s32);
u32 create_particle_emitter(void *, s32);
void set_owner_id__13TParticleCtrlFPvUs(u32, u16);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
void reset_photon_effect__10TObjPlayerFPv(void *);
void refresh_collision_body_centers(void *);
void init_collision_body_parts(void *, void *, s32, void *);
void init_map_object_base(void *, s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);
extern u8 lbl_804B2770[];
extern void *__vt__13TOHealGeneral[];
extern s32 lbl_805D3008;
extern u32 TOHealGeneral__data_805D59F0;
extern s32 tl_05;
extern const f32 lbl_805DB6BC;
extern const f32 lbl_805DB6C0;
extern const f32 lbl_805DB6CC;
extern const f32 lbl_805DB6D0;
void *TOHealGeneral__ct(void *arg0, void *arg1);
void play_effect_default__10TObjPlayerFii(void *, s32);
void *get_player_by_client_id(s32);
extern s32 lbl_805D53A0;
void TOHealGeneral__sub_80169A04(void *arg0, u16 arg1);
}

extern "C" {

void TOHealGeneral__sub_801699F4(void);
void TOHealGeneral__sub_80169B28(void *arg0, s32 arg1);
void TOHealGeneral__sub_80169B3C(void *arg0, s32 arg1);
void* TOHealGeneral__vt7(void* p);
void close_dialog_window__13TOHealGeneralFv(void);
void *create__13TOHealGeneralFPv(void *arg0);
void render__13TOHealGeneralFv(u8 *arg0);
void run_task__13TOHealGeneralFv(void *arg0);
s32 update_active_state__13TOHealGeneralFPv(void *arg0);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
u8 is_current_floor_switch_set(u16);
s32 is_any_player_within_radius_xz(f32);
M2C_UNK TOHangerMachine01__sub_80169168(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_model(int);
M2C_UNK find_heal_target__13TOHealGeneralFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_closing__13TOHealGeneralFPv(void *);
M2C_UNK update_opening__13TOHealGeneralFPv(void *);
M2C_UNK set_global_param__8TObjFishFi(int);

void run_task__13TOHealGeneralFv(void *arg0) {
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOHangerMachine01__sub_80169168(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        find_heal_target__13TOHealGeneralFPv(arg0);
        return;
    case 1:
        update_opening__13TOHealGeneralFPv(arg0);
        return;
    case 2:
        update_closing__13TOHealGeneralFPv(arg0);
        return;
    }
}

void render__13TOHealGeneralFv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;

    if (((VObj_801695a8_80169520 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
        draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        TObjPlayer__sub_803D9B2C();
        temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_2 + 8));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xCC)));
        draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        pop_matrix();
        TObjPlayer__sub_803D9B2C();
        temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x30));
        translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31_3, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_3, f32 *, 0xC) - M2C_FIELD(arg0, f32 *, 0xD0)), (f32) (M2C_FIELD(temp_r31_3, f32 *, 0x10)));
        rotate_matrix_y((int) (0), (int) (-M2C_FIELD(arg0, s32 *, 0xCC)));
        draw_ginja_model((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
        pop_matrix();
        pop_matrix();
    }
}

void *create__13TOHealGeneralFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOHealGeneral__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern u32 TOHealGeneral__data_805D59F0;

void close_dialog_window__13TOHealGeneralFv(void) {
    if ((u32) TOHealGeneral__data_805D59F0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOHealGeneral__data_805D59F0, 1);
        TOHealGeneral__data_805D59F0 = 0U;
    }
}

typedef struct RecoveredGlobal_80169710_lbl_804B2748 RecoveredGlobal_80169710_lbl_804B2748;
typedef struct RecoveredGlobal_80169710_lbl_804B2760 RecoveredGlobal_80169710_lbl_804B2760;
void load_resources__13TOHealGeneralFv(void) {
  s32 temp_r3;
  s32 temp_r3_2;
  s32 temp_r3_3;
  s32 var_r0;
  s32 var_r0_2;
  int new_var;
  temp_r3 = get_global_state__14TOKeyMachine01Fv();
  if (temp_r3 < 0x22)
  {
    if (temp_r3 < 0x1E)
    {
      if (temp_r3 < 0x17)
      {
        temp_r3_2++;
        temp_r3_2--;
        goto block_8;
      }
      goto block_5;
    }
    goto block_8;
  }
  if (temp_r3 < 0x24)
  {
    block_5:
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x440);
    var_r0 = temp_r3_2;
    if (var_r0 != 0)
    {
      var_r0 = (long) TLobby__sub_80020004((void *) temp_r3_2, 1, &lbl_804B2760.value, 0, 0, 0);
    }
    (*(s32 *)&TOHealGeneral__data_805D59F0) = var_r0;
    return;
  }
  block_8:
  temp_r3_3 = (new_var = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x440));
  var_r0_2 = temp_r3_3;
  if (var_r0_2 != 0)
  {
    var_r0_2 = (long) TLobby__sub_80020004((void *) temp_r3_3, 1, &lbl_804B2748.value, 0, 0, 0);
  }
  (*(s32 *)&TOHealGeneral__data_805D59F0) = var_r0_2;
}

TOHealGeneral_801697C0 *__dt__13TOHealGeneralFv(TOHealGeneral_801697C0 *self, s16 flag) {
    s32 i;
    if (self != NULL) {
        self->vtable = __vt__13TOHealGeneral;
        for (i = 0; i < 2; i++) {
            if (self->handles[i] != 0) {
                request_destroy__11TBoss4Type2FUi(self->handles[i]);
            }
        }
        TObjPlayer__sub_80154A00(self);
        TObjEneGibbles__sub_80156720(self);
        destroy_key_base__5TOKeyFPvs(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void *TOHealGeneral__ct(void *arg0, void *arg1) {
    Heal_80169858 *self = (Heal_80169858 *)arg0;
    s32 i;
    u8 *model;
    init_map_object_base(self, tl_05);
    self->vtable = __vt__13TOHealGeneral;
    self->f0 = lbl_805D3008;
    ((VObj_80169858 *)self)->m5(arg1);
    self->f34 = M2C_FIELD(M2C_FIELD(TOHealGeneral__data_805D59F0, u8 **, 0x42C), s32 *, 8);
    model = M2C_FIELD(TOHealGeneral__data_805D59F0, u8 **, 0x42C);
    self->f24 = M2C_FIELD(model, s32 *, 0xC);
    self->fC4 = lbl_805DB6CC;
    init_collision_body_parts(self, lbl_804B2770, 1, model);
    refresh_collision_body_centers(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    clear_player_status_flag__10TObjPlayerFPviUi(self, 0, 1);
    self->fCC = 0;
    self->fD0 = lbl_805DB6C0;
    for (i = 0; i < 2; i++) {
        VecCopy__FP3VecPC3Vec(&self->pts[i], &self->pos);
    }
    self->pts[0].y += lbl_805DB6D0;
    self->pts[1].y += lbl_805DB6BC;
    self->handles[0] = create_particle_emitter(&self->pts[0], 0x63);
    if (self->handles[0] != 0 && all_parents_unqueued_for_destruction__7TObjectFv(self->handles[0]) == 0) {
        self->handles[0] = 0;
    }
    self->handles[1] = spawn_continuous_particle_effect_with_flags(&self->pts[1], 0x63, 0x10);
    if (self->handles[1] != 0 && all_parents_unqueued_for_destruction__7TObjectFv(self->handles[1]) != 0) {
        set_owner_id__13TParticleCtrlFPvUs(self->handles[1], self->f1c);
    } else {
        self->handles[1] = 0;
    }
    self->fF4 = 0xFFFF;
    return self;
}

void* TOHealGeneral__vt7(void* p) { return (char*)p + 0xe0; }

void TOHealGeneral__sub_801699F4(void) {  }

extern f32 lbl_805DB6D8;

void TOHealGeneral__sub_801699F8(u8 *arg0, s16 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) *arg1;
}

void TOHealGeneral__sub_80169A04(void *arg0, u16 arg1) {
    void *p;
    if (M2C_FIELD(arg0, s32 *, 0xD8) > 0) {
        if (arg1 == lbl_805D53A0) {
            p = get_player_by_client_id(arg1);
            if (p == NULL || M2C_FIELD(arg0, s32 *, 0xAC) != 1) {
                return;
            }
            M2C_FIELD(arg0, s32 *, 0xAC) = 2;
            M2C_FIELD(arg0, u16 *, 0x94) = arg1;
            play_effect_default__10TObjPlayerFii(p, -1);
        } else {
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFF;
        }
    }
}

s32 update_active_state__13TOHealGeneralFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 1:
        if (is_any_player_within_radius_xz(lbl_805DB6D8) != 0) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
        break;
    case 2:
        if (is_current_floor_switch_set((u16) M2C_FIELD(arg0, s32 *, 0xD0)) == 1) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
        break;
    }
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

void TOHealGeneral__sub_80169B28(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xD8) = var_r4;
}

void TOHealGeneral__sub_80169B3C(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = var_r4;
}

s32 update_heal_gauge_state__13TOHealGeneralFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r0 > 0xFF) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
    }
    TOHealGeneral__sub_80169B3C((void *)((void *)(arg0)), (s32)((s32)(M2C_FIELD(arg0, s32 *, 0x88))));
    TOHealGeneral__sub_80169B28((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x8C)));
    return M2C_FIELD(arg0, s32 *, 0xD0);
}

}
