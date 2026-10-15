#include "types.h"

extern "C" {

void init_slots__23TAdSinglePlyChrSelectGCFv(void);
void reset_state__23TAdSinglePlyChrSelectGCFPv(void* a0);
s32 reset_pad_rumble_effects_and_channels(s32);
s32 PADControlMotor(s32, s32);

    extern const float lbl_805DCA04;
void reset_state__23TAdSinglePlyChrSelectGCFPv(void* a0) { *(unsigned char*)((char*)a0 + 0x0) = 0; *(unsigned char*)((char*)a0 + 0x1) = 0; *(short*)((char*)a0 + 0x2) = 0; *(float*)((char*)a0 + 0x4) = lbl_805DCA04; *(float*)((char*)a0 + 0x8) = lbl_805DCA04; *(float*)((char*)a0 + 0xc) = lbl_805DCA04; *(short*)((char*)a0 + 0x10) = 0; *(short*)((char*)a0 + 0x12) = 0; *(int*)((char*)a0 + 0x14) = 0; }

void init_slots__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    reset_pad_rumble_effects_and_channels(2);
    var_r31 = 0;
    do {
        PADControlMotor(var_r31, 0);
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
