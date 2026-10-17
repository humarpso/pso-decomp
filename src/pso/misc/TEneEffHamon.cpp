#include "pso/TObject.h"
#include "pso/misc/TeneFakeTecThunderEff.h"
class TEneEffHamon : public TObject {
public:
    virtual ~TEneEffHamon();
    virtual void run_task();
    virtual void render();
};

#include "types.h"
#include "pso/misc/TWindowDD.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_800A38A4___vt__12TEneEffHamon {
    s32 value;
    u8 remaining[0x14];
};

typedef struct Hamon_800A36A8 {
    u8 pad0[0x1C];
    u8 mtx1C[0x34 - 0x1C];
    f32 scale;
    u8 pad38[0x40 - 0x38];
    f32 f40;
    u8 pad44[0x4C - 0x44];
    s32 delay;
    u8 color50[0x10];
} Hamon_800A36A8;

typedef struct Cam_800A3D1C { u8 pad0[8]; f32 cx; f32 cy; u8 pad10[8]; f32 sw; f32 aspect; } Cam_800A3D1C;

extern "C" {
s32 queue_destruction__7TObjectFv();
extern const f32 lbl_805D99E0;
void run_task__12TEneEffHamonFv(u8 *arg0);
void build_beam_points__12TTecZondeEffFPv(struct Obj_800A39A8 *);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_80490A18[];
s32 VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_800A38A4___vt__12TEneEffHamon __vt__12TEneEffHamon;
extern s32 TEneEffHamon__name;
extern const f32 lbl_805D99E4;
extern const f32 lbl_805D99E8;
extern const f32 lbl_805D99EC;
extern s32 tl_06;
u8 *__ct__12TEneEffHamonFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 scale_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_chunk_material_override_pair(u32, u32);
s32 set_chunk_material_color(void *);
s32 draw_chunk_object(s32);
extern u8 chunk_material_color_half_alpha_f32[];
extern u8 saved_model_draw_color[];
extern u8 model_material_color[];
extern int TEneEffHamon__fish_model;
extern int TEneEffHamon__fish_effect_param;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void render__12TEneEffHamonFv(Hamon_800A36A8 *o);
extern s32 TObjPlayer__effect_count;
void TEneEffHamon__sub_800A380C(void);
void init_fish_effects__12TEneEffHamonFv(void);
int TObjFish__sub_8001EDB0(void*, void*);
int get_bml_model(void*, void*);

void render__12TEneEffHamonFv(Hamon_800A36A8 *o) {
    f32 s;
    if (o->delay > 0) {
        return;
    }
    lbl_805D5660 = model_render_flags;
    copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, model_material_color);
    lbl_805D5664 = chunk_polygon_flags_and_mask;
    lbl_805D5668 = chunk_polygon_flags_or_mask;
    model_render_flags |= 0x810;
    set_chunk_material_override_pair(0xFFFF00FF, 0x800);
    TObjFish::set_global_param(TEneEffHamon__fish_effect_param);
    set_chunk_material_color(o->color50);
    push_matrix();
    post_translate_matrix(o->mtx1C);
    s = o->f40 * o->scale;
    scale_matrix(0, s, s, s);
    draw_chunk_object(TEneEffHamon__fish_model);
    pop_matrix();
    set_chunk_material_color(chunk_material_color_half_alpha_f32);
    chunk_polygon_flags_and_mask = lbl_805D5664;
    chunk_polygon_flags_or_mask = lbl_805D5668;
    copy_vec4__13TRaderMapCoreFPvPv(model_material_color, saved_model_draw_color);
    model_render_flags = lbl_805D5660;
}

void run_task__12TEneEffHamonFv(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x4C);
    if (temp_r4 > 0) {
        *(s32 *)((s8 *)arg0 + 0x4C) = (s32) (temp_r4 - 1);
        return;
    }
    *(f32 *)((s8 *)arg0 + 0x34) = (f32) (*(f32 *)((s8 *)arg0 + 0x34) + *(f32 *)((s8 *)arg0 + 0x44));
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) (*(f32 *)((s8 *)arg0 + 0x50) + *(f32 *)((s8 *)arg0 + 0x48));
    if (*(f32 *)((s8 *)arg0 + 0x50) <= lbl_805D99E0) {
        queue_destruction__7TObjectFv();
    }
}

void TEneEffHamon__sub_800A380C(void) {  }

    extern int player_effect_bml_resource;
void init_fish_effects__12TEneEffHamonFv(void) { TEneEffHamon__fish_model = get_bml_model((void*)(player_effect_bml_resource), (void*)3); TEneEffHamon__fish_effect_param = TObjFish__sub_8001EDB0((void*)(player_effect_bml_resource), (void*)3); }

}

TEneEffHamon::~TEneEffHamon() {}

extern "C" {

typedef char RecoveredGlobal_800A38A4___vt__12TEneEffHamon_size[sizeof(RecoveredGlobal_800A38A4___vt__12TEneEffHamon) == 0x18 ? 1 : -1];
u8 *__ct__12TEneEffHamonFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    __ct__7TObjectFP7TObject((void *)((void *) (arg0)), (void *)((int) (tl_06)));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__12TEneEffHamon.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TEneEffHamon__name;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(f32 *)((s8 *)arg0 + 0x34) = (f32) lbl_805D99E4;
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x1C), (void *) (arg1));
    *(f32 *)((s8 *)arg0 + 0x40) = farg0;
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) lbl_805D99E8;
    *(f32 *)((s8 *)arg0 + 0x54) = (f32) lbl_805D99E4;
    *(f32 *)((s8 *)arg0 + 0x58) = (f32) lbl_805D99E4;
    *(f32 *)((s8 *)arg0 + 0x5C) = (f32) lbl_805D99E4;
    *(s32 *)((s8 *)arg0 + 0x4C) = arg3;
    if (arg2 <= 0) {
        arg2 = 1;
    }
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) (lbl_805D99E4 / (f32) arg2);
    *(f32 *)((s8 *)arg0 + 0x48) = (f32) (lbl_805D99EC / (f32) arg2);
    return arg0;
}

}
