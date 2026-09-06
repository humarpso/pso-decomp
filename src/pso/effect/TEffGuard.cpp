#include "pso/effect/TEffGuard.h"
extern "C" {
void queue_destruction__7TObjectFv(void*);
s32 TObjEneDellBiter__sub_80087350(const Vec*, s32);
void VecCopy__FP3VecPC3Vec(Vec*, const Vec*);
extern const char* lbl_805D2918;
s32 TBoss3Volopt__sub_8022675C(u32, const Vec*, s32, s32);
}

void TEffGuard::run_task() {
    s32 particle;
    switch (state) {
    case 0:
        particle = 0;
        state = 1;
        do {
            TObjEneDellBiter__sub_80087350(&position, particle);
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

TEffGuard::~TEffGuard() {}

TEffGuard::TEffGuard(const Vec* initial_position) : TEffect() {
    m_name = lbl_805D2918;
    VecCopy__FP3VecPC3Vec(&position, initial_position);
    state = 0;
}

void TEffGuard::create(const Vec* position) {
    new TEffGuard(position);
    TBoss3Volopt__sub_8022675C(0x4001AA00, position, 0, 0);
}
