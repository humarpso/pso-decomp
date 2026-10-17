#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/object/obj_band.h"
#include "pso/boss/TBoss7Crawfish.h"

extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 lbl_805DF0F0;

void TBoss7Crawfish::update(s32 arg0) {
    if (objInBand((GameObj *)arg0, (f32)lbl_805DF0F0) != 0) {
        ((TBoss7Crawfish *)arg0)->spawn_ground_effects();
        ((TBoss7Crawfish *)arg0)->spawn_effect(0x39E0D);
    }
    ((TBoss7Crawfish *)arg0)->register_attack_hits();
    if (TBoss7Crawfish__data_805DF0D8 == ((TBoss7Crawfish *)arg0)->get_health()) {
        queue_destruction__7TObjectFv((void *)arg0);
    }
}
