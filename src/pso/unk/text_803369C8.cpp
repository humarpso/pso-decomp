#include "types.h"
#include "pso/unk/TUnk_804EEF80.h"
#include "pso/unk/TUnk_804EEF80.h"
#include "pso/TMainTask.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TCameraCtrl.h"

typedef struct TitleQuad {f32 x,y,z,bx,by,cx,cy;u32 pad;f32 u,v,uw,ux,vx,vh;} TitleQuad;

extern "C" {
f32 sin_table_lookup(void *);
f32 cos_table_lookup(void *);
extern const f32 lbl_805DF924;
void rotate_title_background_quad(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3, f32 farg0);
u8 *get_title_texture_list(void);
void draw_title_background_layer(void *,s32,s32,f32);
void render_logo_with_default(void *,s32,s32,f32);
void draw_title_background_pulse(void *,f32,s32);
void draw_title_rings(void *,f32,s32);
void TCameraCtrl__sub_80068EF0(void);
extern const f32 lbl_805DF968;
extern const f32 lbl_805DF96C;
extern const f32 lbl_805DF970;
extern const f32 lbl_805DF974;
}

extern "C" {

void *__dt__13TUnk_804EEF80Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

#pragma push
#pragma fp_contract on
void rotate_title_background_quad(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3, f32 farg0) {
    f32 temp_f31;
    f32 temp_f5;
    temp_f31 = farg0 * sin_table_lookup((void *) (arg3));
    temp_f5 = farg0 * cos_table_lookup((void *) (arg3));
    *(f32 *)((s8 *)arg1 + 0) = (f32) ((lbl_805DF924 * (temp_f31 - temp_f5)) + *(f32 *)((s8 *)arg2 + 0));
    *(f32 *)((s8 *)arg1 + 4) = (f32) -((lbl_805DF924 * (temp_f31 + temp_f5)) - *(f32 *)((s8 *)arg2 + 4));
    *(f32 *)((s8 *)arg1 + 0xC) = temp_f5;
    *(f32 *)((s8 *)arg1 + 0x10) = temp_f31;
    *(f32 *)((s8 *)arg1 + 0x14) = (f32) -temp_f31;
    *(f32 *)((s8 *)arg1 + 0x18) = temp_f5;
}
#pragma pop

void TUnk_804EEF80::render() {
    u8 *arg0 = (u8 *)this;
    if (TMainTask::get_state_flag() != 0) {
        TParticleCtrl::begin_effect_render();
        TCameraCtrl::restore_full_screen_view();
        render_logo_with_default(get_title_texture_list(), 0xD, -1, lbl_805DF968);
        draw_title_background_pulse(arg0, lbl_805DF96C, this->m_20);
        draw_title_background_layer(get_title_texture_list(), 3, -1, lbl_805DF970);
        draw_title_rings(arg0, lbl_805DF974, this->m_20);
        TCameraCtrl__sub_80068EF0();
        TParticleCtrl::end_effect_render();
    }
}

void TUnk_804EEF80::run_task() {
    this->m_20 = (s32) (this->m_20 + 1);
}

extern s32 __vt__13TUnk_804EEF80[];

}
TUnk_804EEF80::~TUnk_804EEF80() {

}
extern "C" {

}
