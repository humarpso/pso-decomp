#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Seq_80212304 {
    u8 pad0[0x1C];
    void *win;
    char names[4][0x18];
};

extern "C" {
f32 xz_distance_squared(void *, void *);
s32 get_player_by_client_id(int);
M2C_UNK advance_matching_entries__22THunterGuildSeqOfflineFPvii(int, int, int);
extern s32 TLobby__data_805D53AC;
extern f32 THunterGuildSeqOffline__data_805DC648;
void update_member_proximity__22THunterGuildSeqOfflineFPv(u8 *arg0);
s32 get_field_3e0__12TBoss3VoloptFPv(int);
f32 xz_distance_squared(void *, void *);
s32 get_player_by_client_id(int);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern f32 THunterGuildSeqOffline__data_805DC648;
s32 THunterGuildSeqOffline__sub_80212074(void);
s32 get_player_count__10TObjPlayerFv();
s32 get_field_3e0__12TBoss3VoloptFPv(int);
s32 is_flag_set__6TLobbyFv();
f32 xz_distance_squared(void *, void *);
s32 count_members__6TLobbyFv();
s32 get_player_by_client_id(int);
extern s32 TLobby__data_805D53AC;
extern f32 THunterGuildSeqOffline__data_805DC648;
s32 check_party_gathered__22THunterGuildSeqOfflineFv(void);
void set_close_flag__19TWindowSubTradeMainFPv(void *);
void set_visible__19TWindowSubTradeMainFPv(void *);
s32 get_player_by_client_id(int);
void TWindow__close(void *);
void dispatch_without_flags__20TWindowSubStatusDispFiii(void *, char *, s32);
void *refresh_with_default_list__20TWindowSubStatusDispFii(void *, void *);
void *get_window_layout_position(s32);
char *strcpy(char *, const char *);
extern u8 lbl_804C96B8[];
void open_member_name_window__22THunterGuildSeqOfflineFPv(Seq_80212304 *self);
}

extern "C" {

int THunterGuildSeqOffline__sub_80211FEC(int a0);
int THunterGuildSeqOffline__sub_80212000(int a0);
int THunterGuildSeqOffline__sub_80212060(int a0);
void *create__22THunterGuildSeqOfflineFPv(void *arg0);
void *THunterGuildSeqOffline__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

    extern int lbl_80513E70[];
int THunterGuildSeqOffline__sub_80211FEC(int a0) {  return lbl_80513E70[a0]; }

    extern int lbl_80513E60[];
int THunterGuildSeqOffline__sub_80212000(int a0) {  return lbl_80513E60[a0]; }

extern void *tl_05;

void *create__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = THunterGuildSeqOffline__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int THunterGuildSeqOffline__data_80513DD8[];
int THunterGuildSeqOffline__sub_80212060(int a0) {  return THunterGuildSeqOffline__data_80513DD8[a0]; }

s32 THunterGuildSeqOffline__sub_80212074(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    if ((s32) TLobby__data_805D53AC == (s32) lbl_805D53A0) {
        return 0;
    }
    temp_r3 = get_player_by_client_id((int)((void *) (lbl_805D53A0)));
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r3_3 = get_field_3e0__12TBoss3VoloptFPv((int) (temp_r3));
    if ((temp_r3_3 != 0x12) && ((temp_r3_3 >= 0x12) || (temp_r3_3 != 0))) {
        return 0;
    }
    temp_r3_2 = get_player_by_client_id((int)((void *) (TLobby__data_805D53AC)));
    if (temp_r3_2 == 0) {
        return 0;
    }
    return (u32)__cntlzw((u32)((xz_distance_squared((void *) (temp_r3 + 0x38), (void *) (temp_r3_2 + 0x38)) > (*(const f32 *)&THunterGuildSeqOffline__data_805DC648)))) >> 5;
}

s32 check_party_gathered__22THunterGuildSeqOfflineFv(void) {
    s32 i;
    s32 result;
    s32 j;
    s32 me;
    f32 lim;
    s32 p;
    if (get_player_count__10TObjPlayerFv() != 0 && count_members__6TLobbyFv() == 1) {
        return 2;
    }
    if (is_flag_set__6TLobbyFv() != 0 && count_members__6TLobbyFv() == 1) {
        return 2;
    }
    for (i = 0; i < 4; i++) {
        u32 q = get_player_by_client_id(i);
        if (q != 0) {
            switch (get_field_3e0__12TBoss3VoloptFPv(q)) {
            case 0:
            case 0x12:
                break;
            default:
                return 0;
            }
        }
    }
    result = 1;
    me = get_player_by_client_id(TLobby__data_805D53AC);
    lim = THunterGuildSeqOffline__data_805DC648;
    for (j = 0; j < 4; j++) {
        if (j != TLobby__data_805D53AC) {
            p = get_player_by_client_id(j);
            if (p != 0 && xz_distance_squared((void *)(me + 0x38), (void *)(p + 0x38)) > lim) {
                result = 0;
            }
        }
    }
    return result;
}

void update_member_proximity__22THunterGuildSeqOfflineFPv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r30;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        temp_r31 = get_player_by_client_id((int) (TLobby__data_805D53AC));
        var_r30 = 0;
        do {
            if (var_r30 != (s32) TLobby__data_805D53AC) {
                temp_r3 = get_player_by_client_id((int) (var_r30));
                if (temp_r3 != 0) {
                    if (xz_distance_squared((void *) (temp_r31 + 0x38), (void *) (temp_r3 + 0x38)) <= THunterGuildSeqOffline__data_805DC648) {
                        advance_matching_entries__22THunterGuildSeqOfflineFPvii((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (int) (1), (int) (var_r30));
                    } else {
                        advance_matching_entries__22THunterGuildSeqOfflineFPvii((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (int) (0), (int) (var_r30));
                    }
                } else {
                    advance_matching_entries__22THunterGuildSeqOfflineFPvii((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (int) (0), (int) (var_r30));
                }
            } else {
                advance_matching_entries__22THunterGuildSeqOfflineFPvii((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (int) (1), (int) (var_r30));
            }
            var_r30 += 1;
        } while (var_r30 < 4);
    }
}
void open_member_name_window__22THunterGuildSeqOfflineFPv(Seq_80212304 *self) {
    s32 i;
    if (self->win != 0) {
        TWindow__close(self->win);
        self->win = 0;
    }
    self->win = refresh_with_default_list__20TWindowSubStatusDispFii(get_window_layout_position(0xBD), lbl_804C96B8);
    if (self->win != 0) {
        set_visible__19TWindowSubTradeMainFPv(self->win);
        set_close_flag__19TWindowSubTradeMainFPv(self->win);
        for (i = 0; i < 4; i++) {
            u32 p = get_player_by_client_id(i);
            if (p != 0) {
                strcpy(self->names[i], (char *)(p + 0x85C));
                dispatch_without_flags__20TWindowSubStatusDispFiii(self->win, self->names[i], i);
            } else {
                self->names[i][0] = 0;
                dispatch_without_flags__20TWindowSubStatusDispFiii(self->win, self->names[i], i);
            }
        }
    }
}

}
