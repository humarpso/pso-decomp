#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8032A574 { f32 a, b, c, d; u8 pad[0x10]; };

struct Obj_8032A574 {
    s32 f0; u8 pad[0x14]; void *vt; s32 f1C; s32 f20; s32 f24; u8 pad2[0x38 - 0x28];
    Ent_8032A574 ents[8];
};

struct Alt_8032A574 { u8 pad[0x128]; s32 f128, f12C, f130, f134, f138, f13C; };

extern "C" {
void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__19TAdMcSelectCursorGC[];
extern s32 lbl_805D41D0;
extern const f32 lbl_805DF740;
extern const f32 lbl_805DF744;
Obj_8032A574 *TAdMcSelectCursorGC__ct(Obj_8032A574 *arg0);
}

extern "C" {

void *__dt__19TAdMcSelectCursorGCFv(void *arg0, s16 arg1);
void render__19TAdMcSelectCursorGCFv(void *arg0);
void render_cursor__19TAdMcSelectCursorGCFPv(u8 *arg0);
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK fn_80141A30();
M2C_UNK get_player__20TWindowSubStatusDispFv();
s32 get_state_flag__9TMainTaskFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 toggle_flag_9__10TObjPlayerFPv();

extern s32 TAdMcSelectCursorGC__data_805D6C90;
extern const f32 lbl_805DF728;

void render_cursor__19TAdMcSelectCursorGCFPv(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    set_global_param__8TObjFishFi((void *) (TAdMcSelectCursorGC__data_805D6C90));
    TWindowSubStatusDisp__sub_803DF160((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x128) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x28), (f32) (lbl_805DF728));
    get_player__20TWindowSubStatusDispFv();
}

void render__19TAdMcSelectCursorGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9__10TObjPlayerFPv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        init_xyz_limits__10TObjPlayerFv();
        render_cursor__19TAdMcSelectCursorGCFPv((u8 *)(arg0));
        reset_transform_state__10TObjPlayerFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) == 0) {
            fn_80141A30();
        }
    }
}

extern M2C_UNK __vt__19TAdMcSelectCursorGC[];
extern u32 lbl_805D6C94;

void *__dt__19TAdMcSelectCursorGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TAdMcSelectCursorGC;
        if ((u32) lbl_805D6C94 != 0U) {
            lbl_805D6C94 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_8032A574 *TAdMcSelectCursorGC__ct(Obj_8032A574 *arg0) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vt = ((u8 *)&__vt__19TAdMcSelectCursorGC);
    arg0->f0 = lbl_805D41D0;
    ((Alt_8032A574 *)arg0)->f138 = 0;
    ((Alt_8032A574 *)arg0)->f12C = 0;
    ((Alt_8032A574 *)arg0)->f134 = 0;
    ((Alt_8032A574 *)arg0)->f128 = 0;
    ((Alt_8032A574 *)arg0)->f13C = 1;
    arg0->f1C = 0;
    arg0->f20 = 0;
    arg0->f24 = arg0->f20;
    for (i = 0; i < 8; i++) {
        arg0->ents[i].a = lbl_805DF740;
        arg0->ents[i].b = lbl_805DF740;
        arg0->ents[i].c = lbl_805DF744;
        arg0->ents[i].d = lbl_805DF744;
    }
    return arg0;
}

}
