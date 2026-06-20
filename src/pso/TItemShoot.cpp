#include "pso/TItemShoot.h"

extern "C" void  disallow_rendering__7TObjectFv(TObject*);
extern "C" void  allow_rendering__7TObjectFv(TObject*);
extern "C" void  queue_destruction__7TObjectFv(TObject*);
extern "C" u32   fn_80100490(void*);
extern "C" void  fn_803D8910(Vec*, Vec*);
extern "C" void  fn_80084E98(void*, Vec*);

extern "C" const f32 lbl_805DAC68;
extern "C" const f32 lbl_805DAC60;
#define kLifeDecay lbl_805DAC68
#define kLifeFloor lbl_805DAC60

void TItemShoot::run_task() {
    if (fn_80100490(this->m_54) == 0) {
        disallow_rendering__7TObjectFv(this);
        queue_destruction__7TObjectFv(this);
    }
    allow_rendering__7TObjectFv(this);
    fn_803D8910(&this->m_pos, &this->m_dir);
    if (this->m_50 != nullptr) {
        fn_80084E98(this->m_50, &this->m_pos);
    }
    this->hook();
    this->m_life -= kLifeDecay;
    if (this->m_life <= kLifeFloor) {
        queue_destruction__7TObjectFv(this);
    }
}

TItemShoot::~TItemShoot() {
    if (this->m_50 != nullptr) {
        queue_destruction__7TObjectFv(this->m_50);
    }
}
