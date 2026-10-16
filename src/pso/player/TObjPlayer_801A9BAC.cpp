#include "types.h"
#include "pso/unk/TUnk_804C349C.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

typedef struct SA9_801a9bac {
    char pad0[0x44];
    s32 f44;
    s32 f48;
    s32 pad4C;
    s32 arr50[4];
    s32 arr60[4];
} SA9_801a9bac;

void update_and_destroy__10TObjPlayerFPv(u8 *arg0);
s32 deliver_photon_blast_results_delayed(void *);
s32 step_photon_blast_sequence(void *);
s32 get_player_by_client_id(u16);
s32 queue_deferred_photon_blast_support(s32, s32, s32);
s32 queue_destruction__7TObjectFv(void *);

void update_and_destroy__10TObjPlayerFPv(u8 *arg0) {
    SA9_801a9bac *self = (SA9_801a9bac *)arg0;
    s32 temp_r0;
    s32 var_r31;
    s32 var_r30;
    s32 var_r28;
    s32 var_r27;
    s32 inner;

    self->f44 += 1;
    if (self->f48 < self->f44) {
        for (var_r28 = 0; var_r28 < 4; var_r28++) {
            temp_r0 = self->arr50[var_r28];
            if ((temp_r0 == 4) || (temp_r0 == 5)) {
                for (var_r27 = 0; var_r27 < 4; var_r27++) {
                    inner = self->arr60[var_r27];
                    if ((u32) inner < 4U) {
                        queue_deferred_photon_blast_support(inner, self->arr50[var_r28], 1);
                    }
                }
            }
        }
        deliver_photon_blast_results_delayed(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void TUnk_804C349C::run_task() {
    *(s32 *)((s8 *)this + 0x38) = get_player_by_client_id(*(u16 *)((s8 *)this + 0x3C));
    if ((s32) *(s32 *)((s8 *)this + 0x4C) != 0) {
        step_photon_blast_sequence(this);
        return;
    }
    update_and_destroy__10TObjPlayerFPv((u8 *)(this));
}

}
