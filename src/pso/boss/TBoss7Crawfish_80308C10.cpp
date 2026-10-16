#include "types.h"
#include "pso/boss/TBoss7Crawfish.h"

extern "C" {

s32 register_attack_hits__14TBoss7CrawfishFPv(s32);
s32 objInBand__FP7GameObjf(s32, f32);
s32 queue_destruction__7TObjectFv(s32);

extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 lbl_805DF0F0;

void TBoss7Crawfish::update(s32 arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805DF0F0) != 0) {
        ((TBoss7Crawfish *)arg0)->spawn_ground_effects();
        ((TBoss7Crawfish *)arg0)->spawn_effect(0x39E0D);
    }
    register_attack_hits__14TBoss7CrawfishFPv(arg0);
    if (TBoss7Crawfish__data_805DF0D8 == ((TBoss7Crawfish *)arg0)->get_health()) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
