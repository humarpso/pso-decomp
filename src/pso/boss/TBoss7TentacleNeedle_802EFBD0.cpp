#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void render__20TBoss7TentacleNeedleFv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjPlayer__sub_802E80C8(void *);
void TObjPlayer__sub_803D99F8(void *, int);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void TObjEneSlimeOne__sub_803E4AF4(void *, void *, f32);
void TObjPlayer__sub_803E4BC4(void);
void TObjPlayer__sub_803E4BD0(void);

extern void *lbl_805D6948;

void render__20TBoss7TentacleNeedleFv(void *arg0) {
    TObjPlayer__sub_802E80C8(arg0);
    TObjPlayer__sub_803E4BC4();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 28));
    TObjPlayer__sub_803D99F8((void *)((char *)arg0 + 40), 1);
    TObjEneSlimeOne__sub_803E4AF4(lbl_805D6948, M2C_FIELD(arg0, void **, 0x78), M2C_FIELD(arg0, f32 *, 0x74));
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803E4BD0();
}

}
