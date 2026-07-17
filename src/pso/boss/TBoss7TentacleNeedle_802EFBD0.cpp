#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void render__20TBoss7TentacleNeedleFv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void draw_effect__10TObjPlayerFv(void *);
void TObjPlayer__sub_803D99F8(void *, int);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void TObjEneSlimeOne__sub_803E4AF4(void *, void *, f32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);

extern void *lbl_805D6948;

void render__20TBoss7TentacleNeedleFv(void *arg0) {
    draw_effect__10TObjPlayerFv(arg0);
    set_global_flag__10TObjPlayerFv();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 28));
    TObjPlayer__sub_803D99F8((void *)((char *)arg0 + 40), 1);
    TObjEneSlimeOne__sub_803E4AF4(lbl_805D6948, M2C_FIELD(arg0, void **, 0x78), M2C_FIELD(arg0, f32 *, 0x74));
    TObjPlayer__sub_803D9B78();
    clear_global_state__10TObjPlayerFv();
}

}
