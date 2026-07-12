#include "pso/TItemEffBringer.h"

extern "C" void TObjEneDellBiter__sub_80087350(Vec*, int);
extern "C" void TBoss6Type1__sub_803D9370(Vec*, Vec*);
extern "C" void request_destroy__11TBoss4Type2FUi(s32);

void TItemEffBringer::hook() {
    Vec work = this->m_pos;
    for (int i = 0; i != this->m_particle_count; i++) {
        TObjEneDellBiter__sub_80087350(&work, 0x9C);
        TBoss6Type1__sub_803D9370(&work, &this->m_84);
    }
}

TItemEffBringer::~TItemEffBringer() {
    for (int i = 0; i != this->m_particle_count; i++) {
        request_destroy__11TBoss4Type2FUi(this->m_particles[i]);
    }
}
