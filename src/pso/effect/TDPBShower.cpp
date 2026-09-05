#include "pso/effect/TDPBShower.h"

extern "C" {
void request_destroy__11TBoss4Type2FUi(void*);
void queue_destruction__7TObjectFv(void*);
void copy_pos__11TNowLoadingFPvPv(void*, void*);
int query_teammate_state__9TObjEneDDFPv(void*);
extern const f32 lbl_805E01C0;
void* TDPBShower__ct(void*, void*, void*);
void* __nw__7TObjectFUl(int);
}

void TDPBShower::run_task() {
    if (query_teammate_state__9TObjEneDDFPv(this) == 0) {
        m_position[1] += lbl_805E01C0;
        if (m_2c != NULL) {
            copy_pos__11TNowLoadingFPvPv(m_2c, m_position);
        }
        if (--m_countdown < 0) {
            queue_destruction__7TObjectFv(this);
        }
    }
}

TDPBShower::~TDPBShower() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}

extern "C" void* create_TDPBShower(void* arg0, void* arg1) {
    void* o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TDPBShower__ct(o, arg0, arg1);
    }
    return o;
}
