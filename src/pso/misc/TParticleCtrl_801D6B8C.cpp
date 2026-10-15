#include "types.h"

extern "C" {

void destroy_particle__13TParticleCtrlFPv(void *arg0);
void queue_destruction__7TObjectFv(void *);
void *validate_ctrl__13TParticleCtrlFPv(void *);

void destroy_particle__13TParticleCtrlFPv(void *arg0) {
    void *x;
    x = validate_ctrl__13TParticleCtrlFPv(arg0);
    if (x != NULL) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x4));
    }
}

}
