#include "pso/audio/GcrnaStream.h"
#include "pso/audio/GcrnaError.h"
#include "pso/misc/TLobby_803D43C8.h"

#define OS_CORE_CLOCK (*(u32 *)0x800000FC)

#pragma readonly_strings on

extern "C" {
void sndStreamMixParameterEx(u32 stream_id, u8 volume, u8 pan, u8 surround_pan, u8 aux_a, u8 aux_b);
u32 sndStreamActivate(u32 stream_id);
void sndStreamDeactivate(u32 stream_id);
void sndStreamFree(u32 stream_id);
void *memset(void *, int, unsigned long);
}

extern u8 gcrna_volume_table[1000];
extern u32 gcrna_pan_table[31];
extern GcrnaStream gcrna_stream_pool[16];

extern "C" const char *const volatile gcrna_version_pointer = "\nGCRNA Ver.0.97 Build:Jun 13 2002 19:01:27\n";

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 gcrna_get_play_switch(GcrnaStream *stream) {
    if (stream == 0) {
        return -1;
    }
    return (stream->flags >> 1) & 1;
}

inline s32 gcrna_is_playback_settled(GcrnaStream *stream) {
    s32 settled = 0;
    if (gcrna_get_play_switch(stream) == 0) {
        settled = 1;
    } else if (stream->stream_count == 1) {
        if (stream->stream_started[0] == 1) {
            settled = 1;
        }
    } else if (stream->stream_started[0] == 1 && stream->stream_started[1] == 1) {
        settled = 1;
    }
    return settled;
}

void GCRNA_SetPlaySw(GcrnaStream *stream, s32 enabled) {
    s32 i;
    if (stream == 0) {
        return;
    }
    if (enabled == gcrna_get_play_switch(stream)) {
        return;
    }
    if (enabled == 1) {
        stream->samples_ready = 0;
        stream->callback_phase = 0;
        for (i = 0; i < stream->stream_count; i++) {
            sndStreamMixParameterEx(stream->stream_ids[i], gcrna_volume_table[-stream->output_volume],
                                    gcrna_pan_table[stream->pan[i] + 15], 127 - stream->surround_pan,
                                    (u32)(gcrna_volume_table[-stream->volume] * gcrna_volume_table[-stream->aux_a_send]) >> 7,
                                    (u32)(gcrna_volume_table[-stream->volume] * gcrna_volume_table[-stream->aux_b_send]) >> 7);
        }
        gcrna_interrupt_lock_enter();
        for (i = 0; i < stream->stream_count; i++) {
            if (sndStreamActivate(stream->stream_ids[i]) == 0) {
                gcrna_report_error("E1080502:sndStreamActivate fail.(GCRNA_SetPlaySw)\n");
                return;
            }
            stream->stream_started[i] = 0;
        }
        stream->flags |= 2;
        gcrna_interrupt_lock_leave();
    } else if (enabled == 0) {
        u32 wait;
        for (wait = 0; wait < OS_CORE_CLOCK; wait++) {
            if (gcrna_is_playback_settled(stream) == 1) {
                break;
            }
        }
        gcrna_interrupt_lock_enter();
        for (i = 0; i < stream->stream_count; i++) {
            if (stream->stream_ids[i] != 0xFFFFFFFF) {
                if (stream->stream_started[i] == 1) {
                    sndStreamDeactivate(stream->stream_ids[i]);
                    stream->stream_started[i] = 0;
                } else {
                    gcrna_report_error("E2011101:Illigal timing of STOP.(GCRNA_SetPlaySw)\n");
                }
            }
        }
        for (i = 0; i < stream->allocated_channels; i++) {
            SjRingBuffer *ring = stream->ring_buffers[i];
            ring->interface->reset(ring);
            memset(stream->buffers[i], 0, stream->buffer_size);
        }
        stream->flags &= 1;
        gcrna_interrupt_lock_leave();
    } else {
        gcrna_report_error("E1042603:Illigal prameter 'sw'.(GCRNA_SetPlaySw)\n");
    }
}

u32 gcrna_stream_callback(void *buffer1, u32 length1, void *buffer2, u32 length2, u32 user) {
    s32 index;
    GcrnaStream *stream;
    s32 i;
    gcrna_interrupt_lock_enter();
    index = user & 0x7FFFFFFF;
    stream = &gcrna_stream_pool[index / 2];
    if (stream->callback_phase == 0) {
        for (i = 0; i < stream->stream_count; i++) {
            SjChunk chunk;
            u32 bytes = length1 * 2;
            bytes &= ~0x1F;
            stream->ring_buffers[i]->interface->get_chunk(stream->ring_buffers[i], 1, bytes, &chunk);
            stream->ring_buffers[i]->interface->put_chunk(stream->ring_buffers[i], 0, &chunk);
            stream->samples_ready = (u32)chunk.size >> 1;
        }
        if (stream->stream_count == 2) {
            stream->callback_phase = 1;
        }
    } else {
        stream->callback_phase = 0;
    }
    gcrna_interrupt_lock_leave();
    stream->stream_started[index % 2] = 1;
    return stream->samples_ready;
}

inline s32 gcrna_get_transfer_switch(GcrnaStream *stream) {
    if (stream == 0) {
        return -1;
    }
    return stream->flags & 1;
}

#pragma auto_inline on
void GCRNA_SetTransSw(GcrnaStream *stream, s32 enabled) {
    if (stream == 0) {
        return;
    }
    if (enabled == gcrna_get_transfer_switch(stream)) {
        return;
    }
    if (enabled == 1) {
        for (s32 channel = 0; channel < stream->allocated_channels; ++channel) {
            SjRingBuffer *ring = stream->ring_buffers[channel];
            ring->interface->reset(ring);
        }
        stream->silence_samples = 0;
        stream->flags |= 1;
    } else if (enabled == 0) {
        stream->flags &= 2;
    } else {
        gcrna_report_error("E1042601:Illigal prameter 'sw'.(GCRNA_SetTransSw)\n");
    }
}

inline void gcrna_release_stream_channels(GcrnaStream *stream) {
    s32 channel;
    for (channel = 0; channel < stream->allocated_channels; ++channel) {
        if (stream->ring_buffers[channel] != 0) {
            stream->ring_buffers[channel]->interface->destroy(stream->ring_buffers[channel]);
        }
    }
    for (channel = 0; channel < stream->allocated_channels; ++channel) {
        if (stream->stream_ids[channel] != 0xFFFFFFFF) {
            sndStreamFree(stream->stream_ids[channel]);
        }
    }
}

void gcrna_destroy_stream(GcrnaStream *stream) {
    if (stream == 0) {
        return;
    }
    GCRNA_SetPlaySw(stream, 0);
    GCRNA_SetTransSw(stream, 0);
    gcrna_release_stream_channels(stream);
    memset(stream, 0, sizeof(*stream));
}
#pragma pop

u8* gcrna_audio_buffers[32];
GcrnaStream gcrna_stream_pool[16];
u8 gcrna_volume_table[1000] = {
    127, 126, 126, 125, 125, 124, 123, 123, 122, 122, 121, 120, 120, 119, 119, 118, 117, 117, 116, 116,
    115, 115, 114, 113, 113, 112, 112, 111, 111, 110, 110, 109, 108, 108, 107, 107, 106, 106, 105, 105,
    104, 104, 103, 103, 102, 102, 101, 101, 100, 100, 99, 99, 98, 98, 97, 97, 96, 96, 95, 95,
    94, 94, 93, 93, 92, 92, 91, 91, 90, 90, 89, 89, 89, 88, 88, 87, 87, 86, 86, 85,
    85, 85, 84, 84, 83, 83, 82, 82, 81, 81, 81, 80, 80, 79, 79, 79, 78, 78, 77, 77,
    77, 76, 76, 75, 75, 75, 74, 74, 73, 73, 73, 72, 72, 72, 71, 71, 70, 70, 70, 69,
    69, 69, 68, 68, 67, 67, 67, 66, 66, 66, 65, 65, 65, 64, 64, 64, 63, 63, 63, 62,
    62, 62, 61, 61, 61, 60, 60, 60, 59, 59, 59, 58, 58, 58, 57, 57, 57, 57, 56, 56,
    56, 55, 55, 55, 54, 54, 54, 54, 53, 53, 53, 52, 52, 52, 52, 51, 51, 51, 50, 50,
    50, 50, 49, 49, 49, 49, 48, 48, 48, 48, 47, 47, 47, 47, 46, 46, 46, 46, 45, 45,
    45, 45, 44, 44, 44, 44, 43, 43, 43, 43, 42, 42, 42, 42, 41, 41, 41, 41, 41, 40,
    40, 40, 40, 39, 39, 39, 39, 39, 38, 38, 38, 38, 38, 37, 37, 37, 37, 37, 36, 36,
    36, 36, 36, 35, 35, 35, 35, 35, 34, 34, 34, 34, 34, 33, 33, 33, 33, 33, 32, 32,
    32, 32, 32, 32, 31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30, 29, 29, 29, 29,
    29, 29, 28, 28, 28, 28, 28, 28, 27, 27, 27, 27, 27, 27, 27, 26, 26, 26, 26, 26,
    26, 26, 25, 25, 25, 25, 25, 25, 25, 24, 24, 24, 24, 24, 24, 24, 24, 23, 23, 23,
    23, 23, 23, 23, 22, 22, 22, 22, 22, 22, 22, 22, 21, 21, 21, 21, 21, 21, 21, 21,
    21, 20, 20, 20, 20, 20, 20, 20, 20, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 18,
    18, 18, 18, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 15, 15, 15, 15, 15, 15, 15, 15,
    15, 15, 15, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13,
    13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

u32 gcrna_pan_table[31] = {
    0, 4, 8, 12, 16, 20, 24, 28,
    33, 37, 41, 45, 49, 53, 57, 64,
    68, 72, 76, 81, 85, 89, 93, 98,
    102, 106, 110, 115, 119, 123, 127,
};
