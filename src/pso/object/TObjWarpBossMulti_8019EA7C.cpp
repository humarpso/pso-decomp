#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Warp_8019EE14 {
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
    u8 pad168[0x180 - 0x168];
    s32 warping;
};

struct Player_8019EE14 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0x85C - 0x44];
    char name[0x18];
};

extern "C" {
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 xz_distance_squared(void *, void *);
s32 is_flag_clear__17TObjWarpBossMultiFPv(void *);
M2C_UNK has_item_flag_4096__10TObjPlayerFPv(void *);
M2C_UNK check_technique_flag__10TObjPlayerFPv(void *);
Player_8019EE14 *get_player_by_client_id(s32);
M2C_UNK TWindow__close(u32);
char *strcpy(char *, const char *);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DC014;
void TObjPlayer__sub_8019EE14(u8 *arg0);
}

extern "C" {

void update_warp_state__17TObjWarpBossMultiFPv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 TObjWarpBossMulti__sub_8019E4E8(void *);
u32 TObjWarpBossMulti__sub_8019E570(f32);
M2C_UNK close_windows__17TObjWarpBossMultiFPv();
M2C_UNK TObjWarpBossMulti__sub_8019E6C0(void *, M2C_UNK);
M2C_UNK warp_player__17TObjWarpBossMultiFPvi(void *, s32);
M2C_UNK TObjWarpBossMulti__sub_8019EFF0(void *);
s32 get_warp_state__19TWindowSubTradeMainFv();

extern s32 lbl_805D53A0;
extern s32 lbl_805D5C94;
extern s32 lbl_805D5C9C;

void update_warp_state__17TObjWarpBossMultiFPv(u8 *arg0) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x160) = 0x12C;
        play_sound_effect(0x40003205, arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) lbl_805D5C94;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) lbl_805D5C9C;
        return;
    case 1:
        if (TObjWarpBossMulti__sub_8019E570(M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) {
            TObjWarpBossMulti__sub_8019EFF0(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x170) == 0) {
                warp_player__17TObjWarpBossMultiFPvi(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0x170) = 1;
            }
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x160) = (s32) (M2C_FIELD(arg0, s32 *, 0x160) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x160) <= 0) {
                var_r3 = 1;
            } else {
                var_r3 = TObjWarpBossMulti__sub_8019E4E8(arg0);
            }
            if (var_r3 != 0) {
                TObjWarpBossMulti__sub_8019E6C0(arg0, 2);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        break;
    case -1:
        close_windows__17TObjWarpBossMultiFPv();
        break;
    }
}
void TObjPlayer__sub_8019EE14(u8 *arg0) {
    Warp_8019EE14 *self = (Warp_8019EE14 *)arg0;
    s32 i;
    s32 inside;
    Player_8019EE14 *pl;
    s32 room;
    s32 old;
    Player_8019EE14 *pl2;
    old = self->count;
    self->count = 0;
    self->n_inside = 0;
    self->f15c = 0;
    for (i = 0; i < 4; i++) {
        pl = get_player_by_client_id(i);
        if (pl != NULL) {
            room = get_field_3e4__10TObjPlayerFPv(pl);
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
        TWindow__close(self->window);
        self->window = 0;
    }
    pl2 = get_player_by_client_id(lbl_805D53A0);
    if (pl2 != NULL && get_field_3e4__10TObjPlayerFPv(pl2) == get_current_floor()) {
        if (xz_distance_squared(pl2->pos, self->pos) <= (lbl_805DC014 + self->radius) * (lbl_805DC014 + self->radius)) {
            if (is_flag_clear__17TObjWarpBossMultiFPv(pl2) != 0) {
                self->warping = 1;
                check_technique_flag__10TObjPlayerFPv(pl2);
            }
        } else if (is_flag_clear__17TObjWarpBossMultiFPv(pl2) == 0 && self->warping != 0) {
            self->warping = 0;
            has_item_flag_4096__10TObjPlayerFPv(pl2);
        }
    }
}

}
