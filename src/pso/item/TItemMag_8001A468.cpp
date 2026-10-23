#include "types.h"
#include "pso/item/TUnk_80480938.h"
#include "pso/item/TItemMag_8001A468.h"
#include "pso/menu/TAdEndText.h"
#include "pso/system/vector.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemMag.h"
#include "pso/player/EndingSceneTables.h"


#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Sub_8001A470 { s32 w[4]; };

struct Rec_8001A470 { s32 f0; Sub_8001A470 a; Sub_8001A470 b; f32 f24; f32 f28; };

typedef struct Plr_8001A4CC { u8 pad[0x60]; s32 f60; } Plr_8001A4CC;

extern "C" {
s32 query_darkfalz_state__10TObjPlayerFv(int, void *);
void copy_draw_line_record(Rec_8001A470 *d, Rec_8001A470 *s);
s32 ending_player;
s8 player_light_index;
s32 ending_player_state;
#define P1_805D49E0 (*(Plr_8001A4CC **)&ending_player)
s32 TItemMag::get_type() { return this->m_4; }
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
        ((void (*)(void *, void *))query_darkfalz_state__10TObjPlayerFv)(P1_805D49E0, (void *)&ending_player_positions_0[arg1]);
        P1_805D49E0->f60 = 182.04445f * (f32)ending_player_angles_0[arg1].y;
        TObjPlayer::set_animation_from_data((s32)P1_805D49E0, (s32)arg1);
        break;
    }
    case 1: {
        ((void (*)(void *, void *))query_darkfalz_state__10TObjPlayerFv)(P1_805D49E0, (void *)&ending_player_positions_1[arg1]);
        P1_805D49E0->f60 = 182.04445f * (f32)ending_player_angles_1[arg1].y;
        TObjPlayer::set_animation_from_data((s32)P1_805D49E0, (s32)arg1);
        break;
    }
    case 2: {
        ((void (*)(void *, void *))query_darkfalz_state__10TObjPlayerFv)(P1_805D49E0, (void *)&ending_player_positions_2[arg1]);
        P1_805D49E0->f60 = 182.04445f * (f32)ending_player_angles_2[arg1].y;
        TObjPlayer::set_animation_from_data((s32)P1_805D49E0, (s32)arg1);
        break;
    }
    }
}

}
#undef P1_805D49E0
#pragma pop

#include <stddef.h>
struct RecoveredGlobal_8001A8F0_lbl_80480938 {
    s32 value;
    u8 remaining[0x14];
};

struct Stack_8001A8F0 {
    s8 sp14;
    s8 sp15;
    u8 trailing_storage[0x12];
};

struct Cam_8001A77C { u8 pad0[0x14]; s32 f14; s32 f18; EndingVector v1c; EndingVector v28; s32 tail[4]; };

typedef struct ColorF { f32 r, g, b, a; } ColorF;

extern "C" {
s32 init__9TItemDataFv(void *);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__13TUnk_80480938[];
void set_active_camera_pose_from_params(u8 *arg0);
s32 activate_camera_mode(s32 arg0);
s32 publish_light_direction_color(int, void *, void *);

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

extern s32 game_difficulty_selection;

int TObjPlayer::publish_light_color(void *p) {
    ColorF c;

    c.r = player_light_color_rgba_table[player_light_index].r / 255.0f;
    c.g = player_light_color_rgba_table[player_light_index].g / 255.0f;
    c.b = player_light_color_rgba_table[player_light_index].b / 255.0f;
    c.a = player_light_color_rgba_table[player_light_index].a / 255.0f;

    return publish_light_direction_color(0, (void *)&player_light_direction_color_table[player_light_index], &c);
}

int TObjPlayer__sub_8001A77C(void *p) {
    Cam_8001A77C sp20;
    EndingVector sp14 = ending_camera_position;
    EndingVector sp8 = ending_camera_direction;
    activate_camera_mode(9);
    VecCopy((Vec *)&sp20.v1c, (const Vec *)&sp14);
    VecCopy((Vec *)&sp20.v28, (const Vec *)&sp8);
    sp20.f14 = 0x1693;
    set_active_camera_pose_from_params((u8 *)&sp20);
}

void TObjPlayer::update_flag890_state(s32 arg0) {
    if (((s32) game_difficulty_selection != 3) && (get_ending_scene_active() == 0)) {
        s32 temp;
        player_light_index = (s8) arg0;
        temp = ((TObjPlayer *)ending_player)->get_flag890_state();
        ending_player_state = temp;
        TObjPlayer__sub_8001A4CC(temp, (s8) arg0);
    }
}

void TUnk_80480938::render() {  }
void TUnk_80480938::run_task() { TObjPlayer__sub_8001A77C(this); TObjPlayer::publish_light_color(this); }

}
TUnk_80480938::~TUnk_80480938() {

}

typedef char RecoveredGlobal_8001A8F0_lbl_80480938_size[sizeof(RecoveredGlobal_8001A8F0_lbl_80480938) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_8001A8F0(u8 *object, s32 arg1) {
    typedef char sp14_offset[(offsetof(Stack_8001A8F0, sp14) == 0x0) ? 1 : -1];
    typedef char sp15_offset[(offsetof(Stack_8001A8F0, sp15) == 0x1) ? 1 : -1];
    Stack_8001A8F0 stack;
    s32 temp_r3;
    __ct__7TObjectFP7TObject((void *)object, (void *)arg1);
    *(s32 **)((s8 *)object + 0x18) = &(*(RecoveredGlobal_8001A8F0_lbl_80480938 *)&__vt__13TUnk_80480938).value;
    player_light_index = 0;
    EndingVector position = ending_player_start_position;
    temp_r3 = ((TObjPlayer *)(get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF)))->create_ending_player();
    ending_player = temp_r3;
    query_darkfalz_state__10TObjPlayerFv(temp_r3, (void *)&position);
    init__9TItemDataFv((void *)&stack.sp14);
    stack.sp14 = 2;
    stack.sp15 = 0;
    return object;
}
