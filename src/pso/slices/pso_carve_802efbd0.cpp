#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_802E80C8(void *);
void fn_803E4BC4(void);
void fn_803D9B2C(void);
void TOHangerMachine01__sub_803D9C00(void *);
void fn_803D99F8(void *, int);
extern void *lbl_805D6948;
void fn_803E4AF4(void *, void *, f32);
void fn_803D9B78(void);
void fn_803E4BD0(void);

void render__20TBoss7TentacleNeedleFv(void *arg0) {
    fn_802E80C8(arg0);
    fn_803E4BC4();
    fn_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 28));
    fn_803D99F8((void *)((char *)arg0 + 40), 1);
    fn_803E4AF4(lbl_805D6948, M2C_FIELD(arg0, void **, 0x78), M2C_FIELD(arg0, f32 *, 0x74));
    fn_803D9B78();
    fn_803E4BD0();
}

}
