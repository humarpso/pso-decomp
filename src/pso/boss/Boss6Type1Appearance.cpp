#include "types.h"

struct Ent_8033CB4C
{
  s32 a;
  s32 b;
  s32 c;
};

struct Fish_8033CB4C
{
  s32 x0;
  u8 pad4[0x18 - 4];
  const s32 *vt;
  Ent_8033CB4C tbl[2];
  f32 x34;
  s32 x38;
  s32 x3C;
  u8 x40[0x54 - 0x40];
  u8 x54[0x60 - 0x54];
  s32 x60;
  s32 x64;
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 request_destroy__11TBoss4Type2FUi(void *);
u32 create_particle_emitter(int, int);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
s32 copy_pos__11TNowLoadingFPvPv(int, int);
s32 play_sound_effect(int, int, int, int);
s32 queue_event_1D__12TBoss3VoloptFss(int, int);
s32 scroll_strips_uv__14TBoss6PlotFalzFPvii(void *, int, int);
s32 get_phase__8TObjFishFPv(int);
extern const f32 lbl_805DFA48;
extern const f32 lbl_805DFA4C;
void run_task__25TBoss6Demo10_TYPE1_APPEARFv(u8 *arg0);
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
int activate_camera_mode(int);
int set_scripted_camera_pose(void *, void *, void *);
int cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 TObjFish__sub_800E3124(void *, void *);
int __ct__7TObjectFP7TObject(void *, void *);
int build_tables__14TBoss6PlotFalzFPvPvi(void *, void *, int);
s32 get_fish_count__8TObjFishFv();
extern s32 lbl_80477DEC[];
extern s32 boss6_type1_appear_node_desc[];
extern s32 boss6_type1_appear_model_node_descriptors[];
extern s32 lbl_80477E30[];
extern s32 lbl_80477E3C[];
extern s32 lbl_804DF614[];
extern s32 boss6_type1_appear_motion_indices[];
extern const s32 __vt__25TBoss6Demo10_TYPE1_APPEAR[];
struct AppearanceClassTag { const char *value; u32 padding; };
__declspec(section ".sdata") extern AppearanceClassTag TBoss6Demo10_TYPE1_APPEAR__name;
struct AppearanceZero { f32 value; u32 padding; };
__declspec(section ".sdata2") extern const AppearanceZero lbl_805DFA50;
Fish_8033CB4C *TBoss6Demo10_TYPE1_APPEAR__ct(Fish_8033CB4C *self, void *parent);
}

extern "C" {

u8 *__dt__25TBoss6Demo10_TYPE1_APPEARFv(u8 *arg0, s16 arg1);
void render__25TBoss6Demo10_TYPE1_APPEARFv(void* p);
void TBoss6Demo10_TYPE1_APPEAR__draw_models(void *arg0);
void *TBoss6Demo10_TYPE1_APPEAR__create(void *arg0);
s32 free_buffer_pairs__14TBoss6PlotFalzFPv(void *);
s32 refresh_players_equipment__14TBoss6PlotFalzFPv();
s32 restore_player_cameras();
s32 post_translate_matrix(s32 *);
s32 draw_model_motion(s32, s32, f32);
s32 set_draw_callback_list__8TObjFishFPv(s32);
s32 push_matrix();
s32 pop_matrix();
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 clear_global_state__10TObjPlayerFv();
s32 clear_render_callback__8TObjFishFv(s32);
s32 init_state_1__8TObjFishFPv(void *);
s32 request_destroy__11TBoss4Type2FUi(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 set_global_param__8TObjFishFi(s32);

extern s32 lbl_80477DEC[];

void TBoss6Demo10_TYPE1_APPEAR__draw_models(void *arg0) {
    push_matrix();
    set_global_flag__10TObjPlayerFv();
    post_translate_matrix(lbl_80477DEC);
    set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x20));
    draw_model_motion(*(s32 *)((s8 *)arg0 + 0x1C), *(s32 *)((s8 *)arg0 + 0x24), *(f32 *)((s8 *)arg0 + 0x34));
    set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x2C));
    set_draw_callback_list__8TObjFishFPv(*(s32 *)((s8 *)arg0 + 0x60));
    draw_model_motion(*(s32 *)((s8 *)arg0 + 0x28), *(s32 *)((s8 *)arg0 + 0x30), *(f32 *)((s8 *)arg0 + 0x34));
    clear_render_callback__8TObjFishFv(*(s32 *)((s8 *)arg0 + 0x60));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
}

void render__25TBoss6Demo10_TYPE1_APPEARFv(void* p) { TBoss6Demo10_TYPE1_APPEAR__draw_models((void *)((void *)(p))); }

extern const s32 __vt__25TBoss6Demo10_TYPE1_APPEAR[];

#pragma push
#pragma opt_common_subs off
void run_task__25TBoss6Demo10_TYPE1_APPEARFv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    u8 *temp_r30;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x34) + lbl_805DFA48;
    *(f32 *)((s8 *)arg0 + 0x34) = temp_f1;
    if (temp_f1 > lbl_805DFA4C) {
        *(f32 *)((s8 *)arg0 + 0x34) = (f32) lbl_805DFA4C;
    }
    scroll_strips_uv__14TBoss6PlotFalzFPvii((void *) (arg0 + 0x40), (int) (8), (int) (0));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x38) == 0x78) {
        play_sound_effect((int) (0x4003A105), (int) (0), (int) (0), (int) (0));
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x38);
    switch (temp_r0) {
    case 0x1B8:
    case 0xFA:
        play_sound_effect((int) (0x4003A811), (int) (0), (int) (0), (int) (0));
        break;
    case 0x154:
        play_sound_effect((int) (0x40031222), (int) (0), (int) (0), (int) (0));
        break;
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x38);
    switch (temp_r0_2) {
    case 0x14:
    case 0xC6:
    case 0xFA:
    case 0x13F:
    case 0x1B8:
        queue_event_1D__12TBoss3VoloptFss((int) (0xC0), (int) (0xF));
        break;
    }
    temp_r0_3 = *(s32 *)((s8 *)arg0 + 0x38);
    temp_r30 = arg0 + 0x54;
    switch (temp_r0_3) {
    case 0x1:
        *(u32 *)((s8 *)arg0 + 0x64) = create_particle_emitter((int) (temp_r30), (int) (0x210));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            set_flags__11TBoss4Type2FPvUi((int) (*(u32 *)((s8 *)arg0 + 0x64)), (int) (0x40));
        }
        break;
    case 0x1AC:
    case 0x8E:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            request_destroy__11TBoss4Type2FUi(*(void **)((s8 *)arg0 + 0x64));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        *(u32 *)((s8 *)arg0 + 0x64) = create_particle_emitter((int) (temp_r30), (int) (0x211));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            set_flags__11TBoss4Type2FPvUi((int) (*(u32 *)((s8 *)arg0 + 0x64)), (int) (0x40));
        }
        break;
    case 0x11D:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            request_destroy__11TBoss4Type2FUi(*(void **)((s8 *)arg0 + 0x64));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        *(u32 *)((s8 *)arg0 + 0x64) = create_particle_emitter((int) (temp_r30), (int) (0x210));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            set_flags__11TBoss4Type2FPvUi((int) (*(u32 *)((s8 *)arg0 + 0x64)), (int) (0x40));
        }
        break;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
        copy_pos__11TNowLoadingFPvPv((int) (*(u32 *)((s8 *)arg0 + 0x64)), (int) (temp_r30));
    }
    *(s32 *)((s8 *)arg0 + 0x38) = (s32) (*(s32 *)((s8 *)arg0 + 0x38) + 1);
    if (((s32) *(s32 *)((s8 *)arg0 + 0x38) >= 0x1F4) || (get_phase__8TObjFishFPv((int) (*(s32 *)((s8 *)arg0 + 0x3C))) != 1)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

u8 *__dt__25TBoss6Demo10_TYPE1_APPEARFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32*)&__vt__25TBoss6Demo10_TYPE1_APPEAR;
        restore_player_cameras();
        refresh_players_equipment__14TBoss6PlotFalzFPv();
        free_buffer_pairs__14TBoss6PlotFalzFPv(arg0 + 0x40);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != 0U) {
            init_state_1__8TObjFishFPv(*(void **)((s8 *)arg0 + 0x60));
            *(u32 *)((s8 *)arg0 + 0x60) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            request_destroy__11TBoss4Type2FUi(*(void **)((s8 *)arg0 + 0x64));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
typedef struct Ent_8033CB4C Ent_8033CB4C;
typedef struct Fish_8033CB4C Fish_8033CB4C;
Fish_8033CB4C *TBoss6Demo10_TYPE1_APPEAR__ct(Fish_8033CB4C *self, void *parent) {
  s32 k;
  s32 n;
  s32 i;
  __ct__7TObjectFP7TObject(self, parent);
  self->vt = __vt__25TBoss6Demo10_TYPE1_APPEAR;
  self->x0 = (s32)TBoss6Demo10_TYPE1_APPEAR__name.value;
  self->x3C = (s32) parent;
  n = get_fish_count__8TObjFishFv();
  for (i = 0; i < 2; i++)
  {
    k = lbl_804DF614[i];
    k = k & 0xFFFFFFFFu;
    self->tbl[i].a = get_bml_model(n, k);
    self->tbl[i].b = TObjFish__sub_8001EDB0(n, k);
    self->tbl[i].c = get_bml_motion(n, boss6_type1_appear_motion_indices[i]);
  }
  self->x60 = TObjFish__sub_800E3124(boss6_type1_appear_node_desc, self->x54);
  self->x64 = 0;
  build_tables__14TBoss6PlotFalzFPvPvi(self->x40, boss6_type1_appear_model_node_descriptors, 2);
  activate_camera_mode(5);
  set_scripted_camera_pose(lbl_80477DEC, lbl_80477DEC, lbl_80477E30);
  cache_target_and_forward__11TCameraCtrlFii(lbl_80477E3C, 0x416C);
  self->x34 = lbl_805DFA50.value;
  self->x38 = 0;
  return self;
}
#pragma pop

void *TBoss6Demo10_TYPE1_APPEAR__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TBoss6Demo10_TYPE1_APPEAR__ct((Fish_8033CB4C *)(o), (void *)(arg0));
    }
    return o;
}

}

extern "C" {
extern const char TBoss6Demo10_TYPE1_APPEAR__class_name[];
__declspec(section ".rodata") const char TBoss6Demo10_TYPE1_APPEAR__class_name[] ATTRIBUTE_ALIGN(4) = "TBoss6Demo10_TYPE1_APPEAR";
__declspec(section ".rodata") s32 lbl_80477DEC[] = {0x00000000, 0x41C80000, 0x42960000};
__declspec(section ".rodata") s32 boss6_type1_appear_node_desc[] = {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000};
__declspec(section ".rodata") s32 boss6_type1_appear_model_node_descriptors[] = {0x00000003, 0x00000001, 0x00000000, 0x00000006, 0x00000001, 0x00000000};
__declspec(section ".rodata") s32 lbl_80477E30[] = {0x00000000, 0x00000000, 0x00000000};
__declspec(section ".rodata") s32 lbl_80477E3C[] = {0x01020000, 0x00000000, 0x3F333333};
s32 boss6_type1_appear_motion_indices[] = {35, 36};
void render_shadows__7TObjectFv();
__declspec(section ".data") const s32 __vt__25TBoss6Demo10_TYPE1_APPEAR[] = {
    0, 0, (s32)__dt__25TBoss6Demo10_TYPE1_APPEARFv,
    (s32)run_task__25TBoss6Demo10_TYPE1_APPEARFv,
    (s32)render__25TBoss6Demo10_TYPE1_APPEARFv, (s32)render_shadows__7TObjectFv
};
__declspec(section ".sdata") AppearanceClassTag TBoss6Demo10_TYPE1_APPEAR__name = {TBoss6Demo10_TYPE1_APPEAR__class_name, 0};
__declspec(section ".sdata2") const f32 lbl_805DFA48 = 0.7f;
__declspec(section ".sdata2") const f32 lbl_805DFA4C = 349.0f;
__declspec(section ".sdata2") const AppearanceZero lbl_805DFA50 = {0.0f, 0};
}
