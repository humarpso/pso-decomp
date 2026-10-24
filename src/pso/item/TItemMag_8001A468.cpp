#include "types.h"
#include "pso/item/TUnk_80480938.h"
#include "pso/menu/TAdEndText.h"
#include "pso/system/vector.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804C4540.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemData.h"
#include "pso/player/EndingSceneTables.h"
#include "pso/misc/TCameraCtrl_800687BC.h"
#include "pso/object/TObjLight_80133568.h"
#include "pso/ui/TAdSinglePlyChrSelectGC_801FBF54.h"

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Sub_8001A470 { s32 w[4]; };

struct Rec_8001A470 { s32 f0; Sub_8001A470 a; Sub_8001A470 b; f32 f24; f32 f28; };

extern "C" {
void copy_draw_line_record(Rec_8001A470 *d, Rec_8001A470 *s);
void init__9TItemDataFv(TItemData *item);
extern s32 game_difficulty_selection;
}

TUnk_804C4540 *ending_player;
s8 player_light_index;
s32 ending_player_state;

s32 TItemMag::get_type() { return this->m_4; }

void copy_draw_line_record(Rec_8001A470 *d, Rec_8001A470 *s) {
    d->f0 = s->f0;
    d->a = s->a;
    d->b = s->b;
    d->f24 = s->f24;
    d->f28 = s->f28;
}

void TUnk_80480938::pose_player(s32 state, s8 picture) {
    switch (state) {
        case 0: {
            ending_player->set_position_from((void *)&ending_player_positions_0[picture]);
            ending_player->rotation_y = 182.04445f * (f32)ending_player_angles_0[picture].y;
            TObjPlayer::set_animation_from_data((s32)ending_player, picture);
            break;
        }
        case 1: {
            ending_player->set_position_from((void *)&ending_player_positions_1[picture]);
            ending_player->rotation_y = 182.04445f * (f32)ending_player_angles_1[picture].y;
            TObjPlayer::set_animation_from_data((s32)ending_player, picture);
            break;
        }
        case 2: {
            ending_player->set_position_from((void *)&ending_player_positions_2[picture]);
            ending_player->rotation_y = 182.04445f * (f32)ending_player_angles_2[picture].y;
            TObjPlayer::set_animation_from_data((s32)ending_player, picture);
            break;
        }
    }
}
#pragma pop

struct EndingCamera { u8 pad0[0x14]; s32 f14; s32 f18; Vec v1c; Vec v28; s32 tail[4]; };

struct ColorF { f32 r, g, b, a; };

s32 TObjPlayer::get_flag890_state() {
    s32 flags = this->m_890;
    s32 state = 0;

    if (flags & 0x20) {
        state = 0;
    }
    if (flags & 0x40) {
        state = 1;
    }
    if (flags & 0x80) {
        return 2;
    }
    return state;
}

void TUnk_80480938::publish_light() {
    ColorF c;

    c.r = player_light_color_rgba_table[player_light_index].r / 255.0f;
    c.g = player_light_color_rgba_table[player_light_index].g / 255.0f;
    c.b = player_light_color_rgba_table[player_light_index].b / 255.0f;
    c.a = player_light_color_rgba_table[player_light_index].a / 255.0f;

    publish_light_direction_color(0, (void *)&player_light_direction_color_table[player_light_index], &c);
}

void TUnk_80480938::set_camera() {
    EndingCamera camera;
    Vec position = ending_camera_position;
    Vec direction = ending_camera_direction;

    activate_camera_mode(9);
    VecCopy(&camera.v1c, &position);
    VecCopy(&camera.v28, &direction);
    camera.f14 = 0x1693;

    set_active_camera_pose_from_params((u8 *)&camera);
}

void TUnk_80480938::set_picture(s32 picture) {
    if (game_difficulty_selection != 3 && get_ending_scene_active() == 0) {
        s32 state;

        player_light_index = (s8)picture;
        state = ending_player->get_flag890_state();
        ending_player_state = state;
        pose_player(state, (s8)picture);
    }
}

void TUnk_80480938::render() {}

void TUnk_80480938::run_task() {
    set_camera();
    publish_light();
}

TUnk_80480938::~TUnk_80480938() {}

TUnk_80480938::TUnk_80480938(TObject *parent) : TObject(parent) {
    TItemData item;

    player_light_index = 0;
    Vec position = ending_player_start_position;
    ending_player = (TUnk_804C4540 *)((TObjPlayer *)get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF))->create_ending_player();
    ending_player->set_position_from(&position);
    init__9TItemDataFv(&item);
    item.data1.data_u8[0] = 2;
    item.data1.data_u8[1] = 0;
}
