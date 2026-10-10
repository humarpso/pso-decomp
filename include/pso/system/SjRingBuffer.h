#ifndef PSO_SYSTEM_SJ_RING_BUFFER_H
#define PSO_SYSTEM_SJ_RING_BUFFER_H
#include "types.h"

struct SjRingBuffer;
struct SjChunk { u8* data; s32 size; };
typedef void (*SjErrorCallback)(void* context, s32 error);
struct SjRingBufferInterface {
    void* field_00;
    void* field_04;
    void* field_08;
    void (*destroy)(SjRingBuffer*);
    const u8* (*get_uuid)(SjRingBuffer*);
    void (*reset)(SjRingBuffer*);
    void (*get_chunk)(SjRingBuffer*, s32, s32, SjChunk*);
    void (*unget_chunk)(SjRingBuffer*, s32, SjChunk*);
    void (*put_chunk)(SjRingBuffer*, s32, SjChunk*);
    s32 (*get_available)(SjRingBuffer*, s32);
    bool (*is_chunk_available)(SjRingBuffer*, s32, s32, s32*);
    void (*set_error_callback)(SjRingBuffer*, SjErrorCallback, void*);
};
struct SjRingBuffer {
    const SjRingBufferInterface* interface;
    s32 in_use;
    const u8* type_uuid;
    s32 readable_bytes;
    s32 writable_bytes;
    s32 write_position;
    s32 read_position;
    u8* buffer;
    s32 buffer_size;
    s32 extra_buffer_size;
    SjErrorCallback error_callback;
    void* error_context;
};
typedef char SjRingBuffer_size[sizeof(SjRingBuffer)==0x30 ? 1 : -1];
typedef char SjRingBufferInterface_size[sizeof(SjRingBufferInterface)==0x30 ? 1 : -1];
#endif
