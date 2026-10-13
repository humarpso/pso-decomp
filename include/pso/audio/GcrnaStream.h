#ifndef PSO_AUDIO_GCRNA_STREAM_H
#define PSO_AUDIO_GCRNA_STREAM_H

#include "pso/system/SjRingBuffer.h"

struct GcrnaStream {
    u8 unknown00[8];
    u32 flags;
    s32 allocated_channels;
    u8 unknown10[0x18];
    SjRingBuffer* ring_buffers[2];
    u8 unknown30[0x10];
    u32 stream_ids[2];
    u8 unknown48[0x0C];
    u32 silence_samples;
    u8 unknown58[0x28];
};

#include <stddef.h>
typedef char GcrnaStream_size[sizeof(GcrnaStream) == 0x80 ? 1 : -1];
typedef char GcrnaStream_flags_offset[offsetof(GcrnaStream, flags) == 0x08 ? 1 : -1];
typedef char GcrnaStream_channels_offset[offsetof(GcrnaStream, allocated_channels) == 0x0C ? 1 : -1];
typedef char GcrnaStream_rings_offset[offsetof(GcrnaStream, ring_buffers) == 0x28 ? 1 : -1];
typedef char GcrnaStream_ids_offset[offsetof(GcrnaStream, stream_ids) == 0x40 ? 1 : -1];
typedef char GcrnaStream_silence_offset[offsetof(GcrnaStream, silence_samples) == 0x54 ? 1 : -1];

extern "C" void GCRNA_SetTransSw(GcrnaStream* stream, s32 enabled);

#endif
