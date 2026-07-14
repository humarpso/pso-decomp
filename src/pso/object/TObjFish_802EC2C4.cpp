#include "types.h"

extern "C" {

void spawn_via_trap__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2);
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2);
void TObjFish__sub_802EC32C(void);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
s32 TOTrapAncient01__sub_80226578(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);

void spawn_via_trap__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg2, 0, 0);
}
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2) { TBoss3Volopt__sub_8022675C(a1, a2, (void*)0, (void*)0); }
void TObjFish__sub_802EC32C(void) {  }

}
