#include "pso/item/TItemMagGrowEff.h"

extern "C" void clear_flag_64__11TItemMagSubFPv(void*);

extern "C" {
void queue_destruction__7TObjectFv(void *);
void request_destroy__11TBoss4Type2FUi(void *);
s32 create_particle_emitter(s32, s32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 get_world_position__11TItemMagSubFPvUi(void *, u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
}

void TItemMagGrowEff::run_task() {
    f32 position[3];
    s32 ticks;
    u8 *effect_object;
    u8 *mag_object;
    u8 *active_mag;
    effect_object = effect;
    if ((effect_object != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv(effect_object) == 0)) {
        effect = NULL;
    }
    mag_object = mag;
    if ((mag_object != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv(mag_object) == 0)) {
        mag = NULL;
    }
    if ((effect != NULL) && (active_mag = mag, (active_mag != NULL))) {
        if (get_world_position__11TItemMagSubFPvUi(active_mag, (u32) position) != 0) {
            if (progress_ticks == 0xA) {
                request_destroy__11TBoss4Type2FUi(effect);
                effect = (u8 *) (create_particle_emitter((s32) position, 0x9E));
            }
            copy_pos__11TNowLoadingFPvPv(effect, position);
            ticks = progress_ticks;
            if (ticks == 0x14) {
                queue_destruction__7TObjectFv(this);
                return;
            }
            progress_ticks = ticks + 1;
        }
    } else {
        queue_destruction__7TObjectFv(this);
    }
}

TItemMagGrowEff::~TItemMagGrowEff() {
    request_destroy__11TBoss4Type2FUi(effect);
    if (mag != nullptr) clear_flag_64__11TItemMagSubFPv(mag);
}

extern "C" {

s32 set_grow_flag__15TItemMagGrowEffFPv(u32);

extern const char *lbl_805D2C14;

}

TItemMagGrowEff::TItemMagGrowEff(TObject *parent, void *mag_object) : TObject(parent) {
    m_name = lbl_805D2C14;
    if (mag_object != NULL) {
        mag = (u8*)mag_object;
        progress_ticks = 0;
        effect = (u8*)create_particle_emitter((s32)(mag + 0xDC), 0x9D);
        set_grow_flag__15TItemMagGrowEffFPv((u32)mag);
    } else {
        mag = NULL;
        effect = NULL;
        queue_destruction__7TObjectFv(this);
    }
}
