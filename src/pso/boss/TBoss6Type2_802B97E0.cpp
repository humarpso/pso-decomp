#include "types.h"

extern "C" {

void draw__11TBoss6Type2FPv(void *arg0);
void post_translate_matrix(void *);
void boss6type2_draw_models(void *, void *, void *, void *, void *, void *, void *, void *, f32);
void rotate_matrix_y(int, void *);
void push_matrix(void *);
void pop_matrix(void);

extern const f32 TBoss6Type2__data_805DE40C;

void draw__11TBoss6Type2FPv(void *arg0) {
    if (*(u16 *)((s8 *)arg0 + 0x55C) != 65535) {
        push_matrix(arg0);
        post_translate_matrix((void *)((char *)arg0 + 1568));
        rotate_matrix_y(0, *(void **)((s8 *)arg0 + 0x60));
        boss6type2_draw_models((void *)((char *)arg0 + 1396), (void *)((char *)arg0 + 1404), (void *)((char *)arg0 + 1412), *(void **)((s8 *)arg0 + 0x58C), *(void **)((s8 *)arg0 + 0x590), *(void **)((s8 *)arg0 + 0x594), *(void **)((s8 *)arg0 + 0x598), *(void **)((s8 *)arg0 + 0x570), TBoss6Type2__data_805DE40C);
        pop_matrix();
    }
}

}
