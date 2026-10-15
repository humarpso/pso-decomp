#include "types.h"

extern "C" {

void draw__12TBoss8DragonFPv(u8 *arg0);
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 rotate_matrix_z(int, int);
s32 rotate_matrix_x(int, int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 draw__16TObjEneRe7BeruraFPv(void *, int);

extern u8 *TBoss8Dragon__data_805D6988;

void draw__12TBoss8DragonFPv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r4;

    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    rotate_matrix_x((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x5C)));
    rotate_matrix_z((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x64)));
    scale_current_matrix((void *) (arg0 + 0x68));
    temp_r31 = *(s32 *)((s8 *)arg0 + 0x34);
    temp_r4 = (unsigned char *) (*(void **)((s8 *)TBoss8Dragon__data_805D6988 + 0x42C));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)temp_r4 + 0x28);
    draw__16TObjEneRe7BeruraFPv((void *) (arg0), (int) (temp_r4));
    *(s32 *)((s8 *)arg0 + 0x34) = temp_r31;
    pop_matrix();
}

}
