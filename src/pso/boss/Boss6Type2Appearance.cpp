#include "types.h"
struct RecoveredGlobal_8033DCA8_lbl_80477F2C { s32 value; u8 remaining[8]; };
struct RecoveredGlobal_8033DCA8_lbl_804EFA08 { s32 value; u8 remaining[8]; };
extern "C" {
extern const RecoveredGlobal_8033DCA8_lbl_80477F2C boss6_type2_appear_origin;
extern RecoveredGlobal_8033DCA8_lbl_804EFA08 boss6_type2_appear_offset_particle_origin;
}

#include "types.h"
typedef struct Ent_8033D6DC { s32 start; s32 end; s32 id; s32 src; } Ent_8033D6DC;

extern "C" {
const char TBoss6Demo20_TYPE2_APPEAR__class_name[] = "TBoss6Demo20_TYPE2_APPEAR";
const RecoveredGlobal_8033DCA8_lbl_80477F2C boss6_type2_appear_origin = {(s32)0xC61C4000, {0}};
const u8 boss6_type2_appear_model_node_descriptors[144] = {0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Ent_8033D6DC boss6_type2_appear_particle_schedule[9] = {
    {42, 142, 554, -1},
    {135, 385, 552, -1},
    {148, 200, 557, 1},
    {185, 228, 557, 2},
    {185, 228, 557, 6},
    {214, 257, 557, 3},
    {214, 257, 557, 7},
    {294, 357, 556, 0},
    {100, 157, 377, -2}
};
const u8 lbl_80478058[12] = {0xC6, 0x1C, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const u8 lbl_80478064[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const u8 boss6_type2_appear_camera_script[12] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x33};
}
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK set_fade_material_color__14TBoss6PlotFalzFf(f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805DFA70;
extern const f32 lbl_805DFA74;
extern const f32 lbl_805DFA78;
void draw_fading_model_1_pair__25TBoss6Demo20_TYPE2_APPEARFv(void *arg0);
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK set_fade_material_color__14TBoss6PlotFalzFf(f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();

extern const f32 lbl_805DFA70;
extern const f32 lbl_805DFA74;
extern const f32 lbl_805DFA7C;
void draw_fading_model_pair__25TBoss6Demo20_TYPE2_APPEARFv(void *arg0);
}

extern "C" {

void draw_model_12__25TBoss6Demo20_TYPE2_APPEARFv(void *arg0);
void render__25TBoss6Demo20_TYPE2_APPEARFv(void* p);
void draw_fading_model_4__25TBoss6Demo20_TYPE2_APPEARFv(void *arg0);
M2C_UNK set_fade_material_color__14TBoss6PlotFalzFf(f32);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_draw_callback_list__8TObjFishFPv(s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

void draw_model_12__25TBoss6Demo20_TYPE2_APPEARFv(void *arg0) {
    push_matrix();
    set_global_flag__10TObjPlayerFv();
    post_translate_matrix((void *)&boss6_type2_appear_origin);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xD8));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xDC), M2C_FIELD(arg0, f32 *, 0xE0));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
}

extern const f64 lbl_80478080[];
extern const f32 lbl_805DFA70;
extern const f32 lbl_805DFA74;
extern const f32 lbl_805DFA7C;

void draw_fading_model_1_pair__25TBoss6Demo20_TYPE2_APPEARFv(void *arg0) {
    f32 var_f31;
    union { f64 d; u32 w[2]; } cvt;
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 < 0x181) {
        var_f31 = lbl_805DFA70;
    } else if (temp_r3 >= 0x190) {
        var_f31 = lbl_805DFA74;
    } else {
        var_f31 = (f32) (temp_r3 - 0x181) / lbl_805DFA78;
    }
    if (lbl_805DFA70 != var_f31) {
        if (var_f31 < lbl_805DFA74) {
            set_fade_material_color__14TBoss6PlotFalzFf(var_f31);
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xCC));
        set_global_flag__10TObjPlayerFv();
        push_matrix();
        post_translate_matrix((M2C_UNK *)((u8 *)arg0 + 0x4C));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE4));
        pop_matrix();
        push_matrix();
        post_translate_matrix((M2C_UNK *)((u8 *)arg0 + 0x58));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE4));
        pop_matrix();
        clear_global_state__10TObjPlayerFv();
        if (var_f31 < lbl_805DFA74) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void draw_fading_model_4__25TBoss6Demo20_TYPE2_APPEARFv(void *arg0) {
    f32 var_f31;
    s32 temp_r3;
    union { f64 d; u32 w[2]; } cvt;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 < 0x72) {
        var_f31 = lbl_805DFA70;
    } else if (temp_r3 >= 0x8E) {
        var_f31 = lbl_805DFA74;
    } else {
        var_f31 = (f32)(temp_r3 - 0x72) / lbl_805DFA7C;
    }
    if ((lbl_805DFA70 != var_f31) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U)) {
        if (var_f31 < lbl_805DFA74) {
            set_fade_material_color__14TBoss6PlotFalzFf(var_f31);
        }
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        post_translate_matrix((void *)&boss6_type2_appear_origin);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC0));
        set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, u32 *, 0x7C));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xC4), M2C_FIELD(arg0, f32 *, 0xE0));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, u32 *, 0x7C));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        if (var_f31 < lbl_805DFA74) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void draw_fading_model_pair__25TBoss6Demo20_TYPE2_APPEARFv(void *arg0) {
    f32 var_f31;
    s32 temp_r0;
    s32 var_r31;
    u8 *temp_r30;
    s32 var_r29;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r0 < 0x72) {
        var_f31 = lbl_805DFA74;
    } else if (temp_r0 >= 0x8E) {
        var_f31 = lbl_805DFA70;
    } else {
        var_f31 = (f32) (0x8E - temp_r0) / lbl_805DFA7C;
    }
    if (lbl_805DFA70 != var_f31) {
        if (var_f31 < lbl_805DFA74) {
            set_fade_material_color__14TBoss6PlotFalzFf(var_f31);
        }
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        post_translate_matrix((void *)&boss6_type2_appear_origin);
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r30 = (u8 *)arg0 + var_r31;
            set_global_param__8TObjFishFi(M2C_FIELD(temp_r30, s32 *, 0xA8));
            draw_model_motion(M2C_FIELD(temp_r30, s32 *, 0xA4), M2C_FIELD(temp_r30, s32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xE0));
            var_r29 += 1;
            var_r31 += 0xC;
        } while (var_r29 < 2);
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        if (var_f31 < lbl_805DFA74) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void render__25TBoss6Demo20_TYPE2_APPEARFv(void* p) { draw_model_12__25TBoss6Demo20_TYPE2_APPEARFv((void *)(p)); draw_fading_model_4__25TBoss6Demo20_TYPE2_APPEARFv((void *)(p)); draw_fading_model_pair__25TBoss6Demo20_TYPE2_APPEARFv((void *)(p)); draw_fading_model_1_pair__25TBoss6Demo20_TYPE2_APPEARFv((void *)(p)); }

}

#include "types.h"
struct O_8033D9E4 { u8 pad[0x18]; void *f18; u8 pad2[0x7C - 0x1C]; void *f7c; void *h[9]; };

typedef struct Vec_8033D6DC { f32 x, y, z; } Vec_8033D6DC;

typedef struct O_8033D6DC {
    u8 pad0[0x1C];
    Vec_8033D6DC pos[3];
    u8 obj40[0x30];
    u8 obj70[0x10];
    void *h[9];
    u8 padA4[0xE0 - 0xA4];
    f32 fE0;
    f32 fE4;
    s32 frame;
    s32 fEC;
} O_8033D6DC;

extern "C" {
s32 request_destroy__11TBoss4Type2FUi(void *);
s32 init_state_1__8TObjFishFPv(void *);
s32 __dt__7TObjectFv(void *, int);
s32 __dl__7TObjectFPv(void *);
s32 restore_player_cameras();
s32 refresh_players_equipment__14TBoss6PlotFalzFPv();
extern M2C_UNK __vt__25TBoss6Demo20_TYPE2_APPEAR[];
O_8033D9E4 *__dt__25TBoss6Demo20_TYPE2_APPEARFv(O_8033D9E4 *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);
s32 request_destroy__11TBoss4Type2FUi(void *);
void spawn_particle_effect_with_flags(void *, int, int);
void *create_particle_emitter(void *, s32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void play_persistent_sound(int, void *, int, int, int);
void play_sound_effect(int, void *, int, int);
void queue_event_1D__12TBoss3VoloptFss(int, int);
s32 get_phase__8TObjFishFPv(s32);

extern const Ent_8033D6DC boss6_type2_appear_particle_schedule[];

void run_task__25TBoss6Demo20_TYPE2_APPEARFv(O_8033D6DC *self);
}

extern "C" {

void run_task__25TBoss6Demo20_TYPE2_APPEARFv(O_8033D6DC *self) {
    s32 i;
    if ((self->fE0 += 0.7f) > 284.0f) {
        self->fE0 = 284.0f;
    }
    self->fE4 += 0.8f;
    if (self->fE4 >= 30.0f) {
        self->fE4 -= 30.0f;
    }
    switch (self->frame) {
    case 0xE:
        play_sound_effect(0x40039E28, 0, 0, 0);
        break;
    case 0x72:
        play_sound_effect(0x4003A129, 0, 0, 0);
        break;
    case 0xEE:
        play_sound_effect(0x4003972A, 0, 0, 0);
        break;
    case 0x11D:
        play_sound_effect(0x40031C2B, 0, 0, 0);
        break;
    }
    play_persistent_sound(0x4003C627, self, 0, 0, 0);
    switch (self->frame) {
    case 0xB9:
        spawn_particle_effect_with_flags(self->obj40, 0x220, 0x40);
        spawn_particle_effect_with_flags(self->obj70, 0x220, 0x40);
        break;
    case 0xED:
        spawn_particle_effect_with_flags((void *)&boss6_type2_appear_origin, 0x221, 0x40);
        spawn_particle_effect_with_flags((void *)&boss6_type2_appear_origin, 0x225, 0x40);
        break;
    }
    for (i = 0; i < 9; i++) {
        const Ent_8033D6DC *e = &boss6_type2_appear_particle_schedule[i];
        if (self->frame >= e->start && self->frame < e->end) {
            void *p = (void *)&boss6_type2_appear_origin;
            if (e->src == -2) {
                p = &boss6_type2_appear_offset_particle_origin;
            } else if (e->src >= 0) {
                p = &self->pos[e->src];
            }
            if (self->h[i] == NULL) {
                self->h[i] = create_particle_emitter(p, e->id);
                if (self->h[i] != NULL) {
                    set_flags__11TBoss4Type2FPvUi(self->h[i], 0x40);
                }
            } else {
                copy_pos__11TNowLoadingFPvPv(self->h[i], p);
            }
        } else if (self->h[i] != NULL) {
            request_destroy__11TBoss4Type2FUi(self->h[i]);
            self->h[i] = NULL;
        }
    }
    switch (self->frame) {
    case 5:
    case 0x32:
    case 0x78:
    case 0x8C:
    case 0xEB:
    case 0x122:
    case 0x136:
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
        break;
    }
    self->frame++;
    if (self->frame >= 0x197 || get_phase__8TObjFishFPv(self->fEC) != 5) {
        queue_destruction__7TObjectFv(self);
    }
}

O_8033D9E4 *__dt__25TBoss6Demo20_TYPE2_APPEARFv(O_8033D9E4 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != 0) {
        arg0->f18 = __vt__25TBoss6Demo20_TYPE2_APPEAR;
        for (i = 0; i < 9; i++) {
            if (arg0->h[i] != 0) {
                request_destroy__11TBoss4Type2FUi(arg0->h[i]);
                arg0->h[i] = 0;
            }
        }
        restore_player_cameras();
        refresh_players_equipment__14TBoss6PlotFalzFPv();
        if (arg0->f7c != 0) {
            init_state_1__8TObjFishFPv(arg0->f7c);
            arg0->f7c = 0;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {

extern const f32 lbl_805DFA90;
void initialize_boss6_type2_appear_particle_origin(void);
s32 get_bml_motion(int, int);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
void activate_camera_mode(int);
void set_scripted_camera_pose(void *, void *, void *);
void cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 TObjFish__sub_800E3124(void *, void *);
void __ct__7TObjectFP7TObject(void *);
s32 get_fish_count__8TObjFishFv(void);
extern const u8 boss6_type2_appear_model_node_descriptors[];
extern const u8 lbl_80478058[];
extern const u8 lbl_80478064[];
extern const u8 boss6_type2_appear_camera_script[];
extern s32 lbl_804DF614[];
__declspec(section ".data") extern s32 boss6_type2_appear_motion_indices[];
extern M2C_UNK __vt__25TBoss6Demo20_TYPE2_APPEAR[];
struct AppearanceClassTag { const char *value; u32 padding; };
__declspec(section ".sdata") extern AppearanceClassTag TBoss6Demo20_TYPE2_APPEAR__name;
extern const f32 lbl_805DFA70;
u8 *TBoss6Demo20_TYPE2_APPEAR__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *__nw__7TObjectFUl(int);

#pragma push
#pragma opt_lifetimes off
#pragma pool_data off
#pragma opt_loop_invariants off
#pragma opt_common_subs off
#pragma opt_propagation off
typedef struct { s32 a, b, c; } Trip_8033DA94;
typedef struct {
    u8 pad[0x80];
    s32 arr[9];
    Trip_8033DA94 t[5];
} Fish_8033DA94;
u8 *TBoss6Demo20_TYPE2_APPEAR__ct(u8 *arg0, s32 arg1) {
    Fish_8033DA94 *self = (Fish_8033DA94 *)arg0;
    s32 v;
    s32 count;
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TBoss6Demo20_TYPE2_APPEAR;
    M2C_FIELD(arg0, s32 *, 0) = (s32)TBoss6Demo20_TYPE2_APPEAR__name.value;
    M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
    count = get_fish_count__8TObjFishFv();
    for (i = 0; i < 2; i++) {
        {
            s32 t = lbl_804DF614[i];
            v = t;
            self->t[i].a = get_bml_model(count, t);
        }
        self->t[i].b = TObjFish__sub_8001EDB0(count, v);
        self->t[i].c = get_bml_motion(count, boss6_type2_appear_motion_indices[i]);
    }
    M2C_FIELD(arg0, s32 *, 0xBC) = get_bml_model(count, 4);
    M2C_FIELD(arg0, s32 *, 0xC0) = TObjFish__sub_8001EDB0(count, 4);
    M2C_FIELD(arg0, s32 *, 0xC4) = get_bml_motion(count, 0x20);
    M2C_FIELD(arg0, s32 *, 0xC8) = get_bml_model(count, 1);
    M2C_FIELD(arg0, s32 *, 0xCC) = TObjFish__sub_8001EDB0(count, 1);
    M2C_FIELD(arg0, s32 *, 0xD0) = get_bml_motion(count, 0x36);
    M2C_FIELD(arg0, s32 *, 0xD4) = get_bml_model(count, 0xC);
    M2C_FIELD(arg0, s32 *, 0xD8) = TObjFish__sub_8001EDB0(count, 0xC);
    M2C_FIELD(arg0, s32 *, 0xDC) = get_bml_motion(count, 0x22);
    M2C_FIELD(arg0, s32 *, 0x7C) = TObjFish__sub_800E3124((void *)boss6_type2_appear_model_node_descriptors, arg0 + 0x1C);
    for (i = 0; i < 9; i++) {
        self->arr[i] = 0;
    }
    activate_camera_mode(5);
    set_scripted_camera_pose((void *)lbl_80478058, (void *)lbl_80478058, (void *)lbl_80478064);
    cache_target_and_forward__11TCameraCtrlFii((void *)boss6_type2_appear_camera_script, 0x416C);
    M2C_FIELD(arg0, f32 *, 0xE0) = lbl_805DFA70;
    M2C_FIELD(arg0, f32 *, 0xE4) = lbl_805DFA70;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    return arg0;
}
#pragma pop

void *create_boss6_type2_appearance(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TBoss6Demo20_TYPE2_APPEAR__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

typedef char RecoveredGlobal_8033DCA8_lbl_80477F2C_size[sizeof(RecoveredGlobal_8033DCA8_lbl_80477F2C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8033DCA8_lbl_804EFA08_size[sizeof(RecoveredGlobal_8033DCA8_lbl_804EFA08) == 0xC ? 1 : -1];
void initialize_boss6_type2_appear_particle_origin(void) {
    M2C_FIELD(&boss6_type2_appear_offset_particle_origin.value, f32 *, 0) = (f32) M2C_FIELD(&boss6_type2_appear_origin.value, f32 *, 0);
    M2C_FIELD(&boss6_type2_appear_offset_particle_origin.value, f32 *, 4) = (f32) (lbl_805DFA90 + M2C_FIELD(&boss6_type2_appear_origin.value, f32 *, 4));
    M2C_FIELD(&boss6_type2_appear_offset_particle_origin.value, f32 *, 8) = (f32) M2C_FIELD(&boss6_type2_appear_origin.value, f32 *, 8);
}
__declspec(section ".ctors") static void *const __sinit_text_8033DA94_cpp_ref = (void *)initialize_boss6_type2_appear_particle_origin;

}
extern "C" {
__declspec(section ".data") RecoveredGlobal_8033DCA8_lbl_804EFA08 boss6_type2_appear_offset_particle_origin = {0, {0}};
__declspec(section ".data") s32 boss6_type2_appear_motion_indices[2] = {31, 33};
void render_shadows__7TObjectFv(void *);
M2C_UNK __vt__25TBoss6Demo20_TYPE2_APPEAR[7] = {0, 0,
    (M2C_UNK)__dt__25TBoss6Demo20_TYPE2_APPEARFv,
    (M2C_UNK)run_task__25TBoss6Demo20_TYPE2_APPEARFv, (M2C_UNK)render__25TBoss6Demo20_TYPE2_APPEARFv,
    (M2C_UNK)render_shadows__7TObjectFv, 0};
__declspec(section ".sdata") AppearanceClassTag TBoss6Demo20_TYPE2_APPEAR__name = {TBoss6Demo20_TYPE2_APPEAR__class_name, 0};
}
