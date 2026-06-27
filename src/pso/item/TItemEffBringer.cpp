#include "pso/TItemEffBringer.h"

extern "C" void fn_80087350(Vec*, int);
extern "C" void fn_803D9370(Vec*, Vec*);
extern "C" void TBoss4Type2__sub_80086C44(s32);

void TItemEffBringer::hook() {
    Vec work = this->m_pos;
    for (int i = 0; i != this->m_particle_count; i++) {
        fn_80087350(&work, 0x9C);
        fn_803D9370(&work, &this->m_84);
    }
}

TItemEffBringer::~TItemEffBringer() {
    for (int i = 0; i != this->m_particle_count; i++) {
        TBoss4Type2__sub_80086C44(this->m_particles[i]);
    }
}
