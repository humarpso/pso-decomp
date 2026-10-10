#include "pso/system/EventShuffleTable.h"

#include "pso/system/TSetEvtDestroy.h"

extern "C" void queue_destruction__7TObjectFv(void*);

extern "C" {
s32 has_undefeated_entry__14TEnemyTaskListFPv(void*);
s32 run_wave_event_actions();
void TLobby__sub_80208884(void*);
s32 spawn_matching_objects__6TLobbyFssi(s32, s32, void*);
void notify_partner_room_cleared(s32);
}

void TSetEvtDestroy::run_task() {
    switch (m_phase) {
    case 0:
        if (m_1c[2] & 0x10) {
            m_phase = 2;
        }
        if (--m_countdown < 0) {
            if (spawn_matching_objects__6TLobbyFssi(m_1c[4], m_1c[5], m_30) != 0) {
                m_phase = 1;
            } else {
                m_phase = 2;
            }
        }
        break;
    case 1:
        if (has_undefeated_entry__14TEnemyTaskListFPv(m_30) == 0) {
            m_1c[2] |= 0x10;
            m_phase = 2;
        }
        break;
    case 2:
        if (!(m_1c[2] & 8)) {
            m_1c[2] |= 8;
            TLobby__sub_80208884(m_event_context);
            if (run_wave_event_actions() == 0) {
                notify_partner_room_cleared(m_1c[4]);
            }
        }
        m_1c[2] &= ~4;
        queue_destruction__7TObjectFv(this);
        break;
    }
}

TSetEvtDestroy::~TSetEvtDestroy() {
    if (m_30 != nullptr) {
        queue_destruction__7TObjectFv(m_30);
        m_30 = nullptr;
    }
    if (m_1c != nullptr) {
        m_1c[2] &= ~2;
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802093EC_lbl_805139F8 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct Arg_80209334 { u8 pad[0xC]; s32 c; s32 d; };

extern "C" {
extern RecoveredGlobal_802093EC_lbl_805139F8 lobby_slot_ptr_table;
s32 get_area_event_data(s32 arg0);
s32 next_event_shuffle_entry(EventShuffleTable *s);
void init_event_shuffle_table(EventShuffleTable *arg0, s32 arg1);
s32 get_current_floor();
void queue_destruction__7TObjectFv(void *);
void *TEnemyTaskList__ct(void *, void *, s32);
s32 get_area_event_data(s32 arg0);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__14TSetEvtDestroy[];
extern s32 lbl_805D3630;
void *TSetEvtDestroy__ct(void *arg0, void *parent, Arg_80209334 *arg2);
s32 item_drop_rng_below(s32, u32);
void shuffle_event_entries(void *arg0);
}

extern "C" {

typedef char RecoveredGlobal_802093EC_lbl_805139F8_size[sizeof(RecoveredGlobal_802093EC_lbl_805139F8) == 0x48 ? 1 : -1];

void *TSetEvtDestroy__ct(void *arg0, void *parent, Arg_80209334 *arg2) {
    s32 *p;
    void *t;
    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, void **, 0x18) = __vt__14TSetEvtDestroy;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3630;
    p = (s32 *)get_area_event_data(get_current_floor());
    M2C_FIELD(arg0, void **, 0x1C) = NULL;
    M2C_FIELD(arg0, void **, 0x30) = NULL;
    if (p != NULL) {
        M2C_FIELD(arg0, void **, 0x1C) = arg2;
        M2C_FIELD(arg0, void **, 0x20) = (void *)((u8 *)p + *p);
        M2C_FIELD(arg0, s32 *, 0x24) = arg2->d;
        M2C_FIELD(arg0, s32 *, 0x28) = arg2->c;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        t = __nw__7TObjectFUl(0x2C);
        if (t != NULL) {
            t = TEnemyTaskList__ct(t, arg0, 0x20);
        }
        M2C_FIELD(arg0, void **, 0x30) = t;
    } else {
        queue_destruction__7TObjectFv(arg0);
    }
    return arg0;
}

s32 get_area_event_data(s32 arg0) {
    if (arg0 < 0x12) {
        return M2C_FIELD(&lobby_slot_ptr_table.value, M2C_UNK *, (arg0 * 4));
    }
    return 0;
}
s32 next_event_shuffle_entry(EventShuffleTable *s) {
    if (s->count < s->cursor) return 0;
    return s->entries[s->cursor++];
}
void shuffle_event_entries(void *arg0) {
    EventShuffleTable *s = (EventShuffleTable *)arg0;
    s32 i = 0;
    for (; i < s->count; i++) {
        s32 k = item_drop_rng_below(s->rngState, s->count);
        s32 t = s->entries[i];
        s->entries[i] = s->entries[k];
        s->entries[k] = t;
    }
}

void init_event_shuffle_table(EventShuffleTable *arg0, s32 arg1) {
    s32 off;
    s32 i = 0;
    arg0->cursor = off = 0;
    arg0->count = arg1;
    while (i < arg0->count) {
        *(s32 *)((u8 *)arg0->entries + off) = i;
        i++;
        off += 4;
    }
    shuffle_event_entries((void *)(arg0));
    shuffle_event_entries((void *)(arg0));
    shuffle_event_entries((void *)(arg0));
    shuffle_event_entries((void *)(arg0));
}

}
