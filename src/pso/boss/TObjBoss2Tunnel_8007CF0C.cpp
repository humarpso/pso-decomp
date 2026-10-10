#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec2_8007DD28 { f32 x; f32 y; f32 z; };

struct Vtx_8007D828 { f32 x; f32 y; f32 z; u32 color; };

struct Quad_8007D828 { f32 x0; f32 y0; f32 x1; f32 y1; f32 u0; f32 v0; f32 u1; f32 v1; };

extern "C" {
extern Vec2_8007DD28 TObjBoss2Tunnel__data_8048DF2C;
extern const f32 lbl_805D9280;
extern const f32 lbl_805D9284;
extern u8 boss2_tunnel_state_flag;
extern s16 TObjBoss2Tunnel__snapshot_state;
extern u32 TObjBoss2Tunnel__snapshot_buffer;
extern s32 TObjBoss2Tunnel__snapshot_saved_flag;
void reset__12TQuestListVMFv(void);
void reset_state__15TObjBoss2TunnelFv(void);
void set_depth_buffer_settings_1__Fv(void);
void restore_saved_depth_alpha_state(void);
void reset_transform_state__10TObjPlayerFv(void);
void set_global_param__8TObjFishFi(s32);
void begin_screen_draw(s32);
void get_player__20TWindowSubStatusDispFv(void);
s32 draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(s32, s32);
void reset_player_state__15TObjBoss2TunnelFv(void);
void draw_projected_quads__15TObjBoss2TunnelFPvi(Vtx_8007D828 *, s32);
void TObjBoss2Tunnel__sub_803E2D10(s32);
extern Vec2_8007DD28 TObjBoss2Tunnel__data_8048DF2C;
extern s32 lbl_805D63F0;
void draw_snapshot_capture_overlay(void);
}

extern "C" {

void TObjBoss2Tunnel__sub_8007DD24(void);
void load_data_buffers(void);
s32 memcard_check_snapshot(s32 arg0, s32 *arg1);
s32 probe_and_check_card__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E0FA4(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 probe_card_slot__15TAdPlayerLoadGCFi(M2C_UNK);
s32 find_card_file__15TAdPlayerLoadGCFiPv(M2C_UNK, M2C_UNK *);
M2C_UNK init_capture_texture(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 get_load_result__15TAdPlayerLoadGCFv(M2C_UNK);
M2C_UNK memmove(void *, void *, s32);
M2C_UNK memset(void *, s32, s32);
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(M2C_UNK, M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 set_stream_and_load_file__6TLobbyFi(s32);
s32 update_lobby_scene__6TSceneFPv(s32);
u32 xmalloc__FUl(M2C_UNK);

extern s32 screen_binary_filename;
extern s16 TObjBoss2Tunnel__snapshot_state;
extern u32 boss2_tunnel_snapshot_buffer;
extern u32 TObjBoss2Tunnel__snapshot_buffer;
extern s32 TObjBoss2Tunnel__snapshot_saved_flag;

void load_data_buffers(void) {
    s32 temp_r31;
    s32 temp_r30;
    u32 temp_r3;

    TObjBoss2Tunnel__snapshot_saved_flag = 0;
    TObjBoss2Tunnel__snapshot_buffer = xmalloc__FUl(0x1E000);
    TObjBoss2Tunnel__snapshot_state = 0;
    init_capture_texture(0);
    temp_r3 = xmalloc__FUl(0x1818C);
    boss2_tunnel_snapshot_buffer = temp_r3;
    if (temp_r3 != 0U) {
        memset((void *)temp_r3, 0, 0x1818C);
    }
    temp_r31 = update_lobby_scene__6TSceneFPv(screen_binary_filename);
    if (temp_r31 <= 0x1818C) {
        temp_r30 = set_stream_and_load_file__6TLobbyFi(screen_binary_filename);
        if (temp_r30 != 0) {
            if ((u32) boss2_tunnel_snapshot_buffer != 0U) {
                memmove((void *)boss2_tunnel_snapshot_buffer, (void *)temp_r30, temp_r31);
            }
            safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r30);
        }
    }
}

extern M2C_UNK TObjBoss2Tunnel__data_80438A08[];

s32 memcard_check_snapshot(s32 arg0, s32 *arg1) {
    s32 temp_r3;

    if (get_instance__15TAdPlayerLoadGCFv() != 0) {
        return 0;
    }
    if (probe_card_slot__15TAdPlayerLoadGCFi(1) == 0) {
        if (arg1 != NULL) {
            *arg1 = -4;
        }
        return 0;
    }
    if (probe_and_check_card__15TAdPlayerLoadGCFi(1) == 0) {
        if (arg1 != NULL) {
            if ((u32)(get_load_result__15TAdPlayerLoadGCFv(1) + 0x10000) == 0xff83U) {
                if (arg1 != NULL) {
                    *arg1 = -6;
                }
            } else if ((u32)(get_load_result__15TAdPlayerLoadGCFv(1) + 0x10000) == 0xff21U) {
                if (arg1 != NULL) {
                    *arg1 = -8;
                }
            } else if (arg1 != NULL) {
                *arg1 = -2;
            }
        }
        return 0;
    }
    if (check_memcard_status__15TAdPlayerLoadGCFi(1) != 0) {
        if (arg1 != NULL) {
            *arg1 = -3;
        }
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(1) != 0) {
        if (arg1 != NULL) {
            *arg1 = -2;
        }
        return 0;
    }
    temp_r3 = find_card_file__15TAdPlayerLoadGCFiPv(1, TObjBoss2Tunnel__data_80438A08);
    if (temp_r3 == 0) {
        if (arg1 != NULL) {
            *arg1 = 1;
        }
        return 1;
    }
    if ((u32) (temp_r3 + 0x10000) == 0xff41U) {
        if (arg1 != NULL) {
            *arg1 = -9;
        }
        return 0;
    }
    if (arg0 != 1) {
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E0FA4(1) < 1) {
        if (arg1 != NULL) {
            *arg1 = -7;
        }
        return 0;
    }
    if (query_memcard_capacity__15TAdPlayerLoadGCFi(1, 0) < 0xF) {
        if (arg1 != NULL) {
            *arg1 = -1;
        }
        return 0;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    return 1;
}

void draw_snapshot_capture_overlay(void) {
    Quad_8007D828 q;
    Vtx_8007D828 v[4];
    s32 i;
    reset_transform_state__10TObjPlayerFv();
    for (i = 0; i < 4; i++) {
        v[i].z = 0.25f;
        v[i].color = 0x8F000000;
    }
    set_depth_buffer_settings_1__Fv();
    v[0].x = 0.0f;
    v[0].y = 0.0f;
    v[1].x = 640.0f;
    v[1].y = 0.0f;
    v[2].x = 0.0f;
    v[2].y = TObjBoss2Tunnel__data_8048DF2C.y - 96.0f;
    v[3].x = 640.0f;
    v[3].y = TObjBoss2Tunnel__data_8048DF2C.y - 96.0f;
    TObjBoss2Tunnel__sub_803E2D10(1);
    draw_projected_quads__15TObjBoss2TunnelFPvi(v, 4);
    reset_player_state__15TObjBoss2TunnelFv();
    v[0].x = 0.0f;
    v[0].y = TObjBoss2Tunnel__data_8048DF2C.y - 96.0f;
    v[1].x = TObjBoss2Tunnel__data_8048DF2C.x - 128.0f;
    v[1].y = TObjBoss2Tunnel__data_8048DF2C.y - 96.0f;
    v[2].x = 0.0f;
    v[2].y = 480.0f;
    v[3].x = TObjBoss2Tunnel__data_8048DF2C.x - 128.0f;
    v[3].y = 480.0f;
    TObjBoss2Tunnel__sub_803E2D10(1);
    draw_projected_quads__15TObjBoss2TunnelFPvi(v, 4);
    reset_player_state__15TObjBoss2TunnelFv();
    v[0].x = 128.0f + TObjBoss2Tunnel__data_8048DF2C.x;
    v[0].y = TObjBoss2Tunnel__data_8048DF2C.y - 96.0f;
    v[1].x = 640.0f;
    v[1].y = TObjBoss2Tunnel__data_8048DF2C.y - 96.0f;
    v[2].x = 128.0f + TObjBoss2Tunnel__data_8048DF2C.x;
    v[2].y = 96.0f + TObjBoss2Tunnel__data_8048DF2C.y;
    v[3].x = 640.0f;
    v[3].y = 96.0f + TObjBoss2Tunnel__data_8048DF2C.y;
    TObjBoss2Tunnel__sub_803E2D10(1);
    draw_projected_quads__15TObjBoss2TunnelFPvi(v, 4);
    reset_player_state__15TObjBoss2TunnelFv();
    v[0].x = TObjBoss2Tunnel__data_8048DF2C.x - 128.0f;
    v[0].y = 96.0f + TObjBoss2Tunnel__data_8048DF2C.y;
    v[1].x = 640.0f;
    v[1].y = 96.0f + TObjBoss2Tunnel__data_8048DF2C.y;
    v[2].x = TObjBoss2Tunnel__data_8048DF2C.x - 128.0f;
    v[2].y = 480.0f;
    v[3].x = 640.0f;
    v[3].y = 480.0f;
    TObjBoss2Tunnel__sub_803E2D10(1);
    draw_projected_quads__15TObjBoss2TunnelFPvi(v, 4);
    reset_player_state__15TObjBoss2TunnelFv();
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(1, -1);
    begin_screen_draw(1);
    q.x0 = TObjBoss2Tunnel__data_8048DF2C.x - 27.0f;
    q.y0 = TObjBoss2Tunnel__data_8048DF2C.y - 27.0f;
    q.x1 = TObjBoss2Tunnel__data_8048DF2C.x;
    q.y1 = TObjBoss2Tunnel__data_8048DF2C.y;
    q.u0 = 0.31764707f;
    q.v0 = 0.494117647f;
    q.u1 = 0.423529416f;
    q.v1 = 0.600000024f;
    draw_textured_quad_at_depth(&q, 0.5f);
    q.x0 = TObjBoss2Tunnel__data_8048DF2C.x;
    q.y0 = TObjBoss2Tunnel__data_8048DF2C.y - 27.0f;
    q.x1 = 27.0f + TObjBoss2Tunnel__data_8048DF2C.x;
    q.y1 = TObjBoss2Tunnel__data_8048DF2C.y;
    q.u0 = 0.31764707f;
    q.v0 = 0.494117647f;
    q.u1 = 0.423529416f;
    q.v1 = 0.600000024f;
    q.u0 = 0.423529416f;
    q.u1 = 0.31764707f;
    draw_textured_quad_at_depth(&q, 0.5f);
    q.x0 = TObjBoss2Tunnel__data_8048DF2C.x - 27.0f;
    q.y0 = TObjBoss2Tunnel__data_8048DF2C.y;
    q.x1 = TObjBoss2Tunnel__data_8048DF2C.x;
    q.y1 = 27.0f + TObjBoss2Tunnel__data_8048DF2C.y;
    q.u0 = 0.31764707f;
    q.v0 = 0.494117647f;
    q.u1 = 0.423529416f;
    q.v1 = 0.600000024f;
    q.v0 = 0.600000024f;
    q.v1 = 0.494117647f;
    draw_textured_quad_at_depth(&q, 0.5f);
    q.x0 = TObjBoss2Tunnel__data_8048DF2C.x;
    q.y0 = TObjBoss2Tunnel__data_8048DF2C.y;
    q.x1 = 27.0f + TObjBoss2Tunnel__data_8048DF2C.x;
    q.y1 = 27.0f + TObjBoss2Tunnel__data_8048DF2C.y;
    q.u0 = 0.31764707f;
    q.v0 = 0.494117647f;
    q.u1 = 0.423529416f;
    q.v1 = 0.600000024f;
    q.v0 = 0.600000024f;
    q.v1 = 0.494117647f;
    q.u0 = 0.423529416f;
    q.u1 = 0.31764707f;
    draw_textured_quad_at_depth(&q, 0.5f);
    get_player__20TWindowSubStatusDispFv();
    restore_saved_depth_alpha_state();
}

void TObjBoss2Tunnel__sub_8007DD24(void) {  }
void reset_state__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_8048DF2C.x = lbl_805D9280;
    boss2_tunnel_state_flag = 0;
    TObjBoss2Tunnel__data_8048DF2C.y = lbl_805D9284;
    TObjBoss2Tunnel__snapshot_buffer = 0;
    TObjBoss2Tunnel__snapshot_state = 0;
    TObjBoss2Tunnel__snapshot_saved_flag = 0;
    reset__12TQuestListVMFv();
}

}
