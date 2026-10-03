#include "types.h"

struct Obj_80275DB4 { u8 pad[0x60]; char f60; u8 pad2[0x6c - 0x61]; void *f6c; };

struct Vec2_80275DE8 { f32 x, y; };

struct Win_80275F90 { u8 pad[0x66]; s16 f66; };

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Rect_80275DE8 { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

extern "C" {
void set_entry_state__20TWindowSubStatusDispFPvc(void *p, char c);
void TWindowSubCustomEquip__sub_80275DB4(Obj_80275DB4 *o);
void *get_player_by_client_id(s32);
s32 can_use_palette_action__10TObjPlayerFPvUcUc(void *, u8, u8);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void TWindowHelpItem__sub_80243544(u8 *, u8 *, s32, s32, s32);
void TWindowHelpItem__sub_80243630(u8 *, s32, s32);
extern u8 lbl_8044F738[];
extern u8 lbl_8044F740[];
void TWindowSubCustomEquip__sub_80275FD8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void set_relative_pos__21TWindowSubCustomEquipFPvPv(void *, void *);
extern u8 lbl_8044F738[];
void TWindowSubCustomEquip__sub_80275F08(u8 *arg0, void *arg1);
void TWindowSubCustomEquip__sub_80275F08(u8 *arg0, void *arg1);
extern const f32 lbl_805DD564;
void TWindowSubCustomEquip__sub_80275F90(Win_80275F90 *arg0, u8 *arg1);
void reset_transform_state__10TObjPlayerFv();
void init_xyz_limits__10TObjPlayerFv();
s32 try_open__19TWindowKeyBoardSoftFii(void *, void *);
void set_global_param__8TObjFishFi(s32);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(int, int);
extern Vec2_80275DE8 lbl_8044F760[];
extern s32 lbl_805D63F0;
extern const f32 lbl_805DD550;
extern const f32 lbl_805DD554;
extern const f32 lbl_805DD560;
void draw_cursor_sprite__21TWindowSubCustomEquipFPvPvif(u8 *arg0, Vec2_80275DE8 *arg1, s32 arg2, f32 farg0);
}

extern "C" {

int TWindowSubCustomEquip__sub_80275DA8(void* p);
int is_selected__21TWindowSubCustomEquipFPv(void* p);
int fn_80275D90(void* p);
int is_active__22TWindowSubCustomSelectFPv(void* p);

int is_selected__21TWindowSubCustomEquipFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubCustomEquip__sub_80275DA8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }
void TWindowSubCustomEquip__sub_80275DB4(Obj_80275DB4 *o) {
    o->f60 &= ~1;
    set_entry_state__20TWindowSubStatusDispFPvc(o->f6c, 1);
}

#pragma push
#pragma fp_contract on
void draw_cursor_sprite__21TWindowSubCustomEquipFPvPvif(u8 *arg0, Vec2_80275DE8 *arg1, s32 arg2, f32 farg0) {
    Rect_80275DE8 r;
    Vec2_80275DE8 *t;
    f32 scale;
    if (M2C_FIELD(arg0, s32 *, 0x30) < 0) {
        return;
    }
    t = &lbl_8044F760[arg2 & 0xF];
    scale = lbl_805DD550 / (lbl_805DD554 * farg0 + M2C_FIELD(arg0, f32 *, 0x38));
    init_xyz_limits__10TObjPlayerFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(0xC, -1);
    r.x0 = arg1->x + M2C_FIELD(arg0, f32 *, 0x10);
    r.y0 = arg1->y + M2C_FIELD(arg0, f32 *, 0x14);
    r.x1 = 72.32f + r.x0;
    r.y1 = 72.32f + r.y0;
    r.u0 = t->x / 256.0f;
    r.v0 = t->y / 256.0f;
    r.u1 = (lbl_805DD560 + t->x) / 256.0f;
    r.v1 = (lbl_805DD560 + t->y) / 256.0f;
    if (try_open__19TWindowKeyBoardSoftFii(arg0, &r) != 0) {
        draw_textured_quad_at_depth(&r, scale);
    }
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
}
#pragma pop

void TWindowSubCustomEquip__sub_80275F08(u8 *arg0, void *arg1) {
    s8 idx;
    if ((s8)arg0[0x64] == 0) {
        idx = arg0[0x61] + arg0[0x62] * 3;
    } else {
        idx = arg0[0x61] + (1 - arg0[0x62]) * 3;
    }
    u8 *e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, lbl_8044F738[idx]);
    set_relative_pos__21TWindowSubCustomEquipFPvPv(arg1, e);
}

void TWindowSubCustomEquip__sub_80275F90(Win_80275F90 *arg0, u8 *arg1) {
    Vec2_80275DE8 pos;
    TWindowSubCustomEquip__sub_80275F08((u8 *)arg0, &pos);
    ((void (*)(f32, u8 *, Vec2_80275DE8 *, s32))draw_cursor_sprite__21TWindowSubCustomEquipFPvPvif)(lbl_805DD564, arg1, &pos, arg0->f66);
}

void TWindowSubCustomEquip__sub_80275FD8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *pl;
    u8 *a;
    u8 *b;
    pl = get_player_by_client_id(*(s16 *)(arg0 + 0x20));
    if (pl != NULL) {
        a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, lbl_8044F738[arg1]);
        b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, lbl_8044F740[arg1]);
        if (can_use_palette_action__10TObjPlayerFPvUcUc(pl, arg2, arg3) != 0) {
            *(s32 *)(a + 0x2C) = -1;
        } else {
            *(s32 *)(a + 0x2C) = 0xFF404040;
        }
        TWindowHelpItem__sub_80243630(a, arg2, arg3);
        TWindowHelpItem__sub_80243544(b, a, arg2, arg3, *(s16 *)(arg0 + 0x20));
    }
}

}
