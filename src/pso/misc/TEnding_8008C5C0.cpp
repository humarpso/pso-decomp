#include "pso/misc/TEnding.h"

#include "types.h"
struct Vec_8008C5E8 { s32 x, y, z; };

extern "C" {
void TKeyBoardControl__sub_8000F90C(int);
void TKeyBoardControl__sub_8000F91C(int);
void set_active_camera_pose(void *, void *);
void select_active_controller__11TCameraCtrlFc(s8 arg0);
void TCameraCtrl__ct(void *, void *);
void __ct__7TEndingFv(void *);
void clear_resource_load_tasks(void);
void run_load_callback_table(void *, int);
void init_map_lights(void *);
void reset_controller_input_state(void);
void set_copy_clear_color_argb(int, int, int);
int render_tick__Fv(void);
void create_quad_sprites__13TParticleCtrlFv(void);
void play_area_music(void *);
void *__nw__7TObjectFUl(int);
void set_screen_size(f32 farg0, f32 farg1);
extern Vec_8008C5E8 lbl_80439570;
extern Vec_8008C5E8 lbl_8043957C;
extern u8 lbl_80439588[];
extern u8 ending_scene_callbacks[];
extern u8 default_scene_light_config[];
extern void *tl_camera;
extern const f32 lbl_805D9570;
extern const f32 lbl_805D9574;
}

extern "C" {
extern s32 ending_scene_active;

void TEnding::set_flag_and_advance() {
    ending_scene_active = 1;
    TEnding::start_ending_scene();
}

int TEnding::start_ending_scene() {
    void *p;
    set_screen_size(lbl_805D9570, lbl_805D9574);
    set_copy_clear_color_argb(0, 0, 0);
    reset_controller_input_state();
    init_map_lights(default_scene_light_config);
    p = __nw__7TObjectFUl(0x1D4);
    if (p != 0) {
        TCameraCtrl__ct(p, tl_camera);
    }
    Vec_8008C5E8 a = lbl_80439570;
    Vec_8008C5E8 b = lbl_8043957C;
    select_active_controller__11TCameraCtrlFc(9);
    set_active_camera_pose(&a, &b);
    clear_resource_load_tasks();
    run_load_callback_table(ending_scene_callbacks, 0x68);
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(2);
    play_area_music(lbl_80439588);
    create_quad_sprites__13TParticleCtrlFv();
    p = __nw__7TObjectFUl(0x710);
    if (p != 0) {
        __ct__7TEndingFv(p);
    }
    return render_tick__Fv();
}

void TEnding__sub_8008C6E8() {}
void TEnding__sub_8008C6EC() {}
}

void TEnding::render() {}
