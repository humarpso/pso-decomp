#include "types.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"
#include "pso/misc/TUnk_804CDFE8.h"
#include "pso/misc/TUnk_804CE018.h"

#include <stddef.h>
#include "pso/misc/TWindowSubSymbolChat.h"
#include "pso/misc/TWindowSubSymbolChatParts.h"
#include "pso/misc/TWindowAddition.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowSubStatusDisp.h"
struct Stack_80285274 {
    f32 sp8;
    f32 spC;
};

struct Win_802857C4 {
    u8 pad0[0x24];
    u8 sub[0x76 - 0x24];
    s16 count;
    u8 *p78;
    s32 *p7C;
    s32 *p80;
};

struct Rect_802857C4 {
    u8 pad0[0x14];
    f32 y;
    u8 pad18[0x40 - 0x18];
    f32 top;
    f32 f44;
    f32 bottom;
};

extern "C" {
void TWindowSubSymbolChatFaceType__sub_80283C84(void *, void *, f32, f32);
void draw_visible_window_entries(void *, void *, void *);
extern const f32 lbl_805DD7D4;
extern const f32 lbl_805DD7D8;
extern const f32 lbl_805DD7DC;
extern const f32 lbl_805DD7E8;
extern const f32 lbl_805DD7F8;
void fn_802857C4(Win_802857C4 *arg0, Rect_802857C4 *arg1);
struct Stack_80284C04 {
    f32 sp8;
    f32 spC;
};

struct TWSC *get_instance__20TWindowSubSymbolChatFv();

struct TWSC;

struct Vec2_80284D68 { f32 x, y; };

struct Win_80284D68 {
    u8 pad[0x4C];
    f32 height;
    u8 pad2[0x68 - 0x50];
    Vec2_80284D68 pos;
    u8 pad3[2];
    s8 col;
    s8 row;
    u8 pad4[2];
    s16 count;
    u8 pad5[0x8C - 0x78];
    s32 card;
};

struct RecoveredGlobal_80285054_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

typedef char RecoveredGlobal_80285054_lbl_8050E208_size[sizeof(RecoveredGlobal_80285054_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct Vec2_80285D38 { f32 x, y; };

struct Parts_80285D38 {
    s32 f0;
    u8 pad[0x14];
    void *vt;
    u8 pad2[0x20 - 0x1C];
    s16 id;
    u8 pad3[0x70 - 0x22];
    s8 f70;
    u8 pad4;
    s8 f72;
    s8 f73;
    u8 pad5[2];
    s16 f76;
    u8 pad6[0x7C - 0x78];
    s32 f7C;
    s32 f80;
    u8 pad7[0x88 - 0x84];
    void *sub88;
    void *sub8C;
};

struct Parts_80285B84 {
    u8 pad[0x2C];
    s32 flags;
    u8 pad2[0x5C - 0x30];
    s32 timer;
    u8 pad3[0x88 - 0x60];
    s32 sub88;
    s32 sub8C;
};

s32 TWindowSubSymbolChat__sub_800771B0(struct TWSC *, s32);
s32 TWindowSubSymbolChat__sub_800771C4(struct TWSC *, s32);
s32 refresh_parts__20TWindowSubSymbolChatFv();
s32 get_message_10__20TWindowSubStatusDispFl(s32);
void * alloc__23TAdSinglePlyChrSelectGCFv(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 play_sound_effect(s32, s32, s32, s32);
void __dl__7TObjectFPv(void *);
s32 get_draw_context__11TWindowBaseFPv();
void construct_with_parent__13TUnk_804CDFE8FPv(void *, void *, s32, void *);
void clamp_list_scroll_offset(s32, Vec2_80284D68 *, Vec2_80284D68 *);
s32 draw_window_scrollbar(s32, s32, void *);
void * reset_selection__20TWindowSubStatusDispFv(void *, Vec2_80285D38 *);
s32 sub_80283974__25TWindowSubSymbolChatPartsFv();
s32 calc_symbol_index__25TWindowSubSymbolChatPartsFv(void *arg0);
s32 fn_80285314(void *, s32);
s32 fn_802855C4(void *, s32);
Parts_80285D38 * TWindowSubSymbolChatParts__ct(Parts_80285D38 *arg0, void *arg1, s32 arg2, s32 arg3);
s32 forward_render__20TWindowSubStatusDispFv(s32, s32);

extern s32 __vt__25TWindowSubSymbolChatParts[];
extern u8 symbol_chat_parts_window_layout[];
extern RecoveredGlobal_80285054_lbl_8050E208 controller_input_state;
extern s32 TWindowSubSymbolChatParts__name;
extern const f32 lbl_805DD7C8;
extern const f32 lbl_805DD7CC;
extern const f32 lbl_805DD7D0;
extern const f32 lbl_805DD7E0;
extern const f32 lbl_805DD7E4;
extern const f32 lbl_805DD80C;

#pragma push
#pragma fp_contract on
void fn_80284C04(u8 *arg0) {
    Stack_80284C04 stack;
    *(s8 *)((s8 *)arg0 + 0x74) = (s8) TWindowSubStatusDisp::round_away_from_zero((f32) *(s16 *)((s8 *)arg0 + 0x76) * lbl_805DD7C8);
    stack.sp8 = lbl_805DD7CC;
    stack.spC = (lbl_805DD7D4 * (f32) (s8) (u8) *(s8 *)((s8 *)arg0 + 0x74)) + lbl_805DD7D0;
    ((TWindowMenu *)(*(u8 **)((s8 *)arg0 + 0x8C)))->copy_position(&stack.sp8);
}
#pragma pop

void select_symbol_chat_slot(void) {
    s32 j;
    s32 i;
    s32 temp_r3;
    struct TWSC *temp_r29;
    i = ((s32 (*)(void))calc_symbol_index__25TWindowSubSymbolChatPartsFv)();
    temp_r29 = get_instance__20TWindowSubSymbolChatFv();
    temp_r3 = TWindowSubSymbolChat::calc_remaining_slots();
    if (temp_r3 > i) {
        ((TWindowSubSymbolChat *)temp_r29)->remove_slot_shift_down(i);
        return;
    }
    i -= temp_r3;
    for (j = 0; j < 4; j += 1) {
        if (TWindowSubSymbolChat__sub_800771C4(temp_r29, j) != 0) {
            if (i-- <= 0) {
                TWindowSubSymbolChat__sub_800771B0(temp_r29, j);
                return;
            }
        }
    }
}

s32 TWindowSubSymbolChatParts::calc_symbol_index() {
    return (s8) this->m_72 + ((s8) this->m_73 * 4);
}

#pragma push
#pragma fp_contract on
void TWindowSubSymbolChat::select_index_and_scroll(s32 arg1) {
    Win_80284D68 *arg0 = (Win_80284D68 *)this;
    Vec2_80284D68 v;

    if (arg1 >= arg0->count) {
        arg1 = arg0->count - 1;
    }
    arg0->row = arg1 / 4;
    arg0->col = arg1 % 4;
    arg0->pos.y = lbl_805DD7D8 + (lbl_805DD7D4 * (f32)arg0->row + lbl_805DD7DC);
    arg0->pos.y -= lbl_805DD7E0;
    v.x = lbl_805DD7E4;
    v.y = arg0->height - lbl_805DD7E8 - lbl_805DD7D8;
    clamp_list_scroll_offset(arg0->card, &arg0->pos, &v);
}
#pragma pop

void TWindowSubSymbolChatParts::handle_cancel() {
    if (sub_80283974__25TWindowSubSymbolChatPartsFv() == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        this->m_70 = (u8) (this->m_70 | 2);
    }
}

void TWindowSubSymbolChatParts::add_part() {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(void))calc_symbol_index__25TWindowSubSymbolChatPartsFv)();
    if (((s8) this->m_71 != 0) || (temp_r3 >= (s16) *(s16 *)&this->m_76) || (refresh_parts__20TWindowSubSymbolChatFv() < 2)) {
        play_sound_effect(0x53F06, 0, 0, 0);
        return;
    }
    play_sound_effect(0x52D01, 0, 0, 0);
    **(s32 * *)&this->_pad84 = 1;
    this->m_70 = (u8) (this->m_70 | 1);
    ((TWindowSubStatusDisp *)(*(s32 *)&this->m_88))->set_entry_state(2);
}

void TWindowSubSymbolChatParts::handle_add() {
    if (((s32 (*)(void))calc_symbol_index__25TWindowSubSymbolChatPartsFv)() >= (s16) *(s16 *)&this->m_76) {
        play_sound_effect(0x53F06, 0, 0, 0);
        return;
    }
    play_sound_effect(0x52D01, 0, 0, 0);
    this->m_70 = (u8) (this->m_70 | 1);
    ((TWindowSubStatusDisp *)(*(s32 *)&this->m_88))->set_entry_state(2);
}

#pragma push
#pragma fp_contract on
void fn_80284FB8(void *arg0) {
    Win_80284D68 *w = (Win_80284D68 *)arg0;
    Vec2_80284D68 v;
    f32 target = lbl_805DD7D8 + (lbl_805DD7D4 * (f32)w->row + lbl_805DD7DC);
    target -= lbl_805DD7E0;
    w->pos.y += target - w->pos.y;
    v.x = lbl_805DD7E4;
    v.y = w->height - lbl_805DD7E8 - lbl_805DD7D8;
    clamp_list_scroll_offset(w->card, &w->pos, &v);
}
#pragma pop

void TWindowSubSymbolChatParts::sub_80285054() {
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r4;
    u8 temp_r5;
    u8 *input;
    input = (u8 *)&controller_input_state.value + 0x20;
    if ((TWindowChoiceSetting::apply_choice((s32)input, 0xF0, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), 0xF0, 6, 1) != 0)) {
        ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x54100, 0U, 0, 0);
        if ((TWindowChoiceSetting::apply_choice((s32)input, 0x80, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), 0x80, 6, 1) != 0)) {
            *(u8 *)((s8 *)((u8 *)this) + 0x72) = (u8) (*(u8 *)((s8 *)((u8 *)this) + 0x72) + 1);
        }
        if ((TWindowChoiceSetting::apply_choice((s32)input, 0x40, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), 0x40, 6, 1) != 0)) {
            *(u8 *)((s8 *)((u8 *)this) + 0x72) = (u8) (*(u8 *)((s8 *)((u8 *)this) + 0x72) - 1);
        }
        temp_r3 = *(u8 *)((s8 *)((u8 *)this) + 0x72);
        if ((s8) temp_r3 < 0) {
            *(u8 *)((s8 *)((u8 *)this) + 0x72) = (temp_r3 + 4);
        }
        temp_r3_2 = *(u8 *)((s8 *)((u8 *)this) + 0x72);
        if ((s8) temp_r3_2 >= 4) {
            *(u8 *)((s8 *)((u8 *)this) + 0x72) = (temp_r3_2 - 4);
        }
        if ((TWindowChoiceSetting::apply_choice((s32)input, 0x10, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), 0x10, 6, 1) != 0)) {
            *(u8 *)((s8 *)((u8 *)this) + 0x73) = (u8) (*(u8 *)((s8 *)((u8 *)this) + 0x73) - 1);
        }
        if ((TWindowChoiceSetting::apply_choice((s32)input, 0x20, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), 0x20, 6, 1) != 0)) {
            *(u8 *)((s8 *)((u8 *)this) + 0x73) = (u8) (*(u8 *)((s8 *)((u8 *)this) + 0x73) + 1);
        }
        temp_r3_3 = *(u8 *)((s8 *)((u8 *)this) + 0x73);
        if ((s8) temp_r3_3 < 0) {
            *(u8 *)((s8 *)((u8 *)this) + 0x73) = (u8) (temp_r3_3 + *(u8 *)((s8 *)((u8 *)this) + 0x74));
        }
        temp_r4 = *(u8 *)((s8 *)((u8 *)this) + 0x73);
        temp_r5 = *(u8 *)((s8 *)((u8 *)this) + 0x74);
        if ((s8) temp_r4 >= (s8) temp_r5) {
            *(u8 *)((s8 *)((u8 *)this) + 0x73) = (u8) (temp_r4 - temp_r5);
        }
    }
}

#pragma push
#pragma fp_contract on
void TWindowSubSymbolChatParts::sub_80285274(u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_80285274, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80285274, spC) == 0x4) ? 1 : -1];
    Stack_80285274 stack;
    stack.sp8 = ((40.0f * (f32) (s8) this->m_72) + 10.0f) - 3.0f;
    stack.spC = ((40.0f * (f32) (s8) this->m_73) + 9.0f) - 3.0f;
    TWindowSubSymbolChatFaceType__sub_80283C84(arg1, &stack.sp8, 38.0f, 0.1f);
}
#pragma pop

#pragma push
#pragma fp_contract on
void fn_802857C4(Win_802857C4 *arg0, Rect_802857C4 *ctx) {
    s32 i;
    s32 j;
    f32 *e0;
    s32 row;
    f32 *e1;
    f32 y;
    f32 off;
    f32 x;
    f32 h;
    row = 0;
    e1 = (f32 *)((TUnk_804CE018 *)arg0)->get_array_entry(1);
    e0 = (f32 *)((TUnk_804CE018 *)arg0)->get_array_entry(0);
    h = lbl_805DD7F8;
    for (i = 0; i < arg0->count; row++) {
        off = lbl_805DD7D4 * (f32)row;
        y = ctx->y;
        y = y + off;
        if (h + y < ctx->top || y > ctx->bottom) {
            i += 4;
        } else {
            x = lbl_805DD7DC + off;
            for (j = 0; j < 4; j++, i++) {
                if (i >= arg0->count) break;
                e0[2] = lbl_805DD7D4 * (f32)j + lbl_805DD7E8;
                e0[3] = x;
                e1[2] = lbl_805DD7D8 + e0[2];
                e1[3] = lbl_805DD7D8 + e0[3];
                TWindowSubSymbolChatPartsSet::set_part_sprite(e1, (s16)i, *arg0->p7C, *arg0->p80);
                draw_visible_window_entries(arg0, arg0->sub, ctx);
            }
        }
    }
}
#pragma pop

void TWindowSubSymbolChat::update_height() {
    *(s16 *)((s8 *)this + 0x76) = TWindowSubSymbolChat::compute_total_height();
    ((s32 (*)(void *))fn_80284C04)(this);
    *(s8 *)((s8 *)this + 0x71) = 2;
}

void TWindowSubSymbolChat::open(s32 arg1) {
    *(s32 *)((s8 *)this + 0x78) = arg1;
    *(s16 *)((s8 *)this + 0x76) = 0xC0;
    ((s32 (*)(void *))fn_80284C04)(this);
    *(s8 *)((s8 *)this + 0x71) = 1;
}

void render__25TWindowSubSymbolChatPartsFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    ((TUnk_804CE018 *)arg0)->draw_window_frame((void *)temp_r3);
    switch ((s8) (((TWindowSubSymbolChatParts *)arg0)->m_71)) {
    case 0:
        fn_802857C4((Win_802857C4 *)(arg0), (Rect_802857C4 *)(temp_r3));
        break;
    case 1:
        fn_802855C4(arg0, temp_r3);
        break;
    case 2:
        fn_80285314(arg0, temp_r3);
        break;
    }
    draw_window_scrollbar(((TWindowSubSymbolChatParts *)arg0)->m_8c, temp_r3, arg0 + 0x68);
    ((TWindowSubSymbolChatParts *)arg0)->sub_80285274((u8 *)temp_r3);
    forward_render__20TWindowSubStatusDispFv(((TWindowSubSymbolChatParts *)arg0)->m_88, temp_r3);
}

void run_task__25TWindowSubSymbolChatPartsFv(Parts_80285B84 *arg0) {
    u8 *pad;

    if (!(arg0->flags & 2)) {
        arg0->timer = 0x01000000;
    }
    if (((s32 (*)(void *))sub_80283974__25TWindowSubSymbolChatPartsFv)(arg0) == 0) {
        ((TWindowSubSymbolChatParts *)arg0)->sub_80285054();
        pad = ((u8 *)&controller_input_state) + 0x20;
        if (TWindowShortListCtrl__check_controller_button(pad, 4) != 0 || test_flag_4c__23TAdSinglePlyChrSelectGCFv(((u8 *)&controller_input_state) + 0x160, 4) != 0) {
            ((TWindowSubSymbolChatParts *)arg0)->handle_add();
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 0x400) != 0) {
            ((TWindowSubSymbolChatParts *)arg0)->add_part();
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 2) != 0 || test_flag_4c__23TAdSinglePlyChrSelectGCFv(((u8 *)&controller_input_state) + 0x160, 2) != 0) {
            ((TWindowSubSymbolChatParts *)arg0)->handle_cancel();
        }
    }
    fn_80284FB8(arg0);
    if ((f32)arg0->timer >= lbl_805DD80C) {
        ((TWindowSubStatusDisp *)(arg0->sub88))->update_subwindow();
        ((TWindowSubStatusDisp *)(arg0->sub8C))->increment_counter();
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
}

void *__dt__25TWindowSubSymbolChatPartsFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__25TWindowSubSymbolChatParts;
        TWindowSubStatusDisp::destroy_allocation((s32)(*(void **)((s8 *)arg0 + 0x8C)), (s16)1);
        TWindowSubStatusDisp::destroy_status_display((s32)(*(void **)((s8 *)arg0 + 0x88)), (s16)1);
        ((TUnk_804CDFE8 *)arg0)->destroy_window(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Parts_80285D38 *TWindowSubSymbolChatParts__ct(Parts_80285D38 *arg0, void *arg1, s32 arg2, s32 arg3) {
    Vec2_80285D38 v;
    void *p;
    void *q;
    construct_with_parent__13TUnk_804CDFE8FPv(arg0, symbol_chat_parts_window_layout, 4, arg1);
    arg0->vt = __vt__25TWindowSubSymbolChatParts;
    arg0->f0 = TWindowSubSymbolChatParts__name;
    arg0->f70 = 0;
    arg0->f72 = 0;
    arg0->f73 = 0;
    arg0->f76 = 0;
    arg0->f7C = arg2;
    arg0->f80 = arg3;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x24);
    if (p != NULL) {
        p = ((TWindowSubStatusDisp *)p)->construct_type1_heading(get_message_10__20TWindowSubStatusDispFl(0x33), arg0->id);
    }
    arg0->sub88 = p;
    v.x = lbl_805DD7E4;
    v.y = lbl_805DD7E4;
    q = alloc__23TAdSinglePlyChrSelectGCFv(0xC);
    if (q != NULL) {
        q = reset_selection__20TWindowSubStatusDispFv(q, &v);
    }
    arg0->sub8C = q;
    return arg0;
}

}
