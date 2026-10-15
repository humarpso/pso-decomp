#include "types.h"

extern "C" {

void update__14TBoss7CrawfishFi(s32 arg0);
f32 get_health__14TBoss7CrawfishFPv(s32);
s32 register_attack_hits__14TBoss7CrawfishFPv(s32);
s32 spawn_effect__14TBoss7CrawfishFii(s32, s32);
s32 spawn_ground_effects__14TBoss7CrawfishFPv(s32);
s32 objInBand__FP7GameObjf(s32, f32);
s32 queue_destruction__7TObjectFv(s32);

extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 lbl_805DF0F0;

void update__14TBoss7CrawfishFi(s32 arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805DF0F0) != 0) {
        spawn_ground_effects__14TBoss7CrawfishFPv(arg0);
        spawn_effect__14TBoss7CrawfishFii(arg0, 0x39E0D);
    }
    register_attack_hits__14TBoss7CrawfishFPv(arg0);
    if (TBoss7Crawfish__data_805DF0D8 == get_health__14TBoss7CrawfishFPv(arg0)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
