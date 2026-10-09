#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8030C0C4 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
};

struct RecoveredGlobal_8030C2D8___vt__18TWindowPartyStatus {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK draw_visible_window_entries(void *, void *, int);
extern M2C_UNK __vt__14TWindowMessage[];
void render__18TWindowPartyStatusFv(s32 arg0);
s32 TWindowSubComCard__sub_802452DC(int);
s32 TWindowSubComCard__sub_80245320(void *, void *);
s32 TWindowSubComCard__sub_802454E4(int);
s32 TWindowSubComCard__sub_80245558(void *, void *, void *);
s32 apply_context_transform_to_rect(void *, void *);
s32 set_global_param__8TObjFishFi(void *);
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, int);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DF1EC;
extern const f32 lbl_805DF1F0;
extern const f32 lbl_805DF1F4;
extern const f32 lbl_805DF1F8;
extern const f32 lbl_805DF1FC;
extern const f32 lbl_805DF200;
extern const f32 lbl_805DF204;
void draw_background__18TWindowPartyStatusFPvPv(u8 *arg0, u8 *arg1);
s32 get_window_layout_position(int);
M2C_UNK TWindowSimpleStatus__ct(void *, int, void *, void *);
extern M2C_UNK __vt__18TWindowPartyStatus[];
extern s32 lbl_805D40F8;
extern s32 local_client_id;
u8 *TWindowPartyStatus__ct(u8 *arg0, s16 arg1, s32 arg2);
}

extern "C" {

void *__dt__18TWindowPartyStatusFv(void *arg0, s16 arg1);
void draw__18TWindowPartyStatusFPv(void* p);
void run_task__18TWindowPartyStatusFv(s32 arg0);
M2C_UNK update_status_icons__14TWindowComCardFPvPv(void *, int);
s32 get_window_layout_position(int);
M2C_UNK update_window_entry_list(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__19TWindowSimpleStatusFv(void *, int);
int update_hp_entry__20TWindowSubStatusDispFPv(void*);
M2C_UNK apply_random_shake(void *);
M2C_UNK update_lockon_window();
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
int update_status_entry__20TWindowSubStatusDispFi(void*);
M2C_UNK update_status_help_item(void *);

void draw__18TWindowPartyStatusFPv(void* p) { update_hp_entry__20TWindowSubStatusDispFPv(p); update_status_entry__20TWindowSubStatusDispFi(p); }

}
extern "C" {

void draw_background__18TWindowPartyStatusFPvPv(u8 *arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_8030C0C4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8030C0C4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8030C0C4, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8030C0C4, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8030C0C4, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8030C0C4, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_8030C0C4, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_8030C0C4, sp24) == 0x1C) ? 1 : -1];
    Stack_8030C0C4 stack;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f6;
    temp_f31 = lbl_805DF1EC / M2C_FIELD(arg0, f32 *, 0x54);
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D63F0));
    set_draw_texture_and_color((int) (0xB), (int) (M2C_FIELD(arg1, s32 *, 0x34)));
    temp_f2 = M2C_FIELD(arg1, f32 *, 0x10);
    stack.sp8 = temp_f2;
    temp_f6 = M2C_FIELD(arg1, f32 *, 0x14);
    stack.spC = temp_f6;
    stack.sp10 = lbl_805DF1F0 + temp_f2;
    stack.sp14 = lbl_805DF1F4 + temp_f6;
    stack.sp18 = lbl_805DF1F8;
    stack.sp1C = lbl_805DF1FC;
    stack.sp20 = lbl_805DF200;
    stack.sp24 = lbl_805DF204;
    apply_context_transform_to_rect((void *) (arg1), (void *) (&stack.sp8));
    draw_textured_quad_at_depth((void *) (&stack.sp8), (f32) (temp_f31));
    get_player__20TWindowSubStatusDispFv();
    if (TWindowSubComCard__sub_80245558((void *) (arg1), (void *) (arg1 + 0x10), (void *) (arg1 + 0x18)) != 0) {
        TWindowSubComCard__sub_802454E4((int) (0xB));
        TWindowSubComCard__sub_80245320((void *) (&stack.sp8), (void *) (arg1));
        TWindowSubComCard__sub_802452DC((int) (0xB));
    }
}

void render__18TWindowPartyStatusFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_background__18TWindowPartyStatusFPvPv((u8 *)((void *) (arg0)), (u8 *)((int) (temp_r3)));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__18TWindowPartyStatusFv(s32 arg0) {
    update_lockon_window();
    draw__18TWindowPartyStatusFPv((void*)((void *) (arg0)));
    update_status_help_item((void *) (arg0));
    update_status_icons__14TWindowComCardFPvPv((void *) (arg0), (int) (get_window_layout_position((int) (0xAC))));
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
    apply_random_shake((void *) (arg0));
}

extern M2C_UNK __vt__18TWindowPartyStatus[];

void *__dt__18TWindowPartyStatusFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowPartyStatus;
        __dt__19TWindowSimpleStatusFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8030C2D8___vt__18TWindowPartyStatus_size[sizeof(RecoveredGlobal_8030C2D8___vt__18TWindowPartyStatus) == 0x1C ? 1 : -1];
u8 *TWindowPartyStatus__ct(u8 *arg0, s16 arg1, s32 arg2) {
    TWindowSimpleStatus__ct((void *) (arg0), (int) (get_window_layout_position((int) (0xAB))), (void *) (local_client_id), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8030C2D8___vt__18TWindowPartyStatus *)&__vt__18TWindowPartyStatus).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D40F8;
    M2C_FIELD(arg0, s16 *, 0x20) = arg1;
    return arg0;
}

}
