#include "types.h"

struct Pkt_80010DE8 { u8 f0; u8 f1; u16 f2; u16 f4; u8 f6; u8 f7; };

struct Obj_80010DE8 { u8 pad[0x1c]; u16 f1c; };

extern "C" {
void TObjPlayer__sub_80019664(Pkt_80010DE8 *self);
void send_head__10TObjPlayerFPv(void *p);
void TObjPlayer__sub_80010DE8(Obj_80010DE8 *self, u16 a, u8 b, u8 c);
}

extern "C" {

void TObjPlayer__sub_80010DE8(Obj_80010DE8 *self, u16 a, u8 b, u8 c) {
    Pkt_80010DE8 pkt;
    TObjPlayer__sub_80019664(&pkt);
    pkt.f2 = self->f1c;
    pkt.f4 = a;
    pkt.f6 = b;
    pkt.f7 = c;
    send_head__10TObjPlayerFPv(&pkt);
}

}

#include "types.h"
#include "pso/player/DamageBookkeeping.h"

extern "C" {

void empty_post_damage_hook(void *defender, void *attacker);

void empty_post_damage_hook(void *defender, void *attacker) {  }

}

#include "types.h"
#include "pso/player/DamageBookkeeping.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_80010E44_lbl_8050EA40
{
  M2C_UNK value;
  u8 remaining[0x2C];
};

extern "C" {
int is_locally_controlled__10TObjPlayerFPv(void *);
u8 TOMineTrap__sub_801D7238(void *);
M2C_UNK TOMineTrap__sub_801B0300(void *, void *, void *);
extern RecoveredGlobal_80010E44_lbl_8050EA40 lbl_8050EA40;
void record_local_damage_if_enabled(void *arg0, void *arg1, s32 arg2);
}

extern "C" {

typedef struct RecoveredGlobal_80010E44_lbl_8050EA40 RecoveredGlobal_80010E44_lbl_8050EA40;
#pragma opt_pointer_analysis on
typedef char RecoveredGlobal_80010E44_lbl_8050EA40_size[((sizeof(RecoveredGlobal_80010E44_lbl_8050EA40)) == 0x30) ? (1) : (-1)];
void record_local_damage_if_enabled(void *arg0, void *arg1, s32 arg2) {
  if ((((TOMineTrap__sub_801D7238(&lbl_8050EA40.value) == 1) && (is_locally_controlled__10TObjPlayerFPv(arg0) != 0)) && (arg2 > 0)) && (arg1 != NULL))
  {
    TOMineTrap__sub_801B0300((void *) arg0, (void *) arg1, (void *) arg2);
  }
}

}
