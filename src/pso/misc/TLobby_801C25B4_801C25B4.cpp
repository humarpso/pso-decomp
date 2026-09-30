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

extern "C" {
s32 is_not_split_screen__13TRaderMapCoreFv(void);
u8 TPlayerBattleCtrl4P__sub_803102C8(void);
extern u8 *TLobby__data_805D5D98;
u8 TLobby__sub_801C2614(void);
s32 TLobby__sub_801C26A8(void);
extern s32 TLobby__data_805D5DC0;
s32 TLobby__sub_801C2678(void);
void send_battle_mode_data__6TLobbyFv(void *);
u8 check_timeout__6TLobbyFPv(void *arg0);
void TLobby__sub_801C2B04(void *);
extern s16 lbl_80511CB0[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
void TLobby__sub_801C2898(Lobby_801C2898 *self, s32 t);
}

extern "C" {

struct S801C295C_801C25B4 { M2C_UNK f0; s8 f4; s8 pad[0x13]; };

s32 check_all_battle_flags__6TLobbyFv(void);
void clear_counter__6TLobbyFPv(void* a0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
s32 obj_testFlags30(u32, M2C_UNK);
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);

s32 check_all_battle_flags__6TLobbyFv(void) {
    u32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
loop_1:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
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
    var_r0 = TPlayerBattleCtrl4P__sub_803102C8();
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

void TLobby__sub_801C2898(Lobby_801C2898 *self, s32 t) {
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
        TLobby__sub_801C2B04(self);
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
