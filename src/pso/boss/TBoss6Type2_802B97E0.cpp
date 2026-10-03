#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw__11TBoss6Type2FPv(void *arg0);
void post_translate_matrix(void *);
void boss6type2_draw_models(void *, void *, void *, void *, void *, void *, void *, void *, f32);
void rotate_matrix_y(int, void *);
void push_matrix(void *);
void pop_matrix(void);

extern const f32 TBoss6Type2__data_805DE40C;

void draw__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x55C) != 65535) {
        push_matrix(arg0);
        post_translate_matrix((void *)((char *)arg0 + 1568));
        rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
        boss6type2_draw_models((void *)((char *)arg0 + 1396), (void *)((char *)arg0 + 1404), (void *)((char *)arg0 + 1412), M2C_FIELD(arg0, void **, 0x58C), M2C_FIELD(arg0, void **, 0x590), M2C_FIELD(arg0, void **, 0x594), M2C_FIELD(arg0, void **, 0x598), M2C_FIELD(arg0, void **, 0x570), TBoss6Type2__data_805DE40C);
        pop_matrix();
    }
}

}
