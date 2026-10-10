#include "pso/system/SjRingBuffer.h"
typedef s32 M2C_UNK;

#pragma optimize_for_size off

extern "C" {
void restore_interrupts_nested__6TLobbyFv(void);
void lock_enter__6TLobbyFv(void);
void read_ring_buffer_span__6TLobbyFPviiPv(SjRingBuffer *r, s32 which, s32 max, SjChunk *out);
bool calc_ring_buffer_available__6TLobbyFPviiPv(SjRingBuffer *o, s32 mode, s32 n, s32 *out);
void commit_ring_buffer_read__6TLobbyFPviPv(SjRingBuffer *arg0, s32 arg1, SjChunk *arg2);
void *memcpy(void *, const void *, unsigned long);
void TLobby__sub_803D28D8(SjRingBuffer *o, s32 mode, SjChunk *b);
}

extern "C" {

#define MIN_803D2A14(a, b) ((a) < (b) ? (a) : (b))

#define MIN_803D2640(a, b) ((a) < (b) ? (a) : (b))
bool calc_ring_buffer_available__6TLobbyFPviiPv(SjRingBuffer *o, s32 mode, s32 n, s32 *out) {
    s32 t;
    lock_enter__6TLobbyFv();
    if (mode == 0) {
        t = MIN_803D2640(o->writable_bytes, o->extra_buffer_size + (o->buffer_size - o->write_position));
        mode = MIN_803D2640(t, n);
    } else if (mode == 1) {
        t = MIN_803D2640(o->readable_bytes, o->extra_buffer_size + (o->buffer_size - o->read_position));
        mode = MIN_803D2640(t, n);
    } else {
        mode = 0;
        if (o->error_callback != 0) {
            o->error_callback(o->error_context, -3);
        }
    }
    *out = mode;
    restore_interrupts_nested__6TLobbyFv();
    return !(n - mode);
}

void commit_ring_buffer_read__6TLobbyFPviPv(SjRingBuffer *arg0, s32 arg1, SjChunk *arg2) {
    SjErrorCallback temp_r12;
    SjErrorCallback temp_r12_2;
    SjErrorCallback temp_r12_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r6_2;
    if ((s32) arg2->size <= 0 || arg2->data == NULL) {
        return;
    }
        lock_enter__6TLobbyFv();
        if (arg1 == 0) {
            temp_r6 = arg0->buffer_size;
            temp_r4 = ((arg0->write_position + temp_r6) - arg2->size) % temp_r6;
            if (temp_r4 == ((arg2->data - arg0->buffer) % temp_r6)) {
                arg0->write_position = temp_r4;
                arg0->writable_bytes = (s32) (arg0->writable_bytes + arg2->size);
            } else {
                temp_r12 = arg0->error_callback;
                if (temp_r12 != NULL) {
                    temp_r12(arg0->error_context, -3);
                }
            }
        } else if (arg1 == 1) {
            temp_r6_2 = arg0->buffer_size;
            temp_r4_2 = ((arg0->read_position + temp_r6_2) - arg2->size) % temp_r6_2;
            if (temp_r4_2 == ((arg2->data - arg0->buffer) % temp_r6_2)) {
                arg0->read_position = temp_r4_2;
                arg0->readable_bytes = (s32) (arg0->readable_bytes + arg2->size);
            } else {
                temp_r12_2 = arg0->error_callback;
                if (temp_r12_2 != NULL) {
                    temp_r12_2(arg0->error_context, -3);
                }
            }
        } else {
            arg2->size = 0;
            arg2->data = 0;
            temp_r12_3 = arg0->error_callback;
            if (temp_r12_3 != NULL) {
                temp_r12_3(arg0->error_context, -3);
            }
        }
        restore_interrupts_nested__6TLobbyFv();
    }

#define MIN_803D28D8(a, b) ((a) < (b) ? (a) : (b))
void TLobby__sub_803D28D8(SjRingBuffer *o, s32 mode, SjChunk *b) {
    s32 d;
    s32 n;
    s32 e;
    if (b->size <= 0 || b->data == 0) {
        return;
    }
    lock_enter__6TLobbyFv();
    if (mode == 1) {
        o->readable_bytes += b->size;
        d = b->data - o->buffer;
        if (d < o->extra_buffer_size) {
            n = MIN_803D28D8(b->size, o->extra_buffer_size - d);
            memcpy(o->buffer + (o->buffer_size + d), b->data, n);
        }
        e = (b->data - o->buffer) + b->size;
        if (e > o->buffer_size) {
            n = MIN_803D28D8(b->size, e - o->buffer_size);
            memcpy(o->buffer, o->buffer + (e - n), n);
        }
    } else if (mode == 0) {
        o->writable_bytes += b->size;
    } else {
        b->size = 0;
        b->data = 0;
        if (o->error_callback != 0) {
            o->error_callback(o->error_context, -3);
        }
    }
    restore_interrupts_nested__6TLobbyFv();
}

void read_ring_buffer_span__6TLobbyFPviiPv(SjRingBuffer *r, s32 which, s32 max, SjChunk *out) {
    lock_enter__6TLobbyFv();
    if (which == 0) {
        out->size = MIN_803D2A14(r->writable_bytes, r->extra_buffer_size + (r->buffer_size - r->write_position));
        out->size = MIN_803D2A14(out->size, max);
        out->data = r->buffer + r->write_position;
        r->write_position = (r->write_position + out->size) % r->buffer_size;
        r->writable_bytes -= out->size;
    } else if (which == 1) {
        out->size = MIN_803D2A14(r->readable_bytes, r->extra_buffer_size + (r->buffer_size - r->read_position));
        out->size = MIN_803D2A14(out->size, max);
        out->data = r->buffer + r->read_position;
        r->read_position = (r->read_position + out->size) % r->buffer_size;
        r->readable_bytes -= out->size;
    } else {
        out->size = 0;
        out->data = 0;
        if (r->error_callback != NULL) {
            r->error_callback(r->error_context, -3);
        }
    }
    restore_interrupts_nested__6TLobbyFv();
}

}

#pragma optimize_for_size on

extern "C" {

s32 get_slot_count__6TLobbyFPvi(SjRingBuffer *arg0, s32 arg1);
void TLobby__sub_803D2C04(SjRingBuffer *arg0);
void TLobby__sub_803D2C20(SjRingBuffer *arg0, SjErrorCallback arg1, void* arg2);
const u8* TLobby__sub_803D2C2C(SjRingBuffer *arg0);
void clear_entry__6TLobbyFPv(SjRingBuffer *arg0);
M2C_UNK memset(void *, int, int);

s32 get_slot_count__6TLobbyFPvi(SjRingBuffer *arg0, s32 arg1) {
    SjErrorCallback temp_r12;

    if (arg1 == 1) {
        return arg0->readable_bytes;
    }
    if (arg1 == 0) {
        return arg0->writable_bytes;
    }
    temp_r12 = arg0->error_callback;
    if (temp_r12 != NULL) {
        temp_r12(arg0->error_context, -3);
    }
    return 0;
}

void TLobby__sub_803D2C04(SjRingBuffer *arg0) {
    arg0->readable_bytes = 0;
    arg0->writable_bytes = (s32) arg0->buffer_size;
    arg0->write_position = 0;
    arg0->read_position = 0;
}

void TLobby__sub_803D2C20(SjRingBuffer *arg0, SjErrorCallback arg1, void* arg2) {
    arg0->error_callback = arg1;
    arg0->error_context = arg2;
}

const u8* TLobby__sub_803D2C2C(SjRingBuffer *arg0) {
    return arg0->type_uuid;
}

void clear_entry__6TLobbyFPv(SjRingBuffer *arg0) {
    lock_enter__6TLobbyFv();
    if (arg0 != NULL) {
        memset((void *) (arg0), (int) (0), (int) (0x30));
        arg0->in_use = 0;
    }
    restore_interrupts_nested__6TLobbyFv();
}

}

#pragma optimize_for_size off

extern "C" {
extern SjRingBuffer sj_ring_buffer_pool[256];
extern s32 sj_ring_buffer_init_count;
void release_ref_and_clear_buffer_3000__6TLobbyFv(void);

void TLobby__sub_803D2E90(void*, s32);
extern SjRingBufferInterface sj_ring_buffer_interface;
__declspec(section ".rodata") extern const u8 sj_ring_buffer_uuid[16];
SjRingBuffer *TLobby__sub_803D2C84(s32 data, s32 bsize, s32 x24);
__declspec(section ".sdata2") extern const char *const volatile sj_version_pointer;
void add_ref_and_clear_buffer_3000__6TLobbyFv(void);
}

extern "C" {

SjRingBuffer *TLobby__sub_803D2C84(s32 data, s32 bsize, s32 x24) {
    SjRingBuffer *s;
    s32 i;
    lock_enter__6TLobbyFv();
    for (i = 0; i < 256; i++) {
        if (((SjRingBuffer *)&sj_ring_buffer_pool)[i].in_use == 0) {
            break;
        }
    }
    if (i == 256) {
        s = 0;
    } else {
        s = &((SjRingBuffer *)&sj_ring_buffer_pool)[i];
        s->in_use = 1;
        s->interface = &sj_ring_buffer_interface;
        s->buffer = (u8*)data;
        s->buffer_size = bsize;
        s->extra_buffer_size = x24;
        s->type_uuid = sj_ring_buffer_uuid;
        s->error_callback = TLobby__sub_803D2E90;
        s->error_context = s;
        s->readable_bytes = 0;
        s->writable_bytes = s->buffer_size;
        s->write_position = 0;
        s->read_position = 0;
    }
    restore_interrupts_nested__6TLobbyFv();
    return s;
}

void release_ref_and_clear_buffer_3000__6TLobbyFv(void) {
    s32 temp_r0;
    temp_r0 = sj_ring_buffer_init_count - 1;
    sj_ring_buffer_init_count = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (&sj_ring_buffer_pool), (int) (0), (int) (0x3000));
    }
}

void add_ref_and_clear_buffer_3000__6TLobbyFv(void) {
    const char *ver = sj_version_pointer;
    if (sj_ring_buffer_init_count == 0) {
        memset(&sj_ring_buffer_pool, 0, 0x3000);
    }
    sj_ring_buffer_init_count += 1;
}

void TLobby__sub_803D2E90(void*, s32) {
    while (1) {
    }
}

}

extern "C" {
SjRingBuffer sj_ring_buffer_pool[256];
s32 sj_ring_buffer_init_count;
extern const char sj_version_string[] = "\nSJ/GC Ver.6.07 Build:Jun 13 2002 19:00:23\n";
__declspec(section ".rodata") extern const u8 sj_ring_buffer_uuid[16] = {0x3B,0x9A,0x9E,0x81,0x0D,0xBB,0x11,0xD2,0xA6,0xBF,0x44,0x45,0x53,0x54,0x00,0x00};
__declspec(section ".sdata2") extern const char* const volatile sj_version_pointer = sj_version_string;
SjRingBufferInterface sj_ring_buffer_interface = {
    0,0,0,
    clear_entry__6TLobbyFPv,
    TLobby__sub_803D2C2C,
    TLobby__sub_803D2C04,
    read_ring_buffer_span__6TLobbyFPviiPv,
    commit_ring_buffer_read__6TLobbyFPviPv,
    TLobby__sub_803D28D8,
    get_slot_count__6TLobbyFPvi,
    calc_ring_buffer_available__6TLobbyFPviiPv,
    TLobby__sub_803D2C20
};
}
