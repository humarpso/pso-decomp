#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK draw_window_frame(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
u8 *alloc_buffer__11TOBoss4RockFPv(s32);
void *construct_with_parent__15TWindowAdditionFPvPv(void *, void *, s16, s32);
extern u8 lbl_804D071C[];
extern M2C_UNK __vt__14TWindowMessage[];
extern s32 lbl_805D3980;
extern const f32 lbl_805DD21C;
u8 *TWindowMessage__ct(u8 *arg0, s32 arg1, u32 arg2, s32 arg3);
}

extern "C" {

void *__dt__14TWindowMessageFv(void *arg0, s16 arg1);
void draw__14TWindowMessageFPv(u8 *arg0);
M2C_UNK update_window_entry_list(void *, void *);
void __dl__7TObjectFPv(void *);
void destroy_window__15TWindowAdditionFPvs(void *, int);
M2C_UNK advance_reveal_cursor__14TWindowMessageFPv(void *);
M2C_UNK update_line_timers__14TWindowMessageFPv(void *);
M2C_UNK retire_scrolled_lines__14TWindowMessageFPv(void *);
M2C_UNK update_scroll__14TWindowMessageFPv(void *);
void free__11TOBoss4RockFUi(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);

void render__14TWindowMessageFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void draw__14TWindowMessageFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    update_scroll__14TWindowMessageFPv(arg0);
    retire_scrolled_lines__14TWindowMessageFPv(arg0);
    update_line_timers__14TWindowMessageFPv(arg0);
    advance_reveal_cursor__14TWindowMessageFPv(arg0);
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    update_window_entry_list(arg0, arg0 + 0x24);
}

extern M2C_UNK __vt__14TWindowMessage[];

void *__dt__14TWindowMessageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowMessage;
        if (M2C_FIELD(arg0, void **, 0x7C) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x7C)); }
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowMessage__ct(u8 *arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 i;
    u8 *p;
    construct_with_parent__15TWindowAdditionFPvPv(arg0, lbl_804D071C, arg3, arg1);
    *(void **)(arg0 + 0x18) = ((u8 *)&__vt__14TWindowMessage);
    *(s32 *)arg0 = lbl_805D3980;
    *(s32 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x74) = 0;
    *(s32 *)(arg0 + 0x88) = 0;
    *(u32 *)(arg0 + 0x8C) = arg2;
    *(s32 *)(arg0 + 0x78) = 0xB4;
    *(f32 *)(arg0 + 0x84) = lbl_805DD21C;
    *(f32 *)(arg0 + 0x80) = lbl_805DD21C;
    *(u8 **)(arg0 + 0x7C) = alloc_buffer__11TOBoss4RockFPv(arg2 * 8);
    p = *(u8 **)(arg0 + 0x7C);
    for (i = 0; i < arg2; i++) {
        *(s32 *)p = 0;
        *(s32 *)(p + 4) = 0;
        p += 8;
    }
    return arg0;
}

}
