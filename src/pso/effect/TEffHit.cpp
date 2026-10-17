#include "pso/effect/TEffHit.h"
#include "pso/system/vector.h"
extern "C" {
void queue_destruction__7TObjectFv(void*);
void *spawn_particle_effect(void *pos, s32 id);
extern const f32 lbl_805D9448;
extern const char* TEffHit__class_name;
}

void TEffHit::run_task() {
    Vec shifted_position;
    s32 particle;
    switch (state) {
    case 0:
        particle = 0;
        state = 1;
        do {
            if (particle == 2) {
                shifted_position.x = position.x;
                shifted_position.y = position.y - lbl_805D9448;
                shifted_position.z = position.z;
                spawn_particle_effect(&shifted_position, particle + 4);
            } else if (particle == 3) {
                spawn_particle_effect(&position, 0xD);
            } else {
                spawn_particle_effect(&position, particle + 4);
            }
            particle++;
        } while (particle < 4);
        return;
    case 1:
        age++;
        if (age > 60) {
            queue_destruction__7TObjectFv(this);
        }
        return;
    }
}

TEffHit::~TEffHit() {}

TEffHit::TEffHit(const Vec* initial_position) : TEffect() {
    m_name = TEffHit__class_name;
    VecCopy(&position, initial_position);
    state = 0;
}
