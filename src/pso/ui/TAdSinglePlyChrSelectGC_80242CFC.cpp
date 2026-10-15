#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 reset_pad_rumble_effects_and_channels(s32);
s32 PADControlMotor(s32, s32);

    extern const float lbl_805DCA04;
void TAdSinglePlyChrSelectGC::reset_state() { *(unsigned char*)((char*)this + 0x0) = 0; *(unsigned char*)((char*)this + 0x1) = 0; *(short*)((char*)this + 0x2) = 0; *(float*)((char*)this + 0x4) = lbl_805DCA04; *(float*)((char*)this + 0x8) = lbl_805DCA04; *(float*)((char*)this + 0xc) = lbl_805DCA04; *(short*)((char*)this + 0x10) = 0; *(short*)((char*)this + 0x12) = 0; *(int*)((char*)this + 0x14) = 0; }

void TAdSinglePlyChrSelectGC::init_slots() {
    s32 var_r31;

    reset_pad_rumble_effects_and_channels(2);
    var_r31 = 0;
    do {
        PADControlMotor(var_r31, 0);
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
