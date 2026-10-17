#include "types.h"
#include "pso/unk/text_803D60C8.h"
#include "pso/audio/GcrnaError.h"

extern const char lbl_8047E220[];
extern s32 gcrna_audio_buffer_count;
extern u32 lbl_805D7688;
extern u32 gcrna_audio_allocation;
extern s32 gcrna_uses_caller_buffer;

void gcrna_set_audio_buffer_storage(u32 arg0, u32 arg1, s32 arg2) {
    const char* base = lbl_8047E220;
    if (arg0 == 0) {
        gcrna_report_error(base + 0x138);
        return;
    }
    if (arg1 == 0) {
        gcrna_report_error(base + 0x160);
        return;
    }
    if (arg1 < (u32)(arg2 << 13)) {
        gcrna_report_error(base + 0x188);
        return;
    }
    gcrna_audio_buffer_count = arg2;
    lbl_805D7688 = arg1;
    gcrna_audio_allocation = arg0;
    gcrna_uses_caller_buffer = 1;
}
