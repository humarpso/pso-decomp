#include "pso/effect/TEffect.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80082C30 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
};

struct Color_80082CDC { u8 r, g, b, a; };

struct V2_80082CDC { f32 x, y; };

struct C_80082CDC { u8 pad[0x20]; void *tex; };

struct B_80082CDC { u8 pad[0xC]; C_80082CDC *c; };

struct A_80082CDC { u8 pad[0x8]; B_80082CDC *b; };

extern "C" {
s32 set_global_param__8TObjFishFi(void *);
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, int);
extern s32 lbl_805D63F0;
extern const f32 lbl_805D93C0;
extern const f32 lbl_805D93C4;
extern const f32 lbl_805D93C8;
extern const f32 lbl_805D93CC;
extern const f32 lbl_805D93D0;
extern const f32 lbl_805D93D4;
extern const f32 lbl_805D93D8;
extern const f32 lbl_805D93DC;
void TObjPlayer__sub_80082C30(void);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TObjPlayer__sub_80082C30(void);
void draw_textured_screen_quad__10TObjPlayerFUiPvPvi(s32, void *, void *, s32);
void setup_tev_swap__10TObjPlayerFv(void);
void set_tev_swap_mode__10TObjPlayerFUc(s32);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
void GXPixModeSync(void);
void GXSetTexCopySrc(u16, u16, u16, u16);
void GXSetTexCopyDst(u16, u16, s32, u8);
void GXSetCopyClear(Color_80082CDC, u32);
void GXCopyTex(void *, u8);
extern A_80082CDC *shared_capture_texture_list[];
extern u8 lbl_8050E3B8[];
extern const f32 lbl_805D93C0;
extern const f32 lbl_805D93C8;
extern const f32 lbl_805D93E0;
extern const f32 lbl_805D93E4;
extern const f32 lbl_805D93E8;
extern Color_80082CDC lbl_805E1214;
extern Color_80082CDC lbl_805E1218;
void copy_screen_to_texture__10TObjPlayerFiPv(s32 mode, void *src);
}

extern "C" {
extern TObject* tl_particle;
extern const char* lbl_805D2908;
extern const f32 lbl_805D93B8;
extern const f32 lbl_805D93BC;
}

TEffect::~TEffect() {
    field_1c = 0;
}

TEffect::TEffect() : TObject(tl_particle) {
    m_name = lbl_805D2908;
    position.x = lbl_805D93B8;
    position.y = lbl_805D93B8;
    position.z = lbl_805D93B8;
    field_2c[0] = lbl_805D93B8;
    field_2c[1] = lbl_805D93B8;
    field_2c[2] = lbl_805D93B8;
    field_2c[3] = lbl_805D93B8;
    scale.x = lbl_805D93BC;
    scale.y = lbl_805D93BC;
    scale.z = lbl_805D93BC;
    field_48[0] = lbl_805D93B8;
    field_48[1] = lbl_805D93B8;
    field_48[2] = lbl_805D93B8;
    field_54[0] = 0;
    field_54[1] = 0;
    field_54[2] = 0;
    field_60[0] = lbl_805D93B8;
    field_60[1] = lbl_805D93B8;
    age = 0;
    field_6c = 0;
    field_1c = 0;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjPlayer__sub_80082C30(void) {
    typedef char sp8_offset[(offsetof(Stack_80082C30, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80082C30, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80082C30, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80082C30, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80082C30, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80082C30, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80082C30, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_80082C30, sp24) == 0x1C) ? 1 : -1];
    Stack_80082C30 stack;
    set_global_param__8TObjFishFi((void *) (lbl_805D63F0));
    set_draw_texture_and_color((int) (0), (int) (-1));
    begin_screen_draw((int) (1));
    stack.sp8 = lbl_805D93C0;
    stack.spC = lbl_805D93C4;
    stack.sp10 = lbl_805D93C8 + lbl_805D93C0;
    stack.sp14 = lbl_805D93CC + lbl_805D93C4;
    stack.sp18 = lbl_805D93D0;
    stack.sp1C = lbl_805D93D4;
    stack.sp20 = lbl_805D93D8;
    stack.sp24 = lbl_805D93D8;
    draw_textured_quad_at_depth((void *) (&stack.sp8), (f32) (lbl_805D93DC));
    get_player__20TWindowSubStatusDispFv();
}
#pragma pop

extern "C" void TObjPlayer__sub_80082CBC(void* effect) {
    *(reinterpret_cast<u8*>(effect) + 0x1C) |= 0x4;
}

extern "C" void TObjPlayer__sub_80082CCC(void* effect) {
    *(reinterpret_cast<u8*>(effect) + 0x1C) &= ~0x4;
}
void copy_screen_to_texture__10TObjPlayerFiPv(s32 mode, void *src) {
    V2_80082CDC a;
    V2_80082CDC b;
    V2_80082CDC v;
    void *cam;
    GXSetCopyClear(lbl_805E1214, 0xFFFFFF);
    switch (mode) {
    case 0:
        if (src != NULL) {
            copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&v, src);
            v.x -= lbl_805D93E0;
            v.y -= lbl_805D93E4;
        } else {
            v.x = lbl_805D93C0;
            v.y = lbl_805D93E8;
        }
        GXSetTexCopySrc(v.x, v.y, 0x100, 0xC0);
        GXSetTexCopyDst(0x100, 0xC0, 4, 0);
        GXCopyTex(shared_capture_texture_list[0]->b->c->tex, 1);
        GXPixModeSync();
        cam = lbl_8050E3B8 + 0x110;
        a.x = lbl_805D93C0;
        a.y = lbl_805D93E8;
        b.x = lbl_805D93C8;
        b.y = lbl_805D93C0;
        if (is_on_current_screen__11TCameraCtrlFPv(cam, 0x100) != 0) {
            set_tev_swap_mode__10TObjPlayerFUc(0);
        }
        draw_textured_screen_quad__10TObjPlayerFUiPvPvi(-1, &a, &b, 1);
        if (is_on_current_screen__11TCameraCtrlFPv(cam, 0x100) != 0) {
            setup_tev_swap__10TObjPlayerFv();
        }
        TObjPlayer__sub_80082C30();
        GXSetTexCopySrc(0xC0, 0x90, 0x100, 0xC0);
        GXSetTexCopyDst(0x100, 0xC0, 4, 0);
        GXCopyTex(shared_capture_texture_list[0]->b->c->tex, 1);
        GXPixModeSync();
        break;
    case 1:
        GXSetCopyClear(lbl_805E1218, 0xFFFFFF);
        GXSetTexCopySrc(0, 0, 0x280, 0x1E0);
        GXSetTexCopyDst(0x280, 0x1E0, 4, 0);
        GXCopyTex(shared_capture_texture_list[0]->b->c->tex, 1);
        GXPixModeSync();
        cam = lbl_8050E3B8 + 0x110;
        a.x = lbl_805D93C0;
        a.y = lbl_805D93E8;
        b.x = lbl_805D93C8;
        b.y = lbl_805D93C0;
        if (is_on_current_screen__11TCameraCtrlFPv(cam, 0x100) != 0) {
            set_tev_swap_mode__10TObjPlayerFUc(0);
        }
        draw_textured_screen_quad__10TObjPlayerFUiPvPvi(-1, &a, &b, 0);
        if (is_on_current_screen__11TCameraCtrlFPv(cam, 0x100) != 0) {
            setup_tev_swap__10TObjPlayerFv();
        }
        TObjPlayer__sub_80082C30();
        GXSetTexCopySrc(0xC0, 0x90, 0x100, 0xC0);
        GXSetTexCopyDst(0x100, 0xC0, 4, 0);
        GXCopyTex(shared_capture_texture_list[0]->b->c->tex, 1);
        GXPixModeSync();
        break;
    }
}
