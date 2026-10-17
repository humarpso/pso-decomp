#include "pso/system/LscStream.h"
#include "pso/system/AdxStreamRuntime.h"
#include "pso/misc/TLobby.h"

struct SJIf_803D1A98 {
    void *f[9];
    s32 (*GetNumData)(struct SJ_803D1A98 *, s32);
};

struct SJ_803D1A98 { SJIf_803D1A98 *vt; };

extern "C" {
extern char lbl_8047DCF0[];
extern char lbl_8047DD14[];
extern char lbl_8047DD58[];
void *memset(void *dst, int val, unsigned long n);
extern LscStream lsc_slot_table[];
extern s32 lobby_slot_refcount;
extern char lbl_8047DD34[];
extern char lbl_8047DDB8[];
extern char lbl_8047DDE4[];
extern const char *volatile lbl_805E0DB0;
void notify_dvd_read__6TLobbyFv(void *);
void enter_lock__6TLobbyFv(void *);
s32 lsc_get_min_buffer_bytes(LscStream *p) {
    if (p == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return -1;
    }
    return p->min_buffer_bytes;
}

void lsc_set_min_buffer_bytes(LscStream *arg0, s32 arg1) {
    if (arg0 == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return;
    }
    if (arg1 < 0 || arg1 > arg0->buffer_capacity) {
        TLobby::log_printf(lbl_8047DD14);
        return;
    }
    arg0->min_buffer_bytes = arg1;
}

s32 lsc_get_stream_progress(LscStream *arg0, s32 arg1) {
    s32 i;
    if (arg0 == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->entries[i].stream_id == arg1) {
            break;
        }
    }
    if (i == 16) {
        TLobby::log_printf(lbl_8047DD34);
        return 0;
    }
    return arg0->entries[i].progress;
}

s32 lsc_get_stream_status(LscStream *arg0, s32 arg1) {
    s32 i;
    if (arg0 == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return -1;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->entries[i].stream_id == arg1) {
            break;
        }
    }
    if (i == 16) {
        TLobby::log_printf(lbl_8047DD34);
        return -1;
    }
    return arg0->entries[i].status;
}

char *lsc_get_stream_filename(LscStream *arg0, s32 arg1) {
    s32 i;
    if (arg0 == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->entries[i].stream_id == arg1) {
            break;
        }
    }
    if (i == 16) {
        TLobby::log_printf(lbl_8047DD34);
        return 0;
    }
    return arg0->entries[i].filename;
}

s32 lsc_get_queued_stream_id(LscStream *arg0, s32 arg1) {
    if (arg0 == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return -1;
    }
    if (arg1 < 0 || arg1 >= arg0->queued_count) {
        TLobby::log_printf(lbl_8047DD58);
        return -1;
    }
    return arg0->entries[(arg0->read_index + arg1) % 16].stream_id;
}

s32 lsc_get_queued_stream_count(LscStream *p) {
    if (p == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return -1;
    }
    return p->queued_count;
}

s32 lsc_get_state(LscStream *arg0) {
    if (arg0 == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return -1;
    }
    return arg0->state;
}

void lsc_poll_all(void) {
    u8 sp8[8];
    s32 i;
    ((void (*)(void *))enter_lock__6TLobbyFv)(sp8);
    for (i = 0; i < 16; i++) {
        if ((s32)lsc_slot_table[i].in_use == 1) {
            lsc_poll(&lsc_slot_table[i]);
        }
    }
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(sp8);
}

void lsc_stop(LscStream *arg0) {
    s32 sp8;
    if (arg0 == NULL) {
        TLobby::log_printf((const char *) (((s32 *)&lbl_8047DCF0)));
        return;
    }
    if ((s8) arg0->state != 0) {
        enter_lock__6TLobbyFv((void *)((void *) (&sp8)));
        arg0->state = 0U;
        if ((u32) (u32)arg0->file_handle != 0U) {
            if ((s32) arg0->read_started == 1) {
                TLobby__sub_803C89C4((u8 *)arg0->file_handle);
                arg0->read_started = 0U;
            }
            TLobby__sub_803C8B38((u8 *)((int) ((u32)arg0->file_handle)));
            arg0->file_handle = 0;
        }
        arg0->file_sector_count = 0;
        if (arg0 == NULL) {
            TLobby::log_printf((const char *) (((s32 *)&lbl_8047DCF0)));
        } else if ((s8) arg0->state == 0) {
            arg0->write_index = 0;
            arg0->read_index = 0;
            arg0->queued_count = 0;
        }
        arg0->field_34 = 0;
        notify_dvd_read__6TLobbyFv((void *)((void *) (&sp8)));
    }
}

void lsc_start(LscStream *o) {
    u8 lk0[4];
    u8 lk1[4];
    if (o == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return;
    }
    ((void (*)(void *))enter_lock__6TLobbyFv)(lk0);
    if (o->state != 0) {
        if (o == 0) {
            TLobby::log_printf(lbl_8047DCF0);
        } else if (o->state != 0) {
            ((void (*)(void *))enter_lock__6TLobbyFv)(lk1);
            o->state = 0;
            if (o->file_handle != 0) {
                if ((s32)o->read_started == 1) {
                    TLobby__sub_803C89C4((u8 *)o->file_handle);
                    o->read_started = 0;
                }
                TLobby__sub_803C8B38((u8 *)o->file_handle);
                o->file_handle = 0;
            }
            o->file_sector_count = 0;
            if (o == 0) {
                TLobby::log_printf(lbl_8047DCF0);
            } else if (o->state == 0) {
                o->write_index = 0;
                o->read_index = 0;
                o->queued_count = 0;
            }
            o->field_34 = 0;
            ((void (*)(void *))notify_dvd_read__6TLobbyFv)(lk1);
        }
    }
    if (o->queued_count > 0) {
        o->state = 2;
    } else {
        o->state = 1;
    }
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(lk0);
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline LscStream *find_free_803D1A98(void) {
    s32 i;
    LscStream *o = 0;
    for (i = 0; i < 16; i++) {
        if ((s8)lsc_slot_table[i].in_use == 0) {
            o = (LscStream *)&lsc_slot_table[i];
            break;
        }
    }
    return o;
}

void lsc_destroy(LscStream *arg0) {
    s32 spC;
    s32 sp8;
    if (arg0 != NULL) {
        enter_lock__6TLobbyFv((void *) (&spC));
        if (arg0 == NULL) {
            TLobby::log_printf((const char *) (((s32 *)&lbl_8047DCF0)));
        } else if ((s8) arg0->state != 0) {
            enter_lock__6TLobbyFv((void *) (&sp8));
            arg0->state = 0U;
            if ((u32) (u32)arg0->file_handle != 0U) {
                if ((s32) arg0->read_started == 1) {
                    TLobby__sub_803C89C4((u8 *)arg0->file_handle);
                    arg0->read_started = 0U;
                }
                TLobby__sub_803C8B38((u8 *)((int) ((u32)arg0->file_handle)));
                arg0->file_handle = 0;
            }
            arg0->file_sector_count = 0;
            if (arg0 == NULL) {
                TLobby::log_printf((const char *) (((s32 *)&lbl_8047DCF0)));
            } else if ((s8) arg0->state == 0) {
                arg0->write_index = 0;
                arg0->read_index = 0;
                arg0->queued_count = 0;
            }
            arg0->field_34 = 0;
            notify_dvd_read__6TLobbyFv((void *) (&sp8));
        }
        arg0->in_use = 0;
        memset((void *)((void *) (arg0)), (int)((int) (0)), (unsigned long)((int) (0x438)));
        notify_dvd_read__6TLobbyFv((void *) (&spC));
    }
}

LscStream *lsc_create(void *sj_handle) {
    SJ_803D1A98 *sj = (SJ_803D1A98 *)sj_handle;
    u8 lk[4];
    s32 i;
    LscStream *o;
    if (sj == 0) {
        TLobby::log_printf(lbl_8047DDB8);
        return 0;
    }
    ((void (*)(void *))enter_lock__6TLobbyFv)(lk);
    o = find_free_803D1A98();
    if (o == 0) {
        TLobby::log_printf(lbl_8047DDE4);
    } else {
        o->stream = sj;
        o->state = 0;
        o->buffer_capacity = sj->vt->GetNumData(sj, 0) + sj->vt->GetNumData(sj, 1);
        o->min_buffer_bytes = (o->buffer_capacity * 8) / 10;
        for (i = 0; i < 16; i++) {
            o->entries[i].status = 0;
        }
        o->in_use = 1;
    }
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(lk);
    return o;
}
#pragma pop

void lsc_shutdown(void) {
    u8 lock[8];
    s32 i;
    ((void (*)(void *))enter_lock__6TLobbyFv)(lock);
    if (--lobby_slot_refcount == 0) {
        for (i = 0; i < 16; i++) {
            if ((s32)lsc_slot_table[i].in_use == 1) {
                lsc_destroy(&lsc_slot_table[i]);
            }
        }
        memset(lsc_slot_table, 0, 0x4380);
        TLobby::set_callback(0, 0);
    }
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(lock);
}

typedef struct { const char *s; s32 n; } Ver_803D1CC0;
void lsc_init(void) {
    u8 sp8[8];
    lbl_805E0DB0;
    ((void (*)(void *))enter_lock__6TLobbyFv)(sp8);
    if (lobby_slot_refcount == 0) {
        memset((void *)(lsc_slot_table), (int)(0), (unsigned long)(0x4380));
        TLobby::set_callback(0, 0);
    }
    lobby_slot_refcount++;
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(sp8);
}

 LscStream lsc_slot_table[16]; }
