#include "types.h"

extern "C" {

void TObjEneBalClawClaw__sub_80091CCC(void);
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0);
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0);
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0);
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 play_effect_if_v2__10TObjPlayerFi(s32);

void TObjEneBalClawClaw__sub_80091CCC(void) {  }
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003E431, arg0 + 0x38, 0, 0);
}
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003AB2D, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
}
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A32E, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A62F, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A82C, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
}

}
