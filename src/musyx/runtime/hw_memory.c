#include "musyx/runtime/musyx_runtime_b.h"

#define synthInfo_voiceNum (((u8 *)lbl_80557348)[0x210])
#define synthVoice lbl_805D73B0
#define CLAMP(value, min, max) ((value) > (max) ? (max) : (value) < (min) ? (min) : (value))
#define CLAMP_INV(value, min, max) ((value) < (min) ? (min) : (value) > (max) ? (max) : (value))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define SLOTS_803BD694 (*(Slot_803BD694 **)&lbl_805D748C)
#define OSCachedToPhysical(caddr) ((u32)((u8 *)(caddr) - 0x80000000))
extern "C" {

f32* TLobby__sub_803BE7B0(s32 bytes) {
    return ((f32* (*)(s32))lbl_805D74BC)(bytes);
}

void TLobby__sub_803BE7D8(s32 arg0) {
    (*(Cb_803BE7D8 *)&lbl_805D74BC).fn(arg0);
}

}
