#include "types.h"
#include "pso/TParticleCtrl.h"

extern "C" {

void queue_destruction__7TObjectFv(void *);
void *validate_ctrl__13TParticleCtrlFv(void *);

void TParticleCtrl::destroy_particle() {
    void *x;
    x = validate_ctrl__13TParticleCtrlFv(this);
    if (x != NULL) {
        queue_destruction__7TObjectFv(*(void * *)&this->m_flags);
    }
}

}
