#include "types.h"
#include "pso/misc/TLobby_8001D6A0.h"
#include "pso/misc/TWindowCtrl_80271DFC.h"
#include "pso/misc/TWindowSubStatusDisp_80228CC0.h"
#include "pso/misc/TWindowSubStatusDisp_8024FBA8.h"
#include "pso/misc/TWindowSubStatusDisp_803DEE6C.h"
#include "pso/misc/TWindowSubAreaMapDisp.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp { s32 value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp_size[sizeof(RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp) == 0x1C ? 1 : -1];

struct RecoveredGlobal_80271D00_lbl_804D0FC0 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80271D00___vt__21TWindowSubAreaMapDisp {
    s32 value;
    u8 remaining[0x18];
};

extern "C" {
extern const f32 lbl_805DD4F0;
void mem_free(void *p);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp __vt__21TWindowSubAreaMapDisp;
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32 arg0);
u8 *get_floor_destination_name(s32);
void *mem_alloc(u32 size);
s32 measure_string_len__20TWindowSubStatusDispFv(int);
void text_builder_append(u8 *str);
void text_builder_reset(void);
s32 get_window_layout_position(int);
s32 construct_type1_heading__20TWindowSubStatusDispFll(int, int, int);
s32 get_game_play_mode();
s32 strncpy(int, int, void *);
extern RecoveredGlobal_80271D00_lbl_804D0FC0 TWindowSubAreaMapDisp__window_parameters;
extern s32 TWindowSubAreaMapDisp__name;
extern s32 local_client_id;
void apply_context_transform_to_rect(void *, void *);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DD480;
extern const f32 lbl_805DD484;
extern const f32 lbl_805DD488;
extern const f32 lbl_805DD48C;
extern const f32 lbl_805DD490;
extern const f32 lbl_805DD494;
extern const f32 lbl_805DD498;
extern const f32 lbl_805DD49C;
extern const f32 lbl_805DD4A0;
extern const f32 lbl_805DD4A4;
extern const f32 lbl_805DD4A8;
extern const f32 lbl_805DD4AC;
extern const f32 lbl_805DD4B0;
extern const f32 lbl_805DD4B4;
extern const f32 lbl_805DD4B8;
extern const f32 lbl_805DD4BC;
extern const f32 lbl_805DD4C0;
extern const f32 lbl_805DD4C4;
extern const f32 lbl_805DD4C8;
extern const f32 lbl_805DD4CC;
extern const f32 lbl_805DD4D0;
extern const f32 lbl_805DD4D4;
extern const f32 lbl_805DD4D8;

struct Vec2_80271A6C {
    f32 x;
    f32 y;
};
s32 get_message_10__20TWindowSubStatusDispFl(int);
extern const f32 lbl_805DD4DC;
extern const f32 lbl_805DD4E0;
extern const f32 lbl_805DD4E4;
extern const f32 lbl_805DD4E8;
extern const f32 lbl_805DD4EC;
s32 draw_default_entry__9TWindowDDFl();
s32 draw_window_frame(void *, s32);
s32 forward_render__20TWindowSubStatusDispFv(s32, s32);

struct Rect_80271848 { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

void fn_80271848(s32 arg0, u8 *arg1) {
    Rect_80271848 r;
    s32 color;
    f32 scale;

    scale = lbl_805DD484 / (lbl_805DD488 + *(f32 *)(arg1 + 0x38));
    if (*(s32 *)(arg1 + 0x30) < 6) {
        color = ((s32)(lbl_805DD48C * (f32)(*(s32 *)(arg1 + 0x30) * 0xFF)) << 24) | 0xFFFFFF;
    } else {
        color = -1;
    }
    begin_screen_draw(1);
    TObjFish::set_global_param(lbl_805D63F0);
    set_draw_texture_and_color(0, color);
    {
        f32 y;
        f32 x;
        x = lbl_805DD490;
        y = lbl_805DD494;
        r.x0 = x;
        r.y0 = y;
        r.x1 = lbl_805DD498 + x;
        r.y1 = lbl_805DD49C + y;
    }
    r.u0 = lbl_805DD4A0;
    r.v0 = lbl_805DD4A4;
    r.u1 = lbl_805DD4A8;
    r.v1 = lbl_805DD4AC;
    apply_context_transform_to_rect(arg1, &r);
    draw_textured_quad_at_depth((f32 *)&r, scale);
    {
        f32 y;
        f32 x;
        x = lbl_805DD4B0;
        y = lbl_805DD494;
        r.x0 = x;
        r.y0 = y;
        r.x1 = lbl_805DD498 + x;
        r.y1 = lbl_805DD49C + y;
    }
    r.u0 = lbl_805DD4B4;
    r.u1 = lbl_805DD4B8;
    apply_context_transform_to_rect(arg1, &r);
    draw_textured_quad_at_depth((f32 *)&r, scale);
    {
        f32 y;
        f32 x;
        x = lbl_805DD4BC;
        y = lbl_805DD4C0;
        r.x0 = x;
        r.y0 = y;
        r.x1 = lbl_805DD49C + x;
        r.y1 = lbl_805DD498 + y;
    }
    r.u0 = lbl_805DD4C4;
    r.v0 = lbl_805DD480;
    r.u1 = lbl_805DD4C8;
    r.v1 = lbl_805DD4CC;
    apply_context_transform_to_rect(arg1, &r);
    draw_textured_quad_at_depth((f32 *)&r, scale);
    {
        f32 y;
        f32 x;
        x = lbl_805DD4BC;
        y = lbl_805DD4D0;
        r.x0 = x;
        r.y0 = y;
        r.x1 = lbl_805DD49C + x;
        r.y1 = lbl_805DD498 + y;
    }
    r.v0 = lbl_805DD4D4;
    r.v1 = lbl_805DD4D8;
    apply_context_transform_to_rect(arg1, &r);
    draw_textured_quad_at_depth((f32 *)&r, scale);
    TWindowSubStatusDisp::get_player();
}

void TWindowSubStatusDisp__sub_80271A6C(s32 arg0, u8 *arg1) {
    Vec2_80271A6C pos;
    s32 color;
    f32 scale;

    scale = lbl_805DD484 / (lbl_805DD488 + *(f32 *)(arg1 + 0x38));
    if (*(s32 *)(arg1 + 0x30) < 6) {
        color = ((s32)(lbl_805DD48C * (f32)(*(s32 *)(arg1 + 0x30) * 0xFF)) << 24) | 0xFFFFFF;
    } else {
        color = -1;
    }
    set_text_draw_params((s32)arg1, 0, 0, (f32)scale, (f32)lbl_805DD4DC);
    pos.x = lbl_805DD4E0 + *(f32 *)(arg1 + 0x3C);
    pos.y = lbl_805DD4E4 + *(f32 *)(arg1 + 0x40);
    draw_window_text((f32 *)&pos, (const char *)(get_message_10__20TWindowSubStatusDispFl(0x11B)), (s32)color, 0, (f32)lbl_805DD4E8);
    pos.y = lbl_805DD4EC + *(f32 *)(arg1 + 0x40);
    draw_window_text((f32 *)&pos, (const char *)(get_message_10__20TWindowSubStatusDispFl(0x11C)), (s32)color, 0, (f32)lbl_805DD4E8);
}

void TWindowSubAreaMapDisp::render() {
    s32 temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFl();
    draw_window_frame(this, temp_r3);
    forward_render__20TWindowSubStatusDispFv(this->m_70, temp_r3);
    if ((s32) this->m_6c != 0) {
        ((s32 (*)(void *, s32))TWindowSubStatusDisp__sub_80271A6C)(this, temp_r3);
        ((s32 (*)(void *, s32))fn_80271848)(this, temp_r3);
    }
}

void TWindowSubAreaMapDisp::run_task() {
    u8 *arg0 = (u8 *)this;
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TWindowSubAreaMapDisp *)arg0)->update_visibility();
    ((TWindowSubAreaMapDisp *)arg0)->update_manual_scroll();
    if ((f32) *(s32 *)&this->m_5c >= lbl_805DD4F0) {
        ((TWindowSubStatusDisp *)(*(u8 * *)&this->m_70))->update_subwindow();
    }
}
u8 *__dt__21TWindowSubAreaMapDispFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__21TWindowSubAreaMapDisp.value;
        if ((u32) ((TWindowSubAreaMapDisp *)arg0)->m_74 != 0U) {
            mem_free(*(void **)((s8 *)arg0 + 0x74));
            ((TWindowSubAreaMapDisp *)arg0)->m_74 = 0U;
        }
        if ((s32) ((TWindowSubAreaMapDisp *)arg0)->m_6c != 0) {
            TWindowCtrl::clear_active_flag();
            TRaderMapCore::clear();
        }
        TWindowSubStatusDisp::destroy_status_display(((TWindowSubAreaMapDisp *)arg0)->m_70, 1);
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80271D00_lbl_804D0FC0_size[sizeof(RecoveredGlobal_80271D00_lbl_804D0FC0) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80271D00___vt__21TWindowSubAreaMapDisp_size[sizeof(RecoveredGlobal_80271D00___vt__21TWindowSubAreaMapDisp) == 0x1C ? 1 : -1];
u8 *TWindowSubAreaMapDisp__ct(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    u8 *var_r30;
    ((TWindowDD *)arg0)->construct_base((u8 *)&TWindowSubAreaMapDisp__window_parameters.value, (s16)((void *) ((s16) local_client_id)), (u8 *)(get_window_layout_position(0x59)));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80271D00___vt__21TWindowSubAreaMapDisp *)&__vt__21TWindowSubAreaMapDisp).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSubAreaMapDisp__name;
    if (get_game_play_mode() == 1) {
        text_builder_reset();
        text_builder_append((u8 *)(TQuestVmDownLoadServer__sub_8006EF6C(0x67)));
        append_text_space();
        append_padded_number((get_window_count_ratio_value()), (2U));
        var_r30 = (u8 *)(get_shared_text_buffer());
    } else {
        var_r30 = (u8 *)(get_floor_destination_name(TOKeyMachine01::get_global_state()));
    }
    temp_r3 = measure_string_len__20TWindowSubStatusDispFv((int)var_r30);
    ((TWindowSubAreaMapDisp *)arg0)->m_74 = (s32)mem_alloc((temp_r3 + 1));
    strncpy((int) (((TWindowSubAreaMapDisp *)arg0)->m_74), (int)var_r30, (void *)(temp_r3 + 1));
    temp_r3_2 = ((TAdSinglePlyChrSelectGC *)((void *)0x24))->alloc();
    var_r0 = temp_r3_2;
    if (var_r0 != 0) {
        var_r0 = construct_type1_heading__20TWindowSubStatusDispFll(temp_r3_2, (int) (((TWindowSubAreaMapDisp *)arg0)->m_74), (int) ((s32) ((TWindowSubAreaMapDisp *)arg0)->m_20));
    }
    ((TWindowSubAreaMapDisp *)arg0)->m_70 = var_r0;
    ((TWindowSubAreaMapDisp *)arg0)->m_6c = 0;
    return arg0;
}

}
