#include "pso/TItemShoot.h"

extern "C" void  __ct__7TObjectFP7TObject(TItemShoot*, void* parent);
extern "C" void* __dt__7TObjectFv(TItemShoot*, int);
extern "C" void  disallow_rendering__7TObjectFv(TItemShoot*);
extern "C" void  allow_rendering__7TObjectFv(TItemShoot*);
extern "C" void  queue_destruction__7TObjectFv(TItemShoot*);
extern "C" void  VecCopy__FP3VecPC3Vec(Vec* dst, const Vec* src);
extern "C" void  fn_8022A5C8(TItemShoot*);
extern "C" int   fn_80100490(void*);
extern "C" void  fn_803D8910(Vec*, Vec*);
extern "C" void  fn_80084E98(void*, Vec*);
extern "C" void  fn_803D9370(Vec*, Vec*);
extern "C" f32   fn_803D8BD8(Vec*);
extern "C" f32   fn_803D97B4(Vec*);
extern "C" f32   fn_80019760(f32, f32);
extern "C" void  fn_8014220C(void);
extern "C" void* fn_80099EF8(void* arg2);

extern void* __vt__10TItemShoot[];

extern "C" const f32 lbl_805DAC68;
extern "C" const f32 lbl_805DAC60;
#define kLifeDecay lbl_805DAC68
#define kLifeFloor lbl_805DAC60

void TItemShoot::step() {
    if (fn_80100490(this->m_54) == 0) {
        disallow_rendering__7TObjectFv(this);
        queue_destruction__7TObjectFv(this);
    }
    allow_rendering__7TObjectFv(this);
    fn_803D8910(&this->m_pos, &this->m_dir);
    if (this->m_50 != nullptr) {
        fn_80084E98(this->m_50, &this->m_pos);
    }
    (*(void (**)(TItemShoot*))((char*)this->m_vtable + 0x18))(this);
    this->m_life -= kLifeDecay;
    if (this->m_life <= kLifeFloor) {
        queue_destruction__7TObjectFv(this);
    }
}

TItemShoot::~TItemShoot() {
    this->m_vtable = __vt__10TItemShoot;
    if (this->m_50 != nullptr) {
        queue_destruction__7TObjectFv(this);
    }
    __dt__7TObjectFv(this, 0);
}
