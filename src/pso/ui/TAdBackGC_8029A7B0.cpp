#include "pso/TAdBackGC.h"

#include "types.h"
#include "pso/TMainTask.h"

extern "C" {
s32 draw_title_background_layer(void *, int, int, f32);
s32 set_depth_buffer_settings_2__Fv();
s32 restore_saved_depth_alpha_state();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();
s32 fn_8029A6EC(void *);
s32 set_cached_blend_factor(int, int);
extern s32 chr_select_ad_pic_2_texture_descriptor[];
}

extern "C" {

void *__ct__9TAdBackGCFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

void TAdBackGC::render() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x20) == 0) {
        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_4;
        }
    } else if (TMainTask::get_state_flag() != 1) {
block_4:
        fn_8029A6EC((void *) (arg0));
        set_cached_blend_factor((int) (0), (int) (8));
        set_cached_blend_factor((int) (1), (int) (0xA));
        draw_title_background_layer((void *) (chr_select_ad_pic_2_texture_descriptor), (int) (0), (int) (-1), (f32) (*(f32 *)((s8 *)arg0 + 0x1C)));
        set_cached_blend_factor((int) (0), (int) (8));
        set_cached_blend_factor((int) (1), (int) (6));
        if ((s32) *(s32 *)((s8 *)arg0 + 0x20) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

void TAdBackGC::run_task() {  }

extern const f32 lbl_805DDC68;
extern s32 __vt__9TAdBackGC[];
extern void *TAdBackGC__class_name;

TAdBackGC::~TAdBackGC() {}
void *__ct__9TAdBackGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TAdBackGC;
    *(void **)((s8 *)arg0 + 0x0) = TAdBackGC__class_name;
    *(f32 *)((s8 *)arg0 + 0x1C) = lbl_805DDC68;
    *(u32 *)((s8 *)arg0 + 0x20) = 1;
    return arg0;
}

}
