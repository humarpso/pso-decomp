#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Range_8033CDF8 { s32 lo; s32 hi; s32 idx; };

struct Vec_8033CDF8 { f32 x, y, z; };

struct Fish_8033CDF8 { u8 pad[0x4C]; Vec_8033CDF8 vecs[3]; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
void request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
void *create_particle_emitter(void *, int);
M2C_UNK set_flags__11TBoss4Type2FPvUi(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK play_persistent_sound(int, void *, int, int, int);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(int, int);
s32 get_phase__8TObjFishFPv(int);
extern Range_8033CDF8 lbl_80477ED8[];
void TObjFish__sub_8033CDF8(u8 *arg0);
int clear_render_callback__8TObjFishFv(void);
void set_draw_callback_list__8TObjFishFPv(void *);
void reset_fish_globals__8TObjFishFv(void);
void set_fade_material_color__14TBoss6PlotFalzFf(f32);
s32 push_matrix(void);
s32 pop_matrix(void);
f32 post_translate_matrix(void);
s32 set_global_param__8TObjFishFi(s32);
void draw_model_motion(s32, s32, f32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
extern const f32 lbl_805DFA58;
extern const f32 lbl_805DFA5C;
extern const f32 lbl_805DFA60;
void TObjFish__sub_8033CCC8(u8 *arg0);
}

extern "C" {

void TObjFish__sub_8033CDD8(void* p);
void * create__14TBoss6PlotFalzFPvPv(void *arg0, void *arg1);
void *destroy__8TObjFishFPvs(void *arg0, s16 arg1);
void restore_player_cameras();
void *TObjFish__sub_8033D1AC(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void init_state_1__8TObjFishFPv(void *);
void request_destroy__11TBoss4Type2FUi(void *);

void TObjFish__sub_8033CCC8(u8 *arg0) {
    f32 var_f31;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_r0 < 0xBF) {
        var_f31 = lbl_805DFA58;
    } else if (temp_r0 >= 0xCC) {
        var_f31 = lbl_805DFA5C;
    } else {
        var_f31 = (f32) (0xCC - temp_r0) / lbl_805DFA60;
    }
    if (lbl_805DFA5C != var_f31) {
        if (var_f31 < lbl_805DFA58) {
            set_fade_material_color__14TBoss6PlotFalzFf(var_f31);
        }
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        ((f32 (*)(void *))post_translate_matrix)(arg0 + 0x1C);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x2C));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x40));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x38));
        set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, u8 **, 0x88));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x40));
        ((int (*)(void *))clear_render_callback__8TObjFishFv)(M2C_FIELD(arg0, u8 **, 0x88));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        if (var_f31 < lbl_805DFA58) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void TObjFish__sub_8033CDD8(void* p) { TObjFish__sub_8033CCC8((u8 *)(p)); }

extern M2C_UNK lbl_804EF9EC[];

#define F(T, o) (*(T *)(arg0 + (o)))
void TObjFish__sub_8033CDF8(u8 *arg0) {
    s32 found;
    s32 i;
    Vec_8033CDF8 *p;
    u8 *q;
    Range_8033CDF8 *t;
    if ((F(f32, 0x40) += 0.7f) > 179.0f) {
        F(f32, 0x40) = 179.0f;
    }
    switch (F(s32, 0x44)) {
    case 0x98:
        play_sound_effect(0x40032104, 0, 0, 0);
        break;
    case 0xF9:
        play_sound_effect(0x40032B25, 0, 0, 0);
        break;
    case 0x1E:
        play_sound_effect(0x4003A811, 0, 0, 0);
        break;
    case 0x3C:
    case 0x5A:
    case 0x14:
    case 0xA:
        play_sound_effect(0x40032E23, 0, 0, 0);
        break;
    }
    if (F(s32, 0x44) >= 0x89) {
        play_persistent_sound(0x4003A424, arg0, 0, 0, 0);
    }
    switch (F(s32, 0x44)) {
    case 0xE:
        q = arg0 + 0x7C;
        spawn_particle_effect_with_flags(q, 0x21C, 0x40);
        spawn_particle_effect_with_flags(q, 0x21D, 0x40);
        break;
    case 0x4E:
        q = arg0 + 0x70;
        spawn_particle_effect_with_flags(q, 0x21C, 0x40);
        spawn_particle_effect_with_flags(q, 0x21D, 0x40);
        break;
    }
    if (F(s32, 0x44) >= 0xB9 && !(F(s32, 0x44) & 3)) {
        q = arg0 + 0x4C;
        spawn_particle_effect_with_flags(q, 0x13C, 0x40);
        spawn_particle_effect_with_flags(q, 0x13D, 0x40);
    }
    found = 0;
    for (i = 0; i < 4; i++) {
        t = &lbl_80477ED8[i];
        if (F(s32, 0x44) >= t->lo && F(s32, 0x44) < t->hi) {
            p = &((Fish_8033CDF8 *)arg0)->vecs[t->idx];
            if (F(void *, 0x8C) == NULL) {
                F(void *, 0x8C) = create_particle_emitter(p, 0x21F);
                if (F(void *, 0x8C) != NULL) {
                    set_flags__11TBoss4Type2FPvUi(F(void *, 0x8C), 0x40);
                }
            } else {
                copy_pos__11TNowLoadingFPvPv(F(void *, 0x8C), p);
            }
            found = 1;
            break;
        }
    }
    if (found == 0 && F(void *, 0x8C) != NULL) {
        request_destroy__11TBoss4Type2FUi(F(void *, 0x8C));
        F(void *, 0x8C) = NULL;
    }
    switch (F(s32, 0x44)) {
    case 5:
    case 0x19:
    case 0x46:
    case 0x5F:
    case 0x6E:
    case 0x8C:
    case 0xBE:
    case 0xFF:
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
        break;
    }
    F(s32, 0x44)++;
    if (F(s32, 0x44) >= 0x101 || get_phase__8TObjFishFPv(F(s32, 0x48)) != 3) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void *destroy__8TObjFishFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF9EC;
        restore_player_cameras();
        if (M2C_FIELD(arg0, void **, 0x88) != NULL) { init_state_1__8TObjFishFPv(M2C_FIELD(arg0, void **, 0x88)); M2C_FIELD(arg0, M2C_UNK *, 0x88) = 0; }
        if (M2C_FIELD(arg0, void **, 0x8C) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x8C)); M2C_FIELD(arg0, M2C_UNK *, 0x8C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void * create__14TBoss6PlotFalzFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjFish__sub_8033D1AC(o, arg0, arg1);
    }
    return o;
}

}
