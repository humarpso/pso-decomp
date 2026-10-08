#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct F_A_80186f84 { char pad[0x18]; };
struct F_V_80186f84 : F_A_80186f84 {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m17(s32);
};

typedef s32 M2C_UNK;
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
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 xz_distance_squared(void *, void *);
s32 is_flag_clear__17TObjWarpBossMultiFPv(void *);
M2C_UNK has_item_flag_4096__10TObjPlayerFPv(void *);
M2C_UNK check_technique_flag__10TObjPlayerFPv(void *);
Player_80187438 *get_player_by_client_id(s32);
M2C_UNK TWindow__close(u32);
char *strcpy(char *, const char *);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DBCA8;
void count_players_in_warp_radius__10TObjPlayerFPv(u8 *arg0);
s32 TLobby__sub_800C6C10(s32);
s32 are_all_players_in_range__16TObjCityMainWarpFPv(void *);
s32 find_local_player_in_range__16TObjCityMainWarpFif(void *, f32);
M2C_UNK close_windows__16TObjCityMainWarpFPv();
M2C_UNK TObjCityMainWarp__sub_80186CC8(void *, M2C_UNK);
M2C_UNK trigger_warp_effect__16TObjCityMainWarpFPvi(void *, s32);
M2C_UNK TObjCityMainWarp__sub_801875F8(void *);
s32 get_warp_state__19TWindowSubTradeMainFv();
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern s32 lbl_805D53A0;
extern void *lbl_805D5B28;
void update_warp_sequence__16TObjCityMainWarpFPv(u8 *arg0);
s32 get_main_phase();
s32 TLobby__sub_800C6C10(s32);
s32 are_all_players_in_range__16TObjCityMainWarpFPv(void *);
s32 find_local_player_in_range__16TObjCityMainWarpFif(void *, f32);
M2C_UNK close_windows__16TObjCityMainWarpFPv();
M2C_UNK TObjCityMainWarp__sub_80186CC8(void *, M2C_UNK);
M2C_UNK notify_player_warp__16TObjCityMainWarpFPvi(void *, s32);
M2C_UNK trigger_warp_effect__16TObjCityMainWarpFPvi(void *, s32);
M2C_UNK TObjCityMainWarp__sub_801875F8(void *);
s32 get_warp_state__19TWindowSubTradeMainFv();
M2C_UNK TWindow__close(u32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(u32);
s32 get_card_data__17TWindowSubComCardFPv(u32);
s32 is_child_visible__17TWindowSubComCardFPv(u32);
extern s32 lbl_805D53A0;
extern void *lbl_805D5B28;
void update_challenge_state__16TObjCityMainWarpFPv(u8 *arg0);
}

extern "C" {

void update_state__16TObjCityMainWarpFPv(void *arg0);
s32 TObjCityMainWarp__sub_80186B00();
s32 find_local_player_in_range__16TObjCityMainWarpFif(void *, f32);
M2C_UNK notify_player_warp__16TObjCityMainWarpFPvi(void *, s32);

extern s32 lbl_805D53A0;
extern void *lbl_805D5B28;
extern s32 lbl_805D5B60;

void update_state__16TObjCityMainWarpFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x17C) = 0x96;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) | 1);
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C);
        return;
    case 1:
        if (TObjCityMainWarp__sub_80186B00() == 0) {
            temp_r3 = find_local_player_in_range__16TObjCityMainWarpFif(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
            if (temp_r3 != 0) {
                notify_player_warp__16TObjCityMainWarpFPvi(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0xBC) = (s32) lbl_805D5B60;
                ((F_V_80186f84 *) arg0)->m17(temp_r3);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x17C) - 1;
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 2;
        }
    case -1:
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s16 *, 0xDC) = 3;
        break;
    }
}

void update_warp_sequence__16TObjCityMainWarpFPv(u8 *arg0) {
    s32 r;
    switch (M2C_FIELD(arg0, s16 *, 0xE0)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x160) = 0x12C;
        play_sound_effect(0x40003205, arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xD4) = M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C);
        break;
    case 1:
        if (((u32 (*)(f32))find_local_player_in_range__16TObjCityMainWarpFif)(M2C_FIELD(arg0, f32 *, 0xAC)) != 0) {
            TObjCityMainWarp__sub_801875F8(arg0);
            if (M2C_FIELD(arg0, s32 *, 0x170) == 0) {
                trigger_warp_effect__16TObjCityMainWarpFPvi(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0x170) = 1;
            }
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0) {
            if (TLobby__sub_800C6C10(M2C_FIELD(arg0, s32 *, 0x160)--) != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x160) <= 0) {
                    r = 1;
                } else {
                    r = are_all_players_in_range__16TObjCityMainWarpFPv(arg0);
                }
                if (r != 0) {
                    TObjCityMainWarp__sub_80186CC8(arg0, 2);
                    M2C_FIELD(arg0, s16 *, 0xE0) = 2;
                }
            }
        }
        break;
    case 2:
        break;
    case -1:
        close_windows__16TObjCityMainWarpFPv();
        break;
    }
}

void update_challenge_state__16TObjCityMainWarpFPv(u8 *arg0) {
    s32 r;
    if (M2C_FIELD(arg0, s32 *, 0x15C) == 1) {
        M2C_FIELD(arg0, s16 *, 0xDC) = 3;
        return;
    }
    switch (M2C_FIELD(arg0, s16 *, 0xE0)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x170) = 0;
        M2C_FIELD(arg0, s32 *, 0x174) = 0;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xD4) = M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C);
        break;
    case 1:
        if (((u32 (*)(f32))find_local_player_in_range__16TObjCityMainWarpFif)(M2C_FIELD(arg0, f32 *, 0xAC)) != 0) {
            TObjCityMainWarp__sub_801875F8(arg0);
            trigger_warp_effect__16TObjCityMainWarpFPvi(arg0, lbl_805D53A0);
            M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            break;
        }
        if (M2C_FIELD(arg0, u32 *, 0xB0) != 0) {
            TWindow__close(M2C_FIELD(arg0, u32 *, 0xB0));
            M2C_FIELD(arg0, u32 *, 0xB0) = 0;
        }
        if (M2C_FIELD(arg0, u32 *, 0x164) != 0) {
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x164));
            M2C_FIELD(arg0, u32 *, 0x164) = 0;
        }
        break;
    case 2:
        TObjCityMainWarp__sub_801875F8(arg0);
        if (M2C_FIELD(arg0, u32 *, 0x168) != 0) {
            if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x168)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xE0) = 3;
            } else if (is_child_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x168)) != 0) {
                r = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x168));
                if (r == 0) {
                    trigger_warp_effect__16TObjCityMainWarpFPvi(arg0, lbl_805D53A0);
                    M2C_FIELD(arg0, s32 *, 0x170) = 1;
                    TObjCityMainWarp__sub_80186CC8(arg0, 1);
                    M2C_FIELD(arg0, s16 *, 0xE0) = 5;
                } else if (r == 1) {
                    M2C_FIELD(arg0, s16 *, 0xE0) = 3;
                }
            }
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0 && get_main_phase() == 0xF &&
            ((s32 (*)())TLobby__sub_800C6C10)() != 0 && are_all_players_in_range__16TObjCityMainWarpFPv(arg0) != 0) {
            TObjCityMainWarp__sub_80186CC8(arg0, 2);
            M2C_FIELD(arg0, s16 *, 0xE0) = 5;
        }
        if (M2C_FIELD(arg0, s16 *, 0xE0) != 2) {
            ((M2C_UNK (*)(void *))close_windows__16TObjCityMainWarpFPv)(arg0);
        }
        break;
    case 3:
        notify_player_warp__16TObjCityMainWarpFPvi(arg0, lbl_805D53A0);
        M2C_FIELD(arg0, s16 *, 0xE0) = 4;
        break;
    case 4:
        if (((u32 (*)(f32))find_local_player_in_range__16TObjCityMainWarpFif)(M2C_FIELD(arg0, f32 *, 0xAC)) == 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 1;
            break;
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0 && get_main_phase() == 0xF &&
            ((s32 (*)())TLobby__sub_800C6C10)() != 0 && are_all_players_in_range__16TObjCityMainWarpFPv(arg0) != 0) {
            TObjCityMainWarp__sub_80186CC8(arg0, 2);
            M2C_FIELD(arg0, s16 *, 0xE0) = 5;
        }
        break;
    case 5:
        break;
    case -1:
        close_windows__16TObjCityMainWarpFPv();
        break;
    }
}

void count_players_in_warp_radius__10TObjPlayerFPv(u8 *arg0) {
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
        if (xz_distance_squared(pl2->pos, self->pos) <= (lbl_805DBCA8 + self->radius) * (lbl_805DBCA8 + self->radius)) {
            if (is_flag_clear__17TObjWarpBossMultiFPv(pl2) != 0) {
                check_technique_flag__10TObjPlayerFPv(pl2);
            }
        } else if (is_flag_clear__17TObjWarpBossMultiFPv(pl2) == 0) {
            has_item_flag_4096__10TObjPlayerFPv(pl2);
        }
    }
}

}
