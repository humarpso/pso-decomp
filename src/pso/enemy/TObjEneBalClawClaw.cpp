#include "types.h"

extern "C" {

void TObjEneBalClawClaw__sub_80091CCC(void);
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0);
void TObjEneBalClawClaw__sub_80091D08(s32 arg0);
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0);
void TObjEneBalClawClaw__sub_80091D88(s32 arg0);
void TObjEneBalClawClaw__sub_80091DC8(s32 arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TObjPlayer__sub_8022602C(s32);

void TObjEneBalClawClaw__sub_80091CCC(void) {  }
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003E431, arg0 + 0x38, 0, 0);
}
void TObjEneBalClawClaw__sub_80091D08(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003AB2D, arg0 + 0x38, 0, 0);
    TObjPlayer__sub_8022602C(-0x200);
}
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A32E, arg0 + 0x38, 0, 0);
    TObjPlayer__sub_8022602C(-0x100);
}
void TObjEneBalClawClaw__sub_80091D88(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A62F, arg0 + 0x38, 0, 0);
    TObjPlayer__sub_8022602C(-0x100);
}
void TObjEneBalClawClaw__sub_80091DC8(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A82C, arg0 + 0x38, 0, 0);
    TObjPlayer__sub_8022602C(-0x200);
}

}
