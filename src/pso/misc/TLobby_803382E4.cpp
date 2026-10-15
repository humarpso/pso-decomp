#include "types.h"

struct G_80338534 { u8 p0[0x2C]; u8 a[0x40]; u8 b[0x60]; u8 c[0x40]; };

struct Fx_803382E4 {
    u8 pad0[0x14];
    s32 angle;
};

struct A_80338608 { u8 pad[0x14]; u32 col; };

struct B_80338608 { u8 pad[0xC]; u32 col; };

extern "C" {
s32 get_instance__15TAdPlayerLoadGCFv();
void TLobby__sub_803384D4(void);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(int);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
s32 prs_decompress_buffer(int, int);
s32 set_stream_state__6TLobbyFi(void *, int);
s32 load_gvm_texture_archive(int, void *);
extern s32 lbl_80477BC4[];
extern s32 lobby_request_flags;
void load_now_loading_texture__6TLobbyFv(void);
void TCameraCtrl__sub_80068EF0(void);
void restore_full_screen_view__11TCameraCtrlFv(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void set_global_param__8TObjFishFi(s32);
void set_texture_num(s32);
void reset_player_state__15TObjBoss2TunnelFv(void);
void draw_projected_quads__15TObjBoss2TunnelFPvi(void *, s32);
void TObjBoss2Tunnel__sub_803E2D10(s32);
void reset_player_state__6TLobbyFv(void);
void draw_projected_textured_strip(void *, s32);
void TLobby__sub_803E2EE4(s32);
extern s32 lbl_805D63F0;
extern s32 lobby_request_flags;
extern int info_icon_texture;
void TLobby__sub_80338534(void);
f32 cos_table_lookup(s32);
extern s32 lobby_request_flags;
extern s32 lobby_pulse_color_phase;
extern const f32 lbl_805DF9A0;
extern const f32 lbl_805DF9A4;
extern const f32 lbl_805DF9A8;
extern const f32 lbl_805DF9B4;
extern const f32 lbl_805DF9B8;
void update_pulse_colors__6TLobbyFi(s32 arg0);
void set_depth_buffer_settings_2__Fv(void);
void restore_saved_depth_alpha_state(void);
void draw_compass_sprite__10TObjPlayerFPviiif(void *, s32, u32, s32, f32);
u32 __cvt_fp2unsigned(f32);
void set_perspective_projection_from_fov(s32, f32, f32, f32, f32, f32);
extern const f32 lbl_805DF9AC;
extern const f32 lbl_805DF9B0;
extern "C" u8 lbl_80477B90[];
extern "C" u8 lbl_80477BA0[];
extern "C" u8 lbl_80477BB4[];
}

extern "C" {

void TWindowSubStatusDisp__sub_803386F0(void);
void handle_flag2_request__6TLobbyFv(void);
void load_info_icon(void);
int load_gvm_texture_file(void*);
s32 TLobby__sub_803DA16C(s32 *);
int free_if_valid__10TObjPlayerFi(void*);

void *lbl_804EF1B8[9] = {
    (void *)&lbl_80477B90, (void *)0x0, (void *)0x0, (void *)&lbl_80477BA0,
    (void *)0x0, (void *)0x0, (void *)&lbl_80477BB4, (void *)0x0,
    (void *)0x0,
};
__declspec(section ".data") void *lbl_804EF1DC[2] = {
    (void *)&lbl_804EF1B8, (void *)0x3,
};
void *title_pulse_color_table[16] = {
    (void *)0x44040000, (void *)0x43908000, (void *)0x3f000000, (void *)0xb4000000,
    (void *)0x44140000, (void *)0x43908000, (void *)0x3f000000, (void *)0xb4000000,
    (void *)0x44040000, (void *)0x43b08000, (void *)0x3f000000, (void *)0xb4000000,
    (void *)0x44140000, (void *)0x43b08000, (void *)0x3f000000, (void *)0xb4000000,
};
void *lobby_pulse_color_table[48] = {
    (void *)0x44040000, (void *)0x43908000, (void *)0x3f000000, (void *)0x0,
    (void *)0x0, (void *)0xffffffff, (void *)0x44140000, (void *)0x43908000,
    (void *)0x3f000000, (void *)0x3f800000, (void *)0x0, (void *)0xffffffff,
    (void *)0x44040000, (void *)0x43b08000, (void *)0x3f000000, (void *)0x0,
    (void *)0x3f800000, (void *)0xffffffff, (void *)0x44140000, (void *)0x43b08000,
    (void *)0x3f000000, (void *)0x3f800000, (void *)0x3f800000, (void *)0xffffffff,
    (void *)0x43f80000, (void *)0x43b18000, (void *)0x3f000000, (void *)0x3ec80000,
    (void *)0x0, (void *)0xffffffff, (void *)0x441c0000, (void *)0x43b18000,
    (void *)0x3f000000, (void *)0x3f640000, (void *)0x0, (void *)0xffffffff,
    (void *)0x43f80000, (void *)0x43cd8000, (void *)0x3f000000, (void *)0x3ec80000,
    (void *)0x3e600000, (void *)0xffffffff, (void *)0x441c0000, (void *)0x43cd8000,
    (void *)0x3f000000, (void *)0x3f640000, (void *)0x3e600000, (void *)0xffffffff,
};
void *lbl_804EF2E4[24] = {
    (void *)0x43b80000, (void *)0x43b00000, (void *)0x3f000000, (void *)0x0,
    (void *)0x0, (void *)0xffffffff, (void *)0x43b80000, (void *)0x43f00000,
    (void *)0x3f000000, (void *)0x0, (void *)0x3f800000, (void *)0xffffffff,
    (void *)0x43f88000, (void *)0x43b00000, (void *)0x3f000000, (void *)0x3f800000,
    (void *)0x0, (void *)0xffffffff, (void *)0x43f88000, (void *)0x43f00000,
    (void *)0x3f000000, (void *)0x3f800000, (void *)0x3f800000, (void *)0xffffffff,
};
void *lbl_804EF344[24] = {
    (void *)0x43f80000, (void *)0x43b00000, (void *)0x3f000000, (void *)0x0,
    (void *)0x0, (void *)0xffffffff, (void *)0x43f80000, (void *)0x43f00000,
    (void *)0x3f000000, (void *)0x0, (void *)0x3f800000, (void *)0xffffffff,
    (void *)0x441c0000, (void *)0x43b00000, (void *)0x3f000000, (void *)0x3f800000,
    (void *)0x0, (void *)0xffffffff, (void *)0x441c0000, (void *)0x43f00000,
    (void *)0x3f000000, (void *)0x3f800000, (void *)0x3f800000, (void *)0xffffffff,
};
void *lbl_804EF3A4[15] = {
    (void *)0x400040, (void *)0x200020, (void *)0x0, (void *)0x1000100,
    (void *)0x20000, (void *)0x400040, (void *)0x200020, (void *)0x0,
    (void *)0x1000100, (void *)0x20000, (void *)0x400040, (void *)0x200020,
    (void *)0x0, (void *)0x1000100, (void *)0x20000,
};
void *lbl_804EF3E0[8] = {
    (void *)0x43f80000, (void *)0x43d00000, (void *)0x0, (void *)0x3f800000,
    (void *)0x3f800000, (void *)0x0, (void *)&lbl_804EF1DC, (void *)&lbl_804EF3A4,
};

#define lbl_804EF1B8 (*(G_80338534 *)lbl_804EF1B8)
#define lbl_804EF1DC ((s32 *)lbl_804EF1DC)
#define title_pulse_color_table ((B_80338608 *)title_pulse_color_table)
#define lobby_pulse_color_table ((A_80338608 *)lobby_pulse_color_table)

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline s32 step_803382E4(Fx_803382E4 *fx) {
    fx->angle += 0x16C;
    return fx->angle;
}
#pragma fp_contract on
void TLobby__sub_803382E4(void) {
    Fx_803382E4 *fx;
    f32 v;
    f32 alpha;

    if (lobby_request_flags & 2) {
        fx = (Fx_803382E4 *)(lbl_804EF3E0);
        fx->angle += 0x16C;
        v = lbl_805DF9A4 + cos_table_lookup(fx->angle);
        alpha = v * lbl_805DF9A8 + lbl_805DF9A0;
        set_perspective_projection_from_fov(0x3555, lbl_805DF9AC, lbl_805DF9A4, lbl_805DF9B0, lbl_805DF9A8, v);
        set_depth_buffer_settings_2__Fv();
        begin_effect_render__13TParticleCtrlFv();
        restore_full_screen_view__11TCameraCtrlFv();
        reset_transform_state__10TObjPlayerFv();
        set_global_param__8TObjFishFi((s32)(lbl_804EF1DC));
        set_texture_num(0);
        TLobby__sub_803E2EE4(0);
        draw_projected_textured_strip((void *)(lbl_804EF2E4), 4);
        reset_player_state__6TLobbyFv();
        set_texture_num(1);
        TLobby__sub_803E2EE4(0);
        draw_projected_textured_strip((void *)(lbl_804EF344), 4);
        reset_player_state__6TLobbyFv();
        init_xyz_limits__10TObjPlayerFv();
        draw_compass_sprite__10TObjPlayerFPviiif((void *)(lbl_804EF3E0), 2, (__cvt_fp2unsigned(lbl_805DF9B4 * alpha) << 24) | 0xFFFFFF, 0x21, lbl_805DF9A0);
        reset_transform_state__10TObjPlayerFv();
        TCameraCtrl__sub_80068EF0();
        end_effect_render__13TParticleCtrlFv();
        restore_saved_depth_alpha_state();
    }
}
#pragma pop

extern s32 lobby_request_flags;

void handle_flag2_request__6TLobbyFv(void) {
    if (lobby_request_flags & 2) {
        TLobby__sub_803DA16C(lbl_804EF1DC);
        lobby_request_flags &= 0xFFFFFFFD;
    }
}

    extern int info_icon_texture;

void load_now_loading_texture__6TLobbyFv(void) {
    s32 temp_r31;
    s32 temp_r3;
    if (!(lobby_request_flags & 2)) {
        temp_r31 = alloc__22TQuestVmDownLoadServerFPv((int) (0x11000));
        temp_r3 = alloc__22TQuestVmDownLoadServerFPv((int) (0x2000));
        set_stream_state__6TLobbyFi((void *) (lbl_80477BC4), (int) (temp_r3));
        prs_decompress_buffer((int) (temp_r3), (int) (temp_r31));
        load_gvm_texture_archive((int) (temp_r31), (void *) (lbl_804EF1DC));
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) (temp_r3));
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) (temp_r31));
        lobby_request_flags |= 2;
    }
}

void TLobby__sub_803384D4(void) {
    s32 temp_r3;
    temp_r3 = get_instance__15TAdPlayerLoadGCFv();
    switch (temp_r3) {
    case 5:
    case 6:
    case 11:
    case 12:
    case 15:
    case 19:
        update_pulse_colors__6TLobbyFi((s32)((int) (0)));
        TLobby__sub_80338534();
        return;
    case 18:
        update_pulse_colors__6TLobbyFi((s32)((int) (1)));
        TLobby__sub_80338534();
    default:
        return;
    }
}

#pragma push
#pragma opt_propagation off
void TLobby__sub_80338534(void) {
    G_80338534 *t = &lbl_804EF1B8;
    restore_full_screen_view__11TCameraCtrlFv();
    reset_transform_state__10TObjPlayerFv();
    begin_effect_render__13TParticleCtrlFv();
    TObjBoss2Tunnel__sub_803E2D10(1);
    draw_projected_quads__15TObjBoss2TunnelFPvi(t->a, 4);
    reset_player_state__15TObjBoss2TunnelFv();
    if ((u32)info_icon_texture != 0) {
        set_global_param__8TObjFishFi(info_icon_texture);
        if (lobby_request_flags & 4) {
            set_texture_num(1);
        } else {
            set_texture_num(0);
        }
        init_xyz_limits__10TObjPlayerFv();
        TLobby__sub_803E2EE4(1);
        draw_projected_textured_strip(t->b, 4);
        reset_player_state__6TLobbyFv();
        reset_transform_state__10TObjPlayerFv();
        set_global_param__8TObjFishFi(lbl_805D63F0);
        set_texture_num(5);
        TLobby__sub_803E2EE4(1);
        draw_projected_textured_strip(t->c, 4);
        reset_player_state__6TLobbyFv();
    }
    reset_transform_state__10TObjPlayerFv();
    TCameraCtrl__sub_80068EF0();
    end_effect_render__13TParticleCtrlFv();
}
#pragma pop

#pragma push
#pragma fp_contract on
void update_pulse_colors__6TLobbyFi(s32 arg0) {
    f32 t;
    u32 c0;
    u32 c1;
    s32 i;
    B_80338608 *b;
    A_80338608 *a;
    f32 s = lbl_805DF9A4 + cos_table_lookup(lobby_pulse_color_phase);
    t = s * lbl_805DF9A8 + lbl_805DF9A0;
    lobby_pulse_color_phase += 0xCCC;
    c0 = ((u32)(lbl_805DF9B4 * t) << 24) | 0xFFFFFF;
    c1 = (u32)(lbl_805DF9B8 * t) << 24;
    a = lobby_pulse_color_table;
    b = title_pulse_color_table;
    for (i = 0; i < 4; i++) {
        a->col = c0;
        a++;
        b->col = c1;
        b++;
    }
    switch (arg0) {
    case 0:
        lobby_request_flags &= ~4;
        break;
    case 1:
        lobby_request_flags |= 4;
        break;
    }
}
#pragma pop

void TWindowSubStatusDisp__sub_803386F0(void) { free_if_valid__10TObjPlayerFi((void*)(info_icon_texture)); }

    extern unsigned char lbl_80477BD4[];
    extern int info_icon_texture;
void load_info_icon(void) { info_icon_texture = load_gvm_texture_file(lbl_80477BD4); }

}
