#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TCameraCtrl.h"

extern "C" {

void start_photon_blast__10TObjPlayerFiUs(s32 arg0, u16 arg1);
s32 spawn_particle_effect(s32, s32);
s32 is_locally_controlled__10TObjPlayerFPv(s32);
s32 construct_at_owner__18TPhotonMagicSquareFPviii(void *, s32, s32, s32);
s32 get_player_by_client_id(u16);
u32 __nw__7TObjectFUl(s32);
s32 play_effect_default__10TObjPlayerFii(s32, s16);

extern s32 tl_07;

void start_photon_blast__10TObjPlayerFiUs(s32 arg0, u16 arg1) {
    s32 temp_r3;
    void *temp_r31;
    void *temp_nw;

    temp_r3 = get_player_by_client_id(arg1);
    if (temp_r3 != 0) {
        temp_r31 = TObjPlayer::get_photon_blast_entry((int)(arg0));
        if (is_locally_controlled__10TObjPlayerFPv(temp_r3) != 0) {
            play_effect_default__10TObjPlayerFii(temp_r3, *(s16 *)((s8 *)temp_r31 + 0x20));
        }
        spawn_particle_effect(temp_r3 + 0x38, 0x13D);
        TCameraCtrl::set_shake_preset(0);
        switch (arg0) {
        case 2:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                construct_at_owner__18TPhotonMagicSquareFPviii(temp_nw, tl_07, 2, arg1);
                return;
            }
            break;
        case 3:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                construct_at_owner__18TPhotonMagicSquareFPviii(temp_nw, tl_07, 3, arg1);
                return;
            }
            break;
        case 4:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                construct_at_owner__18TPhotonMagicSquareFPviii(temp_nw, tl_07, 4, arg1);
                return;
            }
            break;
        case 0:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                construct_at_owner__18TPhotonMagicSquareFPviii(temp_nw, tl_07, 0, arg1);
                return;
            }
            break;
        case 1:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                construct_at_owner__18TPhotonMagicSquareFPviii(temp_nw, tl_07, 1, arg1);
                return;
            }
            break;
        case 5:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                construct_at_owner__18TPhotonMagicSquareFPviii(temp_nw, tl_07, 5, arg1);
            }
            break;
        }
    }
}

    extern unsigned char photon_blast_entry_table[];
void*TObjPlayer::get_photon_blast_entry(int a0) {  return (char*)photon_blast_entry_table + a0 * 44; }

}
