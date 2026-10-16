#include "types.h"
#include "pso/item/TUnk_80480938.h"

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Sub_8001A470 { s32 w[4]; };

struct Rec_8001A470 { s32 f0; Sub_8001A470 a; Sub_8001A470 b; f32 f24; f32 f28; };

typedef struct Rec_8001A4CC { s32 a; s32 n; s32 c; } Rec_8001A4CC;

typedef struct Plr_8001A4CC { u8 pad[0x60]; s32 f60; } Plr_8001A4CC;

extern "C" {
s32 query_darkfalz_state__10TObjPlayerFPv(int, void *);
void copy_draw_line_record(Rec_8001A470 *d, Rec_8001A470 *s);
void set_animation_from_data__10TObjPlayerFii(void *, s32);
extern Rec_8001A4CC lbl_80434118[];
extern Rec_8001A4CC lbl_804341A8[];
extern Rec_8001A4CC lbl_80434238[];
extern Rec_8001A4CC lbl_804342C8[];
extern Rec_8001A4CC lbl_80434358[];
extern Rec_8001A4CC lbl_804343E8[];
extern s32 lbl_805D49E0;
void TObjPlayer__sub_8001A4CC(s32 arg0, s8 arg1);
}

#define P1_805D49E0 (*(Plr_8001A4CC **)&lbl_805D49E0)
extern "C" {

s32 get_type__8TItemMagFPv(void* p);

s32 get_type__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void copy_draw_line_record(Rec_8001A470 *d, Rec_8001A470 *s) {
    d->f0 = s->f0;
    d->a = s->a;
    d->b = s->b;
    d->f24 = s->f24;
    d->f28 = s->f28;
}
void TObjPlayer__sub_8001A4CC(s32 arg0, s8 arg1) {
    switch (arg0) {
    case 0: {
        ((void (*)(void *, void *))query_darkfalz_state__10TObjPlayerFPv)(P1_805D49E0, &lbl_80434118[arg1]);
        P1_805D49E0->f60 = 182.04445f * (f32)lbl_804341A8[arg1].n;
        set_animation_from_data__10TObjPlayerFii(P1_805D49E0, arg1);
        break;
    }
    case 1: {
        ((void (*)(void *, void *))query_darkfalz_state__10TObjPlayerFPv)(P1_805D49E0, &lbl_80434238[arg1]);
        P1_805D49E0->f60 = 182.04445f * (f32)lbl_804342C8[arg1].n;
        set_animation_from_data__10TObjPlayerFii(P1_805D49E0, arg1);
        break;
    }
    case 2: {
        ((void (*)(void *, void *))query_darkfalz_state__10TObjPlayerFPv)(P1_805D49E0, &lbl_80434358[arg1]);
        P1_805D49E0->f60 = 182.04445f * (f32)lbl_804343E8[arg1].n;
        set_animation_from_data__10TObjPlayerFii(P1_805D49E0, arg1);
        break;
    }
    }
}

}
#undef P1_805D49E0
#pragma pop

#include <stddef.h>
#include "pso/player/TObjPlayer.h"
struct Stack_8001A8F0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s8 sp14;
    s8 sp15;
    u8 trailing_storage[0x12];
};

struct RecoveredGlobal_8001A8F0_lbl_8043455C {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8001A8F0_lbl_80480938 {
    s32 value;
    u8 remaining[0x14];
};

struct Vec_8001A77C { f32 x, y, z; };

struct Cam_8001A77C { u8 pad0[0x14]; s32 f14; s32 f18; Vec_8001A77C v1c; Vec_8001A77C v28; s32 tail[4]; };

typedef struct Color_8001A6A8 { u8 r, g, b, a; } Color_8001A6A8;

typedef struct ColorF_8001A6A8 { f32 r, g, b, a; } ColorF_8001A6A8;

typedef struct Light_8001A6A8 { u8 bytes[0xC]; } Light_8001A6A8;

extern "C" {
s32 init__9TItemDataFv(void *);
s32 create_ending_player__10TObjPlayerFPv(int);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8001A8F0_lbl_8043455C lbl_8043455C;
extern s32 lbl_80480938[];
extern s32 lbl_805D49E0;
extern s8 player_light_index;
u8 *TObjPlayer__sub_8001A8F0(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
void set_active_camera_pose_from_params(void *);
void activate_camera_mode(int);
extern Vec_8001A77C lbl_80434568;
extern Vec_8001A77C lbl_80434574;
int TObjPlayer__sub_8001A77C(void *p);
s32 publish_light_direction_color(int, void *, void *);
extern Color_8001A6A8 player_light_color_rgba_table[];
extern Light_8001A6A8 player_light_direction_color_table[];
extern s8 player_light_index;
}

extern "C" {

void render__13TUnk_80480938Fv(void);
void run_task__13TUnk_80480938Fv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 get_ending_scene_active();

s32 TObjPlayer::get_flag890_state() {
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = this->m_890;
    var_r3 = 0;
    if (temp_r4 & 0x20) {
        var_r3 = 0;
    }
    if (temp_r4 & 0x40) {
        var_r3 = 1;
    }
    if (temp_r4 & 0x80) {
        return 2;
    }
    return var_r3;
}

extern s32 lbl_805D49E0;
extern s8 player_light_index;
extern s32 lbl_805D49E8;
extern s32 game_difficulty_selection;

int TObjPlayer::publish_light_color(void *p) {
    ColorF_8001A6A8 c;
    c.r = player_light_color_rgba_table[player_light_index].r / 255.0f;
    c.g = player_light_color_rgba_table[player_light_index].g / 255.0f;
    c.b = player_light_color_rgba_table[player_light_index].b / 255.0f;
    c.a = player_light_color_rgba_table[player_light_index].a / 255.0f;
    return publish_light_direction_color(0, &player_light_direction_color_table[player_light_index], &c);
}

int TObjPlayer__sub_8001A77C(void *p) {
    Cam_8001A77C sp20;
    Vec_8001A77C sp14 = lbl_80434568;
    Vec_8001A77C sp8 = lbl_80434574;
    activate_camera_mode(9);
    VecCopy__FP3VecPC3Vec(&sp20.v1c, &sp14);
    VecCopy__FP3VecPC3Vec(&sp20.v28, &sp8);
    sp20.f14 = 0x1693;
    set_active_camera_pose_from_params(&sp20);
}

void TObjPlayer::update_flag890_state(s32 arg0) {
    if (((s32) game_difficulty_selection != 3) && (get_ending_scene_active() == 0)) {
        s32 temp;
        player_light_index = (s8) arg0;
        temp = ((TObjPlayer *)lbl_805D49E0)->get_flag890_state();
        lbl_805D49E8 = temp;
        TObjPlayer__sub_8001A4CC(temp, (s8) arg0);
    }
}

void TUnk_80480938::render() {  }
void TUnk_80480938::run_task() { TObjPlayer__sub_8001A77C((void *)(this)); TObjPlayer::publish_light_color((void *)(this)); }

extern s32 lbl_80480938[];

void *TUnk_80480938::destroy_base(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_80480938;
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}
typedef char RecoveredGlobal_8001A8F0_lbl_8043455C_size[sizeof(RecoveredGlobal_8001A8F0_lbl_8043455C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8001A8F0_lbl_80480938_size[sizeof(RecoveredGlobal_8001A8F0_lbl_80480938) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_8001A8F0(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8001A8F0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001A8F0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001A8F0, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8001A8F0, sp14) == 0xC) ? 1 : -1];
    typedef char sp15_offset[(offsetof(Stack_8001A8F0, sp15) == 0xD) ? 1 : -1];
    Stack_8001A8F0 stack;
    s32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8001A8F0_lbl_80480938 *)&lbl_80480938).value;
    player_light_index = 0;
    stack.sp8 = *(s32 *)((s8 *)(&lbl_8043455C.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_8043455C.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_8043455C.value) + 8);
    temp_r3 = create_ending_player__10TObjPlayerFPv((int) (get_char_index__23TAdSinglePlyChrSelectGCFUi((int) (0xFFFF))));
    lbl_805D49E0 = temp_r3;
    query_darkfalz_state__10TObjPlayerFPv((int) (temp_r3), (void *) (&stack.sp8));
    init__9TItemDataFv((void *) (&stack.sp14));
    stack.sp14 = 2;
    stack.sp15 = 0;
    return arg0;
}

}
