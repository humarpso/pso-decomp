#include "pso/TObjBoss2Dust.h"

#include "types.h"

struct RecoveredGlobal_8003AA9C___vt__13TObjBoss2Dust {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjBoss2DustCtrl__sub_8003AB5C();
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8003AA9C___vt__13TObjBoss2Dust __vt__13TObjBoss2Dust;
extern s32 lbl_805D26FC;
u8 *__ct__13TObjBoss2DustFv(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void run_task__13TObjBoss2DustFv(void *arg0);
s32 queue_destruction__7TObjectFv();

extern const f32 lbl_805D85B0;

void run_task__13TObjBoss2DustFv(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) (*(f32 *)((s8 *)arg0 + 0x2C) - lbl_805D85B0);
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) >= 0x5A) {
        queue_destruction__7TObjectFv();
    }
}
typedef char RecoveredGlobal_8003AA9C___vt__13TObjBoss2Dust_size[sizeof(RecoveredGlobal_8003AA9C___vt__13TObjBoss2Dust) == 0x18 ? 1 : -1];
TObjBoss2Dust::~TObjBoss2Dust() {}
u8 *__ct__13TObjBoss2DustFv(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__13TObjBoss2Dust.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D26FC;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x24), (void *) (arg2));
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = TObjBoss2DustCtrl__sub_8003AB5C();
    return arg0;
}

}
