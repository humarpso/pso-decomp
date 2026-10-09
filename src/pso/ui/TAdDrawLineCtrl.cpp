#include "pso/ui/TAdDrawLineCtrl.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void queue_destruction__7TObjectFv(void *);
M2C_UNK run_tasks__7TObjectFv(int);
void run_task__15TAdDrawLineCtrlFv(u8 *arg0);
void *TAdDrawLineCtrl__ct(void *arg0, void *arg1, void *arg2, f32 farg0);
void *__nw__7TObjectFUl(int);
extern u32 lbl_805D49D8;
u8 *create_draw_line_ctrl__13TAdMcSelectGCFiif(s32 arg0, s32 arg1, f32 farg0);
}

extern "C" {

void *TAdDrawLineCtrl__ct(void *arg0, void *arg1, void *arg2, f32 farg0);
void render__15TAdDrawLineCtrlFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void set_draw_line_param_all_nodes(void *, f32);
void fn_80019B08(void *, int);
M2C_UNK restore_saved_depth_alpha_state();
s32 get_main_phase();
s32 get_state_flag__9TMainTaskFv();
M2C_UNK render_nodes__7TObjectFv(void *);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9__10TObjPlayerFPv();

void render__15TAdDrawLineCtrlFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        if (toggle_flag_9__10TObjPlayerFPv() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_5;
        }
    } else if ((get_main_phase() != 2) || (get_state_flag__9TMainTaskFv() != 1)) {
block_5:
        reset_transform_state__10TObjPlayerFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            render_nodes__7TObjectFv(M2C_FIELD(arg0, void **, 0x20));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

extern M2C_UNK __vt__15TAdDrawLineCtrl[];
extern void *lbl_805D260C;

void run_task__15TAdDrawLineCtrlFv(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    if (temp_r0 != 0U) {
        run_tasks__7TObjectFv((int) (temp_r0));
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TAdDrawLineCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D260C;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = ((void * (*)(void *, int))__ct__7TObjectFP7TObject)(o, 0);
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
    M2C_FIELD(arg0, u32 *, 0x28) = 1;
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
