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
        if (m_event_record->flags & 0x10) {
            m_phase = 2;
        }
        if (--m_countdown < 0) {
            if (spawn_matching_objects__6TLobbyFssi(m_event_record->spawn_arg0, m_event_record->spawn_arg1, m_30) != 0) {
                m_phase = 1;
            } else {
                m_phase = 2;
            }
        }
        break;
    case 1:
        if (has_undefeated_entry__14TEnemyTaskListFPv(m_30) == 0) {
            m_event_record->flags |= 0x10;
            m_phase = 2;
        }
        break;
    case 2:
        if (!(m_event_record->flags & 8)) {
            m_event_record->flags |= 8;
            TLobby__sub_80208884(&m_event_context);
            if (run_wave_event_actions() == 0) {
                notify_partner_room_cleared(m_event_record->spawn_arg0);
            }
        }
        m_event_record->flags &= ~4;
        queue_destruction__7TObjectFv(this);
        break;
    }
}

TSetEvtDestroy::~TSetEvtDestroy() {
    if (m_30 != nullptr) {
        queue_destruction__7TObjectFv(m_30);
        m_30 = nullptr;
    }
    if (m_event_record != nullptr) {
        m_event_record->flags &= ~2;
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

extern "C" {
extern RecoveredGlobal_802093EC_lbl_805139F8 lobby_slot_ptr_table;
s32 get_area_event_data(s32 arg0);
s32 next_event_shuffle_entry(EventShuffleTable *s);
void init_event_shuffle_table(EventShuffleTable *arg0, s32 arg1);
s32 get_current_floor();
void queue_destruction__7TObjectFv(void *);
void *TEnemyTaskList__ct(void *, void *, s32);
s32 get_area_event_data(s32 arg0);
extern s32 lbl_805D3630;

s32 item_drop_rng_below(s32, u32);
void shuffle_event_entries(void *arg0);
}

extern "C" {

typedef char RecoveredGlobal_802093EC_lbl_805139F8_size[sizeof(RecoveredGlobal_802093EC_lbl_805139F8) == 0x48 ? 1 : -1];

}

TSetEvtDestroy::TSetEvtDestroy(TObject* parent, SetDestroyEventRecord* event) : TObject(parent) {
    s32* p;
    void* t;
    m_name = (const char*)lbl_805D3630;
    p = (s32*)get_area_event_data(get_current_floor());
    m_event_record = NULL;
    m_30 = NULL;
    if (p != NULL) {
        m_event_record = event;
        m_event_context.stream = (u8*)p + *p;
        m_event_context.cursor = event->action_offset;
        m_countdown = event->delay_ticks;
        m_phase = 0;
        t = TObject::operator new(0x2C);
        if (t != NULL) {
            t = TEnemyTaskList__ct(t, this, 0x20);
        }
        m_30 = t;
    } else {
        queue_destruction__7TObjectFv(this);
    }
}

extern "C" {

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
