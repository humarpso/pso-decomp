#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TObjDFDemoFFPvs(void *arg0, s16 arg1);
void restore_player_cameras();
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void __dl__7TObjectFPv(void *);

typedef struct Data_80050194 Data_80050194;
typedef struct Obj_80050194 Obj_80050194;
typedef struct Obj_80050194
{
  s32 f0;
  u8 pad4[0x18 - 0x4];
  void *vt;
  u8 pad1c[0x90 - 0x1c];
  s32 f90;
  s32 f94[3];
  s32 fa0[3];
  s32 fac[3];
  f32 fb8;
} Obj_80050194;
typedef struct Data_80050194
{
  s32 f0[3];
  s32 fc[3];
  f32 f18[3];
  f32 f24[3];
  f32 f30[3];
  u8 pad3c[0x48 - 0x3C];
  u8 vt[4];
} Data_80050194;
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
int get_instance_count__9TBoss4UroFv(void);
void activate_camera_mode(s32);
void set_scripted_camera_pose(void *, void *, void *);
void cache_target_and_forward__11TCameraCtrlFii(void *, s32);
void TPhotonMagicSquare__sub_801A2640(void *, void *);
void play_sound_effect(s32, void *, s32, s32);
void queue_event_1D__12TBoss3VoloptFss(s16, s16);
extern s32 lbl_805D27A8;
extern const f32 lbl_805D8A28;
void TLobby__sub_801A1FD8();
void TObjRoomId__sub_801A1E2C();
void TParticleCtrl__sub_801A2124();
void apply_object_set_data();
void classify_actor_view_detail();
void draw_three_part_models();
void fn_800500DC();
void render_shadows__7TObjectFv();
void reset_motion_fields__10TObjPlayerFPv();
void update_object_view_visibility();

s32 lbl_80485828[3] = {0x0, 0x10, 0x11};
s32 lbl_80485834[3] = {-1, 0x26, 0x27};
void *lbl_80485840[3] = {(void *) 0xc69c4000, (void *) 0x0, (void *) 0x0};
void *lbl_8048584C[3] = {(void *) 0x0, (void *) 0x0, (void *) 0x0};
void *lbl_80485858[3] = {(void *) 0x50000, (void *) 0x0, (void *) 0x3f000000};
void *lbl_80485864[3] = {(void *) 0xc69c4000, (void *) 0x0, (void *) 0x0};
void *lbl_80485870[14] = {(void *) 0x0, (void *) 0x0, (void *) (&__dt__11TObjDFDemoFFPvs), (void *) (&fn_800500DC), (void *) (&draw_three_part_models), (void *) (&render_shadows__7TObjectFv), (void *) (&TLobby__sub_801A1FD8), (void *) (&apply_object_set_data), (void *) (&reset_motion_fields__10TObjPlayerFPv), (void *) (&TParticleCtrl__sub_801A2124), (void *) (&update_object_view_visibility), (void *) (&classify_actor_view_detail), (void *) (&TObjRoomId__sub_801A1E2C), (void *) 0x0};

void *__dt__11TObjDFDemoFFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)lbl_80485870;
        restore_player_cameras();
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma opt_propagation off
#pragma opt_common_subs off
Obj_80050194 *TObjDFDemoF__ct(Obj_80050194 *arg0, void *arg1) {
  s32 k;
  s32 *ids2;
  s32 h;
  Obj_80050194 *new_var;
  s32 i;
  TPhotonMagicSquare__sub_801A2640(arg0, arg1);
  new_var = arg0;
  new_var->vt = (void *) lbl_80485870;
  new_var->f0 = lbl_805D27A8;
  h = get_instance_count__9TBoss4UroFv();
  for (i = 0; i < 3; i++)
  {
    s32 t = lbl_80485828[i];
    ids2 = lbl_80485834;
    {
      k = t;
      arg0->f94[i] = get_bml_model(h, t);
    }
    arg0->fa0[i] = TObjFish__sub_8001EDB0(h, k);
    if (ids2[i] < 0)
    {
      arg0->fac[i] = 0;
    }
    else
    {
      arg0->fac[i] = get_bml_motion(h, ids2[i]);
    }
  }

  new_var->fb8 = lbl_805D8A28;
  activate_camera_mode(5);
  set_scripted_camera_pose(lbl_80485840, lbl_80485840, lbl_8048584C);
  cache_target_and_forward__11TCameraCtrlFii(lbl_80485858, 0x392D);
  play_sound_effect(0x3A802, 0, 0, 0);
  queue_event_1D__12TBoss3VoloptFss(0x20, 0xF);
  arg0->f90 = 0;
  return new_var;
}

}
