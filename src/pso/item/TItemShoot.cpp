#include "pso/TItemShoot.h"

extern "C" void  disallow_rendering__7TObjectFv(TObject*);
extern "C" void  allow_rendering__7TObjectFv(TObject*);
extern "C" void  queue_destruction__7TObjectFv(TObject*);
extern "C" u32   fn_80100490(void*);
extern "C" void  fn_803D8910(Vec*, Vec*);
extern "C" void  fn_80084E98(void*, Vec*);

extern "C" Vec*  VecCopy__FP3VecPC3Vec(Vec*, const Vec*);
extern "C" void  fn_803D9370(Vec*, const Vec*);
extern "C" f32   fn_803D8BD8(Vec*);
extern "C" void  fn_803D97B4(Vec*);
extern "C" f64   fn_80019760(f32, f32);
extern "C" void  fn_8014220C(Vec*, s32*, s32*);
extern "C" void* fn_80099EF8(void*);
extern "C" TObject*    tl_05;
extern "C" const char* lbl_805D2C60;
extern "C" const f64   lbl_8043E7A0[];

TItemShoot::TItemShoot(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TObject(tl_05) {
    this->m_name = lbl_805D2C60;
    VecCopy__FP3VecPC3Vec(&this->m_pos, pos);
    VecCopy__FP3VecPC3Vec(&this->m_dir, VecCopy__FP3VecPC3Vec(&this->m_44, dir));
    this->m_life = life;
    fn_803D9370(&this->m_dir, pos);
    f32 len = fn_803D8BD8(&this->m_dir);
    fn_803D97B4(&this->m_dir);
    f32 scale = len / life;
    this->m_dir.x *= scale;
    this->m_dir.y *= scale;
    this->m_dir.z *= scale;
    this->m_count = (s32)(lbl_8043E7A0[0] * fn_80019760(this->m_dir.x, this->m_dir.z));
    fn_8014220C(&this->m_dir, &this->m_28, &this->m_30);
    this->m_50 = NULL;
    this->m_54 = fn_80099EF8(owner);
    disallow_rendering__7TObjectFv(this);
}

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
