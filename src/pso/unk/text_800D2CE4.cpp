#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Ene_800D2E8C {
    u8 pad0[0x38C];
    s32 count;
    u8 pad390[0x3A8 - 0x390];
    s32 f3A8;
} Ene_800D2E8C;

typedef struct Ene_800D2F6C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x38 - 0x28];
    f32 pos[3];
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0x2FC - 0xBA];
    f32 v2FC[3];
    u8 pad308[0x33C - 0x308];
    s16 timer;
    u8 pad33E[0x37C - 0x33E];
    s32 state;
} Ene_800D2F6C;

struct VBase_14_fddec9 { char pad[0x14]; };

struct VObj_14_fddec9 : VBase_14_fddec9 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual s32 m8();
};

struct VBase_18_ca64a0 { char pad[0x18]; };

struct VObj_18_ca64a0 : VBase_18_ca64a0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
};

struct Elem_800D35D8 { u8 pad[0x1C]; };

struct Obj_800D35D8 { u8 pad[0x3D0]; VObj_14_fddec9 light; u8 pad2[0x3EC - 0x3D0 - sizeof(VObj_14_fddec9)]; Elem_800D35D8 arr[2]; };

struct Vec_800D35D8 { s32 x, y, z; };

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjPlayer__sub_800D306C(u8 *arg0);
s32 obj_clearFlags30(void *, int);
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
s32 fn_800D2900(void *);
s32 fn_800D2A68(void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjPlayer__sub_800D31EC(u8 *arg0);
s32 update_state__15TObjEnemyCustomFPv(void *);
s32 TObjPlayer__sub_800D1E4C(void *);
s32 update__19TObjGyaranzoMissileFPv(void *);
s32 TObjPlayer__sub_800D2CE4(void *);
s32 TObjPlayer__sub_800D30A8(void *);
s32 TObjPlayer__sub_800D3314(void *);
void TObjPlayer__sub_800D39EC(u8 *arg0);
extern s16 lbl_80494250[];
extern u32 *lbl_80500ED0[];
extern u32 *lbl_805D5200;
extern u32 *lbl_805D5204;
void TObjPlayer__sub_800D2E8C(Ene_800D2E8C *arg0);
void queue_destruction__7TObjectFv(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, void *, s32, void *, s32);
void create_dead_spot__10TObjPlayerFiif(void *, s32, f32);
void trigger_dell_biter_events__10TObjPlayerFPv(void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 advance_animation_playback(void *);
void send_entity_set_flags__6TLobbyFPv(void *);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
extern u8 lbl_8049426C[];
extern s32 lbl_805D5208;
extern const f32 lbl_805DA27C;
void TObjPlayer__sub_800D2F6C(Ene_800D2F6C *arg0);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
void TObjPlayer__sub_800D2E8C(Ene_800D2E8C *arg0);
M2C_UNK fn_800D7AD0(int);
s32 updateFromCamera__15RenderFadeStateFPCf(int, void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);
extern Vec_800D35D8 lbl_8043C26C;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA284;
extern const f32 lbl_805DA288;
extern const f32 lbl_805DA28C;
void TObjPlayer__sub_800D35D8(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800D35D4(void);

void TObjPlayer__sub_800D2E8C(Ene_800D2E8C *arg0) {
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        *lbl_80500ED0[lbl_80494250[i]] |= 8;
    }
    for (; i < 13; i++) {
        *lbl_80500ED0[lbl_80494250[i]] &= ~8;
    }
    if (arg0->f3A8 >= 1) {
        *lbl_805D5200 |= 8;
        *lbl_805D5204 |= 8;
    } else {
        *lbl_805D5200 &= ~8;
        *lbl_805D5204 &= ~8;
    }
}

void TObjPlayer__sub_800D2F6C(Ene_800D2F6C *arg0) {
    switch (arg0->state) {
    case 0:
        arg0->fB8 = 4;
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        arg0->timer = 0x5A;
        create_dead_spot__10TObjPlayerFiif(arg0->v2FC, 0x5A, lbl_805DA27C);
        create_dead_spot__10TObjPlayerFiif(arg0->v2FC, 0x5A, lbl_805DA27C);
        arg0->state = 1;
    case 1:
        advance_animation_playback(arg0);
        arg0->timer--;
        if (arg0->timer < 0) {
            create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D5208, lbl_8049426C, arg0->f24, arg0->v2FC, arg0->f60);
            send_entity_set_flags__6TLobbyFPv(arg0);
            trigger_dell_biter_events__10TObjPlayerFPv(arg0->v2FC);
            TBoss3Volopt__sub_8022675C((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD10), arg0->pos, 0, 0);
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    case -1:
        return;
    }
}

void TObjPlayer__sub_800D306C(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

void TObjPlayer__sub_800D31EC(u8 *arg0) {
  s32 temp_r0;
  unsigned long var_r3;
  if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != 4)
  {
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3B8)))) <= 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x3B8)) = 0x3C;
      fn_800D2A68((void *) arg0);
    }
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x3A8));
    var_r3 = 0;
    switch (temp_r0)
    {
      case 0:
        var_r3 = (*((s16 *) (((s8 *) arg0) + 0x32C))) <= (((s16) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) / 3);
        break;
      case 1:
        var_r3 = (*((s16 *) (((s8 *) arg0) + 0x32C))) <= (((s16) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) / 4);
        break;
    }
    if (((s32) var_r3) != 0)
    {
      fn_800D2900((void *) arg0);
    }
    *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
    TBoss3Volopt__sub_8022675C((void *) copy_target_state__14TObjEnePanarmsFPvPv((void *) arg0, (int) 0x4003AD0F), (void *) (arg0 + 0x38), (int) 0, (int) 0);
    if (!((*((s32 *) (((s8 *) arg0) + 0x388))) & 0x40000))
    {
      set_state__15TObjEneMe1GiGueFPvi((void *)((void *) arg0), (s32)((int) 4));
      *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x388))) | 1);
      return;
    }
    obj_clearFlags30((void *) arg0, (int) 0x200200);
  }
}

void TObjPlayer__sub_800D35D4(void) {  }

#pragma push
#pragma opt_common_subs off
struct Ene_800D2E8C;
void TObjPlayer__sub_800D35D8(u8 *arg0) {
    s32 temp_r3;
    s32 var_r30;
    s32 var_r29;
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        var_r30 = 0;
        if (is_split_screen() != 0) {
            var_r30 = get_camera_mode__11TCameraCtrlFv();
        }
        var_r29 = 1;
        temp_r3 = ((VObj_18_ca64a0 *)(arg0))->m9(lbl_805DA284, lbl_805DA288, lbl_805DA28C);
        if (temp_r3 != 0) {
            lbl_805D5660 = some_id_805c6f74;
            var_r30 = (s32)&((Obj_800D35D8 *)arg0)->arr[var_r30];
            fn_800D7AD0(var_r30);
            if (updateFromCamera__15RenderFadeStateFPCf(var_r30, (void *) (arg0 + 0x2FC)) != 0) {
                ((VObj_14_fddec9 *)(var_r30))->m6();
                if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
                    some_id_805c6f74 = lbl_805D5660;
                    return;
                }
            }
            TObjPlayer__sub_800D2E8C((Ene_800D2E8C *) (arg0));
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjLight__sub_80134194((void *) (arg0));
            toggle_particle_effect__10TObjPlayerFv();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
            } else if (M2C_FIELD(arg0, s32 *, 0x388) & 4) {
                if (((Obj_800D35D8 *)arg0)->light.m8() != 0) {
                    ((Obj_800D35D8 *)arg0)->light.m6();
                    if (temp_r3 == 1) {
                        draw__16TObjEneRe7BeruraFPv((void *) (arg0));
                    } else {
                        render_world_model__10TObjPlayerFPv((void *) (arg0));
                    }
                    ((Obj_800D35D8 *)arg0)->light.m7();
                } else {
                    var_r29 = 0;
                }
            } else if (temp_r3 == 1) {
                draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            } else {
                render_world_model__10TObjPlayerFPv((void *) (arg0));
            }
            pop_matrix();
            TObjLight__sub_80134098();
            end_effect_render__13TParticleCtrlFv();
            if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && (var_r29 != 0)) {
                Vec_800D35D8 sp8 = lbl_8043C26C;
                render_with_position_override__10TObjPlayerFPvPvi((void *) (arg0), (void *) (&sp8), 0);
            }
            ((VObj_14_fddec9 *)(var_r30))->m7();
        }
    }
}
#pragma pop

void TObjPlayer__sub_800D39EC(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        update_state__15TObjEnemyCustomFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_800D3314((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_800D2CE4((void *) arg0);
        return;
      case 4:
        TObjPlayer__sub_800D30A8((void *) arg0);
        return;
      case 5:
        TObjPlayer__sub_800D2F6C((Ene_800D2F6C *)((void *) arg0));
        return;
      case 7:
        update__19TObjGyaranzoMissileFPv((void *) arg0);
        return;
      case 9:
        TObjPlayer__sub_800D3314((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_800D1E4C((void *) arg0);
        break;
    }
  }
}

}
