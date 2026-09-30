#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Ene_800D2E8C {
    u8 pad0[0x38C];
    s32 count;
    u8 pad390[0x3A8 - 0x390];
    s32 f3A8;
} Ene_800D2E8C;

typedef struct Ene_800D2F6C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x38 - 0x28];
    f32 pos[3];
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0x2FC - 0xBA];
    f32 v2FC[3];
    u8 pad308[0x33C - 0x308];
    s16 timer;
    u8 pad33E[0x37C - 0x33E];
    s32 state;
} Ene_800D2F6C;

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjPlayer__sub_800D306C(u8 *arg0);
s32 obj_clearFlags30(void *, int);
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
s32 fn_800D2900(void *);
s32 fn_800D2A68(void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjPlayer__sub_800D31EC(u8 *arg0);
s32 update_state__15TObjEnemyCustomFPv(void *);
s32 TObjPlayer__sub_800D1E4C(void *);
s32 update__19TObjGyaranzoMissileFPv(void *);
s32 TObjPlayer__sub_800D2CE4(void *);
s32 TObjPlayer__sub_800D30A8(void *);
s32 TObjPlayer__sub_800D3314(void *);
void TObjPlayer__sub_800D39EC(u8 *arg0);
extern s16 lbl_80494250[];
extern u32 *lbl_80500ED0[];
extern u32 *lbl_805D5200;
extern u32 *lbl_805D5204;
void TObjPlayer__sub_800D2E8C(Ene_800D2E8C *arg0);
void queue_destruction__7TObjectFv(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, void *, s32, void *, s32);
void create_dead_spot__10TObjPlayerFiif(void *, s32, f32);
void trigger_dell_biter_events__10TObjPlayerFPv(void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 TBoss1Dragon__sub_80143504(void *);
void send_entity_set_flags__6TLobbyFPv(void *);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
extern u8 lbl_8049426C[];
extern s32 lbl_805D5208;
extern const f32 lbl_805DA27C;
void TObjPlayer__sub_800D2F6C(Ene_800D2F6C *arg0);
}

extern "C" {

void TObjPlayer__sub_800D35D4(void);

void TObjPlayer__sub_800D2E8C(Ene_800D2E8C *arg0) {
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        *lbl_80500ED0[lbl_80494250[i]] |= 8;
    }
    for (; i < 13; i++) {
        *lbl_80500ED0[lbl_80494250[i]] &= ~8;
    }
    if (arg0->f3A8 >= 1) {
        *lbl_805D5200 |= 8;
        *lbl_805D5204 |= 8;
    } else {
        *lbl_805D5200 &= ~8;
        *lbl_805D5204 &= ~8;
    }
}

void TObjPlayer__sub_800D2F6C(Ene_800D2F6C *arg0) {
    switch (arg0->state) {
    case 0:
        arg0->fB8 = 4;
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        arg0->timer = 0x5A;
        create_dead_spot__10TObjPlayerFiif(arg0->v2FC, 0x5A, lbl_805DA27C);
        create_dead_spot__10TObjPlayerFiif(arg0->v2FC, 0x5A, lbl_805DA27C);
        arg0->state = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        arg0->timer--;
        if (arg0->timer < 0) {
            create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D5208, lbl_8049426C, arg0->f24, arg0->v2FC, arg0->f60);
            send_entity_set_flags__6TLobbyFPv(arg0);
            trigger_dell_biter_events__10TObjPlayerFPv(arg0->v2FC);
            TBoss3Volopt__sub_8022675C((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD10), arg0->pos, 0, 0);
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    case -1:
        return;
    }
}

void TObjPlayer__sub_800D306C(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

void TObjPlayer__sub_800D31EC(u8 *arg0) {
  s32 temp_r0;
  unsigned long var_r3;
  if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != 4)
  {
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3B8)))) <= 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x3B8)) = 0x3C;
      fn_800D2A68((void *) arg0);
    }
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x3A8));
    var_r3 = 0;
    switch (temp_r0)
    {
      case 0:
        var_r3 = (*((s16 *) (((s8 *) arg0) + 0x32C))) <= (((s16) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) / 3);
        break;
      case 1:
        var_r3 = (*((s16 *) (((s8 *) arg0) + 0x32C))) <= (((s16) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) / 4);
        break;
    }
    if (((s32) var_r3) != 0)
    {
      fn_800D2900((void *) arg0);
    }
    *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
    TBoss3Volopt__sub_8022675C((void *) copy_target_state__14TObjEnePanarmsFPvPv((void *) arg0, (int) 0x4003AD0F), (void *) (arg0 + 0x38), (int) 0, (int) 0);
    if (!((*((s32 *) (((s8 *) arg0) + 0x388))) & 0x40000))
    {
      set_state__15TObjEneMe1GiGueFPvi((void *)((void *) arg0), (s32)((int) 4));
      *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x388))) | 1);
      return;
    }
    obj_clearFlags30((void *) arg0, (int) 0x200200);
  }
}

void TObjPlayer__sub_800D35D4(void) {  }
void TObjPlayer__sub_800D39EC(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        update_state__15TObjEnemyCustomFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_800D3314((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_800D2CE4((void *) arg0);
        return;
      case 4:
        TObjPlayer__sub_800D30A8((void *) arg0);
        return;
      case 5:
        TObjPlayer__sub_800D2F6C((Ene_800D2F6C *)((void *) arg0));
        return;
      case 7:
        update__19TObjGyaranzoMissileFPv((void *) arg0);
        return;
      case 9:
        TObjPlayer__sub_800D3314((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_800D1E4C((void *) arg0);
        break;
    }
  }
}

}
