#include "types.h"
#include "pso/ui/TObjDFTenchuFuru_80051D5C.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/boss/TBoss6Type2.h"

extern "C" {

void post_translate_matrix(void *);
void rotate_matrix_y(int, void *);
void push_matrix(void *);

extern const f32 TBoss6Type2__data_805DE40C;

void TBoss6Type2::draw() {
    if (*(u16 *)((s8 *)this + 0x55C) != 65535) {
        push_matrix(this);
        post_translate_matrix((void *)((char *)this + 1568));
        rotate_matrix_y(0, *(void * *)&this->m_60);
        boss6type2_draw_models((s32)((char *)this + 1396), (s32)((char *)this + 1404), (s32)((char *)this + 1412), (u32)(*(void **)((s8 *)this + 0x58C)), (u32)(*(void **)((s8 *)this + 0x590)), (u32)(*(void **)((s8 *)this + 0x594)), (u32)(*(void **)((s8 *)this + 0x598)), (s32)(*(void **)((s8 *)this + 0x570)), (f32)((f32)TBoss6Type2__data_805DE40C));
        pop_matrix();
    }
}

}
