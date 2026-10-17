#include "pso/item/TItemMagGrowEff.h"
#include "pso/TObject.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/item/TItemMagSub.h"
#include "pso/misc/TNowLoading.h"

extern "C" {
void queue_destruction__7TObjectFv(void *);
void *create_particle_emitter(void *pos, s32 id);
}

void TItemMagGrowEff::run_task() {
    f32 position[3];
    s32 ticks;
    u8 *effect_object;
    u8 *mag_object;
    u8 *active_mag;
    effect_object = effect;
    if ((effect_object != NULL) && (((TObject *)effect_object)->all_parents_unqueued_for_destruction() == 0)) {
        effect = NULL;
    }
    mag_object = mag;
    if ((mag_object != NULL) && (((TObject *)mag_object)->all_parents_unqueued_for_destruction() == 0)) {
        mag = NULL;
    }
    if ((effect != NULL) && (active_mag = mag, (active_mag != NULL))) {
        if (((TItemMagSub *)active_mag)->get_world_position((void*)position) != 0) {
            if (progress_ticks == 0xA) {
                TBoss4Type2::request_destroy((u32)effect);
                effect = (u8 *) (create_particle_emitter(position, 0x9E));
            }
            ((TNowLoading *)effect)->copy_pos(position);
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
    TBoss4Type2::request_destroy((u32)effect);
    if (mag != nullptr) ((TItemMagSub *)mag)->clear_growth_flag();
}

extern const char *lbl_805D2C14;

TItemMagGrowEff::TItemMagGrowEff(TObject *parent, void *mag_object) : TObject(parent) {
    m_name = lbl_805D2C14;
    if (mag_object != NULL) {
        mag = (u8*)mag_object;
        progress_ticks = 0;
        effect = (u8*)create_particle_emitter((mag + 0xDC), 0x9D);
        ((TItemMagSub *)mag)->set_growth_flag();
    } else {
        mag = NULL;
        effect = NULL;
        queue_destruction__7TObjectFv(this);
    }
}
