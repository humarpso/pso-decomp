#include "pso/audio/GcrnaStream.h"

extern "C" {
void gcrna_report_error(const char* message);
extern const char lbl_8047E2E8[];
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 gcrna_get_transfer_switch(GcrnaStream* stream) {
    if (stream == 0) {
        return -1;
    }
    return stream->flags & 1;
}

extern "C" void GCRNA_SetTransSw(GcrnaStream* stream, s32 enabled) {
    if (stream == 0) {
        return;
    }
    if (enabled == gcrna_get_transfer_switch(stream)) {
        return;
    }
    if (enabled == 1) {
        for (s32 channel = 0; channel < stream->allocated_channels; ++channel) {
            SjRingBuffer* ring = stream->ring_buffers[channel];
            ring->interface->reset(ring);
        }
        stream->silence_samples = 0;
        stream->flags |= 1;
    } else if (enabled == 0) {
        stream->flags &= 2;
    } else {
        gcrna_report_error(lbl_8047E2E8);
    }
}
#pragma pop
