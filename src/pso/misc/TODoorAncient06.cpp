#include "types.h"
#include "pso/misc/TODoorAncient06.h"

struct Base1 { char pad[0x18]; };

struct VObj1 : Base1 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
s32 is_in_view_depth(void *, f32);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(s32);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);
extern s32 TODoorAncient06__detached_model_nodes;
extern const f32 lbl_805DB430;
extern const f32 lbl_805DB434;
extern const f32 lbl_805DB438;
extern const f32 lbl_805DB43C;
void set_indexed_flags(void *, s32, s32);
s32 is_any_player_within_radius_xz(void *, f32);
s32 play_sound_effect(s32, void *, s32, s32);
extern u8 *TODoorAncient06__texture_lists;
extern const f32 lbl_805DB444;
void TODoorAncient06__vt13(u8 *arg0);
}

extern "C" {

void TODoorAncient06__vt15(u8 *arg0);
s32 play_sound_effect(s32, void *, s32, s32);
void *TODoorAncient06__ct(void *, void *, void *);
s32 is_any_player_within_radius_xz(void *, f32);
void *__nw__7TObjectFUl(int);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);

extern u8 *TODoorAncient06__texture_lists;
extern const f32 lbl_805DB440;

void TODoorAncient06::render() {
    u8 *arg0 = (u8 *)this;
    VObj1 *self = (VObj1 *)arg0;
    if ((self->m8(lbl_805DB430, lbl_805DB434) != 0) && (is_in_view_depth(arg0, lbl_805DB438) != 0)) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)arg0 + 0x24));
        if (((u32) *(u32 *)((s8 *)arg0 + 0xBC) != 0U) && (lbl_805DB43C != *(f32 *)((s8 *)arg0 + 0xB0))) {
            draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0x34), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB0));
        } else {
            draw_ginja_object(TODoorAncient06__detached_model_nodes);
            draw_ginja_object(TODoorAncient06__detached_model_nodes + 0x38);
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_object(TODoorAncient06__detached_model_nodes + 0x70);
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
    }
}

void TODoorAncient06__vt15(u8 *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)TODoorAncient06__texture_lists + 4);
        if (is_any_player_within_radius_xz(arg0, lbl_805DB440) != 1) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 3;
            clear_player_status_flag__10TObjPlayerFlUl(arg0, (s32)0, (s32)8);
            play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0xAC) = 3;
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)TODoorAncient06__texture_lists + 0);
        clear_player_status_flag__10TObjPlayerFlUl(arg0, (s32)NULL, (s32)8);
        play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

extern void *tl_05;

void TODoorAncient06__vt13(u8 *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)TODoorAncient06__texture_lists + 4);
        if (is_any_player_within_radius_xz((void *)((s32) arg0), lbl_805DB444) == 1) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 1;
            set_indexed_flags(arg0, 0, 8);
            play_sound_effect((s32)(0x4004B708), (void *)((u32) (arg0 + 0x38)), (s32)(0), (s32)(0));
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)TODoorAncient06__texture_lists + 0);
    }
}

void *TODoorAncient06::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TODoorAncient06__ct(o, tl_05, arg0);
    }
    return o;
}

}
