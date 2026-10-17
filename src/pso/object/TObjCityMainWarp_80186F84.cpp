#include "types.h"
#include "pso/object/TObjWarpBossMulti.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/object/TObjCityMainWarpChallenge.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubTradeMain.h"

struct Warp_80187438 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0xAC - 0x44];
    f32 radius;
    u8 padb0[0xBC - 0xB0];
    s32 fbc;
    u8 padc0[0xE4 - 0xC0];
    char names[4][0x18];
    s32 inside[4];
    s32 count;
    s32 n_inside;
    s32 f15c;
    u8 pad160[4];
    u32 window;
};

struct Player_80187438 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0x85C - 0x44];
    char name[0x18];
};

extern "C" {
s32 get_current_floor(void);
f32 xz_distance_squared(void *, void *);
Player_80187438 *get_player_by_client_id(s32);
void TWindow__close(u8 *arg0);
char *strcpy(char *, const char *);
extern s32 local_client_id;
extern const f32 lbl_805DBCA8;
s32 is_local_client_floor_leader(s32);
s32 find_local_player_in_range__16TObjCityMainWarpFf(void *, f32);
s32 close_windows__16TObjCityMainWarpFv();
s32 TObjCityMainWarp__sub_801875F8(void *);
s32 play_sound_effect(s32, void *, s32, s32);
extern void *city_common_model_archive;
s32 get_main_phase();
extern s32 city_main_warp_destination_id;

void TObjCityMainWarp::update_state() {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = *(s16 *)((s8 *)this + 0xE0);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)this + 0x17C) = 0x96;
        *(s16 *)((s8 *)this + 0xE0) = 1;
        *(s16 *)((s8 *)this + 0xE2) = (s16) (*(s16 *)((s8 *)this + 0xE2) | 1);
        *(s32 *)((s8 *)this + 0xD0) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 8);
        *(s32 *)((s8 *)this + 0xD4) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x2C);
        return;
    case 1:
        if (TObjCityMainWarp::get_phase_flag() == 0) {
            temp_r3 = find_local_player_in_range__16TObjCityMainWarpFf(this, *(f32 *)((s8 *)this + 0xAC));
            if (temp_r3 != 0) {
                TObjCityMainWarp::notify_player_warp(this, local_client_id);
                *(s32 *)((s8 *)this + 0xBC) = (s32) city_main_warp_destination_id;
                this->confirm_area_transfer(temp_r3);
                *(s16 *)((s8 *)this + 0xE0) = 2;
            }
        }
        temp_r0_2 = *(s32 *)((s8 *)this + 0x17C) - 1;
        *(s32 *)((s8 *)this + 0x17C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            *(s16 *)((s8 *)this + 0xE0) = 2;
        }
    case -1:
        break;
    case 2:
        *(s16 *)((s8 *)this + 0xE2) = (s16) (*(s16 *)((s8 *)this + 0xE2) & 0xFFFFFFFE);
        *(s16 *)((s8 *)this + 0xDC) = 3;
        break;
    }
}

void TObjCityMainWarp::update_warp_sequence() {
    u8 *arg0 = (u8 *)this;
    s32 r;
    switch (*(s16 *)((s8 *)arg0 + 0xE0)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x160) = 0x12C;
        play_sound_effect(0x40003205, arg0 + 0x38, 0, 0);
        *(s16 *)((s8 *)arg0 + 0xE0) = 1;
        *(s32 *)((s8 *)arg0 + 0xD0) = *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 8);
        *(s32 *)((s8 *)arg0 + 0xD4) = *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x2C);
        break;
    case 1:
        if (((u32 (*)(f32))find_local_player_in_range__16TObjCityMainWarpFf)(*(f32 *)((s8 *)arg0 + 0xAC)) != 0) {
            TObjCityMainWarp__sub_801875F8(arg0);
            if (*(s32 *)((s8 *)arg0 + 0x170) == 0) {
                ((TObjCityMainWarpChallenge *)arg0)->trigger_warp_effect(local_client_id);
                *(s32 *)((s8 *)arg0 + 0x170) = 1;
            }
        }
        if (TWindowSubTradeMain::get_warp_state() != 0) {
            if (is_local_client_floor_leader((*(s32 *)((s8 *)arg0 + 0x160))--) != 0) {
                if (*(s32 *)((s8 *)arg0 + 0x160) <= 0) {
                    r = 1;
                } else {
                    r = ((TObjCityMainWarpChallenge *)arg0)->are_all_players_in_range();
                }
                if (r != 0) {
                    ((TObjCityMainWarpChallenge *)arg0)->send_6x6A_set_boss_warp_flags(2);
                    *(s16 *)((s8 *)arg0 + 0xE0) = 2;
                }
            }
        }
        break;
    case 2:
        break;
    case -1:
        close_windows__16TObjCityMainWarpFv();
        break;
    }
}

void TObjCityMainWarpChallenge::update_challenge_state() {
    u8 *arg0 = (u8 *)this;
    s32 r;
    if (*(s32 *)((s8 *)arg0 + 0x15C) == 1) {
        *(s16 *)((s8 *)arg0 + 0xDC) = 3;
        return;
    }
    switch (*(s16 *)((s8 *)arg0 + 0xE0)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x170) = 0;
        *(s32 *)((s8 *)arg0 + 0x174) = 0;
        *(s16 *)((s8 *)arg0 + 0xE0) = 1;
        *(s32 *)((s8 *)arg0 + 0xD0) = *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 8);
        *(s32 *)((s8 *)arg0 + 0xD4) = *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x2C);
        break;
    case 1:
        if (((u32 (*)(f32))find_local_player_in_range__16TObjCityMainWarpFf)(*(f32 *)((s8 *)arg0 + 0xAC)) != 0) {
            TObjCityMainWarp__sub_801875F8(arg0);
            ((TObjCityMainWarpChallenge *)arg0)->trigger_warp_effect(local_client_id);
            *(s16 *)((s8 *)arg0 + 0xE0) = 2;
            break;
        }
        if (*(u32 *)((s8 *)arg0 + 0xB0) != 0) {
            TWindow__close((u8 *)(*(u32 *)((s8 *)arg0 + 0xB0)));
            *(u32 *)((s8 *)arg0 + 0xB0) = 0;
        }
        if (*(u32 *)((s8 *)arg0 + 0x164) != 0) {
            TWindow__close((u8 *)(*(u32 *)((s8 *)arg0 + 0x164)));
            *(u32 *)((s8 *)arg0 + 0x164) = 0;
        }
        break;
    case 2:
        TObjCityMainWarp__sub_801875F8(arg0);
        if (*(u32 *)((s8 *)arg0 + 0x168) != 0) {
            if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x168)))->get_card_data() != 0) {
                *(s16 *)((s8 *)arg0 + 0xE0) = 3;
            } else if (((TWindowMessageYesNo *)(*(u32 *)((s8 *)arg0 + 0x168)))->is_child_visible() != 0) {
                r = ((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x168)))->get_slot_or_neg1();
                if (r == 0) {
                    ((TObjCityMainWarpChallenge *)arg0)->trigger_warp_effect(local_client_id);
                    *(s32 *)((s8 *)arg0 + 0x170) = 1;
                    ((TObjCityMainWarpChallenge *)arg0)->send_6x6A_set_boss_warp_flags(1);
                    *(s16 *)((s8 *)arg0 + 0xE0) = 5;
                } else if (r == 1) {
                    *(s16 *)((s8 *)arg0 + 0xE0) = 3;
                }
            }
        }
        if (TWindowSubTradeMain::get_warp_state() != 0 && get_main_phase() == 0xF &&
            ((s32 (*)())is_local_client_floor_leader)() != 0 && ((TObjCityMainWarpChallenge *)arg0)->are_all_players_in_range() != 0) {
            ((TObjCityMainWarpChallenge *)arg0)->send_6x6A_set_boss_warp_flags(2);
            *(s16 *)((s8 *)arg0 + 0xE0) = 5;
        }
        if (*(s16 *)((s8 *)arg0 + 0xE0) != 2) {
            ((s32 (*)(void *))close_windows__16TObjCityMainWarpFv)(arg0);
        }
        break;
    case 3:
        TObjCityMainWarp::notify_player_warp(arg0, local_client_id);
        *(s16 *)((s8 *)arg0 + 0xE0) = 4;
        break;
    case 4:
        if (((u32 (*)(f32))find_local_player_in_range__16TObjCityMainWarpFf)(*(f32 *)((s8 *)arg0 + 0xAC)) == 0) {
            *(s16 *)((s8 *)arg0 + 0xE0) = 1;
            break;
        }
        if (TWindowSubTradeMain::get_warp_state() != 0 && get_main_phase() == 0xF &&
            ((s32 (*)())is_local_client_floor_leader)() != 0 && ((TObjCityMainWarpChallenge *)arg0)->are_all_players_in_range() != 0) {
            ((TObjCityMainWarpChallenge *)arg0)->send_6x6A_set_boss_warp_flags(2);
            *(s16 *)((s8 *)arg0 + 0xE0) = 5;
        }
        break;
    case 5:
        break;
    case -1:
        close_windows__16TObjCityMainWarpFv();
        break;
    }
}

void TObjCityMainWarpChallenge::count_players_in_warp_radius() {
    u8 *arg0 = (u8 *)this;
    Warp_80187438 *self = (Warp_80187438 *)arg0;
    s32 i;
    s32 inside;
    Player_80187438 *pl;
    s32 room;
    s32 old;
    Player_80187438 *pl2;
    old = self->count;
    self->count = 0;
    self->n_inside = 0;
    self->f15c = 0;
    for (i = 0; i < 4; i++) {
        pl = get_player_by_client_id(i);
        if (pl != NULL) {
            room = ((TObjPlayer *)pl)->get_field_3e4();
            if (room == self->fbc) {
                self->f15c = 1;
            }
            inside = 0;
            if (room == get_current_floor()) {
                if (xz_distance_squared(pl->pos, self->pos) <= self->radius * self->radius) {
                    inside = 1;
                    self->n_inside++;
                }
            }
            self->inside[self->count] = inside;
            strcpy(self->names[self->count], pl->name);
            self->count++;
        }
    }
    for (i = self->count; i < 4; i++) {
        self->names[i][0] = 0;
    }
    if (old != self->count && self->window != 0) {
        TWindow__close((u8 *)self->window);
        self->window = 0;
    }
    pl2 = get_player_by_client_id(local_client_id);
    if (pl2 != NULL && ((TObjPlayer *)pl2)->get_field_3e4() == get_current_floor()) {
        if (xz_distance_squared(pl2->pos, self->pos) <= (lbl_805DBCA8 + self->radius) * (lbl_805DBCA8 + self->radius)) {
            if (TObjWarpBossMulti::is_flag_clear(pl2) != 0) {
                ((TObjPlayer *)pl2)->check_technique_flag();
            }
        } else if (TObjWarpBossMulti::is_flag_clear(pl2) == 0) {
            ((TObjPlayer *)pl2)->has_item_flag_4096();
        }
    }
}

}
