#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TUnk_804CDFE8.h"
#include "pso/misc/TWindowMessage.h"
#include "pso/misc/TWindowAddition.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {
s32 get_draw_context__11TWindowBaseFPv();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
u8 *mem_alloc(s32);
void *construct_with_parent__13TUnk_804CDFE8FPv(void *, void *, s16, s32);
extern u8 message_window_settings[];
extern s32 __vt__14TWindowMessage[];
extern s32 lbl_805D3980;
extern const f32 lbl_805DD21C;
u8 *TWindowMessage__ct(u8 *arg0, s32 arg1, u32 arg2, s32 arg3);
}

extern "C" {

void *__dt__14TWindowMessageFv(void *arg0, s16 arg1);
s32 update_window_entry_list__13TUnk_804CE018FPv(void *, void *);
void __dl__7TObjectFPv(void *);
s32 advance_reveal_cursor__14TWindowMessageFv(void *);
s32 update_line_timers__14TWindowMessageFPv(void *);
s32 retire_scrolled_lines__14TWindowMessageFv(void *);
s32 update_scroll__14TWindowMessageFv(void *);
void mem_free(void *);

void render__14TWindowMessageFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void TWindowMessage::draw() {
    u8 *arg0 = (u8 *)this;
    if (!(*(s32 *)((s8 *)arg0 + 0x2C) & 2)) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 0x01000000;
    }
    update_scroll__14TWindowMessageFv(arg0);
    retire_scrolled_lines__14TWindowMessageFv(arg0);
    update_line_timers__14TWindowMessageFPv(arg0);
    advance_reveal_cursor__14TWindowMessageFv(arg0);
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TUnk_804CE018 *)arg0)->update_fade();
    update_window_entry_list__13TUnk_804CE018FPv(arg0, arg0 + 0x24);
}

extern s32 __vt__14TWindowMessage[];

void *__dt__14TWindowMessageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TWindowMessage;
        if (*(void **)((s8 *)arg0 + 0x7C) != NULL) { mem_free(*(void **)((s8 *)arg0 + 0x7C)); }
        ((TUnk_804CDFE8 *)arg0)->destroy_window(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowMessage__ct(u8 *arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 i;
    u8 *p;
    construct_with_parent__13TUnk_804CDFE8FPv(arg0, message_window_settings, arg3, arg1);
    *(void **)(arg0 + 0x18) = ((u8 *)&__vt__14TWindowMessage);
    *(s32 *)arg0 = lbl_805D3980;
    *(s32 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x74) = 0;
    *(s32 *)(arg0 + 0x88) = 0;
    *(u32 *)(arg0 + 0x8C) = arg2;
    *(s32 *)(arg0 + 0x78) = 0xB4;
    *(f32 *)(arg0 + 0x84) = lbl_805DD21C;
    *(f32 *)(arg0 + 0x80) = lbl_805DD21C;
    *(u8 **)(arg0 + 0x7C) = mem_alloc(arg2 * 8);
    p = *(u8 **)(arg0 + 0x7C);
    for (i = 0; i < arg2; i++) {
        *(s32 *)p = 0;
        *(s32 *)(p + 4) = 0;
        p += 8;
    }
    return arg0;
}

}
