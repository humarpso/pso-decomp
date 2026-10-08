#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Lobby_801C2898 {
    u8 pad0[0x268];
    s8 pending[8];
    s32 state;
} Lobby_801C2898;

struct Pair_801C271C { s32 v[2]; };

struct Ent_801C26A8 { u16 id; s16 active; u8 pad[4]; };

extern "C" {
s32 is_not_split_screen__13TRaderMapCoreFv(void);
u8 is_battle_mode_active__19TPlayerBattleCtrl4PFv(void);
extern u8 *TLobby__data_805D5D98;
u8 TLobby__sub_801C2614(void);
extern s32 TLobby__data_805D5DC0;
s32 TLobby__sub_801C2678(void);
void send_battle_mode_data__6TLobbyFv(void *);
u8 check_timeout__6TLobbyFPv(void *arg0);
void show_score_results__6TLobbyFPv(void *);
extern s16 lbl_80511CB0[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
void update_battle_sync__6TLobbyFPvi(Lobby_801C2898 *self, s32 t);
u32 get_player_by_client_id(s32);
s32 TLobby__sub_801C19D0(void *);
s32 get_state__19TPlayerBattleCtrl4PFPv(void *);
u8 get_rule_field_a__6TLobbyFPv(void *);
u8 TLobby__sub_801D7100(void *);
extern u8 lbl_8050EA40[];
extern s32 TLobby__data_80511CA0[];
u8 check_battle_end__6TLobbyFv(void);
u32 get_player_by_client_id(s32);
extern Ent_801C26A8 TLobby__data_80511C80[];
s32 TLobby__sub_801C26A8(void);
}

extern "C" {

struct S801C295C_801C25B4 { M2C_UNK f0; s8 f4; s8 pad[0x13]; };

s32 check_all_battle_flags__6TLobbyFv(void);
void clear_counter__6TLobbyFPv(void* a0);
u32 get_player_by_client_id(s32);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
s32 obj_testFlags30(u32, M2C_UNK);
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);

s32 check_all_battle_flags__6TLobbyFv(void) {
    u32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
loop_1:
    temp_r3 = get_player_by_client_id(var_r31);
    if ((temp_r3 != 0U) && (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_1;
}

u8 TLobby__sub_801C2614(void) {
  u8 var_r0;
  u8 *var_r3;
  if (is_not_split_screen__13TRaderMapCoreFv() == 1)
  {
    var_r0 = is_battle_mode_active__19TPlayerBattleCtrl4PFv();
    return var_r0;
  }
  var_r3 = (u8 *) TLobby__data_805D5D98;
  if (var_r3 != 0)
  {
    var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r3) + 0x1C)));
    var_r0 = 0;
    if ((((s32) var_r3) == 1) || (((s32) var_r3) == 2))
    {
      var_r0 = 1;
    }
    var_r3 = (u8 *) ((void *) var_r0);
    return (u8) var_r3;
  }
  var_r3 = (u8 *) 0;
  return 0U;
}

s32 TLobby__sub_801C2678(void) {
    if (TLobby__sub_801C26A8() != 0) {
        return 0;
    }
    return TLobby__data_805D5DC0;
}

s32 TLobby__sub_801C26A8(void) {
    Ent_801C26A8 *e;
    s32 result = 1;
    s32 i;
    for (i = 0; i < 4; i++) {
        e = &TLobby__data_80511C80[i];
        if (get_player_by_client_id(e->id) != 0 && e->active != 0) {
            result = 0;
            break;
        }
    }
    return result;
}

u8 check_battle_end__6TLobbyFv(void) {
    u8 *p;
    s32 cnt;
    s32 i;
    s32 ok;
    s32 idx;
    s32 seen[2] = {0, 0};
    cnt = 0;
    for (i = 0; i < 4; i++) {
        p = (u8 *)get_player_by_client_id(i);
        if (p != NULL) {
            ok = 1;
            if (TLobby__data_80511CA0[i] == 0) {
                ok = 0;
            } else if (*(s32 *)(p + 0x30) & 0x800) {
                if (TLobby__sub_801D7100(lbl_8050EA40) == 1) {
                    ok = 0;
                } else if (TLobby__sub_801D7100(lbl_8050EA40) == 2 &&
                           get_state__19TPlayerBattleCtrl4PFPv(p + 0x754) == 0) {
                    ok = 0;
                }
            }
            if (ok != 0) {
                cnt++;
                if (get_rule_field_a__6TLobbyFPv(lbl_8050EA40) == 1) {
                    idx = TLobby__sub_801C19D0(p + 0x828) - 1;
                    if (idx >= 0 && idx < 2) {
                        seen[idx] = 1;
                    }
                }
            }
        }
    }
    if (get_rule_field_a__6TLobbyFPv(lbl_8050EA40) == 1 && (seen[0] == 0 || seen[1] == 0)) {
        return 1;
    }
    return cnt <= 1;
}

void update_battle_sync__6TLobbyFPvi(Lobby_801C2898 *self, s32 t) {
    s32 i;
    switch (self->state) {
    case 0:
        if (lbl_805D53A0 == TLobby__data_805D53AC) {
            for (i = 0; i < 8; i++) {
                if (self->pending[i] != 0 && t / 60 == lbl_80511CB0[i]) {
                    self->pending[i] = 0;
                    send_battle_mode_data__6TLobbyFv((void *)(self));
                }
            }
        }
        break;
    case 1:
        check_timeout__6TLobbyFPv(self);
        break;
    case 2:
        show_score_results__6TLobbyFPv(self);
        break;
    }
}

void send_battle_mode_data__6TLobbyFv(void * _w0) {
    struct S801C295C_801C25B4 sp8;

    build_6x7D_set_battle_mode_data(&sp8);
    sp8.f4 = 5;
    send_set_battle_mode_data__6TLobbyFPv(&sp8);
}

    extern int lbl_805D5DB0;
void clear_counter__6TLobbyFPv(void* a0) { *(int*)((char*)a0 + 0x270) = 0; lbl_805D5DB0 = 0; }

}
