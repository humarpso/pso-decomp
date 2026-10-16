#include "pso/item/TItemTexLoad.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TUnk_804CE018.h"

#include "types.h"
#include "pso/misc/TWindowLoadItemTexture.h"
#include "pso/misc/TWindowDD.h"

extern "C" {

void get_array_entry__13TUnk_804CE018Fi(void *, int);
extern s32 lbl_804D0058[];
extern s32 __vt__22TWindowLoadItemTexture[];
extern s32 lbl_805D3940;
extern s32 tl_07;
extern const f32 lbl_805DD0D8;
extern const f32 lbl_805DD0F0;
extern const f32 lbl_805DD0FC;
void *TWindowLoadItemTexture__ct(void *arg0, void *arg1, void *arg2, void *arg3);
}

extern "C" {

void *__dt__22TWindowLoadItemTextureFv(void *arg0, s16 arg1);
void fn_80262C2C(void* p);
void render__22TWindowLoadItemTextureFv(u8 *arg0);

s32 draw_window_frame(void *, s32);
s32 draw_visible_window_entries(void *, void *, s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void set_sprite_uv_bounds(f32, f32, f32, f32);
s32 fn_8026287C(void *);
void get_array_entry__13TUnk_804CE018Fi(void *, int);
int initialize_subwindow__9TWindowDDFv(void*);
void queue_destruction__7TObjectFv(void *);

extern s32 lbl_8044F280[];
extern const f32 lbl_805DD0EC;
extern const f32 lbl_805DD0F4;
extern const f32 lbl_805DD0F8;

void *TWindowLoadItemTexture::create(void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x74);
    if (o != NULL) {
        o = TWindowLoadItemTexture__ct((void *)(o), (void *)(this), (void *)(lbl_8044F280), (void *)(arg1));
    }
    get_array_entry__13TUnk_804CE018Fi(o, 0);
    set_sprite_uv_bounds(lbl_805DD0EC, lbl_805DD0EC, lbl_805DD0F4, lbl_805DD0F8);
    return o;
}

void render__22TWindowLoadItemTextureFv(u8 *arg0) {
    s32 temp_r31;

    if ((s32) *(u8 *)((s8 *)arg0 + 0x60) == 1) {
        *(u32 *)((s8 *)arg0 + 0x70) = (u32)(*(TItemTexLoad**)((s8 *)arg0 + 0x6C))->ready_texture_list();
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            fn_8026287C(arg0);
            *(u8 *)((s8 *)arg0 + 0x60) = 1U;
        }
    }
    temp_r31 = ((TUnk_804CE018 *)arg0)->setup_window_draw_context((s32)(arg0 + 0x64));
    if (*(u8 *)((s8 *)arg0 + 0x61) & 1) {
        draw_window_frame(arg0, temp_r31);
    }
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r31);
}

void TWindowLoadItemTexture::run_task() { initialize_subwindow__9TWindowDDFv(this); update_fade(); update_window_entry_list((char*)this + 0x24); }

extern s32 __vt__22TWindowLoadItemTexture[];

void *__dt__22TWindowLoadItemTextureFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TWindowLoadItemTexture;
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x6C));
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TWindowLoadItemTexture__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *e;
    ((TWindowDD *)arg0)->construct_base((u8 *)lbl_804D0058, (s16)((s16)(s32)arg3), (u8 *)arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TWindowLoadItemTexture;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3940;
    switch (TCameraCtrl::get_camera_id()) {
    case 1:
        *(f32 *)((s8 *)arg0 + 0x68) = *(f32 *)((s8 *)arg0 + 0x64) = lbl_805DD0F0;
        break;
    case 2:
        *(f32 *)((s8 *)arg0 + 0x68) = *(f32 *)((s8 *)arg0 + 0x64) = lbl_805DD0D8;
        break;
    case 3:
    case 4:
        *(f32 *)((s8 *)arg0 + 0x68) = *(f32 *)((s8 *)arg0 + 0x64) = lbl_805DD0FC;
        break;
    }
    *(f32 *)((s8 *)arg0 + 0x38) = *(f32 *)((s8 *)arg2 + 0);
    *(f32 *)((s8 *)arg0 + 0x3C) = *(f32 *)((s8 *)arg2 + 4);
    ((TUnk_804CE018 *)arg0)->save_position();
    e = ((void *(*)(void *, int))get_array_entry__13TUnk_804CE018Fi)(arg0, 0);
    *(f32 *)((s8 *)e + 0x10) = *(f32 *)((s8 *)arg2 + 0);
    *(f32 *)((s8 *)e + 0x14) = *(f32 *)((s8 *)arg2 + 4);
    *(s32 *)((s8 *)arg0 + 0x6C) = (s32)TItemTexLoad::create((TObject*)tl_07);
    *(s8 *)((s8 *)arg0 + 0x61) = 0;
    *(s8 *)((s8 *)arg0 + 0x60) = 2;
    return arg0;
}

void fn_80262C2C(void* p) { *(u8*)((char*)p + 0x61) |= 0x1; }

}
