#include "types.h"

extern "C" {
void set_present_interval(s32 *arg0, s32 arg1);
void init_locked_cache_heap(u8 *arg0);
extern void *active_gx_render_mode;
void VIConfigure(void *);
void init_gx_display(void);
void fn_803DD294(void);
void init_video_and_gx(void *arg0);
void init_video_and_gx(void *arg0) {
    set_present_interval((s32 *)(*(void **)((s8 *)arg0 + 0x0)), (s32)(*(void **)((s8 *)arg0 + 0x4)));
    init_locked_cache_heap((u8 *)arg0);
    VIConfigure(active_gx_render_mode);
    init_gx_display();
    fn_803DD294();
}

}
