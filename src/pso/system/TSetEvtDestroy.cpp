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
