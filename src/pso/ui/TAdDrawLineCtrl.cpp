#include "pso/ui/TAdDrawLineCtrl.h"

#include "types.h"
#include "pso/TMainTask.h"
#include "pso/TObject.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void queue_destruction__7TObjectFv(void *);
void *TAdDrawLineCtrl__ct(void *arg0, void *arg1, void *arg2, f32 farg0);
void *__nw__7TObjectFUl(int);
extern u32 lbl_805D49D8;
u8 *create_draw_line_ctrl__13TAdMcSelectGCFiif(s32 arg0, s32 arg1, f32 farg0);
}

extern "C" {

void *TAdDrawLineCtrl__ct(void *arg0, void *arg1, void *arg2, f32 farg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void set_draw_line_param_all_nodes(void *, f32);
void fn_80019B08(void *, int);
s32 restore_saved_depth_alpha_state();
s32 get_main_phase();
s32 set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();

void TAdDrawLineCtrl::render() {
    if ((s32) this->render_mode == 0) {
        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_5;
        }
    } else if ((get_main_phase() != 2) || (TMainTask::get_state_flag() != 1)) {
block_5:
        TObjPlayer::reset_transform_state();
        if ((u32) *(u32 *)&this->child_root != 0U) {
            ((TObject *)(*(void * *)&this->child_root))->render_nodes();
        }
        if ((s32) this->render_mode == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

extern s32 __vt__15TAdDrawLineCtrl[];
extern void *TAdDrawLineCtrl__class_name;

void TAdDrawLineCtrl::run_task() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r0;
    temp_r0 = *(u32 *)&this->child_root;
    if (temp_r0 != 0U) {
        ((TObject *)temp_r0)->run_tasks();
        return;
    }
    queue_destruction__7TObjectFv(arg0);
}

}

TAdDrawLineCtrl::~TAdDrawLineCtrl() {
    delete child_root;
}

extern "C" {
void *TAdDrawLineCtrl__ct(void *arg0, void *arg1, void *arg2, f32 farg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TAdDrawLineCtrl;
    *(void **)((s8 *)arg0 + 0x0) = TAdDrawLineCtrl__class_name;
    *(void **)((s8 *)arg0 + 0x1C) = arg2;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = ((void * (*)(void *, int))__ct__7TObjectFP7TObject)(o, 0);
    }
    *(void **)((s8 *)arg0 + 0x20) = o;
    *(u32 *)((s8 *)arg0 + 0x28) = 1;
    set_draw_line_param_all_nodes(arg0, farg0);
    fn_80019B08(arg0, -1);
    return arg0;
}
u8 *create_draw_line_ctrl__13TAdMcSelectGCFiif(s32 arg0, s32 arg1, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((u32) lbl_805D49D8 != 0U) {
        temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x2C))));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TAdDrawLineCtrl__ct((void *)(temp_r3), (void *)(arg0), (void *)(lbl_805D49D8 + (arg1 * 0xC)), farg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
