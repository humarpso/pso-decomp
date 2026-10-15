#include "pso/render/DebugFont.h"
#include "types.h"

extern "C" {

void draw_with_camera__6TLobbyFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
s32 TCameraCtrl__sub_80068EF0();
s32 restore_full_screen_view__11TCameraCtrlFv();
s32 TLobby__sub_80228154(s32, s32, s32, f32);

void draw_with_camera__6TLobbyFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    restore_full_screen_view__11TCameraCtrlFv();
    TLobby__sub_80228154(arg0, arg1, arg2, farg0);
    TCameraCtrl__sub_80068EF0();
}

typedef struct Vtx_801E2FEC { f32 x, y, z; f32 u, v; u32 color; } Vtx_801E2FEC;
typedef struct Rect_801E2FEC { s16 x, y, w, h; u8 pad8[8]; s16 tex; } Rect_801E2FEC;
typedef struct Self_801E2FEC { f32 x, y, z; u8 padC[0xC]; s32 param; Rect_801E2FEC *rect; } Self_801E2FEC;

void set_global_param__8TObjFishFi(s32);
void set_texture_num(s32);
void draw_particle_strip(void *, int, int);

void draw_shadow_quad__10TObjPlayerFPvii(Self_801E2FEC *self, s32 arg1, s32 flags) {
    Vtx_801E2FEC v[4];
    f32 ey, ex, cx, cy, z;
    f32 u0, v0, u1, v1;

    set_global_param__8TObjFishFi(self->param);
    set_texture_num(self->rect->tex);
    u0 = 0.01f;
    u1 = 0.99f;
    v0 = u0;
    v1 = u1;
    if (flags & 4) {
        u0 = u1;
        u1 = v0;
    }
    if (flags & 8) {
        v0 = 0.99f;
        v1 = 0.01f;
    }
    cx = self->x + 0.5f * (f32)self->rect->x;
    cy = self->y + 0.5f * (f32)self->rect->y;
    ex = 0.5f * (f32)self->rect->x - (f32)self->rect->w;
    ey = 0.5f * (f32)self->rect->y - (f32)self->rect->h;
    v[0].x = cx - ex;
    v[0].y = cy - ey;
    v[1].x = cx - ex;
    v[1].y = cy + ey;
    v[2].x = cx + ex;
    v[2].y = cy - ey;
    v[3].x = cx + ex;
    v[3].y = cy + ey;
    v[0].u = u0;
    v[0].v = v0;
    v[1].u = u0;
    v[1].v = v1;
    v[2].u = u1;
    v[2].v = v0;
    v[3].u = u1;
    v[3].v = v1;
    z = self->z;
    v[0].z = z;
    v[0].color = 0xFF000000;
    v[1].z = z;
    v[1].color = 0xFF000000;
    v[2].z = z;
    v[2].color = 0xFF000000;
    v[3].z = z;
    v[3].color = 0xFF000000;
    draw_particle_strip(v, 4, 1);
}

}

struct Rect_801E317C { f32 x0, y0, x1, y1; };

extern "C" {
extern f32 lbl_805D3588;
extern f32 camera_viewport_center_y;
void TCameraCtrl__sub_801E32D8(f32 farg0, f32 farg1);
extern f32 lbl_805D3588;
extern f32 camera_viewport_center_y;
void GXSetScissor(u32, u32, u32, u32);
void set_viewport_scissor__11TCameraCtrlFiPv(s32 mode, Rect_801E317C *r);
}

extern "C" {

void camera_renderer_setup_nop(void);
int TObjPlayer__sub_803DAD28(void*);
int draw_textured_vertices__10TObjPlayerFPvii(void*, void*, void*);

void set_viewport_scissor__11TCameraCtrlFiPv(s32 mode, Rect_801E317C *r) {
    f32 adj;
    f32 x;
    f32 y;
    f32 ox;
    f32 w;
    f32 h;
    f32 oy;
    if (mode == 2) {
        x = 32.0f * r->x0;
        y = 32.0f * r->y0;
        w = 32.0f * (r->x1 - r->x0);
        h = 32.0f * (1.0f + (r->y1 - r->y0));
        if (h >= 480.0f) {
            h = 480.0f;
        }
        if (w >= 640.0f) {
            w = 640.0f;
        }
        ox = lbl_805D3588 - 320.0f;
        oy = camera_viewport_center_y - 240.0f;
        if (oy >= 0.0f) {
            adj = -oy;
            oy = 0.0f;
        }
        GXSetScissor(x - ox, y + adj, w, h - oy);
    } else {
        GXSetScissor(0, 0, 640, 480);
    }
}

void TCameraCtrl__sub_801E32D8(f32 farg0, f32 farg1) {
    lbl_805D3588 = farg0;
    camera_viewport_center_y = farg1;
}

void camera_renderer_setup_nop(void) {  }

}

extern "C" {

int TObjPlayer__sub_803DAD28(void*);
int draw_textured_vertices__10TObjPlayerFPvii(void*, void*, void*);
void camera_renderer_setup_nop(void);

void draw_transformed_primitive__9TWindowDDFPvPvPvPv(void* p, void* a1, void* a2, void* a3) { TObjPlayer__sub_803DAD28(a2); draw_textured_vertices__10TObjPlayerFPvii(p, a1, a3); }

}

struct Ctrl_801E352C {
    u8 pad[4];
    u32 *data;
};

struct Vec2_801E3330 { f32 x, y; };

struct Lines_801E3330 {
    Vec2_801E3330 *verts;
    u32 *colors;
};

struct Vec3_801E341C { f32 x, y, z; };

struct Lines_801E341C {
    Vec3_801E341C *positions;
    u32 *colors;
};

struct Strip_801E35C4 {
    Vec2_801E3330 *verts;
    u32 *colors;
    s32 f8;
    s32 count;
};

struct Vec3_801E3784 { f32 x, y, z; };

struct UV_801E3784 { s16 u, v; };

struct Tris_801E3784 {
    Vec3_801E3784 *positions;
    u32 *colors;
    UV_801E3784 *uvs;
};

extern "C" {
void draw_strip_swap_color__15TWindowCtrlMainFPviif(Ctrl_801E352C *c, s32 n, s32 flags, f32 _w3);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void GXBegin(s32, s32, u16);
void GXSetLineWidth(s32, s32);
void load_screen_space_matrix__10TObjPlayerFv(void);
void setup_opaque_color_draw(void);
void TObjPlayer__sub_803E21DC(void);
void draw_color_lines(Lines_801E3330 *l, s32 n, s32 flags, f32 scale);
void reset_line_width(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void GXBegin(s32, s32, u16);
void GXSetLineWidth(s32, s32);
void load_camera_view_matrix(void);
void setup_opaque_color_draw(void);
void TObjPlayer__sub_803E21DC(void);
extern int current_line_width;
void draw_line_list(Lines_801E341C *l, s32 n, u32 flags);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void GXBegin(s32, s32, u16);
void load_screen_space_matrix__10TObjPlayerFv(void);
void setup_opaque_color_draw(void);
void TObjPlayer__sub_803E21DC(void);
void setup_blended_textured_draw(void);
void setup_render__10TObjPlayerFv(void);
void draw_color_lines(Lines_801E3330 *l, s32 n, s32 flags, f32 scale);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TObjCMHairMenu__sub_801E3F54(void *, void *);
void fn_801E3F44(f32, f32);
void draw_tri_fan_2d__14TObjCMHairMenuFPviif(Strip_801E35C4 *self, s32 count, s32 flags, f32 scale);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void fn_801E3F44(f32, f32);
void GXBegin(s32, s32, u16);
void load_camera_view_matrix(void);
void setup_opaque_color_draw(void);
void TObjPlayer__sub_803E21DC(void);
void setup_render__10TObjPlayerFv(void);
void setup_blended_textured_draw(void);
void TObjPlayer__sub_803E2248(void);
void load_context_texture_obj(void);
void draw_tri_fan_3d__10TObjPlayerFPviUi(Tris_801E3784 *t, s32 n, u32 flags);
}

extern "C" {

void reset_line_width(void);
void set_line_width(int a0);
void camera_renderer_setup_nop(void);
int TObjPlayer__sub_803DAD28(void*);
int draw_textured_vertices__10TObjPlayerFPvii(void*, void*, void*);

    extern int current_line_width;

void draw_color_lines(Lines_801E3330 *l, s32 n, s32 flags, f32 scale) {
    u32 c;
    load_screen_space_matrix__10TObjPlayerFv();
    if (flags & 4) {
        TObjPlayer__sub_803E21DC();
    } else {
        setup_opaque_color_draw();
    }
    GXSetLineWidth(0xC, 0);
    if (flags & 0x10) {
        GXBegin(0xB0, 4, n);
    } else {
        GXBegin(0xA8, 4, n);
    }
    while (n > 0) {
        n--;
        TObjPlayer__sub_801E3F30(scale * l->verts[n].x, scale * l->verts[n].y, scale);
        c = l->colors[n];
        TObjPlayer__sub_801E3F24((c << 8) | (c >> 24));
    }
    TObjEneRe4Sorcerer__sub_801E3F20();
}

void draw_line_list(Lines_801E341C *l, s32 n, u32 flags) {
    Vec3_801E341C *p;
    u32 *c;
    load_camera_view_matrix();
    if (flags & 4) {
        TObjPlayer__sub_803E21DC();
    } else {
        setup_opaque_color_draw();
    }
    GXSetLineWidth((u8)current_line_width, 0);
    if (flags & 0x10) {
        GXBegin(0xB0, 4, n * 2);
    } else {
        GXBegin(0xA8, 4, n * 2);
    }
    p = l->positions;
    c = l->colors;
    while (n > 0) {
        TObjPlayer__sub_801E3F30(p->x, p->y, p->z);
        TObjPlayer__sub_801E3F24((*c << 8) | (*c >> 24));
        c++;
        p++;
        TObjPlayer__sub_801E3F30(p->x, p->y, p->z);
        TObjPlayer__sub_801E3F24((*c << 8) | (*c >> 24));
        if (!(flags & 0x10)) {
            p++;
            c++;
        }
        n--;
    }
    TObjEneRe4Sorcerer__sub_801E3F20();
    reset_line_width();
}

void reset_line_width(void) { current_line_width = 12; }

    extern int current_line_width;
void set_line_width(int a0) { current_line_width = a0; }
void draw_strip_swap_color__15TWindowCtrlMainFPviif(Ctrl_801E352C *c, s32 n, s32 flags, f32 _w3) {
    s32 i;
    u32 x;
    u32 *p;
    if (!(flags & 2)) {
        draw_tri_fan_2d__14TObjCMHairMenuFPviif((Strip_801E35C4 *)(c), (s32)(n), (s32)(flags), _w3);
        return;
    }
    p = c->data;
    for (i = 0; i < n; i++) {
        x = *p;
        *p = (x << 8) | (x >> 24);
        p++;
    }
    draw_tri_fan_2d__14TObjCMHairMenuFPviif((Strip_801E35C4 *)(c), (s32)(n), (s32)(flags), _w3);
    {
    u32 *q = c->data;
    u32 y;
    for (i = 0; i < n; i++) {
        y = *q;
        *q = (y >> 8) | (y << 24);
        q++;
    }
    }
}
void draw_tri_fan_2d__14TObjCMHairMenuFPviif(Strip_801E35C4 *self, s32 count, s32 flags, f32 scale) {
    Strip_801E35C4 tmp;
    Vec2_801E3330 v[2];
    u32 c[2];
    u32 tex;
    Vec2_801E3330 *pts;
    s32 i;
    s16 *cols;
    if (!(flags & 2)) {
        tmp.verts = v;
        tmp.colors = c;
        tmp.f8 = self->f8;
        tmp.count = 2;
        draw_color_lines((Lines_801E3330 *)self, count, flags | 0x10, scale);
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&v[0], &self->verts[0]);
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&v[1], &self->verts[self->count - 1]);
        TObjCMHairMenu__sub_801E3F54(&c[0], &self->colors[0]);
        TObjCMHairMenu__sub_801E3F54(&c[1], &self->colors[self->count - 1]);
        draw_color_lines((Lines_801E3330 *)&tmp, 2, flags, scale);
        return;
    }
    load_screen_space_matrix__10TObjPlayerFv();
    tex = flags & 8;
    if (tex) {
        if (flags & 4) {
            setup_blended_textured_draw();
        } else {
            setup_render__10TObjPlayerFv();
        }
    } else if (flags & 4) {
        TObjPlayer__sub_803E21DC();
    } else {
        setup_opaque_color_draw();
    }
    GXBegin(0xA0, 4, count);
    pts = self->verts;
    cols = (s16 *)self->colors;
    for (i = 0; i < count; pts++, cols += 2, i++) {
        TObjPlayer__sub_801E3F30(pts->x * scale, pts->y * scale, scale);
        TObjPlayer__sub_801E3F24(*(u32 *)cols);
        if (tex) {
            fn_801E3F44((f32)cols[0] / 255.0f, (f32)cols[1] / 255.0f);
        }
    }
    TObjEneRe4Sorcerer__sub_801E3F20();
}
void draw_tri_fan_3d__10TObjPlayerFPviUi(Tris_801E3784 *t, s32 n, u32 flags) {
    Vec3_801E3784 *p;
    UV_801E3784 *uv;
    u32 *c;
    s32 i;
    load_camera_view_matrix();
    if (flags & 8) {
        if (flags & 4) {
            setup_blended_textured_draw();
        } else {
            setup_render__10TObjPlayerFv();
        }
        load_context_texture_obj();
    } else if (flags & 4) {
        TObjPlayer__sub_803E21DC();
    } else {
        setup_opaque_color_draw();
    }
    GXBegin(0xA0, 4, n);
    c = t->colors;
    p = t->positions;
    uv = t->uvs;
    for (i = 0; i < n; i++) {
        TObjPlayer__sub_801E3F30(p->x, p->y, p->z);
        TObjPlayer__sub_801E3F24(*c);
        if (flags & 8) {
            fn_801E3F44(uv->u / 255.0f, uv->v / 255.0f);
            uv++;
        }
        p++;
        c++;
    }
    TObjEneRe4Sorcerer__sub_801E3F20();
    TObjPlayer__sub_803E2248();
}

void DCFlushRange(void *, u32);
void *alloc__22TQuestVmDownLoadServerFPv(u32);
void TLobby__sub_801E3CF0(u32 *);
s32 bswap32__6TLobbyFUi(s32);
void move_data__6TLobbyFv(void *, void *, int);

s32 *TLobby__sub_801E38A0(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    u8 *p;
    s32 pos;
    s32 tag;
    u32 size;
    u8 b0;
    u8 b1;
    u8 b2;
    u8 b3;
    s32 off;

    pos = 0;
    p = (u8 *)(arg0 + *arg1);
    move_data__6TLobbyFv(&tag, p, 4);
    TLobby__sub_801E3CF0((u32 *)&tag);
    move_data__6TLobbyFv(&size, p + 4, 4);
    TLobby__sub_801E3CF0(&size);
    p += 8;
    *arg1 += 8;
    tag = bswap32__6TLobbyFUi(tag);
    switch (tag) {
    case 0x4E4A494E:
        *arg2 = 0x4E4A494E;
        break;
    case 0x4E4A434D:
    case 0x474A434D:
        *arg2 = 0x4E4A434D;
        break;
    case 0x474A424D:
        *arg2 = 0x4E4A424D;
        break;
    case 0x4E4A544C:
    case 0x474A544C:
        *arg2 = 0x4E4A544C;
        break;
    case 0x4E4A4C49:
        *arg2 = 0x4E4A4C49;
        break;
    case 0x4E4A4341:
        *arg2 = 0x4E4A4341;
        break;
    case 0x4E4D444D:
    case 0x474D444D:
        *arg2 = 0x4E4D444D;
        break;
    case 0x474C494D:
        *arg2 = 0x4E4C494D;
        break;
    case 0x4743414D:
        *arg2 = 0x4E43414D;
        break;
    case 0x4E53534D:
    case 0x4753534D:
        *arg2 = 0x4E53534D;
        break;
    default:
        goto bad;
    }
    arg3 = (arg3 == 0) ? (s32 *)alloc__22TQuestVmDownLoadServerFPv(size) : arg3;
    if (arg3 == 0) {
        return 0;
    }
    if (arg4 != 0) {
        *arg4 = size;
    }
    move_data__6TLobbyFv(arg3, p, size);
    DCFlushRange(arg3, size);
    p += size;
    *arg1 += size;
    goto next;
bad:
    *arg2 = 0x2A2A2A2A;
    return 0;
next:
    move_data__6TLobbyFv(&tag, p, 4);
    TLobby__sub_801E3CF0((u32 *)&tag);
    *arg1 += 4;
    tag = bswap32__6TLobbyFUi(tag);
    if (tag == 0x504F4630) {
        move_data__6TLobbyFv(&size, p + 4, 4);
        TLobby__sub_801E3CF0(&size);
        p += 8;
        *arg1 += 4;
        while (size != 0) {
            move_data__6TLobbyFv(&b0, p, 1);
            p++;
            *arg1 += 1;
            size--;
            switch (b0 & 0xC0) {
            case 0:
                continue;
            case 0x40:
                off = b0 & 0x3F;
                break;
            case 0x80:
                move_data__6TLobbyFv(&b1, p, 1);
                p++;
                size--;
                *arg1 += 1;
                off = ((b0 << 8) & 0x3F00) | b1;
                break;
            case 0xC0:
                move_data__6TLobbyFv(&b1, p, 1);
                size--;
                move_data__6TLobbyFv(&b2, p + 1, 1);
                size--;
                move_data__6TLobbyFv(&b3, p + 2, 1);
                p += 3;
                size--;
                *arg1 += 3;
                off = (((b0 << 24) & 0x3F000000) | (b1 << 16) | (b2 << 8)) | b3;
                break;
            default:
                continue;
            }
            pos += off * 4;
            if (*(u32 *)((u8 *)arg3 + pos) != 0) {
                *(u32 *)((u8 *)arg3 + pos) += (u32)arg3;
            }
        }
    }
    return arg3;
}

void TLobby__sub_801E3CF0(u32 *p) {
    u32 v = *p;
    *p = (v >> 24) | ((v >> 8) & 0xFF00) | ((v << 8) & 0xFF0000) | (v << 24);
}
}

extern "C" {

void render_model_tree__12TBoss8DragonFPvPv(void* p, void* a1);
void render_tree__10TObjPlayerFPv(void *arg0);
int bind_motion_context(void*);

void render_model_tree__12TBoss8DragonFPvPv(void* p, void* a1) { bind_motion_context(a1); render_tree__10TObjPlayerFPv(p); }

}

struct RecoveredGlobal_801E3E24_TKeyBoardControl__data_80506270 { s32 value; u8 remaining[0xAC]; };
typedef char RecoveredGlobal_801E3E24_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801E3E24_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];

extern "C" {
s32 run_disk_error_check__6TLobbyFv();
s32 run_frame__6TLobbyFv();
s32 TLobby__sub_803382E4();
s32 read_afs_toc__6TLobbyFi(void *);
s32 adxf_open_file__6TLobbyFiPviPv(void *, void *, int, void *);
s32 TLobby__sub_801E3E9C(s32 arg0, s32 arg1, s32 arg2);
s32 run_disk_error_check__6TLobbyFv();
s32 reset_state_byte__6TLobbyFv();
s32 disable_disconnected_ports__16TKeyBoardControlFv(void *);
s32 update_global_sound_frame();
s32 flush_input__16TKeyBoardControlFv();
s32 read_afs_toc__6TLobbyFi(void *);
s32 adxf_open_file__6TLobbyFiPviPv(void *, void *, int, void *);
s32 read_pads__16TKeyBoardControlFv();
extern RecoveredGlobal_801E3E24_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
s32 TKeyBoardControl__sub_801E3E24(s32 arg0, s32 arg1, s32 arg2);
void bswap_16__FPUs(u16 *p);
void bswap_32__FPUl(u32 *p);
}

extern "C" {

void render_tick__Fv(void);
void render_tree__10TObjPlayerFPv(void *arg0);
s32 GXSetViewport(f32, f32, f32, f32, f32, f32);
s32 GXSetZMode(s32, s32, s32);
extern s32 (*chunk_model_node_callback)(void *);
s32 restore_full_screen_view__11TCameraCtrlFv();
s32 TKeyBoardControl__sub_8000F7FC();
s32 compose_motion_node_matrix(void *);

s32 push_matrix();
s32 pop_matrix();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 fn_803DCEC8();
s32 fn_803DCF0C();
s32 run_tasks__16TKeyBoardControlFv();
s32 set_cull_none__8TObjFishFv();

void render_tree__10TObjPlayerFPv(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    do {
        push_matrix();
        compose_motion_node_matrix(var_r31);
        if (((s32 (*)(void *)) chunk_model_node_callback) != NULL) {
            chunk_model_node_callback(var_r31);
        }
        if ((u32) *(u32 *)((s8 *)var_r31 + 0x2C) != 0U) {
            render_tree__10TObjPlayerFPv((void *)(*(void **)((s8 *)var_r31 + 0x2C)));
        }
        pop_matrix();
        var_r31 = *(void **)((s8 *)var_r31 + 0x30);
    } while (var_r31 != NULL);
}

extern s32 lbl_805D3584;

void render_tick__Fv(void) {
    run_tasks__16TKeyBoardControlFv();
    begin_effect_render__13TParticleCtrlFv();
    GXSetZMode(1, 7, 0);
    restore_full_screen_view__11TCameraCtrlFv();
    set_cull_none__8TObjFishFv();
    render_debug_text(lbl_805D3584);
    GXSetZMode(1, 3, 1);
    GXSetViewport((0.0f), (0.0f), (6.4e+02f), (4.8e+02f), (0.0f), (1.0f));
    set_cull_none__8TObjFishFv();
    end_effect_render__13TParticleCtrlFv();
    fn_803DCEC8();
    fn_803DCF0C();
    TKeyBoardControl__sub_8000F7FC();
}

s32 TKeyBoardControl__sub_801E3E24(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    temp_r3 = adxf_open_file__6TLobbyFiPviPv((void *) (arg0), (void *) (arg1), (int) (0), (void *) (arg2));
    if (temp_r3 >= 0) {
loop_2:
        if (read_afs_toc__6TLobbyFi((void *) (arg0)) != 3) {
            run_disk_error_check__6TLobbyFv();
            flush_input__16TKeyBoardControlFv();
            update_global_sound_frame();
            read_pads__16TKeyBoardControlFv();
            disable_disconnected_ports__16TKeyBoardControlFv((void *) (&TKeyBoardControl__global_key_state.value));
            reset_state_byte__6TLobbyFv();
            goto loop_2;
        }
    }
    return temp_r3;
}

s32 TLobby__sub_801E3E9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    temp_r3 = adxf_open_file__6TLobbyFiPviPv((void *) (arg0), (void *) (arg1), (int) (0), (void *) (arg2));
    if (temp_r3 >= 0) {
loop_1:
        if (read_afs_toc__6TLobbyFi((void *) (arg0)) != 3) {
            run_disk_error_check__6TLobbyFv();
            TLobby__sub_803382E4();
            run_frame__6TLobbyFv();
            goto loop_1;
        }
    }
    return temp_r3;
}
void bswap_16__FPUs(u16 *p) {
    u32 v = *p;
    *p = (u16) (((v >> 8) & 0xFF) | ((v << 8) & 0xFF00));
}
void bswap_32__FPUl(u32 *p) {
    u32 v = *p;
    *p = (v >> 24) | ((v >> 8) & 0xFF00) | ((v << 8) & 0xFF0000) | (v << 24);
}

}
