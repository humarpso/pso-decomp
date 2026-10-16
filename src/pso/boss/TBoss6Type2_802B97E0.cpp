#include "types.h"
#include "pso/boss/TBoss6Type2.h"

extern "C" {

void post_translate_matrix(void *);
void boss6type2_draw_models(void *, void *, void *, void *, void *, void *, void *, void *, f32);
void rotate_matrix_y(int, void *);
void push_matrix(void *);
void pop_matrix(void);

extern const f32 TBoss6Type2__data_805DE40C;

void TBoss6Type2::draw() {
    if (*(u16 *)((s8 *)this + 0x55C) != 65535) {
        push_matrix(this);
        post_translate_matrix((void *)((char *)this + 1568));
        rotate_matrix_y(0, *(void * *)&this->m_60);
        boss6type2_draw_models((void *)((char *)this + 1396), (void *)((char *)this + 1404), (void *)((char *)this + 1412), *(void **)((s8 *)this + 0x58C), *(void **)((s8 *)this + 0x590), *(void **)((s8 *)this + 0x594), *(void **)((s8 *)this + 0x598), *(void **)((s8 *)this + 0x570), TBoss6Type2__data_805DE40C);
        pop_matrix();
    }
}

}
