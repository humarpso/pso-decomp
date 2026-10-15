#include "types.h"

struct RecoveredGlobal_800A887C_lbl_80491260
{
  s32 value;
  u8 remaining[0x5C];
};

extern "C" {
s32 get_instance__6TLobbyFv(void);
s32 send_entity_set_flags__6TLobbyFPv(void *);
s32 play_sound_effect(s32, u32, s16, s32);
s32 obj_setFlags30(void *, int);
s32 queue_destruction__7TObjectFv(void *);
s32 set_flag_start_effect__10TObjPlayerFv();
s32 create_breakup_mdl__12TBoss3VoloptFlllll(void *, void *, int, void *, int);
s32 trigger_dell_biter_events__10TObjPlayerFv(void *);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, int);
s32 refresh_lobby_state__10TObjPlayerFv(void *);
extern RecoveredGlobal_800A887C_lbl_80491260 lbl_80491260;
extern s32 breakup_model_ptr;
void TObjPlayer__sub_800A887C(u8 *arg0);
}

extern "C" {

typedef struct RecoveredGlobal_800A887C_lbl_80491260 RecoveredGlobal_800A887C_lbl_80491260;
void TObjPlayer__sub_800A887C(u8 *arg0) {
  s16 temp_r3;
  set_flag_start_effect__10TObjPlayerFv();
  temp_r3 = (*((s16 *) (((s8 *) arg0) + 0x33C)) = (*((s16 *) (((s8 *) arg0) + 0x33C))) - 1);
  if (temp_r3 <= 0)
  {
    if (get_instance__6TLobbyFv() != 0)
    {
      play_sound_effect(0x4003AD10, (u32) (arg0 + 0x38), 0, 0);
    }
    else
    {
      play_sound_effect(copy_target_state__14TObjEnePanarmsFPv((void *) arg0, (int) 0x4003AD16), (u32) (arg0 + 0x38), 0, 0);
    }
    create_breakup_mdl__12TBoss3VoloptFlllll((void *) breakup_model_ptr, (void *) (&lbl_80491260.value), (int) (*((s32 *) (((s8 *) arg0) + 0x24))), (void *) (arg0 + 0x2FC), (int) (*((s32 *) (((s8 *) arg0) + 0x60))));
    refresh_lobby_state__10TObjPlayerFv((void *) arg0);
    send_entity_set_flags__6TLobbyFPv(arg0);
    trigger_dell_biter_events__10TObjPlayerFv((void *) (arg0 + 0x2FC));
    obj_setFlags30((void *) arg0, (int) 0x800);
    queue_destruction__7TObjectFv((void *) arg0);
  }
}

}
