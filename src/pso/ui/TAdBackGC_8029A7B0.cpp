#include "pso/TAdBackGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_state_flag__9TMainTaskFv();
M2C_UNK draw_title_background_layer(void *, int, int, f32);
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK restore_saved_depth_alpha_state();
s32 toggle_flag_9__10TObjPlayerFPv();
M2C_UNK fn_8029A6EC(void *);
M2C_UNK set_cached_blend_factor(int, int);
extern M2C_UNK lbl_804DBF20[];
void render__9TAdBackGCFv(u8 *arg0);
}

extern "C" {

void *__ct__9TAdBackGCFv(void *arg0);
void run_task__9TAdBackGCFv(void);
void __ct__7TObjectFP7TObject(void *);

void render__9TAdBackGCFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        if (toggle_flag_9__10TObjPlayerFPv() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_4;
        }
    } else if (get_state_flag__9TMainTaskFv() != 1) {
block_4:
        fn_8029A6EC((void *) (arg0));
        set_cached_blend_factor((int) (0), (int) (8));
        set_cached_blend_factor((int) (1), (int) (0xA));
        draw_title_background_layer((void *) (lbl_804DBF20), (int) (0), (int) (-1), (f32) (M2C_FIELD(arg0, f32 *, 0x1C)));
        set_cached_blend_factor((int) (0), (int) (8));
        set_cached_blend_factor((int) (1), (int) (6));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

void run_task__9TAdBackGCFv(void) {  }

extern const f32 lbl_805DDC68;
extern M2C_UNK __vt__9TAdBackGC[];
extern void *TAdBackGC__class_name;

TAdBackGC::~TAdBackGC() {}
void *__ct__9TAdBackGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TAdBackGC;
    M2C_FIELD(arg0, void **, 0x0) = TAdBackGC__class_name;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805DDC68;
    M2C_FIELD(arg0, u32 *, 0x20) = 1;
    return arg0;
}

}
