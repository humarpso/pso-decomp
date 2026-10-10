#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void set_present_interval(void *, void *);
void init_locked_cache_heap(void *);
extern void *active_gx_render_mode;
void VIConfigure(void *);
void init_gx_display(void);
void fn_803DD294(void);
void init_video_and_gx(void *arg0);
}

extern "C" {

void init_video_and_gx(void *arg0) {
    set_present_interval(M2C_FIELD(arg0, void **, 0x0), M2C_FIELD(arg0, void **, 0x4));
    init_locked_cache_heap(arg0);
    VIConfigure(active_gx_render_mode);
    init_gx_display();
    fn_803DD294();
}

}
