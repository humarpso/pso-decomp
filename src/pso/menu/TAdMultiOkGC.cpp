#include "types.h"
struct Ok_80306C10 { u8 pad[0x97C]; s32 count; };

struct Ok_80306F84 { u8 pad[0x97C]; s32 count; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Q_80306C70 { f32 a; f32 b; f32 c; f32 d; u8 pad[0x10]; };

struct E_80306C70 { u8 pad0[0x1C]; s32 flags; s32 t; f32 x; f32 y; u8 pad[0x14]; Q_80306C70 q[4]; u8 pad2[4]; };

struct O_80306C70 { E_80306C70 e[1]; };

struct E_80306DF4 { u8 pad0[0x1C]; s32 flags; s32 t; u8 pad[0xC4 - 0x24]; };

struct O_80306DF4 { E_80306DF4 e[12]; u8 pad[0x1C]; s32 port[4]; u8 pad2[0x980 - 0x95C]; s32 flags; };

struct Ports_80306DF4 { s32 v[4]; };

struct Pad_80306DF4 { u8 pad[0x20]; u8 btn[0x30]; };

struct Q_80306B04 { f32 a; f32 b; f32 c; f32 d; u8 pad[0x10]; };

struct E_80306B04 { u8 pad0[0x1C]; s32 flags; s32 t; f32 x; f32 y; s32 vals[5]; Q_80306B04 q[4]; u8 pad2[4]; };

extern "C" {
s32 get_state_flag__9TMainTaskFv(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void render__12TAdMultiOkGCFv(Ok_80306C10 *o);
void run_task__12TAdMultiOkGCFv(Ok_80306F84 *o);
extern const f32 lbl_805DF04C;
extern const f32 lbl_805DF050;
extern const f32 lbl_805DF054;
extern const f32 lbl_805DF058;
extern const f32 lbl_805DF05C;
extern const f32 lbl_805DF060;
extern const f32 lbl_805DF064;
void update_entry_animation__12TAdMultiOkGCFPvi(void *arg0, int arg1);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK play_sound_effect(int, void *, int, int);
extern Ports_80306DF4 lbl_80475410;
extern Pad_80306DF4 controller_physical_port_bank[];
void handle_player_buttons__12TAdMultiOkGCFPvi(void *arg0, int arg1);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK set_draw_texture_and_color(int, s32);
extern s32 multi_confirm_texture_list;
extern const f32 lbl_805DF040;
extern const f32 lbl_805DF044;
extern const f32 lbl_805DF048;
void draw_entry__12TAdMultiOkGCFPvi(void *arg0, int arg1);
}

extern "C" {

#pragma push
#pragma fp_contract on
void draw_entry__12TAdMultiOkGCFPvi(void *arg0, int arg1) {
    E_80306B04 *e;
    s32 i;
    f32 base;
    e = (E_80306B04 *)arg0;
    if (e[arg1].flags & 2) {
        begin_screen_draw(1);
        set_global_param__8TObjFishFi(multi_confirm_texture_list);
        e += arg1;
        base = lbl_805DF040 * (f32)arg1;
        for (i = 0; i < 5; i++) {
            set_draw_texture_and_color(0, e->vals[i]);
            if (e->t - (i - 1) >= 0) {
                f32 t = lbl_805DF048 * (f32)i + lbl_805DF044;
                draw_textured_quad_at_depth(&e->q[i], t + base);
            }
        }
        get_player__20TWindowSubStatusDispFv();
    }
}
#pragma pop

void render__12TAdMultiOkGCFv(Ok_80306C10 *o) {
    s32 i;
    if (get_state_flag__9TMainTaskFv() != 1) {
        init_xyz_limits__10TObjPlayerFv();
        for (i = 0; i < o->count; i++) {
            draw_entry__12TAdMultiOkGCFPvi((void *)(o), (int)(i));
        }
        reset_transform_state__10TObjPlayerFv();
    }
}

#pragma push
#pragma fp_contract on
void update_entry_animation__12TAdMultiOkGCFPvi(void *arg0, int arg1) {
    E_80306C70 *e;
    s32 i;
    s32 d;
    f32 f;
    e = &((O_80306C70 *)arg0)->e[arg1];
    if (e->flags & 2) {
        e->t++;
        for (i = 0; i < 5; i++) {
            d = e->t - (i - 1);
            if (e->flags & 1) {
                if (d > 10) {
                    e->flags |= 4;
                } else if (d >= 0) {
                    f = lbl_805DF04C - lbl_805DF050 * (f32)d;
                    e->q[i].a = lbl_805DF054 * f + e->x;
                    e->q[i].b = lbl_805DF058 * f + e->y;
                    e->q[i].c = lbl_805DF05C * f + e->x;
                    e->q[i].d = lbl_805DF060 * f + e->y;
                }
            } else if (d > 5) {
                e->flags &= ~2;
            } else if (d >= 0) {
                f = lbl_805DF064 - lbl_805DF050 * (f32)d;
                e->q[i].a = lbl_805DF054 * f + e->x;
                e->q[i].b = lbl_805DF058 * f + e->y;
                e->q[i].c = lbl_805DF05C * f + e->x;
                e->q[i].d = lbl_805DF060 * f + e->y;
            }
        }
    }
}
#pragma pop

void handle_player_buttons__12TAdMultiOkGCFPvi(void *arg0, int arg1) {
    O_80306DF4 *o = (O_80306DF4 *)arg0;
    Ports_80306DF4 ports = lbl_80475410;
    if (TWindowShortListCtrl__check_controller_button(controller_physical_port_bank[ports.v[o->port[arg1]]].btn, 4) != 0) {
        E_80306DF4 *e = &o->e[arg1];
        if (e->flags & 4) {
            e->t = -1;
            e->flags &= ~1;
            e->flags &= ~4;
            play_sound_effect(0x52F16, 0, 0, 0);
        } else if (!(e->flags & 2)) {
            e->t = -1;
            e->flags |= 1;
            e->flags |= 2;
            play_sound_effect(0x52D01, 0, 0, 0);
        }
    } else if (TWindowShortListCtrl__check_controller_button(controller_physical_port_bank[ports.v[o->port[arg1]]].btn, 2) != 0) {
        if (!(o->e[arg1].flags & 2)) {
            o->flags |= 1;
            play_sound_effect(0x52F16, 0, 0, 0);
        }
    }
}

void run_task__12TAdMultiOkGCFv(Ok_80306F84 *o) {
    s32 i;
    for (i = 0; i < o->count; i++) {
        handle_player_buttons__12TAdMultiOkGCFPvi((void *)(o), (int)(i));
        update_entry_animation__12TAdMultiOkGCFPvi((void *)(o), (int)(i));
    }
}

}

#include "pso/TAdMultiOkGC.h"

TAdMultiOkGC::~TAdMultiOkGC() {}
