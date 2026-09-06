#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>

extern "C" {
void TObjEneMe1GiGue__sub_802CCE50(u8 *arg0);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEneMe1GiGue__sub_802CCE9C(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
s32 TObjEneDellBiter__sub_80087350(void *, int);
s32 create_breakup_mdl__12TBoss3VoloptFiiiii(int, int, int, void *, int);
s32 refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
s32 TObjEneMe1GiGue__sub_802CB5A0(void *, int);
extern s32 TObjEneMe1GiGue__data_805D683C;
extern const f32 TObjEneMe1GiGue__data_805DE674;
void TObjEneMe1GiGue__sub_802CB9E4(u8 *arg0);
}

extern "C" {

void action__15TObjEneMe1GiGueFPv(void *arg0);
void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1);
void init_move__15TObjEneMe1GiGueFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC4(void *, void *);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80017BA8(void *, s32, f32, f32, f32);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);

void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1) {
    if ((arg1 == TPlayerBattleCtrl4P__sub_801BA74C(0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x3F4) <= 0)) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = 0x1E;
        set_shake_preset__11TCameraCtrlFi(1);
    }
}

void init_move__15TObjEneMe1GiGueFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
    update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0xE));
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
    TObjPlayer__sub_80154E3C(arg0);
}

extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 TObjEneMe1GiGue__data_805DE694;

void TObjEneMe1GiGue__sub_802CB9E4(u8 *arg0) {
    Vec position;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    position.y += TObjEneMe1GiGue__data_805DE674 + M2C_FIELD(arg0, f32 *, 0x3EC);
    create_breakup_mdl__12TBoss3VoloptFiiiii((int) (TObjEneMe1GiGue__data_805D683C), (int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (&position.x), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    refresh_lobby_state__10TObjPlayerFPv((void *) (arg0));
    send_entity_set_flags__6TLobbyFPv((void *) (arg0));
    TObjEneDellBiter__sub_80087350((void *) (&position.x), (int) (0x205));
    TObjEneDellBiter__sub_80087350((void *) (&position.x), (int) (0x206));
    TBoss3Volopt__sub_8022675C((void *) (TObjEneMe1GiGue__sub_802CB5A0((void *) (arg0), (int) (0x3AF1C))), (void *) (&position.x), (int) (0), (int) (0));
    queue_destruction__7TObjectFv((void *) (arg0));
}

void action__15TObjEneMe1GiGueFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        TObjEneMe1GiGueBarrier__sub_80325CC4(arg0, arg0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        M2C_FIELD(arg0, s32 *, 0x384) = 0x2D;
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case 2:
        TObjPlayer__sub_80017BA8(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8), M2C_FIELD(arg0, f32 *, 0x3E4), TObjEneMe1GiGue__data_805DE694, TObjEneMe1GiGue__data_805DE694);
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        update_collisions__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (int)(0));
        }
    case -1:
        return;
    }
}
void TObjEneMe1GiGue__sub_802CCE50(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 5;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}
void TObjEneMe1GiGue__sub_802CCE9C(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  if (temp_r0 != 0xC)
  {
    if (temp_r0 < 0xC)
    {
      if (temp_r0 < 0xA)
      {
        arg0++;
        arg0--;
        goto block_6;
      }
      goto block_5;
    }
    if (temp_r0 < 0xE)
    {
      block_5:
      *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFFDFF);
      return;
    }
    goto block_6;
  }
  block_6:
  set_state__15TObjEneMe1GiGueFPvi((void *)((void *) arg0), (s32)((int) 4));
  *((s32 *) (((s8 *) arg0) + 0x380)) = (s32) (*((s32 *) (((s8 *) arg0) + 0x378)));
  *((s32 *) (((s8 *) arg0) + 0x378)) = 4;
  *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x388))) | 0x10000) | 1);
}

}
