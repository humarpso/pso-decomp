#ifndef PSO_AUDIO_GCRNA_STREAM_H
#define PSO_AUDIO_GCRNA_STREAM_H

#include "pso/system/SjRingBuffer.h"

struct GcrnaStream {
    u8 in_use;
    s8 callback_phase;
    u8 unknown02[2];
    u32 samples_ready;
    u32 flags;
    s32 allocated_channels;
    s32 stream_count;
    u8 unknown14[8];
    u32 buffer_size;
    u8* buffers[2];
    SjRingBuffer* ring_buffers[2];
    u8 unknown30[0x10];
    u32 stream_ids[2];
    s32 stream_started[2];
    u8 unknown50[4];
    u32 silence_samples;
    s32 pan[2];
    s32 volume;
    s32 output_volume;
    s32 aux_a_send;
    s32 aux_b_send;
    s32 surround_pan;
    u8 unknown74[0xC];
};

#include <stddef.h>
typedef char GcrnaStream_size[sizeof(GcrnaStream) == 0x80 ? 1 : -1];
typedef char GcrnaStream_flags_offset[offsetof(GcrnaStream, flags) == 0x08 ? 1 : -1];
typedef char GcrnaStream_channels_offset[offsetof(GcrnaStream, allocated_channels) == 0x0C ? 1 : -1];
typedef char GcrnaStream_rings_offset[offsetof(GcrnaStream, ring_buffers) == 0x28 ? 1 : -1];
typedef char GcrnaStream_ids_offset[offsetof(GcrnaStream, stream_ids) == 0x40 ? 1 : -1];
typedef char GcrnaStream_silence_offset[offsetof(GcrnaStream, silence_samples) == 0x54 ? 1 : -1];

extern "C" {
void GCRNA_SetPlaySw(GcrnaStream* stream, s32 enabled);
u32 gcrna_stream_callback(void* buffer1, u32 length1, void* buffer2, u32 length2, u32 user);
void GCRNA_SetTransSw(GcrnaStream* stream, s32 enabled);
}

#endif
