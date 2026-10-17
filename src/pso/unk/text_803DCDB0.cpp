#include "types.h"

extern "C" {
void set_present_interval(void *, void *);
void init_locked_cache_heap(void *);
extern void *active_gx_render_mode;
void VIConfigure(void *);
void init_gx_display(void);
void fn_803DD294(void);
void init_video_and_gx(void *arg0);
void init_video_and_gx(void *arg0) {
    set_present_interval(*(void **)((s8 *)arg0 + 0x0), *(void **)((s8 *)arg0 + 0x4));
    init_locked_cache_heap(arg0);
    VIConfigure(active_gx_render_mode);
    init_gx_display();
    fn_803DD294();
}

}
