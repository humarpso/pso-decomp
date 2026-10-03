#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp { M2C_UNK value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp_size[sizeof(RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp) == 0x1C ? 1 : -1];

struct RecoveredGlobal_80271D00_lbl_804D0FC0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80271D00___vt__21TWindowSubAreaMapDisp {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
int initialize_subwindow__9TWindowDDFPv(void *);
void update_manual_scroll__21TWindowSubAreaMapDispFPv(void *);
void update_visibility__21TWindowSubAreaMapDispFPv(void *);
int update_subwindow__20TWindowSubStatusDispFPv(void *);
extern const f32 lbl_805DD4F0;
void run_task__21TWindowSubAreaMapDispFv(u8 *arg0);
u8 * destroy_window_base__9TWindowDDFPvs(void *, s16);
s32 destroy_status_display__20TWindowSubStatusDispFis(s32, s16);
M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK clear_active_flag__11TWindowCtrlFv();
M2C_UNK clear__13TRaderMapCoreFv();
extern RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp __vt__21TWindowSubAreaMapDisp;
u8 *__dt__21TWindowSubAreaMapDispFv(u8 *arg0, s16 arg1);
u8 *TLobby__sub_8001DC24();
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
u8 *TObjLuker__sub_801329B0(s32);
s32 alloc_buffer__11TOBoss4RockFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 measure_string_len__20TWindowSubStatusDispFPv(int);
s32 append_text_space();
s32 append_padded_number(int, int);
s32 text_builder_append(int);
s32 text_builder_reset();
s32 TWindowDD__sub_802466E0(void *, void *, void *, int);
s32 get_window_layout_position(int);
s32 fn_80271E40();
s32 TWindowSubStatusDisp__sub_802880BC(int, int, int);
s32 get_game_play_mode();
s32 strncpy(int, int, void *);
extern RecoveredGlobal_80271D00_lbl_804D0FC0 lbl_804D0FC0;
extern RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp __vt__21TWindowSubAreaMapDisp;
extern s32 lbl_805D3A08;
extern s32 lbl_805D53A0;
u8 *TWindowSubAreaMapDisp__ct(u8 *arg0);
}

extern "C" {

void apply_context_transform_to_rect(void *, void *);
s32 set_global_param__8TObjFishFi(s32);
void begin_screen_draw(s32);
void get_player__20TWindowSubStatusDispFv(void);
void draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(s32, s32);
extern const f64 lbl_8044F690;
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
s32 get_message_10__20TWindowSubStatusDispFPv(int);
void draw_window_text(void *, s32, s32, s32, f32);
void set_text_draw_params(void *, s32, s32, f32, f32);
extern const f32 lbl_805DD4DC;
extern const f32 lbl_805DD4E0;
extern const f32 lbl_805DD4E4;
extern const f32 lbl_805DD4E8;
extern const f32 lbl_805DD4EC;
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK draw_window_frame(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);
void render__21TWindowSubAreaMapDispFv(void *arg0);

struct Rect_80271848 { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

void fn_80271848(M2C_UNK arg0, u8 *arg1) {
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
    set_global_param__8TObjFishFi(lbl_805D63F0);
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
    draw_textured_quad_at_depth(&r, scale);
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
    draw_textured_quad_at_depth(&r, scale);
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
    draw_textured_quad_at_depth(&r, scale);
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
    draw_textured_quad_at_depth(&r, scale);
    get_player__20TWindowSubStatusDispFv();
}

void TWindowSubStatusDisp__sub_80271A6C(M2C_UNK arg0, u8 *arg1) {
    Vec2_80271A6C pos;
    s32 color;
    f32 scale;

    scale = lbl_805DD484 / (lbl_805DD488 + *(f32 *)(arg1 + 0x38));
    if (*(s32 *)(arg1 + 0x30) < 6) {
        color = ((s32)(lbl_805DD48C * (f32)(*(s32 *)(arg1 + 0x30) * 0xFF)) << 24) | 0xFFFFFF;
    } else {
        color = -1;
    }
    set_text_draw_params(arg1, 0, 0, scale, lbl_805DD4DC);
    pos.x = lbl_805DD4E0 + *(f32 *)(arg1 + 0x3C);
    pos.y = lbl_805DD4E4 + *(f32 *)(arg1 + 0x40);
    draw_window_text(&pos, get_message_10__20TWindowSubStatusDispFPv(0x11B), color, 0, lbl_805DD4E8);
    pos.y = lbl_805DD4EC + *(f32 *)(arg1 + 0x40);
    draw_window_text(&pos, get_message_10__20TWindowSubStatusDispFPv(0x11C), color, 0, lbl_805DD4E8);
}

void render__21TWindowSubAreaMapDispFv(void *arg0) {
    s32 temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame(arg0, temp_r3);
    forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, s32 *, 0x70), temp_r3);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        ((M2C_UNK (*)(void *, s32))TWindowSubStatusDisp__sub_80271A6C)(arg0, temp_r3);
        ((M2C_UNK (*)(void *, s32))fn_80271848)(arg0, temp_r3);
    }
}

void run_task__21TWindowSubAreaMapDispFv(u8 *arg0) {
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_visibility__21TWindowSubAreaMapDispFPv(arg0);
    update_manual_scroll__21TWindowSubAreaMapDispFPv(arg0);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD4F0) {
        update_subwindow__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u8 **, 0x70));
    }
}
u8 *__dt__21TWindowSubAreaMapDispFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__21TWindowSubAreaMapDisp.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x74));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
            clear_active_flag__11TWindowCtrlFv();
            clear__13TRaderMapCoreFv();
        }
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, s32 *, 0x70), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
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
    TWindowDD__sub_802466E0((void *) (arg0), (void *) (&lbl_804D0FC0.value), (void *) ((s16) lbl_805D53A0), (int) (get_window_layout_position((int) (0x59))));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80271D00___vt__21TWindowSubAreaMapDisp *)&__vt__21TWindowSubAreaMapDisp).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A08;
    if (get_game_play_mode() == 1) {
        text_builder_reset();
        text_builder_append((int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0x67))));
        append_text_space();
        append_padded_number((int) (fn_80271E40()), (int) (2U));
        var_r30 = (u8 *)(TLobby__sub_8001DC24());
    } else {
        var_r30 = (u8 *)(TObjLuker__sub_801329B0(get_global_state__14TOKeyMachine01Fv()));
    }
    temp_r3 = measure_string_len__20TWindowSubStatusDispFPv((int) (var_r30));
    M2C_FIELD(arg0, s32 *, 0x74) = alloc_buffer__11TOBoss4RockFPv((void *) (temp_r3 + 1));
    strncpy((int) (M2C_FIELD(arg0, s32 *, 0x74)), (int) (var_r30), (void *) (temp_r3 + 1));
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) ((void *)0x24));
    var_r0 = temp_r3_2;
    if (var_r0 != 0) {
        var_r0 = TWindowSubStatusDisp__sub_802880BC((int) (temp_r3_2), (int) (M2C_FIELD(arg0, s32 *, 0x74)), (int) ((s32) M2C_FIELD(arg0, s16 *, 0x20)));
    }
    M2C_FIELD(arg0, s32 *, 0x70) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    return arg0;
}

}
