#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_photon_blast__10TObjPlayerFiUs(s32 arg0, u16 arg1);
void* get_photon_blast_entry__10TObjPlayerFi(int a0);
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
s32 is_locally_controlled__10TObjPlayerFPv(s32);
M2C_UNK construct_at_owner__18TPhotonMagicSquareFPviii(void *, s32, s32, s32);
s32 get_player_by_client_id(u16);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, s16);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

extern s32 tl_07;

void start_photon_blast__10TObjPlayerFiUs(s32 arg0, u16 arg1) {
    s32 temp_r3;
    void *temp_r31;
    void *temp_nw;

    temp_r3 = get_player_by_client_id(arg1);
    if (temp_r3 != 0) {
        temp_r31 = get_photon_blast_entry__10TObjPlayerFi((int)(arg0));
        if (is_locally_controlled__10TObjPlayerFPv(temp_r3) != 0) {
            play_effect_default__10TObjPlayerFii(temp_r3, M2C_FIELD(temp_r31, s16 *, 0x20));
        }
        spawn_particle_effect(temp_r3 + 0x38, 0x13D);
        set_shake_preset__11TCameraCtrlFi(0);
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
void* get_photon_blast_entry__10TObjPlayerFi(int a0) {  return (char*)photon_blast_entry_table + a0 * 44; }

}
