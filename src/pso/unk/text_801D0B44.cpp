#include "types.h"

extern "C" {
s32 exit_idle_state__10TObjPlayerFv();
s32 update_action__10TObjPlayerFi(void *);
s32 start_animation__10TObjPlayerFPv(void *);
s32 send_6x3E_stop_at_position__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801D09F4();
s32 complete_idle_state__10TObjPlayerFv();
s32 check_idle_movement_request__10TObjPlayerFPv(void *);
s32 try_apply_status_action_2__10TObjPlayerFPv(void *);
void run_idle_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void run_idle_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void run_walk_state_phase__10TObjPlayerFis(s32, s32);
void TObjPlayer__sub_801CFB80(s32, s32);
void dispatch_run_state__10TObjPlayerFis(s32, s32);
void TObjPlayer__sub_801CF3E0(s32, s32);
void TObjPlayer__sub_801CE19C(s32, s32);
void TObjPlayer__sub_801CDD24(s32, s32);
void dispatch_technique_cast_state__10TObjPlayerFis(s32, s32);
void dispatch_photon_blast_action__10TObjPlayerFis(s32, s32);
void run_guard_reaction_phase__10TObjPlayerFis(s32, s32);
void TObjPlayer__sub_801CB580(s32, s32);
void TObjPlayer__sub_801CB7F8(s32, s32);
void run_hurt_state_phase__10TObjPlayerFis(s32, s32);
void run_fall_reaction_phase__10TObjPlayerFis(s32, s32);
void run_death_state_phase__10TObjPlayerFis(s32, s32);
void TObjPlayer__sub_801C9F6C(s32, s32);
void run_service_hold_state_phase__10TObjPlayerFis(s32, s32);
void TObjPlayer__sub_801C9648(s32, s32);
void run_warp_action_phase__10TObjPlayerFis(s32, s32);
void TObjPlayer__sub_801C8C50(s32, s32);
void TObjPlayer__sub_801C8A28(s32, s32);
void TObjPlayer__sub_801C869C(s32, s32);
void TObjPlayer__sub_801C7A6C(s32, s32);
void run_action_state_phase__10TObjPlayerFisi(s32 arg0, s16 arg1, s32 arg2);
}

extern "C" {

void run_idle_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  s32 new_var;
  {
    switch (arg1)
    {
      case 7:
        try_apply_status_action_2__10TObjPlayerFPv((void *) arg0);
        return;
      new_var = arg0;
      case 2:
        check_idle_movement_request__10TObjPlayerFPv((void *) new_var);
        return;
      case 3:
        complete_idle_state__10TObjPlayerFv();
        return;
      case 8:
        TObjPlayer__sub_801D09F4();
        return;
      case 5:
        send_6x3E_stop_at_position__10TObjPlayerFPv((void *) new_var);
        return;
      case 0:
        start_animation__10TObjPlayerFPv((void *) new_var);
        return;
      case 1:
        update_action__10TObjPlayerFi((void *) new_var);
        return;
      case 6:
        exit_idle_state__10TObjPlayerFv();
        break;
    }
  }
}
void run_action_state_phase__10TObjPlayerFisi(s32 arg0, s16 arg1, s32 arg2) {
    switch (arg1) {
    case 1:
        ((void (*)(s32, s32))run_idle_state_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 2:
        run_walk_state_phase__10TObjPlayerFis(arg0, arg2);
        break;
    case 3:
        TObjPlayer__sub_801CFB80(arg0, arg2);
        break;
    case 4:
        dispatch_run_state__10TObjPlayerFis(arg0, arg2);
        break;
    case 5:
        TObjPlayer__sub_801CF3E0(arg0, arg2);
        break;
    case 6:
        TObjPlayer__sub_801CE19C(arg0, arg2);
        break;
    case 7:
        TObjPlayer__sub_801CDD24(arg0, arg2);
        break;
    case 8:
        dispatch_technique_cast_state__10TObjPlayerFis(arg0, arg2);
        break;
    case 9:
        dispatch_photon_blast_action__10TObjPlayerFis(arg0, arg2);
        break;
    case 10:
        run_guard_reaction_phase__10TObjPlayerFis(arg0, arg2);
        break;
    case 11:
        TObjPlayer__sub_801CB580(arg0, arg2);
        break;
    case 12:
        TObjPlayer__sub_801CB7F8(arg0, arg2);
        break;
    case 13:
        run_hurt_state_phase__10TObjPlayerFis(arg0, arg2);
        break;
    case 14:
        run_fall_reaction_phase__10TObjPlayerFis(arg0, arg2);
        break;
    case 15:
        run_death_state_phase__10TObjPlayerFis(arg0, arg2);
        break;
    case 18:
        TObjPlayer__sub_801C9F6C(arg0, arg2);
        break;
    case 16:
        run_service_hold_state_phase__10TObjPlayerFis(arg0, arg2);
        break;
    case 19:
        TObjPlayer__sub_801C9648(arg0, arg2);
        break;
    case 20:
        run_warp_action_phase__10TObjPlayerFis(arg0, arg2);
        break;
    case 21:
        TObjPlayer__sub_801C8C50(arg0, arg2);
        break;
    case 22:
        TObjPlayer__sub_801C8A28(arg0, arg2);
        break;
    case 23:
        TObjPlayer__sub_801C869C(arg0, arg2);
        break;
    case 24:
        TObjPlayer__sub_801C7A6C(arg0, arg2);
        break;
    }
}

}
